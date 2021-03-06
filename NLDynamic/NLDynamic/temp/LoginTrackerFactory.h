//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LoginTrackerFactory : NSObject
{
}

- (id)applicationData;
- (BOOL)applicationDataIsEmpty;
- (void)insertCurrentEvent:(int)arg1 trigger:(int)arg2 takePhoto:(BOOL)arg3;
- (void)insertEvent:(int)arg1 forDate:(id)arg2 trigger:(int)arg3 takePhoto:(BOOL)arg4;
- (void)insertEvent:(int)arg1 forDate:(id)arg2 trigger:(int)arg3 takePhoto:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)insertLastEntry:(id)arg1 takePhoto:(BOOL)arg2;
- (void)loadApplicationData;
- (void)removeAllTrackEvents;
- (void)removeExtraTrackEntriesIfNeeded;
- (void)saveTrackEvents;

@end

