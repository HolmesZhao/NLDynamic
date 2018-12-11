//
//  ZWYPluginConfig.h
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface ZWYPluginConfig : NSObject

@property (nonatomic, assign) BOOL afterWork;                           /**<    是否下班提醒      */
@property (nonatomic, assign) BOOL shutdown;                           /**<    是否下班时关机      */

@property (nonatomic, assign) NSInteger hour;                                 /**<    设置下班时间      */
@property (nonatomic, assign) float distance;                           /**<    设置离开电脑的距离      */
@property (strong, nonatomic) NSWindow *splitWindow;


+ (instancetype)sharedConfig;
@end

NS_ASSUME_NONNULL_END
