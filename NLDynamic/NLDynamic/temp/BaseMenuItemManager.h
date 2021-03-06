//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ListViewModelController, NSString;

@interface BaseMenuItemManager : NSObject
{
    id <NavigationDelegate> _delegate;
    NSString *_titleDescription;
    ListViewModelController *_listViewModelController;
}

- (void).cxx_destruct;
- (id)createTitleText;
- (id)createViewModel;
@property(nonatomic) __weak id <NavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getViewController;
- (id)initWithDelegate:(id)arg1;
@property(retain, nonatomic) ListViewModelController *listViewModelController; // @synthesize listViewModelController=_listViewModelController;
- (void)reloadData;
@property(retain, nonatomic) NSString *titleDescription; // @synthesize titleDescription=_titleDescription;
- (void)updateViewControllerWithViewModel;
- (void)updateViewDataIfNeeded;
- (void)updateViewDataIfNeededForced:(BOOL)arg1;
- (BOOL)viewControllerIsShown;

@end

