//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSNetworkClientDelegate.h"
#import "CLSReportsControllerDelegate.h"

@class CLSFileManager, CLSNetworkClient, CLSReportsController, CLSSettings, NSOperationQueue, NSString;

@interface CLSCrashReportingController : NSObject <CLSNetworkClientDelegate, CLSReportsControllerDelegate>
{
    CLSFileManager *_fileMananger;
    CLSNetworkClient *_networkClient;
    CLSReportsController *_reportsController;
    NSOperationQueue *_operationQueue;
    CLSSettings *_settings;
    long long _promptChoice;
    BOOL _registeredAnalyticsEventListener;
    id <CLSCrashReportingControllerDelegate> _delegate;
    CLSFileManager *_fileManager;
}

- (void).cxx_destruct;
- (id)APIKey;
- (id)APIKeyForReportsController:(id)arg1;
- (BOOL)attemptCurrentReportSubmission;
- (id)bundleIdentifier;
- (id)bundleIdentifierForReportsController:(id)arg1;
- (BOOL)canProcessUrgentReports;
- (void)captureInitialNotificationStates;
- (BOOL)checkForAndCreateLaunchMarker;
- (void)checkForUserPromptSetting;
- (BOOL)checkPreconditions;
- (id)clientWithOperationQueue:(id)arg1;
- (void)crashReportingSetupCompleted:(unsigned long long)arg1;
- (BOOL)createLaunchFailureMarker;
@property(nonatomic) __weak id <CLSCrashReportingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)delegateNeedsToBeInformedOfReports;
- (void)deliverCrashDelegateCallback;
- (void)didBecomeInactive:(id)arg1;
- (void)displayPermissionAlertForReport:(id)arg1;
- (void)fabricSettingsDownloaded:(id)arg1;
@property(retain, nonatomic) CLSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (BOOL)firstInstall;
- (void)handleContentsInOtherReportingDirectories;
- (void)handleDelegateCompletionForReport:(id)arg1 submit:(BOOL)arg2;
- (void)handleExistingFilesInPrepared;
- (void)handleExistingFilesInProcessing;
- (void)handlePromptCompleteForReport:(id)arg1 shouldSubmit:(BOOL)arg2 shouldMarkAlwaysSubmit:(BOOL)arg3;
- (id)initWithFileManager:(id)arg1 delegate:(id)arg2;
- (BOOL)installCrashReportingHandlers:(CDStruct_1e2a2a70 *)arg1;
- (id)installIdentifier;
- (id)launchFailureMarkerPath;
- (BOOL)launchFailureMarkerPresent;
- (unsigned int)machExceptionMask;
- (BOOL)needsToPrompt;
@property(retain, nonatomic) CLSNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
- (void)networkClient:(id)arg1 didFinishUploadWithPath:(id)arg2 error:(id)arg3;
- (BOOL)networkClientCanUseBackgroundSessions:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (BOOL)packagingEnabled;
- (BOOL)potentiallySubmittableCrashOccurred;
- (BOOL)prepareForNewLaunch;
- (void)processExistingActiveReportPath:(id)arg1 asUrgent:(BOOL)arg2;
- (void)processExistingReportPaths:(id)arg1 asUrgent:(BOOL)arg2;
- (void)registerAnalyticsEventListener;
- (BOOL)removeLaunchFailureMarker;
- (void)removeReport:(id)arg1;
@property(readonly, nonatomic) CLSReportsController *reportsController;
- (void)reportsController:(id)arg1 didCompletePackageSubmission:(id)arg2 error:(id)arg3;
- (void)reportsControllerDidCompleteAllSubmissions:(id)arg1;
- (void)retryUploadForReportAtPath:(id)arg1;
- (id)settings;
- (id)settingsForReportsController:(id)arg1;
- (void)setupAndDisplayAlertWithTitle:(id)arg1 message:(id)arg2 cancel:(id)arg3 send:(id)arg4 alwaysSend:(id)arg5 report:(id)arg6;
- (id)setupCurrentReport;
- (void)setupStateNotifications;
- (BOOL)startCrashReporterWithAPIKey:(id)arg1 betaToken:(id)arg2 profilingMark:(unsigned long long)arg3 report:(id)arg4;
- (BOOL)startWithProfilingMark:(unsigned long long)arg1 betaToken:(id)arg2;
- (void)uploadPreexistingFiles:(id)arg1;
- (void)willBecomeActive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

