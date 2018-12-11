//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EventTimestamp, NSNumber, NSString;

@protocol LEScannerConnection <NSObject>
- (void)connect;
@property(nonatomic) __weak id <LEScannerConnectionDelegate> delegate;
- (void)disconnect:(BOOL)arg1;
- (void)disconnectBecauseOfError;
- (void)forceTerminateConnection:(BOOL)arg1;
- (EventTimestamp *)inDisconnectTimestampValue;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isInDisconectingProcess;
- (NSNumber *)lastRSSI;
- (NSString *)peripheralIdentifier;
- (void)sendString:(NSString *)arg1 onPrimaryChannel:(BOOL)arg2;
- (NSString *)serviceId;
- (void)setKeepAliveInterval:(long long)arg1;
- (NSString *)unId;
- (void)updateRSSI;
@end

