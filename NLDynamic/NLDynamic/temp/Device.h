//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class ConnectionInfo, DeviceInfo, NSString, SessionInfo;

@interface Device : NSObject <NSCoding>
{
    NSString *_unId;
    DeviceInfo *_deviceInfo;
    ConnectionInfo *_connectionInfo;
    SessionInfo *_sessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ConnectionInfo *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (id)customCopy;
- (void)decodeWithCoder:(id)arg1;
@property(retain, nonatomic) DeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (id)deviceNameSafe;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnId:(id)arg1;
- (id)insertPasswordQuestion;
- (id)knockTwiceToAuth;
- (id)knockTwiceToUnlock;
@property(retain, nonatomic) SessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) NSString *unId; // @synthesize unId=_unId;
- (id)unlockDeviceQuestion;
- (BOOL)userStatedAsLoggedIn;

@end
