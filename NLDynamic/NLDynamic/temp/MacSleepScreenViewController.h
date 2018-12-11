//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NLPageViewControllerExtended.h"

#import "MacSleepScreenConnectToiPhoneDelegate.h"
#import "MacSleepScreenFirstViewControllerDelegate.h"
#import "MacSleepScreenTurnNearLockOffDelegate.h"
#import "MacSleepScreenTutorialStepViewControllerDelegate.h"

@class MacSleepScreenConnectToiPhone, MacSleepScreenFirstViewController, MacSleepScreenTurnNearLockOff, MacSleepScreenTutorialStepViewController, NSString, TutorialFinished;

@interface MacSleepScreenViewController : NLPageViewControllerExtended <MacSleepScreenFirstViewControllerDelegate, MacSleepScreenTutorialStepViewControllerDelegate, MacSleepScreenTurnNearLockOffDelegate, MacSleepScreenConnectToiPhoneDelegate>
{
    int _tutorialStep;
    id <MacSleepScreenViewControllerDelegate> _delegate;
    MacSleepScreenFirstViewController *_firstViewController;
    MacSleepScreenTutorialStepViewController *_tutorialViewController;
    TutorialFinished *_tutorialFinishedViewController;
    MacSleepScreenConnectToiPhone *_connectToiPhoneViewController;
    MacSleepScreenTurnNearLockOff *_turnNearLockOffViewController;
}

- (void).cxx_destruct;
- (BOOL)allRequirementsFulfulledToStartTutorial;
@property(retain, nonatomic) MacSleepScreenConnectToiPhone *connectToiPhoneViewController; // @synthesize connectToiPhoneViewController=_connectToiPhoneViewController;
- (void)dealloc;
@property(nonatomic) __weak id <MacSleepScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUnlockMacWithUserConfirmation;
@property(retain, nonatomic) MacSleepScreenFirstViewController *firstViewController; // @synthesize firstViewController=_firstViewController;
- (void)forceUpdateTutorialStepForCurrentState;
- (void)initializePages;
- (void)macSleepScreenConnectToiPhone:(id)arg1 didSelectOption:(int)arg2;
- (void)macSleepScreenFirstViewControllerDidSelectShowTutorial:(id)arg1;
- (void)macSleepScreenTurnNearLockOff:(id)arg1 didSelectOption:(int)arg2;
- (void)macSleepScreenTutorialStepViewController:(id)arg1 didSelectOption:(int)arg2;
- (void)safeWifiUpdate;
@property(retain, nonatomic) MacSleepScreenTurnNearLockOff *turnNearLockOffViewController; // @synthesize turnNearLockOffViewController=_turnNearLockOffViewController;
@property(retain, nonatomic) TutorialFinished *tutorialFinishedViewController; // @synthesize tutorialFinishedViewController=_tutorialFinishedViewController;
@property(nonatomic) int tutorialStep; // @synthesize tutorialStep=_tutorialStep;
- (void)setTutorialStep:(int)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) MacSleepScreenTutorialStepViewController *tutorialViewController; // @synthesize tutorialViewController=_tutorialViewController;
- (BOOL)shouldUpdateTutorialStepForSettingsChanges;
- (void)start;
- (id)titleDescriptionText;
- (void)updateAllSteps;
- (void)updateTutorialStepForCurrentStepIfNeeded;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

