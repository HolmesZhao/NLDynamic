//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InterNotificationsDelegate.h"

@class InterNotifications, NSString;

@interface InterProcessComm : NSObject <InterNotificationsDelegate>
{
    CDUnknownBlockType _fastLockCallback;
    CDUnknownBlockType _nearLockCallback;
    CDUnknownBlockType _lockUnlockRSSICallback;
    CDUnknownBlockType _pingCallback;
    CDUnknownBlockType _pingRequest;
    InterNotifications *_interProcessNotification;
}

+ (void)macIsLockedStatus:(BOOL)arg1;
+ (void)nearLockIsOnStatus:(BOOL)arg1;
+ (void)ping;
+ (void)setLockUnlockRSSI:(long long)arg1;
+ (void)setMacLocked:(BOOL)arg1;
+ (void)setNearLockOn:(BOOL)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fastLockCallback; // @synthesize fastLockCallback=_fastLockCallback;
- (id)init;
- (void)interNotifications:(id)arg1 didReeiveDiect:(id)arg2;
@property(retain, nonatomic) InterNotifications *interProcessNotification; // @synthesize interProcessNotification=_interProcessNotification;
@property(copy, nonatomic) CDUnknownBlockType lockUnlockRSSICallback; // @synthesize lockUnlockRSSICallback=_lockUnlockRSSICallback;
@property(copy, nonatomic) CDUnknownBlockType nearLockCallback; // @synthesize nearLockCallback=_nearLockCallback;
@property(copy, nonatomic) CDUnknownBlockType pingCallback; // @synthesize pingCallback=_pingCallback;
@property(copy, nonatomic) CDUnknownBlockType pingRequest; // @synthesize pingRequest=_pingRequest;
- (void)pong;
- (void)registerForLockUnlockRSSICommand:(CDUnknownBlockType)arg1;
- (void)registerForMacLockCommand:(CDUnknownBlockType)arg1;
- (void)registerForNearLockCommand:(CDUnknownBlockType)arg1;
- (void)registerForPingCallback:(CDUnknownBlockType)arg1;
- (void)registerForPingReqeust:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

