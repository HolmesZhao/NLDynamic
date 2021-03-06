//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMenuItemManager.h"

@interface DevicesMenuManager : BaseMenuItemManager
{
    BOOL _wifiCellExpanded;
    BOOL _clearCacheExpanded;
    BOOL _bluetoothExpanded;
    BOOL _batteryExpanded;
    BOOL _connectedExpanded;
    BOOL _proVersionExpanded;
    BOOL _temporaryDisabled;
    BOOL _securityPreferancesExpanded;
    BOOL _accessibilityExpanded;
}

@property(nonatomic) BOOL accessibilityExpanded; // @synthesize accessibilityExpanded=_accessibilityExpanded;
- (id)addAccessibilityToUnlockMac;
- (id)addNewDevice;
- (id)backgorundProximityUnlockOnlyWorksInProVersion;
- (id)batteryCellForDevice:(id)arg1 batteryLevel:(int)arg2 percent:(long long)arg3;
@property(nonatomic) BOOL batteryExpanded; // @synthesize batteryExpanded=_batteryExpanded;
- (id)bleNotSupported;
@property(nonatomic) BOOL bluetoothExpanded; // @synthesize bluetoothExpanded=_bluetoothExpanded;
- (id)clearBLECache;
@property(nonatomic) BOOL clearCacheExpanded; // @synthesize clearCacheExpanded=_clearCacheExpanded;
@property(nonatomic) BOOL connectedExpanded; // @synthesize connectedExpanded=_connectedExpanded;
- (id)connectedNotificationFor:(id)arg1 device:(id)arg2 distance:(id)arg3;
- (id)createViewModel;
- (id)devicesConnected:(id)arg1 device:(id)arg2 distance:(id)arg3;
- (id)devicesConnectedText;
- (id)devicesNotConnected;
- (id)devicesNotConnected:(id)arg1 device:(id)arg2;
- (id)newUpdateAvailable;
- (id)ping;
@property(nonatomic) BOOL proVersionExpanded; // @synthesize proVersionExpanded=_proVersionExpanded;
- (id)rescan;
- (id)scanningForDevices:(id)arg1;
@property(nonatomic) BOOL securityPreferancesExpanded; // @synthesize securityPreferancesExpanded=_securityPreferancesExpanded;
- (id)sendClipboard;
@property(nonatomic) BOOL temporaryDisabled; // @synthesize temporaryDisabled=_temporaryDisabled;
@property(nonatomic) BOOL wifiCellExpanded; // @synthesize wifiCellExpanded=_wifiCellExpanded;
- (BOOL)shouldAddToAccessibilityToUnlockMac;
- (BOOL)shouldShowProximityLockWillUnlock:(id)arg1;
- (BOOL)shouldShowTemporaryDisabledWarning:(id)arg1;
- (BOOL)shouldShowWorkOnlyInProVersionWarning:(id)arg1;
- (id)showTemporaryDisabled;
- (id)troubleShoot;
- (id)turnBluetoothOn;
- (id)unpair;
- (id)updateSecurityPreferances;
- (id)wifiUnlockIsOn;

@end

