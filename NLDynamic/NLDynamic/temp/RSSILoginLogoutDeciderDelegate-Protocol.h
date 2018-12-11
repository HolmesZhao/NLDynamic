//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MobileDevice, RSSILoginLogoutDecider;

@protocol RSSILoginLogoutDeciderDelegate <NSObject>
- (void)RSSILoginLogoutDecider:(RSSILoginLogoutDecider *)arg1 didEnterNearLockRadius:(MobileDevice *)arg2;
- (void)RSSILoginLogoutDecider:(RSSILoginLogoutDecider *)arg1 didExitNearLockRadius:(MobileDevice *)arg2;
- (void)RSSILoginLogoutDecider:(RSSILoginLogoutDecider *)arg1 didUpdateOverAllInfoForMobileDevice:(MobileDevice *)arg2;
- (void)RSSILoginLogoutDecider:(RSSILoginLogoutDecider *)arg1 didUpdateRSSIForMobileDevice:(MobileDevice *)arg2;
- (void)RSSILoginLogoutDecider:(RSSILoginLogoutDecider *)arg1 loginForMobileDevice:(MobileDevice *)arg2;
- (void)RSSILoginLogoutDecider:(RSSILoginLogoutDecider *)arg1 logoutForMobileDevice:(MobileDevice *)arg2;
- (void)RSSILoginLogoutDecider:(RSSILoginLogoutDecider *)arg1 recheckRssiForMobileDevice:(MobileDevice *)arg2;
@end
