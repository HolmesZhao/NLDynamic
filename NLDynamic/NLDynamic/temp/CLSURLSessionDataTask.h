//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLSURLSessionTask.h"

#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSString, NSURLConnection;

@interface CLSURLSessionDataTask : CLSURLSessionTask <NSURLConnectionDelegate>
{
    CDUnknownBlockType _completionHandler;
    NSURLConnection *_connection;
    NSMutableData *_data;
    NSString *_taskDescription;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)complete;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)resume;
@property(copy, nonatomic) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

