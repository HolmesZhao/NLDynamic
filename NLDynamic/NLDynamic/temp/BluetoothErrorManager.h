//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BluetoothErrorManager : NSObject
{
    NSMutableDictionary *_dictOfDisbledNotificaitonTimestamps;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)clearAllErrors;
@property(retain, nonatomic) NSMutableDictionary *dictOfDisbledNotificaitonTimestamps; // @synthesize dictOfDisbledNotificaitonTimestamps=_dictOfDisbledNotificaitonTimestamps;
- (void)didExperienceError:(id)arg1;
- (void)disableNotification:(id)arg1;
- (void)disableNotifications:(id)arg1 forNextSeconds:(double)arg2;
- (void)enableNotification:(id)arg1;
- (BOOL)ifBluetoothErrorActive:(id)arg1;
- (BOOL)ifNotificaitonEnabled:(id)arg1;
- (void)postBluetoothUnsolvableErrorIfEnabled;
- (void)restartBluetoothIfEnoughTimePassedSinceLastRestart;

@end
