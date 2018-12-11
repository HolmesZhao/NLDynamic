//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RemoteChecker;

@interface UpdateController : NSObject
{
    BOOL _newiOSVersion;
    BOOL _newMacVersion;
    RemoteChecker *_remoteChecker;
}

+ (id)shared;
- (void).cxx_destruct;
- (BOOL)anyNewVersionAvailable;
- (void)checkForUpdates;
- (void)checkIfNewMacVersionAvalable;
- (void)checkIfNewiOSVersionAvalable;
- (void)dealloc;
- (id)init;
- (void)initalizeRemoteChecker;
- (id)latestIOSVersion;
- (id)latestMacVersion;
@property(nonatomic) BOOL newMacVersion; // @synthesize newMacVersion=_newMacVersion;
@property(nonatomic) BOOL newiOSVersion; // @synthesize newiOSVersion=_newiOSVersion;
@property(retain, nonatomic) RemoteChecker *remoteChecker; // @synthesize remoteChecker=_remoteChecker;
- (void)verifyIfUpdatesAvalable;

@end
