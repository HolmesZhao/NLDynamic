//
//  NSWindowController+ZWYAction.m
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "NSWindowController+ZWYAction.h"

@implementation NSWindowController (ZWYAction)

- (void)show {
    [self showWindow:self];
    [self.window center];
    [self.window makeKeyWindow];
    [self.window makeMainWindow];
}

@end
