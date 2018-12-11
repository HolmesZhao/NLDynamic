//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NLPageViewControllerExtended.h"

#import "NotSupportedViewControllerDelegate.h"

@class ConfigureViewController, InfoViewController, MobileDevice, NSString, NotSupportedViewController;

@interface InitalWizzardController : NLPageViewControllerExtended <NotSupportedViewControllerDelegate>
{
    id <WizzardViewControllerDelegate> _delegate;
    InfoViewController *_homeController;
    InfoViewController *_acceptViewController;
    ConfigureViewController *_configureViewController;
    NotSupportedViewController *_notSupportedViewController;
    MobileDevice *_pairingMobileDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) InfoViewController *acceptViewController; // @synthesize acceptViewController=_acceptViewController;
@property(retain, nonatomic) ConfigureViewController *configureViewController; // @synthesize configureViewController=_configureViewController;
@property(nonatomic) __weak id <WizzardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)devicesHavePairedSuccesfully;
- (void)didAcceptPairWithMobileDevice:(id)arg1;
- (void)didFinishShowingPageAtIndex:(long long)arg1;
- (void)didLooseConnectionWithMobileDevice:(id)arg1;
- (void)didReceiveRequestToPairWithMobileDevice:(id)arg1;
- (void)didSuccessfullyPair:(BOOL)arg1 withMobileDevice:(id)arg2;
- (void)didupdateBluetoothState;
@property(retain, nonatomic) InfoViewController *homeController; // @synthesize homeController=_homeController;
- (void)initializePages;
- (void)macSleepScreenConnectToiPhone:(id)arg1 didSelectOption:(int)arg2;
@property(retain, nonatomic) NotSupportedViewController *notSupportedViewController; // @synthesize notSupportedViewController=_notSupportedViewController;
- (void)notSupportedViewControllerDidSelectQuit:(id)arg1;
@property(retain, nonatomic) MobileDevice *pairingMobileDevice; // @synthesize pairingMobileDevice=_pairingMobileDevice;
- (BOOL)performCustomActionOnBackButtonToggled;
- (void)pushNotSupportedViewController;
- (void)refreshHomeView;
- (void)resetHelpView;
- (void)showBluetoothNotSupported;
- (void)showMacVersionNotSupported;
- (void)startWizzardFromBeginningAnimated:(BOOL)arg1;
- (id)titleDescriptionText;
- (void)updateAcceptViewController;
- (void)updateRecoveryMode;
- (void)userDidAcceptConnection;
- (void)userDidDenyConnection;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

