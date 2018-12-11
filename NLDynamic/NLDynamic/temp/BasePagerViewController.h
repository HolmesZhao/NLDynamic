//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSView;

@interface BasePagerViewController : BaseViewController
{
    BOOL _isAnimating;
    float _currentAutomaticAnimationIndex;
    NSView *_contentViewContainer;
    NSView *_contentView;
    NSView *_oldContentView;
    BaseViewController *_currentViewController;
    CDUnknownBlockType _animationCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType animationCompletionBlock; // @synthesize animationCompletionBlock=_animationCompletionBlock;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSView *contentViewContainer; // @synthesize contentViewContainer=_contentViewContainer;
@property(nonatomic) float currentAutomaticAnimationIndex; // @synthesize currentAutomaticAnimationIndex=_currentAutomaticAnimationIndex;
@property(retain, nonatomic) BaseViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)didFinishAnimation;
- (void)executeUpdateContentView:(id)arg1 animationDirection:(int)arg2;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (id)nibName;
@property(retain, nonatomic) NSView *oldContentView; // @synthesize oldContentView=_oldContentView;
- (BOOL)performCustomActionOnBackButtonToggled;
- (void)restartBluetoothWithCompletion:(CDUnknownBlockType)arg1;
- (void)showViewController:(id)arg1 animation:(int)arg2;
- (void)showViewController:(id)arg1 withAnimationIndex:(float)arg2;
- (void)showViewController:(id)arg1 withAnimationIndex:(float)arg2 animated:(BOOL)arg3;
- (void)turnOffBluetoothwithCompletion:(CDUnknownBlockType)arg1;
- (void)updateContentView:(id)arg1 animationDirection:(int)arg2;
- (void)updateCurrentAnimationIndex:(float)arg1;
- (void)viewDidLoad;

@end

