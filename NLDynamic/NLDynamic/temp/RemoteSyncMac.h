//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RemoteSyncMac : NSObject
{
    BOOL _requestInProgress;
    id <RemoteSyncMacDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)checkIfDeviceUnlinkedRemotely;
@property(nonatomic) __weak id <RemoteSyncMacDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceUnlinkedFromRemoteSide;
- (void)didRetrieveObjectFromRemote:(id)arg1;
- (void)didRetrieveObjectToUnlinkFromRemote:(id)arg1;
@property(nonatomic) BOOL requestInProgress; // @synthesize requestInProgress=_requestInProgress;
- (BOOL)shouldUpdateRemoteDatabaseObject:(id)arg1;
- (void)test;
- (void)updateCurrentRemoteStateIfNeeded;
- (void)updateRemoteDatabaseObjectWithObject:(id)arg1 withObjectId:(id)arg2;

@end

