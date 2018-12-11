//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WifiUnlockConfig;

@interface ApplicationDataModel : NSObject
{
    NSMutableArray *_arrayOfManualSnapshots;
    NSMutableArray *_arrayOfFailedLogins;
    NSMutableArray *_arrayOfLoginLogouts;
    NSMutableArray *_arrayOfSafeWifi;
    WifiUnlockConfig *_wifiUnlockConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrayOfFailedLogins; // @synthesize arrayOfFailedLogins=_arrayOfFailedLogins;
@property(retain, nonatomic) NSMutableArray *arrayOfLoginLogouts; // @synthesize arrayOfLoginLogouts=_arrayOfLoginLogouts;
@property(retain, nonatomic) NSMutableArray *arrayOfManualSnapshots; // @synthesize arrayOfManualSnapshots=_arrayOfManualSnapshots;
@property(retain, nonatomic) NSMutableArray *arrayOfSafeWifi; // @synthesize arrayOfSafeWifi=_arrayOfSafeWifi;
- (void)decodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeAllFailedLoginEntries;
- (void)removeAllLoginLogoutEntries;
- (void)removeAllManualSnapshotEntries;
- (void)removeAllSafeWifiEntries;
@property(retain, nonatomic) WifiUnlockConfig *wifiUnlockConfig; // @synthesize wifiUnlockConfig=_wifiUnlockConfig;
- (void)updateModelIfNeeded;

@end
