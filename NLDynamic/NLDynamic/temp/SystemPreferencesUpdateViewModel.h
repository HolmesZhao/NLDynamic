//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SystemPreferencesUpdateViewModel : NSObject
{
    BOOL _showInfoScreen;
    BOOL _shouldVerifyAfterForeground;
    NSString *_updateText;
    NSString *_textAction1;
    NSString *_actionButtonText;
    NSString *_upadteImageName;
    NSString *_successText;
    NSString *_imageName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
- (BOOL)allConditionsSet;
- (void)closeAppropriateWindow;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void)openAppropriateWindow;
@property(nonatomic) BOOL shouldVerifyAfterForeground; // @synthesize shouldVerifyAfterForeground=_shouldVerifyAfterForeground;
@property(nonatomic) BOOL showInfoScreen; // @synthesize showInfoScreen=_showInfoScreen;
@property(retain, nonatomic) NSString *successText; // @synthesize successText=_successText;
@property(retain, nonatomic) NSString *textAction1; // @synthesize textAction1=_textAction1;
@property(retain, nonatomic) NSString *upadteImageName; // @synthesize upadteImageName=_upadteImageName;
@property(retain, nonatomic) NSString *updateText; // @synthesize updateText=_updateText;
- (void)updatePreferanceValues;

@end

