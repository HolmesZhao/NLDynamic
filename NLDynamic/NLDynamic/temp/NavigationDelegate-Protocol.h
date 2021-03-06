//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseViewController, NLWindowController;

@protocol NavigationDelegate <NSObject>
- (void)addNearLockToAccessilibityToUnlockMac;
- (void)cleanUpAndQuitNearLock;
- (void)clearBluetoothCache;
- (void)detectedCorruptedBluetoothCache;
- (void)getClipboardFromIos;
- (void)pingTrackingDevice;
- (void)popViewModelAnimated:(BOOL)arg1;
- (void)sendClipboardToIos;
- (void)showAddNewDeviceView;
- (void)showAuthRequest;
- (void)showClearBluetoothCacheTutorial;
- (void)showClipboardHowDoesItWork;
- (void)showDetailController:(NLWindowController *)arg1 source:(int)arg2;
- (void)showDetailController:(NLWindowController *)arg1 source:(int)arg2 popToRoot:(BOOL)arg3;
- (void)showDetailList:(BaseViewController *)arg1 source:(int)arg2;
- (void)showDetailList:(BaseViewController *)arg1 source:(int)arg2 popToRoot:(BOOL)arg3;
- (void)showEstimatedDistanceDescription;
- (void)showFailedLogins;
- (void)showHelpTranslation;
- (void)showHelpViewAndCheck;
- (void)showHowToGetProVersion;
- (void)showLoginPhotos;
- (void)showMacControlTutorial;
- (void)showMacOSNotifications;
- (void)showMacSleepScreenOverlay;
- (void)showMacSleepScreenTutorial;
- (void)showManualPhotos;
- (void)showManualPhotosInfo;
- (void)showOpenSpaceInfo;
- (void)showProximityLockTutorial;
- (void)showRateOnAppStore;
- (void)showTemporaryDisabledInformationWindow;
- (void)showTroubleConnectingToDeviceTutorial;
- (void)showTroubleShootInitialConnection;
- (void)showUnlockHistory;
- (void)showUpdateToPro;
- (void)showUpdates;
- (void)showWifiUnlock;
- (void)showWifiUnlockOptionForSource:(int)arg1;
- (void)sleepToggled;
- (void)temporaryDisabledToggled;
- (void)toggleAllowLogin;
- (void)toggleAllowLogout;
- (void)toggleAllowSmallerDistances;
- (void)toggleClipboardShortcut;
- (void)toggleClipboardShownOnMainScreen;
- (void)toggleHelp;
- (void)toggleLockShortcut;
- (void)toggleLogoutOnDisconnect;
- (void)toggleOpenSpaceMode;
- (void)togglePauseMusicOnLogout;
- (void)togglePhotoAfterEachLogin;
- (void)toggleProximityLock;
- (void)toggleRescan;
- (void)toggleShowMacControlOnMainScreen;
- (void)toggleShowMainView;
- (void)toggleShowProximityLockOnMainScreen;
- (void)toggleStartNearLockOnLogin;
- (void)toggleTakePhotoOnFailedLogin;
- (void)toggleUpdateNearLockAutomatically;
- (void)toggleWarnUserOnFailedLogin;
- (void)toggleWifiUnlock;
- (void)toggleWifiUnlockOnMainScreen;
- (void)unlinkDevices;
- (void)updateAndSyncData;
- (void)updateLogoutAction:(int)arg1;
- (void)updateMacSleepScreenAuth:(int)arg1;
- (void)updateSecuritySettingsWithCompletion:(void (^)(void))arg1;
- (void)updateTrackingDistance:(int)arg1;
- (void)updateiOSVersion;
- (void)userDidSelectTurnBluetoothOn;
- (void)userDidToggleCheckForUpdates;
- (void)userDidTurnBluetoothOn;
@end

