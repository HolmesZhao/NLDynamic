//
//  ZWYPluginConfig.m
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "ZWYPluginConfig.h"

static NSString * const kZWYAfterWorkKey = @"kZWYAfterWorkKey";
static NSString * const kZWYShutdownKey = @"kZWYShutdownKey";
static NSString * const kZWYAfterWorkHourKey = @"kZWYAfterWorkHourKey";
static NSString * const kZWYAfterWorkDistanceKey = @"kZWYAfterWorkDistanceKey";

@implementation ZWYPluginConfig

+ (instancetype)sharedConfig {
    static ZWYPluginConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [[ZWYPluginConfig alloc] init];
    });
    return config;
}


- (instancetype)init {
    self = [super init];
    if (self) {
        _afterWork = [[NSUserDefaults standardUserDefaults] boolForKey:kZWYAfterWorkKey];
        _shutdown = [[NSUserDefaults standardUserDefaults] boolForKey:kZWYShutdownKey];
        _hour = [[NSUserDefaults standardUserDefaults] integerForKey:kZWYAfterWorkHourKey];
        _distance = [[NSUserDefaults standardUserDefaults] floatForKey:kZWYAfterWorkDistanceKey];
    }
    return self;
}



- (void)setAfterWork:(BOOL)afterWork {
    _afterWork = afterWork;
    [[NSUserDefaults standardUserDefaults] setBool:_afterWork forKey:kZWYAfterWorkKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setShutdown:(BOOL)shutdown {
    _shutdown = shutdown;
    [[NSUserDefaults standardUserDefaults] setBool:_shutdown forKey:kZWYShutdownKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setHour:(NSInteger)hour {
    _hour = hour;
    [[NSUserDefaults standardUserDefaults] setInteger:_hour forKey:kZWYAfterWorkHourKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
}
- (void)setDistance:(float)distance {
    _distance = distance;
    [[NSUserDefaults standardUserDefaults] setFloat:_distance forKey:kZWYAfterWorkDistanceKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
