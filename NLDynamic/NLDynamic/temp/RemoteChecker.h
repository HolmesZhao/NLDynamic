//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EventAutomaticTriggererDelegate.h"
#import "RemoteConfigFetchDelegate.h"

@class ConfigFile, EventAutomaticTriggerer, NSString, RemoteConfigFetch;

@interface RemoteChecker : NSObject <EventAutomaticTriggererDelegate, RemoteConfigFetchDelegate>
{
    EventAutomaticTriggerer *_automaticTrigger;
    RemoteConfigFetch *_configFetch;
    ConfigFile *_configFile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EventAutomaticTriggerer *automaticTrigger; // @synthesize automaticTrigger=_automaticTrigger;
@property(retain, nonatomic) RemoteConfigFetch *configFetch; // @synthesize configFetch=_configFetch;
@property(retain, nonatomic) ConfigFile *configFile; // @synthesize configFile=_configFile;
- (BOOL)didFetchConfigAtLeastOnce;
- (void)eventAutomaticTriggererShouldCheckUpdate:(id)arg1;
- (void)fetchConfigWhenPossible;
- (id)fetchedConfig;
- (id)init;
- (void)remoteConfigFetch:(id)arg1 didFaileToFetchConfigWithError:(id)arg2;
- (void)remoteConfigFetch:(id)arg1 didFetchDict:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

