//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANSUploaderDelegate.h"

@class ANSCrashMetadata, ANSEventFilter, ANSFirebaseAnalyticsBridge, ANSMetadata, ANSNetworkRetryHandler, ANSSettings, ANSTimer, ANSUploader, NSOperationQueue, NSString, NSURL;

@interface ANSAnswersController : NSObject <ANSUploaderDelegate>
{
    NSOperationQueue *_eventQueue;
    NSString *_rootEventDirectory;
    ANSMetadata *_metadata;
    ANSCrashMetadata *_previousExecutionMetadata;
    ANSUploader *_uploader;
    ANSNetworkRetryHandler *_networkRetryHandler;
    NSURL *_currentLogURL;
    ANSEventFilter *_eventFilter;
    ANSSettings *_settings;
    ANSTimer *_flushTimer;
    ANSFirebaseAnalyticsBridge *_firebaseAnalyticsBridge;
}

+ (id)rootDirectory;
- (void).cxx_destruct;
- (void)applicationLifecycleEvent:(id)arg1;
- (id)boundaryFromURL:(id)arg1;
- (void)cleanupAndProcessExistingFiles;
- (id)crashMetadataPathForRootDirectory:(id)arg1;
@property(readonly, nonatomic) NSURL *currentLogURL; // @synthesize currentLogURL=_currentLogURL;
- (void)enqueueEvent:(id)arg1;
- (id)eventDirectoryForRootDirectory:(id)arg1;
@property(readonly, nonatomic) ANSEventFilter *eventFilter; // @synthesize eventFilter=_eventFilter;
@property(readonly, nonatomic) NSOperationQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void)fabricSettingsDidBecomeAvailable:(id)arg1;
@property(readonly, nonatomic) ANSFirebaseAnalyticsBridge *firebaseAnalyticsBridge; // @synthesize firebaseAnalyticsBridge=_firebaseAnalyticsBridge;
@property(readonly, nonatomic) ANSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
- (void)flushTimerFired;
- (id)generateNewLogPath;
- (id)initWithBetaToken:(id)arg1;
- (id)initWithBetaToken:(id)arg1 rootDirectory:(id)arg2;
- (void)initializeSettingsIfNeededWithFabricSettings:(id)arg1;
- (void)logCrashEvent:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)logEventToFirebase:(id)arg1;
@property(readonly, nonatomic) ANSMetadata *metadata; // @synthesize metadata=_metadata;
- (id)multipartMimeURLWithBoundary:(id)arg1;
@property(readonly, nonatomic) ANSNetworkRetryHandler *networkRetryHandler; // @synthesize networkRetryHandler=_networkRetryHandler;
- (id)operationsForCompressedLog:(id)arg1;
- (id)operationsForUncompressedLog:(id)arg1;
@property(readonly, nonatomic) ANSCrashMetadata *previousExecutionMetadata; // @synthesize previousExecutionMetadata=_previousExecutionMetadata;
- (void)registerForApplicationLifecycleEvents;
- (void)removeAllLogs;
- (id)replacePreviousExecutionMetadataWithCurrentMetadata:(id)arg1 inRootDirectory:(id)arg2;
@property(readonly, nonatomic) NSString *rootEventDirectory; // @synthesize rootEventDirectory=_rootEventDirectory;
- (void)rotateAndSubmitCurrentLog;
@property(readonly, nonatomic) ANSSettings *settings; // @synthesize settings=_settings;
- (void)setupFlushTimer;
- (id)sharedFabricSDK;
- (BOOL)shouldLogEvent;
- (BOOL)shouldSubmitLogAtURL:(id)arg1;
- (void)uploadAllMultipartFiles;
- (void)uploadMultipartFiles:(id)arg1;
- (id)uploadOperationForFileAtURL:(id)arg1 withBoundary:(id)arg2;
@property(readonly, nonatomic) ANSUploader *uploader; // @synthesize uploader=_uploader;
- (void)uploader:(id)arg1 completedRequest:(id)arg2 withResponse:(id)arg3 uniqueName:(id)arg4 error:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)uploader:(id)arg1 didFinishUploadWithUniqueName:(id)arg2 error:(id)arg3;
- (id)uploader:(id)arg1 filePathForUniqueName:(id)arg2;
- (void)uploader:(id)arg1 session:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)uploaderWithQueue:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

