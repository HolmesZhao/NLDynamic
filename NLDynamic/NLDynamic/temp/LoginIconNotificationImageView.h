//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImageView, NSTextField;

@interface LoginIconNotificationImageView : NSView
{
    NSImageView *_userImage;
    NSTextField *_userNameLabel;
    NSTextField *_enterPasswordLabel;
    NSImageView *_nearLockIconImage;
}

- (void).cxx_destruct;
- (double)alphaForNearLockOn:(BOOL)arg1;
@property(retain, nonatomic) NSTextField *enterPasswordLabel; // @synthesize enterPasswordLabel=_enterPasswordLabel;
@property(retain, nonatomic) NSImageView *nearLockIconImage; // @synthesize nearLockIconImage=_nearLockIconImage;
@property(retain, nonatomic) NSImageView *userImage; // @synthesize userImage=_userImage;
@property(retain, nonatomic) NSTextField *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (void)setupView;
- (void)showNearLockIcon:(BOOL)arg1 animated:(BOOL)arg2;

@end
