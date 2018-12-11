//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface FABIcon : NSObject
{
    BOOL _prerendered;
    NSData *_data;
    NSString *_dataHash;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *dataHash; // @synthesize dataHash=_dataHash;
- (id)initWithData:(id)arg1 dataHash:(id)arg2 size:(struct CGSize)arg3 prerendered:(BOOL)arg4;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2 prerendered:(BOOL)arg3;
- (id)initWithImage:(id)arg1;
@property(readonly, nonatomic) BOOL isWithinMaxSurfaceArea;
- (BOOL)largerThanSize:(struct CGSize)arg1;
@property(nonatomic) BOOL prerendered; // @synthesize prerendered=_prerendered;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double surfaceArea;

@end
