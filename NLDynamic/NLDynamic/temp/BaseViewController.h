//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSString;

@interface BaseViewController : NSViewController
{
    BOOL _viewIsVisible;
    BOOL _didLayoutSubviews;
    NSString *_titleDescription;
    NSString *_comparisonIdentifier;
    CDUnknownBlockType _backActionVC;
    CDUnknownBlockType _viewWillAppearAction;
    CDUnknownBlockType _viewDidDissapearAction;
    CDUnknownBlockType _viewDidAppearAction;
    CDUnknownBlockType _viewVisibilityAction;
}

- (void).cxx_destruct;
- (void)addBottomSeparator;
@property(copy) CDUnknownBlockType backActionVC; // @synthesize backActionVC=_backActionVC;
@property(retain, nonatomic) NSString *comparisonIdentifier; // @synthesize comparisonIdentifier=_comparisonIdentifier;
- (id)comutedNibName;
- (void)dealloc;
@property(nonatomic) BOOL didLayoutSubviews; // @synthesize didLayoutSubviews=_didLayoutSubviews;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initialize;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isVisible;
- (void)loadView;
- (id)mainView;
- (id)nibName;
- (BOOL)performCustomActionOnBackButtonToggled;
- (void)registerForLanguageUpdateNotifications;
- (void)setBackActionViewController:(CDUnknownBlockType)arg1;
- (void)setBackgroundImage:(id)arg1;
@property(retain, nonatomic) NSString *titleDescription; // @synthesize titleDescription=_titleDescription;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearAction; // @synthesize viewDidAppearAction=_viewDidAppearAction;
- (void)setViewDidAppearHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType viewDidDissapearAction; // @synthesize viewDidDissapearAction=_viewDidDissapearAction;
- (void)setViewDidDissapearHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(copy, nonatomic) CDUnknownBlockType viewVisibilityAction; // @synthesize viewVisibilityAction=_viewVisibilityAction;
- (void)setViewVisibilityHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType viewWillAppearAction; // @synthesize viewWillAppearAction=_viewWillAppearAction;
- (void)setViewWillAppearHandler:(CDUnknownBlockType)arg1;
- (id)titleDescriptionText;
- (void)updateStrings;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear;

@end

