//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface PairingInfo : NSObject <NSCoding>
{
    NSNumber *_connectionStatus;
    NSString *_foregroundServiceId;
    NSString *_foregroundServiceId2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *connectionStatus; // @synthesize connectionStatus=_connectionStatus;
- (id)customCopy;
- (void)decodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *foregroundServiceId; // @synthesize foregroundServiceId=_foregroundServiceId;
@property(retain, nonatomic) NSString *foregroundServiceId2; // @synthesize foregroundServiceId2=_foregroundServiceId2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDefaultValues;
- (void)updateModelUpdateForNewVersion;

@end

