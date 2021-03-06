//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface iOSPreferences : NSObject <NSCoding>
{
    NSNumber *_chosenMetric;
    NSNumber *_onApproachAuthMethod;
    NSNumber *_isProVersion;
    NSString *_language;
    NSNumber *_iOSapplicationState;
    NSNumber *_iOSallowNotificationLogin;
    NSString *_iOSPushId;
    NSString *_iOSSystemVersion;
    NSString *_iOSVersion;
    NSNumber *_useMotionTracking;
    NSNumber *_iOSCharging;
    NSNumber *_batteryPercent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *batteryPercent; // @synthesize batteryPercent=_batteryPercent;
@property(retain, nonatomic) NSNumber *chosenMetric; // @synthesize chosenMetric=_chosenMetric;
- (id)customCopy;
- (void)decodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSNumber *iOSCharging; // @synthesize iOSCharging=_iOSCharging;
@property(retain, nonatomic) NSString *iOSPushId; // @synthesize iOSPushId=_iOSPushId;
@property(retain, nonatomic) NSString *iOSSystemVersion; // @synthesize iOSSystemVersion=_iOSSystemVersion;
@property(retain, nonatomic) NSString *iOSVersion; // @synthesize iOSVersion=_iOSVersion;
@property(retain, nonatomic) NSNumber *iOSallowNotificationLogin; // @synthesize iOSallowNotificationLogin=_iOSallowNotificationLogin;
@property(retain, nonatomic) NSNumber *iOSapplicationState; // @synthesize iOSapplicationState=_iOSapplicationState;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSNumber *isProVersion; // @synthesize isProVersion=_isProVersion;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSNumber *onApproachAuthMethod; // @synthesize onApproachAuthMethod=_onApproachAuthMethod;
- (void)setDefaultValues;
@property(retain, nonatomic) NSNumber *useMotionTracking; // @synthesize useMotionTracking=_useMotionTracking;
- (void)updateModelUpdateForNewVersion;

@end

