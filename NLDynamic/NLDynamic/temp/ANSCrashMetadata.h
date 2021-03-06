//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANSMetadataSerializable.h"

@class NSDictionary, NSString;

@interface ANSCrashMetadata : NSObject <ANSMetadataSerializable>
{
    NSDictionary *_rawMetadataDictionary;
}

+ (id)readSerializedDictionaryFromURL:(id)arg1;
+ (BOOL)writeSerializedDictionary:(id)arg1 toURL:(id)arg2;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithStartTime:(unsigned long long)arg1;
- (id)eventName;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *rawMetadataDictionary; // @synthesize rawMetadataDictionary=_rawMetadataDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

