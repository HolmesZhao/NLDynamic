//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NearLockBaseItemManager.h"

#import "ClipboardInfoViewControllerDelegate.h"

@class ClipboardInfoViewController, NSString;

@interface ClipboardMenuManager : NearLockBaseItemManager <ClipboardInfoViewControllerDelegate>
{
    ClipboardInfoViewController *_clipboardInfoViewController;
}

- (void).cxx_destruct;
- (id)clipboardImage;
@property(retain, nonatomic) ClipboardInfoViewController *clipboardInfoViewController; // @synthesize clipboardInfoViewController=_clipboardInfoViewController;
- (void)clipboardInfoViewController:(id)arg1 didSelectOption:(int)arg2;
- (id)createViewModel;
- (id)sendClipboard;
- (id)showClipboardTutorial;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
