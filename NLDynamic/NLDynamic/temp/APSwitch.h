//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class APSwitchBackgroundLayer, APSwitchKnobLayer, CALayer, NSColor;

@interface APSwitch : NSView
{
    APSwitchBackgroundLayer *ap_backgroundLayer;
    APSwitchKnobLayer *ap_knobLayer;
    CALayer *ap_shadowLayer;
    CALayer *ap_contentLayer;
    BOOL ap_on;
    BOOL ap_enabled;
    NSColor *ap_onTintColor;
    id <NSControlDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)ap_initLayersWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <NSControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=ap_enabled;
@property(nonatomic, getter=isOn) BOOL on; // @synthesize on=ap_on;
- (void)mouseDown:(id)arg1;
@property(retain, nonatomic) NSColor *onTintColor; // @synthesize onTintColor=ap_onTintColor;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)setSwitchOn:(BOOL)arg1 animated:(BOOL)arg2;

@end

