//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LoginTrackerController : NSObject
{
}

+ (void)applicationOpenedEntry;
+ (id)dateForLine:(id)arg1;
+ (void)insertLockedEntry;
+ (void)insertUnlockedEntry;
+ (void)insertentry:(int)arg1;
+ (BOOL)isLoginEntryForLine:(id)arg1;
+ (BOOL)isLogoutEntryForLine:(id)arg1;
+ (BOOL)isNearLockStartedForLine:(id)arg1;
+ (BOOL)isSessionDurationLine:(id)arg1;
+ (BOOL)isValidLine:(id)arg1;
+ (id)lastLineOfTrackingFile;
+ (id)loginTrackerNewFilePath;
+ (id)loginTrackerOldFilePath;
+ (void)openTrackingFile;

@end

