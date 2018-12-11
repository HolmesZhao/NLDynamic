//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface DSLogger : NSObject
{
    NSObject<OS_dispatch_queue> *serialQueue;
    NSMutableArray *buffer;
    unsigned int startIndex;
    unsigned int count;
    NSDate *_lastUpdatedAt;
}

+ (void)initialize;
+ (void)logFromFunction:(id)arg1 withInfo:(id)arg2;
+ (id)sharedLogger;
- (void).cxx_destruct;
- (id)buffer;
- (void)dealloc;
- (void)doLogFromFunction:(id)arg1 withInfo:(id)arg2 timeStamp:(id)arg3;
- (id)init;
@property(retain) NSDate *lastUpdatedAt; // @synthesize lastUpdatedAt=_lastUpdatedAt;
- (void)logFromFunction:(id)arg1 withInfo:(id)arg2;

@end
