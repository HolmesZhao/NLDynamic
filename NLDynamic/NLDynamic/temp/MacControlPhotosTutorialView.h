//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSButton, NSImageView, NSTextField;

@interface MacControlPhotosTutorialView : BaseViewController
{
    id <MacControlPhotosTutorialViewDelegate> _delegate;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSTextField *_loginPhotosTitleLabel;
    NSImageView *_loginPhotosIcon;
    NSTextField *_loginPhotosDescription;
    NSButton *_loginPhotosButton;
    NSTextField *_failedLoginPhotosTitleLabel;
    NSImageView *_failedLoginPhotosIcon;
    NSTextField *_failedLoginPhotosDescription;
    NSButton *_failedLoginPhotosButton;
    NSTextField *_lockUnlockHistoryTitleLabel;
    NSImageView *_lockUnlockHistoryIcon;
    NSTextField *_lockUnlockHistoryDescription;
    NSButton *_lockUnlockHistoryButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MacControlPhotosTutorialViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)didToggleShowFailedLoginAttemptPhotos:(id)arg1;
- (void)didToggleShowLockUnlockHistory:(id)arg1;
- (void)didToggleShowLoginPhotos:(id)arg1;
@property(retain, nonatomic) NSButton *failedLoginPhotosButton; // @synthesize failedLoginPhotosButton=_failedLoginPhotosButton;
@property(retain, nonatomic) NSTextField *failedLoginPhotosDescription; // @synthesize failedLoginPhotosDescription=_failedLoginPhotosDescription;
@property(retain, nonatomic) NSImageView *failedLoginPhotosIcon; // @synthesize failedLoginPhotosIcon=_failedLoginPhotosIcon;
@property(retain, nonatomic) NSTextField *failedLoginPhotosTitleLabel; // @synthesize failedLoginPhotosTitleLabel=_failedLoginPhotosTitleLabel;
@property(retain, nonatomic) NSButton *lockUnlockHistoryButton; // @synthesize lockUnlockHistoryButton=_lockUnlockHistoryButton;
@property(retain, nonatomic) NSTextField *lockUnlockHistoryDescription; // @synthesize lockUnlockHistoryDescription=_lockUnlockHistoryDescription;
@property(retain, nonatomic) NSImageView *lockUnlockHistoryIcon; // @synthesize lockUnlockHistoryIcon=_lockUnlockHistoryIcon;
@property(retain, nonatomic) NSTextField *lockUnlockHistoryTitleLabel; // @synthesize lockUnlockHistoryTitleLabel=_lockUnlockHistoryTitleLabel;
@property(retain, nonatomic) NSButton *loginPhotosButton; // @synthesize loginPhotosButton=_loginPhotosButton;
@property(retain, nonatomic) NSTextField *loginPhotosDescription; // @synthesize loginPhotosDescription=_loginPhotosDescription;
@property(retain, nonatomic) NSImageView *loginPhotosIcon; // @synthesize loginPhotosIcon=_loginPhotosIcon;
@property(retain, nonatomic) NSTextField *loginPhotosTitleLabel; // @synthesize loginPhotosTitleLabel=_loginPhotosTitleLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateStrings;

@end

