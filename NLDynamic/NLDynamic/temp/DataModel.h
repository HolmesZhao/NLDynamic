//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class Device, NSMutableDictionary;

@interface DataModel : NSObject <NSCoding>
{
    Device *currentDevice;
    NSMutableDictionary *dictOfMobileDeviceSettings;
    NSMutableDictionary *dictOfMobileDeviceLocalSettings;
    NSMutableDictionary *dictOfAllMobileDevice;
    NSMutableDictionary *dictOfPasswords;
    NSMutableDictionary *dictOfPeripheralsToIgnore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Device *currentDevice; // @synthesize currentDevice;
- (void)decodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dictOfAllMobileDevice; // @synthesize dictOfAllMobileDevice;
@property(retain, nonatomic) NSMutableDictionary *dictOfMobileDeviceLocalSettings; // @synthesize dictOfMobileDeviceLocalSettings;
@property(retain, nonatomic) NSMutableDictionary *dictOfMobileDeviceSettings; // @synthesize dictOfMobileDeviceSettings;
@property(retain, nonatomic) NSMutableDictionary *dictOfPasswords; // @synthesize dictOfPasswords;
@property(retain, nonatomic) NSMutableDictionary *dictOfPeripheralsToIgnore; // @synthesize dictOfPeripheralsToIgnore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentDevice:(id)arg1;
- (void)updateExistingModelIfNeeded;

@end

