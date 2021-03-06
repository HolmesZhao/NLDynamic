//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NearLockListViewWindow.h"

#import "FilterControllerDelegate.h"
#import "PXListViewDelegate.h"

@class FilterController, LoginLogoutFilterModel, NSArray, NSString;

@interface LoginLogoutHistoryWindow : NearLockListViewWindow <PXListViewDelegate, FilterControllerDelegate>
{
    id <LoginLogoutHistoryWindowDelegate> _delegate;
    NSArray *_listViewArray;
    LoginLogoutFilterModel *_filterModel;
    FilterController *_filterController;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dealloc;
@property(nonatomic) __weak id <LoginLogoutHistoryWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteAllTrackEntries;
- (void)didToggleButtonCenterButton:(id)arg1;
- (void)didToggleButtonRightButton:(id)arg1;
@property(retain, nonatomic) FilterController *filterController; // @synthesize filterController=_filterController;
- (void)filterControllerDidUpdateFilter:(id)arg1;
@property(retain, nonatomic) LoginLogoutFilterModel *filterModel; // @synthesize filterModel=_filterModel;
- (void)infoButtonToggled:(id)arg1;
- (id)listView:(id)arg1 cellForRow:(unsigned long long)arg2;
- (double)listView:(id)arg1 heightOfRow:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *listViewArray; // @synthesize listViewArray=_listViewArray;
- (void)listViewSelectionDidChange:(id)arg1;
- (unsigned long long)numberOfRowsInListView:(id)arg1;
- (void)reloadDatsourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollToLastRow;
- (void)showWindow;
- (void)updateWindowView;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

