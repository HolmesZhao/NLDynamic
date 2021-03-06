//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (Animations)
- (void)drawImage:(id)arg1 inFrame:(struct CGRect)arg2 cornerRadius:(double)arg3;
- (void)removeAllAnimations;
- (void)runSpinAnimationWithduration:(double)arg1 rotations:(double)arg2 repeat:(float)arg3;
- (void)runSpinAnimationWithduration:(double)arg1 rotations:(double)arg2 repeat:(float)arg3 withKey:(id)arg4;
- (void)setAlpha:(double)arg1 withDuration:(double)arg2;
- (void)setAlpha:(double)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFrame:(struct CGRect)arg1 withDuration:(double)arg2;
- (void)setFrame:(struct CGRect)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
@end

