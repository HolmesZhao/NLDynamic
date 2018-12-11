//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface NearLockViewState : NSObject
{
    NSString *_deviceId;
    NSNumber *_hasTrackingDevice;
    NSNumber *_connectionState;
    NSNumber *_userIsLoggedIn;
    NSNumber *_shouldTrackMobileDevice;
    NSNumber *_nearLockTemporarilyDisabled;
    NSNumber *_trackingDistance;
    NSString *_trackingDistanceText;
    NSNumber *_nearLockLoading;
    NSNumber *_fastLockLoading;
    NSNumber *_metric;
    NSNumber *_showInfoButton;
    NSString *_macDeviceName;
    NSNumber *_macDeviceType;
    NSNumber *_macLidIsClosedAndThereIsNoExternalMonitor;
    NSNumber *_distanceBetweenIPhoneAndMac;
    NSString *_metricDistanceText;
    NSNumber *_appIsProVersionOrInForeground;
    NSNumber *_minRSSIValue;
    NSNumber *_maxRSSIValue;
    NSString *_language;
    NSNumber *_deviceIsLocked;
    NSNumber *_todayExtensionAllowLoginLogout;
    NSNumber *_todayExtensionAllowNearLockUpdate;
    NSNumber *_todayExtensionRequestAuthOnLockedDevice;
    NSNumber *_canReachClipboard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *appIsProVersionOrInForeground; // @synthesize appIsProVersionOrInForeground=_appIsProVersionOrInForeground;
@property(retain, nonatomic) NSNumber *canReachClipboard; // @synthesize canReachClipboard=_canReachClipboard;
@property(retain, nonatomic) NSNumber *connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSNumber *deviceIsLocked; // @synthesize deviceIsLocked=_deviceIsLocked;
@property(retain, nonatomic) NSNumber *distanceBetweenIPhoneAndMac; // @synthesize distanceBetweenIPhoneAndMac=_distanceBetweenIPhoneAndMac;
@property(retain, nonatomic) NSNumber *fastLockLoading; // @synthesize fastLockLoading=_fastLockLoading;
@property(retain, nonatomic) NSNumber *hasTrackingDevice; // @synthesize hasTrackingDevice=_hasTrackingDevice;
- (BOOL)isSameAsState:(id)arg1;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *macDeviceName; // @synthesize macDeviceName=_macDeviceName;
@property(retain, nonatomic) NSNumber *macDeviceType; // @synthesize macDeviceType=_macDeviceType;
@property(retain, nonatomic) NSNumber *macLidIsClosedAndThereIsNoExternalMonitor; // @synthesize macLidIsClosedAndThereIsNoExternalMonitor=_macLidIsClosedAndThereIsNoExternalMonitor;
@property(retain, nonatomic) NSNumber *maxRSSIValue; // @synthesize maxRSSIValue=_maxRSSIValue;
@property(retain, nonatomic) NSNumber *metric; // @synthesize metric=_metric;
@property(retain, nonatomic) NSString *metricDistanceText; // @synthesize metricDistanceText=_metricDistanceText;
@property(retain, nonatomic) NSNumber *minRSSIValue; // @synthesize minRSSIValue=_minRSSIValue;
@property(retain, nonatomic) NSNumber *nearLockLoading; // @synthesize nearLockLoading=_nearLockLoading;
@property(retain, nonatomic) NSNumber *nearLockTemporarilyDisabled; // @synthesize nearLockTemporarilyDisabled=_nearLockTemporarilyDisabled;
@property(retain, nonatomic) NSNumber *shouldTrackMobileDevice; // @synthesize shouldTrackMobileDevice=_shouldTrackMobileDevice;
@property(retain, nonatomic) NSNumber *showInfoButton; // @synthesize showInfoButton=_showInfoButton;
@property(retain, nonatomic) NSNumber *todayExtensionAllowLoginLogout; // @synthesize todayExtensionAllowLoginLogout=_todayExtensionAllowLoginLogout;
@property(retain, nonatomic) NSNumber *todayExtensionAllowNearLockUpdate; // @synthesize todayExtensionAllowNearLockUpdate=_todayExtensionAllowNearLockUpdate;
@property(retain, nonatomic) NSNumber *todayExtensionRequestAuthOnLockedDevice; // @synthesize todayExtensionRequestAuthOnLockedDevice=_todayExtensionRequestAuthOnLockedDevice;
@property(retain, nonatomic) NSNumber *trackingDistance; // @synthesize trackingDistance=_trackingDistance;
@property(retain, nonatomic) NSString *trackingDistanceText; // @synthesize trackingDistanceText=_trackingDistanceText;
@property(retain, nonatomic) NSNumber *userIsLoggedIn; // @synthesize userIsLoggedIn=_userIsLoggedIn;

@end

