//
//  NSMenuItem+ZWYAction.m
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "NSMenuItem+ZWYAction.h"

@implementation NSMenuItem (ZWYAction)

+ (NSMenuItem *)menuItemWithTitle:(NSString *)title action:(SEL)selector target:(id)target keyEquivalent:(NSString *)key state:(NSControlStateValue)state {
    NSMenuItem *item = [[self alloc] initWithTitle:title action:selector keyEquivalent:key];
    item.target = target;
    item.state = state;
    
    return item;
}
@end
