//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Bluetooth : NSObject
{
    BOOL _bluetoothState;
}

+ (BOOL)bluetoothIsOn;
+ (BOOL)bluetoothLESupported;
+ (BOOL)isRestartingBluetooth;
+ (int)lastBluetoothRestartTimestamp;
+ (void)offCompletion;
+ (void)onCompletion;
+ (void)performCheckAndCacheBluetoothLESupportedInBackground;
+ (void)restartBluetoothIfOn;
+ (void)restartBluetoothIfOnWithCompletion:(CDUnknownBlockType)arg1;
+ (id)shared;
+ (void)turnBluetoothOff;
+ (void)turnBluetoothOffWithCompletion:(CDUnknownBlockType)arg1;
+ (void)turnBluetoothOn;
+ (void)turnBluetoothOnWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL bluetoothState; // @synthesize bluetoothState=_bluetoothState;
- (void)postNotification;
- (void)repeatUntilBluetoothOff;
- (void)repeatUntilBluetoothOn;
- (void)turnBluetoothOnAfterDelay;
- (void)turnBluetoothOnMethod;

@end
