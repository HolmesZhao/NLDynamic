//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSBetaControllerDelegate.h"
#import "CLSCrashReportingControllerDelegate.h"
#import "FABKit.h"
#import "WKScriptMessageHandler.h"

@class CLSBetaController, CLSCrashReportingController, NSString;

@interface Crashlytics : NSObject <FABKit, CLSCrashReportingControllerDelegate, CLSBetaControllerDelegate, WKScriptMessageHandler>
{
    id <CrashlyticsDelegate> _delegate;
    CLSCrashReportingController *_crashReportingController;
    CLSBetaController *_betaController;
}

+ (id)bundleIdentifier;
+ (void)disableUninitializedKitMessaging;
+ (void)initializeIfNeeded;
+ (id)kitBuildVersion;
+ (id)kitDisplayVersion;
+ (void)logEvent:(id)arg1;
+ (void)logEvent:(id)arg1 attributes:(id)arg2;
+ (void)setBoolValue:(BOOL)arg1 forKey:(id)arg2;
+ (void)setDevelopmentPlatformName:(id)arg1;
+ (void)setDevelopmentPlatformVersion:(id)arg1;
+ (void)setFloatValue:(float)arg1 forKey:(id)arg2;
+ (void)setIntValue:(int)arg1 forKey:(id)arg2;
+ (void)setObjectValue:(id)arg1 forKey:(id)arg2;
+ (void)setUserEmail:(id)arg1;
+ (void)setUserIdentifier:(id)arg1;
+ (void)setUserName:(id)arg1;
+ (id)sharedInstance;
+ (id)startWithAPIKey:(id)arg1;
+ (id)startWithAPIKey:(id)arg1 afterDelay:(double)arg2;
+ (id)startWithAPIKey:(id)arg1 delegate:(id)arg2;
+ (id)startWithAPIKey:(id)arg1 delegate:(id)arg2 afterDelay:(double)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *APIKey;
- (id)APIKeyForBetaController:(id)arg1;
- (id)APIKeyForCrashReportingController:(id)arg1;
- (id)attemptToLoadMacHistoricDefaults;
@property(readonly, nonatomic) CLSBetaController *betaController; // @synthesize betaController=_betaController;
- (id)bundleIdentifier;
- (void)crash;
@property(nonatomic) BOOL debugMode;
@property(nonatomic) id <CrashlyticsDelegate> delegate;
- (BOOL)delegateRespondsToLegacyMethods;
- (void)detectedCrash;
- (id)developmentPlatformName;
- (id)developmentPlatformVersion;
- (id)getHistoricInstallID;
- (id)init;
- (id)initWithSuper;
- (id)installID;
- (id)installIDForCrashReportingController:(id)arg1;
- (BOOL)isCrashlyticsStarted;
- (BOOL)isFirstInstall;
- (BOOL)isFirstInstallForCrashReportingController:(id)arg1;
- (id)kitInfo;
- (void)logEvent:(id)arg1;
- (void)logEvent:(id)arg1 attributes:(id)arg2;
- (void)monitorErrorsForWKWebViewConfiguration:(id)arg1;
- (void)recordCustomExceptionName:(id)arg1 reason:(id)arg2 frameArray:(id)arg3;
- (void)recordError:(id)arg1;
- (void)recordError:(id)arg1 withAdditionalUserInfo:(id)arg2;
- (void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2;
- (void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2;
- (BOOL)reportingControllerCanUseBackgroundSessions:(id)arg1;
- (BOOL)reportingControllerMustInformDelegateOfReports:(id)arg1;
- (void)setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)setDevelopmentPlatformName:(id)arg1;
- (void)setDevelopmentPlatformVersion:(id)arg1;
- (void)setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)setIntValue:(int)arg1 forKey:(id)arg2;
- (void)setKitInfo:(id)arg1;
- (void)setObjectValue:(id)arg1 forKey:(id)arg2;
- (void)setUserEmail:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)settingsDictionary;
- (id)settingsForBetaController:(id)arg1;
- (id)settingsForCrashReportingController:(id)arg1;
- (BOOL)shouldInstallCrashCallback;
- (void)start;
- (void)throwException;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
@property(readonly, copy, nonatomic) NSString *version;
- (void)warnDelegateAboutMethods;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

