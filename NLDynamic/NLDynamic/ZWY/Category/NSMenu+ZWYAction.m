//
//  NSMenu+ZWYAction.m
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "NSMenu+ZWYAction.h"

@implementation NSMenu (ZWYAction)

- (void)addItems:(NSArray *)subItems {
    for (NSMenuItem *item in subItems) {
        NSAssert([item isKindOfClass:[NSMenuItem class]], @"the elements must be a NSMenuItem!");
        [self addItem:item];
    }
}

@end
