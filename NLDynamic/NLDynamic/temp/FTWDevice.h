//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface FTWDevice : NSObject
{
    BOOL isRetina;
    int deviceFamily;
    NSString *name;
    NSString *localizedName;
    NSString *systemName;
    NSString *systemVersion;
    NSString *model;
    NSString *uniqueIdentifier;
    NSString *MACAddress;
    NSString *platform;
    NSString *hardwareModel;
    unsigned long long CPUFrequency;
    unsigned long long busFrequency;
    unsigned long long CPUCount;
    unsigned long long totalMemory;
    unsigned long long userMemory;
    NSNumber *totalDiskSpace;
    NSNumber *freeDiskSpace;
    NSString *serialNumber;
}

+ (id)currentDevice;
+ (int)currentDeviceFamily;
+ (id)currentDeviceLocalizedName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long CPUCount; // @synthesize CPUCount;
@property(nonatomic) unsigned long long CPUFrequency; // @synthesize CPUFrequency;
@property(retain, nonatomic) NSString *MACAddress; // @synthesize MACAddress;
@property(nonatomic) unsigned long long busFrequency; // @synthesize busFrequency;
@property(nonatomic) int deviceFamily; // @synthesize deviceFamily;
@property(retain, nonatomic) NSNumber *freeDiskSpace; // @synthesize freeDiskSpace;
- (unsigned long long)getSysInfo:(unsigned int)arg1;
- (id)getSysInfoByName:(char *)arg1;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel;
- (id)init;
@property(nonatomic) BOOL isRetina; // @synthesize isRetina;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName;
- (unsigned long long)maxSocketBufferSize;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) NSString *platform; // @synthesize platform;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion;
@property(retain, nonatomic) NSNumber *totalDiskSpace; // @synthesize totalDiskSpace;
@property(nonatomic) unsigned long long totalMemory; // @synthesize totalMemory;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier;
@property(nonatomic) unsigned long long userMemory; // @synthesize userMemory;

@end
