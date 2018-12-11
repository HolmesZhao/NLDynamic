//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSFileManager, NSNumber, NSString;

@interface FABSettings : NSObject
{
    BOOL _reportingEnabled;
    BOOL _errorReportingEnabled;
    NSNumber *_logBufferSize;
    NSNumber *_maxErrors;
    NSNumber *_maxCustomKeys;
    NSDictionary *_settingsDictionary;
    NSString *_settingsPath;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
- (id)appBuildVersion;
- (id)appBundleIdentifier;
- (id)appDisplayVersion;
@property(readonly, nonatomic) BOOL appNeedsOnboarding;
- (id)appPlatform;
- (id)appSettings;
- (id)appSource;
- (id)appStatus;
@property(readonly, nonatomic) BOOL appUpdateRequired;
- (void)clearSettingsDictionary;
@property(readonly, nonatomic) BOOL errorReportingEnabled; // @synthesize errorReportingEnabled=_errorReportingEnabled;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)initWithSettingsPath:(id)arg1 fileManager:(id)arg2;
@property(readonly, nonatomic) NSNumber *logBufferSize; // @synthesize logBufferSize=_logBufferSize;
@property(readonly, nonatomic) NSNumber *maxCustomKeys; // @synthesize maxCustomKeys=_maxCustomKeys;
@property(readonly, nonatomic) NSNumber *maxErrors; // @synthesize maxErrors=_maxErrors;
@property(readonly, nonatomic) BOOL reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
@property(retain, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(retain, nonatomic) NSString *settingsPath; // @synthesize settingsPath=_settingsPath;
- (id)settingsURLForEndpoint:(id)arg1 appInstanceIdentifer:(id)arg2;

@end

