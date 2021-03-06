//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MenubarControllerDelegate.h"
#import "PanelControllerDelegate.h"

@class NSString, NSTimer, PanelController, StatusItemController;

@interface MainMenuBarController : NSObject <PanelControllerDelegate, MenubarControllerDelegate>
{
    PanelController *_panelController;
    id <MainMenuBarControllerDelegate> _delegate;
    StatusItemController *_menubarController;
    NSTimer *_openStatusItemTimer;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)closeMenuBar;
- (void)closeMenuBarForced;
@property(nonatomic) __weak id <MainMenuBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUnlinkFromMobileDevice:(id)arg1;
- (id)init;
- (void)invalidateStatusBarCloseTimer;
- (void)iosVersionNotUpToDateForMobileDevice:(id)arg1;
@property(retain, nonatomic) StatusItemController *menubarController; // @synthesize menubarController=_menubarController;
- (void)menubarControllerDidToggleMenuItem:(id)arg1;
- (void)menubarControllerDidToggleMenuItemWithRightClick:(id)arg1;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)openMenuBar;
- (void)openMenuBarForDuration:(double)arg1;
@property(retain, nonatomic) NSTimer *openStatusItemTimer; // @synthesize openStatusItemTimer=_openStatusItemTimer;
- (void)osXVersionNotUpToDate;
@property(readonly, nonatomic) PanelController *panelController; // @synthesize panelController=_panelController;
- (void)panelDidClose;
- (void)removeIconFromMenuBar;
- (void)setMainActionDelegate:(id)arg1;
- (void)showBluetoothOffIfNeccesary;
- (void)showClearBluetoothCache;
- (void)showNearLockTemporaryDisabled;
- (void)showUnableToLockMac;
- (void)showUnableToUnlockMac;
- (id)statusItemViewForPanelController:(id)arg1;
- (void)updateStatusBarIcon;
- (void)updateViewForTrackingDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

