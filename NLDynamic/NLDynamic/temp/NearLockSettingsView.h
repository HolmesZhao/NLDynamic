//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CustomSlider, ITSwitch, NSButton, NSImageView, NSTextField;

@interface NearLockSettingsView : NSView
{
    ITSwitch *_proximitySwitch;
    NSTextField *_distanceTextField;
    CustomSlider *_distanceSlider;
    NSTextField *_nearLockLabel;
    NSTextField *_distanceTextLabel;
    NSImageView *_horizontalLine2;
    NSButton *_temporaryDisabledButton;
    NSButton *_checkBox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) CustomSlider *distanceSlider; // @synthesize distanceSlider=_distanceSlider;
@property(retain, nonatomic) NSTextField *distanceTextField; // @synthesize distanceTextField=_distanceTextField;
@property(retain, nonatomic) NSTextField *distanceTextLabel; // @synthesize distanceTextLabel=_distanceTextLabel;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSImageView *horizontalLine2; // @synthesize horizontalLine2=_horizontalLine2;
@property(retain, nonatomic) NSTextField *nearLockLabel; // @synthesize nearLockLabel=_nearLockLabel;
@property(retain, nonatomic) ITSwitch *proximitySwitch; // @synthesize proximitySwitch=_proximitySwitch;
@property(retain, nonatomic) NSButton *temporaryDisabledButton; // @synthesize temporaryDisabledButton=_temporaryDisabledButton;

@end

