//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LeScannerConnection;

@interface LEScannerCachedConnections : NSObject
{
    LeScannerConnection *_mainConnection;
}

- (void).cxx_destruct;
- (BOOL)hasCachedConnectionWithUUID:(id)arg1;
@property(retain, nonatomic) LeScannerConnection *mainConnection; // @synthesize mainConnection=_mainConnection;
- (void)removeAllCachedConnections;
- (void)removeCachedConnectionWithUUID:(id)arg1;

@end

