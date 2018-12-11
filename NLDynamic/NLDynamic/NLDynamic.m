//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//
//  NLDynamic.m
//  NLDynamic
//
//  Created by 赵五一 on 07/12/2018.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "NLDynamic.h"
#import "substrate.h"
#import <AppKit/AppKit.h>
#import "NSDate+ZWYRequiredDate.h"
#import "JX_GCDTimer/JX_GCDTimerManager.h"
#import "ZWY/Managers/ZWYAssistantMenuManager.h"


static int nl_hour = 18; // 下班时间
static float nl_distance = 3.f; // 手机与电脑的距离
static float nl_shutdownTime = 20.f; // 多久后关机, 单位是秒 默认 20秒 尽量在20秒以后, 保证距离计算不出错误
static NSTimeInterval playSoundTime = 5.f; // 播放声音时间 我用的支付宝到账时间是五秒
static int playSoundTimeFlag = 5.f;   // 记录播放时间, 播放完记得重置为播放时间, 做递减操作
static float ddf = -1; // 距离差 用于保证计算不失误

//      执行 AppleScript
static NSString * const kRemoteControlAppleScript = @"Near\\ Lock.app/Contents/Resources/ZWYRemoteControlScript.scpt";

#warning 以下代码只针对QQ，如果是其它应用的话，需要将下面的代码删除

@class MQAIOChatViewController;
@class QQMessageRevokeEngine;

static void (*origin_MQAIOChatViewController_revokeMessages)(MQAIOChatViewController*,SEL,id);
static void new_MQAIOChatViewController_revokeMessages(MQAIOChatViewController* self,SEL _cmd,id arrays){
    
}

//static void (*origin_QQMessageRevokeEngine_handleRecallNotify_isOnline)(QQMessageRevokeEngine*,SEL,void*,BOOL);
//static void new_QQMessageRevokeEngine_handleRecallNotify_isOnline(QQMessageRevokeEngine* self,SEL _cmd,void* notify,BOOL isOnline){
//
//}

@class DevicesMenuManager, StateMachine, RssiToDistance;
static id (*origin_ping)(DevicesMenuManager*,SEL,void*);
static id new_ping(DevicesMenuManager* self,SEL _cmd,void* ping){
    return (*origin_ping)(self, _cmd, ping);
}
static double (*origin_getMetric_fromRSSI)(RssiToDistance*, SEL, int,void*);
static double new_getMetric_fromRSSI(RssiToDistance* self, SEL _cmd, int arg1,void* arg2){
    double res = (*origin_getMetric_fromRSSI)(self, _cmd, arg1, arg2);
    return res;
}

static void (*origin_applicationDidFinishLoading)(StateMachine*,SEL,void*);
static void new_applicationDidFinishLoading(StateMachine* self,SEL _cmd,void* applicationDidFinishLoading) {
    // 执行原来的
    (*origin_applicationDidFinishLoading)(self, _cmd, applicationDidFinishLoading);
    // 创建助手按钮
    [[ZWYAssistantMenuManager shareManager] initAssistantMenuItems];
    // 倒计时开始, 监听时间和距离
    [[JX_GCDTimerManager sharedInstance] scheduledDispatchTimerWithName:@"zwy_applicationDidFinishLoading" timeInterval:1 queue:dispatch_get_main_queue() repeats:YES actionOption:AbandonPreviousAction action:^{
        
        if (![ZWYPluginConfig sharedConfig].afterWork) {
            // 按钮没有被选中不使用功能
            return;
        }
        
        id appDelegate = [[NSApplication sharedApplication] delegate];
        [ZWYPluginConfig sharedConfig].splitWindow = [[appDelegate performSelector:NSSelectorFromString(@"stateMachine")] performSelector:NSSelectorFromString(@"splitWindow")];
        
        ZWYDateModel *dateModel = [ZWYDateModel new];
        dateModel.hour = nl_hour;
        NSDate *targetDate = [[NSDate date] zwy_setATimeToDate:dateModel];
        
        NSDate *nowDate = [NSDate date];
        
        NSUserNotification *localNotify = [[NSUserNotification alloc] init]; // 貌似不在后台就能不能收到通知
        localNotify.soundName = NSUserNotificationDefaultSoundName;
        localNotify.title = @"警告⚠️警告";
        
        if (targetDate.timeIntervalSince1970 < nowDate.timeIntervalSince1970) {
            localNotify.informativeText = @"已经下班了, 记得打卡";
            [[NSUserNotificationCenter defaultUserNotificationCenter] deliverNotification:localNotify];
            
            float distance = [[(id)self performSelector:NSSelectorFromString(@"getDistance")] floatValue];
            
            ddf = distance - nl_distance;
            
            if (distance > nl_distance) {
                
                playSoundTimeFlag--;
                if (playSoundTimeFlag < 0) {
                    [[appDelegate performSelector:NSSelectorFromString(@"stateMachine")] performSelector:NSSelectorFromString(@"pingTrackingDevice")];
                    playSoundTimeFlag = playSoundTime; // 重置播放时间
                }
                
                
                if (![ZWYPluginConfig sharedConfig].shutdown) {
                    // 关机状态下才执行下面关机代码 20 秒后关机
                    return;
                }
                
                static dispatch_once_t onceToken;
                dispatch_once(&onceToken, ^{
                    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(nl_shutdownTime * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                        if (ddf > 0) { // 20 秒后 如果距离差还是大于零就执行关机代码, 第一层简单保护
                            
                            NSString *res_reboot_root = [objc_getClass("StateMachine") performSelector:NSSelectorFromString(@"executeShellCommand") withObject:[NSString stringWithFormat:@"last | grep reboot "]];
                            NSString *res_reboot = [res_reboot_root componentsSeparatedByString:@"\n"].firstObject;
                            NSArray *resArr = [res_reboot componentsSeparatedByString:@" "];
                            for (NSString *obj in resArr) {
                                if ([obj containsString:@":"]) {
                                    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
                                    [formatter setDateFormat:@"HH:mm"];
                                    NSString *time = [formatter stringFromDate:nowDate];
                                    NSInteger timeMinutes = [time componentsSeparatedByString:@":"].firstObject.integerValue * 60 + [time componentsSeparatedByString:@":"].lastObject.integerValue;
                                    NSInteger objMinutes = [obj componentsSeparatedByString:@":"].firstObject.integerValue * 60 + [obj componentsSeparatedByString:@":"].lastObject.integerValue;
                                    if (timeMinutes - objMinutes > 60) { // 开机超过一小时 安全保证第二
                                        NSString *res = [objc_getClass("StateMachine") performSelector:NSSelectorFromString(@"executeShellCommand") withObject:[NSString stringWithFormat:@"last | grep reboot "]];
                                        
                                        NSString *bundlePath = [[NSBundle mainBundle] bundlePath];
                                        NSArray *pathArr = [bundlePath componentsSeparatedByString:@"/"];
                                        NSString *superPath = @"/";
                                        for (NSString *obj in pathArr) {
                                            if ([obj isEqual:pathArr.lastObject]) break;
                                            superPath = [superPath stringByAppendingPathComponent:obj];
                                        }
                                        [objc_getClass("StateMachine") performSelector:NSSelectorFromString(@"executeShellCommand") withObject:[NSString stringWithFormat:@"osascript %@ %@", [superPath stringByAppendingPathComponent:kRemoteControlAppleScript], @"shutdown"]];
                                    }
                                }
                            }
                        }
                    });
                });
            }
            
        } else if (targetDate.timeIntervalSince1970 - nowDate.timeIntervalSince1970 > 0 && targetDate.timeIntervalSince1970 - nowDate.timeIntervalSince1970 < 60) {
            localNotify.informativeText = @"快要下班了, 记得打卡";
            [[NSUserNotificationCenter defaultUserNotificationCenter] deliverNotification:localNotify];
        }
    }];
}

