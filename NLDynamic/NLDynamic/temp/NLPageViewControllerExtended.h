//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NLPageViewController.h"

@interface NLPageViewControllerExtended : NLPageViewController
{
    BOOL _viewIsVisible;
    CDUnknownBlockType _viewVisibilityAction;
}

- (void).cxx_destruct;
- (void)addAppearCallback;
- (void)addController:(id)arg1 asPageAtIndex:(long long)arg2;
- (void)addViewVisibilityActions;
- (BOOL)currentViewVisibility;
- (BOOL)isVisible;
- (void)removeAppearCallback;
- (void)removeControllerAtPageIndex:(long long)arg1;
@property(nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(copy, nonatomic) CDUnknownBlockType viewVisibilityAction; // @synthesize viewVisibilityAction=_viewVisibilityAction;
- (void)setViewVisibilityHandler:(CDUnknownBlockType)arg1;
- (void)updateViewVisibility;
- (void)windowDidLoad;

@end

