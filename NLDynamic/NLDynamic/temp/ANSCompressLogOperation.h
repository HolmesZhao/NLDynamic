//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSURL;

@interface ANSCompressLogOperation : NSOperation
{
    NSURL *_uncompressedLogURL;
    NSURL *_compressedLogURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *compressedLogURL; // @synthesize compressedLogURL=_compressedLogURL;
- (id)compressedURLForUncompressedURL:(id)arg1;
- (id)initWithUncompressedLogURL:(id)arg1 compressedLogURL:(id)arg2;
- (void)main;
@property(retain, nonatomic) NSURL *uncompressedLogURL; // @synthesize uncompressedLogURL=_uncompressedLogURL;

@end