NSNumber * getDistance(id self, SEL _cmd) {
    NSString *unId = [[[objc_getClass("DataManager") performSelector:NSSelectorFromString(@"shared")] performSelector:NSSelectorFromString(@"getTrackingMobileDevice")] performSelector:NSSelectorFromString(@"unId")];
    id settings = [[objc_getClass("DataManager") performSelector:NSSelectorFromString(@"shared")] performSelector:NSSelectorFromString(@"settingsForDeviceId:") withObject:unId];
    NSNumber *distanceFromDevice = [settings performSelector:NSSelectorFromString(@"distanceFromDevice")];
    double distance = new_getMetric_fromRSSI(self, NSSelectorFromString(@"getMetric:fromRSSI:"), 1, (__bridge void *)(distanceFromDevice));
    return @(distance);
}

NSString *executeShellCommand(id self, SEL _cmd, NSString * command) {
    NSTask *task = [[NSTask alloc] init];
    [task setLaunchPath:@"/bin/bash"];
    [task setArguments:@[@"-c", command]];
    // 新建输出管道作为Task的输出
    NSPipe *pipe = [NSPipe pipe];
    [task setStandardOutput: pipe];
    // 开始task
    NSFileHandle *file = [pipe fileHandleForReading];
    
    [task launch];
    // 获取运行结果
    NSData *data = [file readDataToEndOfFile];
    return [[NSString alloc] initWithData: data encoding: NSUTF8StringEncoding];
}


static id (*origin_getStringForMetric_fromRSSI)(RssiToDistance*, SEL, int,void*);
static id new_getStringForMetric_fromRSSI(RssiToDistance* self, SEL _cmd, int arg1,void* arg2){
    id res = (*origin_getStringForMetric_fromRSSI)(self, _cmd, arg1, arg2);
    return res;
}

static void __attribute__((constructor)) initialize(void) {
//    MSHookMessageEx(objc_getClass("MQAIOChatViewController"),  @selector(revokeMessages:), (IMP)&new_MQAIOChatViewController_revokeMessages, (IMP*)&origin_MQAIOChatViewController_revokeMessages);
//
//    MSHookMessageEx(objc_getClass("QQMessageRevokeEngine"),  @selector(handleRecallNotify:isOnline:), (IMP)&new_QQMessageRevokeEngine_handleRecallNotify_isOnline, (IMP*)&origin_QQMessageRevokeEngine_handleRecallNotify_isOnline);
    
    MSHookMessageEx(objc_getClass("DevicesMenuManager"),  @selector(ping), (IMP)&new_ping, (IMP*)&origin_ping);
    MSHookMessageEx(objc_getClass("StateMachine"),  @selector(applicationDidFinishLoading), (IMP)&new_applicationDidFinishLoading, (IMP*)&origin_applicationDidFinishLoading);
    MSHookMessageEx(objc_getMetaClass("RssiToDistance"),  @selector(getStringForMetric:fromRSSI:), (IMP)&new_getStringForMetric_fromRSSI, (IMP*)&origin_getStringForMetric_fromRSSI);
    MSHookMessageEx(objc_getMetaClass("RssiToDistance"),  @selector(getMetric:fromRSSI:), (IMP)&new_getMetric_fromRSSI, (IMP*)&origin_getMetric_fromRSSI);
    class_addMethod(objc_getClass("StateMachine"), NSSelectorFromString(@"getDistance"), (IMP)getDistance, "@@:");
    class_addMethod(objc_getMetaClass("StateMachine"), NSSelectorFromString(@"executeShellCommand"), (IMP)executeShellCommand, "@@:");
}
