//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AuthPayload : NSObject
{
    NSString *_protocolVersion;
    NSString *_identifier;
    NSString *_challenge;
    NSString *_challengeResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) NSString *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithVersion:(id)arg1 identifier:(id)arg2 challenge:(id)arg3 solution:(id)arg4;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;

@end

