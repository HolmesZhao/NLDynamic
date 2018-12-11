//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSButton, NSTextField;

@interface TutorialWalkAway : BaseViewController
{
    id <TutorialWalkAwayDelegate> _delegate;
    NSTextField *_walkAwayLable;
    NSTextField *_noteLabel;
    NSTextField *_currentDistanceTextLabel;
    NSTextField *_currentDistanceValueLabel;
    NSTextField *_nearLockDistanceTextLabel;
    NSTextField *_nearLockDistanceValueLabel;
    NSTextField *_metricLabel1;
    NSTextField *_metricLabel2;
    NSTextField *_userActiveLabel;
    NSButton *_finishButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *currentDistanceTextLabel; // @synthesize currentDistanceTextLabel=_currentDistanceTextLabel;
@property(retain, nonatomic) NSTextField *currentDistanceValueLabel; // @synthesize currentDistanceValueLabel=_currentDistanceValueLabel;
@property(nonatomic) __weak id <TutorialWalkAwayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSButton *finishButton; // @synthesize finishButton=_finishButton;
- (void)finishToggled:(id)arg1;
@property(retain, nonatomic) NSTextField *metricLabel1; // @synthesize metricLabel1=_metricLabel1;
@property(retain, nonatomic) NSTextField *metricLabel2; // @synthesize metricLabel2=_metricLabel2;
@property(retain, nonatomic) NSTextField *nearLockDistanceTextLabel; // @synthesize nearLockDistanceTextLabel=_nearLockDistanceTextLabel;
@property(retain, nonatomic) NSTextField *nearLockDistanceValueLabel; // @synthesize nearLockDistanceValueLabel=_nearLockDistanceValueLabel;
@property(retain, nonatomic) NSTextField *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) NSTextField *userActiveLabel; // @synthesize userActiveLabel=_userActiveLabel;
@property(retain, nonatomic) NSTextField *walkAwayLable; // @synthesize walkAwayLable=_walkAwayLable;
- (void)updateStrings;
- (void)updateViewForMobileDevice:(id)arg1;

@end
