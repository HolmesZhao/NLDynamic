//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface LaptopLidEvidenceSource : NSObject
{
    NSObject<OS_dispatch_queue> *serialQueue;
    struct IONotificationPort *notifyPort;
    unsigned int notification;
    int _laptopLidState;
}

+ (BOOL)ifLidIsClosed;
+ (BOOL)laptopLidIsClosed;
+ (int)laptopLidState;
+ (id)shared;
- (void).cxx_destruct;
- (void)didUpdateLidStateInternalNotification;
- (id)init;
@property(nonatomic) int laptopLidState; // @synthesize laptopLidState=_laptopLidState;
- (BOOL)startTrackingLaptopLidChanges;
- (void)stopTrackingLaptopLidChanges;

@end

