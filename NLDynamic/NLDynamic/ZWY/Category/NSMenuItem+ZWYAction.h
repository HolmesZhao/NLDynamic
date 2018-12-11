//
//  NSMenuItem+ZWYAction.h
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMenuItem (ZWYAction)

+ (NSMenuItem *)menuItemWithTitle:(NSString *)title action:(SEL)selector target:(id)target keyEquivalent:(NSString *)key state:(NSControlStateValue)state;
@end

NS_ASSUME_NONNULL_END
