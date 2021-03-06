//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class ANSEvent, NSString, NSURL;

@interface ANSWriteEventOperation : NSOperation
{
    BOOL _success;
    ANSEvent *_event;
    id <ANSMetadataSerializable> _metadata;
    NSURL *_logFileUrl;
    NSString *_formattedEvent;
    NSString *_formattedMetadata;
}

- (void).cxx_destruct;
- (BOOL)appendLogLine:(id)arg1 toFileDescriptor:(int)arg2;
@property(retain, nonatomic) ANSEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSString *formattedEvent; // @synthesize formattedEvent=_formattedEvent;
@property(retain, nonatomic) NSString *formattedMetadata; // @synthesize formattedMetadata=_formattedMetadata;
- (id)generateFormattedLogLineWithEvent:(id)arg1;
- (id)generateFormattedLogLineWithMetdata:(id)arg1 timestamp:(id)arg2;
- (id)initWithEvent:(id)arg1 metadata:(id)arg2 logFileUrl:(id)arg3;
@property(retain, nonatomic) NSURL *logFileUrl; // @synthesize logFileUrl=_logFileUrl;
- (id)logLineWithTimestamp:(id)arg1 eventName:(id)arg2 payloadDictionary:(id)arg3;
- (void)main;
@property(readonly, nonatomic) id <ANSMetadataSerializable> metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL success; // @synthesize success=_success;
- (BOOL)writeDataToDescriptor:(int)arg1 withPreexistingFile:(BOOL)arg2;

@end

