//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface CLSCodeMapping : NSObject
{
    int _source;
    NSURL *_URL;
    NSString *_sourceName;
}

+ (id)mappingWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithURL:(id)arg1;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;

@end

