//
//  ZWYAssistantMenuManager.m
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "ZWYAssistantMenuManager.h"
#import "../Category/NSMenuItem+ZWYAction.h"
#import "../Category/NSMenu+ZWYAction.h"
#import "../Category/NSWindowController+ZWYAction.h"
#import "../Controller/ZWYAfterWorkController.h"
#import "../Controller/ZWYAfterWorkViewController.h"
#import <objc/runtime.h>

static char kZWYAfterWorkController;

@interface ZWYAssistantMenuManager ()


@end

@implementation ZWYAssistantMenuManager

+ (instancetype)shareManager {
    static id manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[self alloc] init];
    });
    return manager;
}

- (void)initAssistantMenuItems {
    //        下班提醒
    NSMenuItem *afterWorkItem = [NSMenuItem menuItemWithTitle:@"下班提醒"
                                                       action:@selector(onAfterWorkControl:)
                                                       target:self
                                                keyEquivalent:@"W"
                                                        state:[[ZWYPluginConfig sharedConfig] afterWork]];
    NSMenuItem *shutdownItem = [NSMenuItem menuItemWithTitle:@"下班时是否执行关机"
                                                       action:@selector(onShutdownControl:)
                                                       target:self
                                                keyEquivalent:@"E"
                                                        state:[[ZWYPluginConfig sharedConfig] shutdown]];
    
    NSMenu *subMenu = [[NSMenu alloc] initWithTitle:@"Assistant"];
    [subMenu addItems:@[
                        afterWorkItem,
                        shutdownItem
                        ]];
    NSMenuItem *menuItem = [[NSMenuItem alloc] init];
    [menuItem setTitle:@"Assistant"];
    [menuItem setSubmenu:subMenu];
    menuItem.target = self;
    [[[NSApplication sharedApplication] mainMenu] addItem:menuItem];
}

- (void)onAfterWorkControl:(NSMenuItem *)sender {
    sender.state = !sender.state;
    [ZWYPluginConfig sharedConfig].afterWork = sender.state;
    
    ZWYAfterWorkController *afterWorkVC = objc_getAssociatedObject(self, &kZWYAfterWorkController);

    if (!afterWorkVC) {
        afterWorkVC = [[ZWYAfterWorkController alloc] initWithWindowNibName:@"ZWYAfterWorkController" owner:self];
        objc_setAssociatedObject(self, &kZWYAfterWorkController, afterWorkVC, OBJC_ASSOCIATION_RETAIN);
    }
    
    [afterWorkVC show];

}

- (void)onShutdownControl:(NSMenuItem *)sender {
    sender.state = !sender.state;
    [ZWYPluginConfig sharedConfig].shutdown = sender.state;
}

@end
