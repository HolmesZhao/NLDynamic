//
//  ZWYAfterWorkViewController.h
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ZWYAfterWorkAction)(id sender);

@interface ZWYAfterWorkViewController : NSViewController

@property (nonatomic, copy) ZWYAfterWorkAction zwy_afterWorkSave;
@end

NS_ASSUME_NONNULL_END
