//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ANSEventFilter : NSObject
{
}

+ (int)javaHashCodeForString:(id)arg1;
- (BOOL)samplingEnabledForEventType:(id)arg1;
- (BOOL)shouldDiscardEvent:(id)arg1 betaToken:(id)arg2 installationID:(id)arg3 withFactor:(long long)arg4;
- (BOOL)shouldDiscardEventWithInstallationID:(id)arg1 forSamplingFactor:(long long)arg2;

@end

