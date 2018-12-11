//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ApplicationDataModel, DataModel, MobileDevice, NSMutableArray;

@interface DataManager : NSObject
{
    BOOL _didShowNotificationForDisabledTracking;
    BOOL _didAcceptPairingDevice;
    BOOL _databaseGenerated;
    DataModel *model;
    MobileDevice *_pairingMobileDevice;
    ApplicationDataModel *_applicationDataModel;
    NSMutableArray *_pairingRequestsInQueue;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)addMobileDeviceToPairingRequestQueue:(id)arg1;
- (BOOL)appIsProVersion;
- (id)applicationData;
@property(retain, nonatomic) ApplicationDataModel *applicationDataModel; // @synthesize applicationDataModel=_applicationDataModel;
- (void)clearPairingDevice;
- (id)createCurrentDevice;
- (id)createCurrentDeviceInfo;
@property(nonatomic) BOOL databaseGenerated; // @synthesize databaseGenerated=_databaseGenerated;
- (void)deleteAllDevicesExceptTrackingDevice;
@property(nonatomic) BOOL didAcceptPairingDevice; // @synthesize didAcceptPairingDevice=_didAcceptPairingDevice;
@property BOOL didShowNotificationForDisabledTracking; // @synthesize didShowNotificationForDisabledTracking=_didShowNotificationForDisabledTracking;
- (void)generateNewModel;
- (id)getActiveDesktopDevice;
- (id)getActiveDesktopUser;
- (id)getCurrentDeviceInfo;
- (id)getDictOfAllMobileDeviceSettings;
- (id)getDictOfAllMobileDevices;
- (id)getNextMobileDevice;
- (id)getSavedDataModel;
- (id)getTrackingMobileDevice;

- (id)getTrackingSettings;
- (id)init;
- (BOOL)isConnectedToTrackingDevice;
- (void)loadApplicationDataFromFile;
- (void)loadDataModelFromFile;
- (id)localSettingsForDevice:(id)arg1;
- (id)mobileDeviceForId:(id)arg1;
@property(retain, nonatomic) DataModel *model; // @synthesize model;
@property(retain, nonatomic) MobileDevice *pairingMobileDevice; // @synthesize pairingMobileDevice=_pairingMobileDevice;
@property(retain, nonatomic) NSMutableArray *pairingRequestsInQueue; // @synthesize pairingRequestsInQueue=_pairingRequestsInQueue;
- (id)passwordClearTextForMobileDevice:(id)arg1;
- (id)queueOfMobileDevicesToPair;
- (void)removeMobileDeviceFromPairingRequestQueue:(id)arg1;
- (void)saveApplicationData;
- (void)saveCurrentDataModel;
- (void)setClearTextPassword:(id)arg1 forMobileDevice:(id)arg2;
- (id)settingsForDeviceId:(id)arg1;
- (BOOL)shouldGenerateNewModel;
- (void)unlinkAllKnownTrackingDevices;
- (void)upadteRSSILocationToUnknownForMobileDevice:(id)arg1;
- (void)updateCurrentDeviceInfo;
- (void)updateDeviceSessionInfo;
- (void)updateInfoBeforeSyncingForMobileDevice:(id)arg1;
- (void)updateSessionInfoForDevice:(id)arg1;
- (void)updateUserLoggedIn;
- (void)updateiOSSettings:(id)arg1 fromIphoneDevice:(id)arg2;

@end

