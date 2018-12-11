//
//  ZWYAssistantMenuManager.h
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZWYPluginConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZWYAssistantMenuManager : NSObject

+ (instancetype)shareManager;
- (void)initAssistantMenuItems;
@end

NS_ASSUME_NONNULL_END
