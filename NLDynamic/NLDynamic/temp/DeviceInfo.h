//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface DeviceInfo : NSObject <NSCoding>
{
    NSString *_deviceName;
    NSNumber *_deviceDescription;
    NSNumber *_deviceType;
}

- (void).cxx_destruct;
- (id)copyCostom;
- (void)decodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSNumber *deviceDescription; // @synthesize deviceDescription=_deviceDescription;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSNumber *deviceType; // @synthesize deviceType=_deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

