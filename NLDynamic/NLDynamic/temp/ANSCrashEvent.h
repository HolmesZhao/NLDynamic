//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANSEvent.h"

@class NSDate;

@interface ANSCrashEvent : ANSEvent
{
    NSDate *_crashTimestamp;
    unsigned long long _crashState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long crashState; // @synthesize crashState=_crashState;
@property(retain, nonatomic) NSDate *crashTimestamp; // @synthesize crashTimestamp=_crashTimestamp;
- (id)dictionaryRepresentation;
- (id)initWithTimestamp:(id)arg1 crashState:(unsigned long long)arg2;
- (id)name;
- (id)payloadStringForCrashState:(unsigned long long)arg1;
- (id)timestamp;

@end

