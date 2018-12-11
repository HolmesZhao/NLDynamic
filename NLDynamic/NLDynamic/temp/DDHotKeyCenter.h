//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface DDHotKeyCenter : NSObject
{
    NSMutableSet *_registeredHotKeys;
    unsigned int _nextHotKeyID;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedHotKeyCenter;
- (void).cxx_destruct;
- (id)_registerHotKey:(id)arg1;
- (BOOL)hasRegisteredHotKeyWithKeyCode:(unsigned short)arg1 modifierFlags:(unsigned long long)arg2;
- (id)hotKeysMatching:(CDUnknownBlockType)arg1;
- (id)init;
- (id)registerHotKey:(id)arg1;
- (id)registerHotKeyWithKeyCode:(unsigned short)arg1 modifierFlags:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 object:(id)arg5;
- (id)registerHotKeyWithKeyCode:(unsigned short)arg1 modifierFlags:(unsigned long long)arg2 task:(CDUnknownBlockType)arg3;
- (id)registeredHotKeys;
- (void)unregisterAllHotKeys;
- (void)unregisterHotKey:(id)arg1;
- (void)unregisterHotKeyWithKeyCode:(unsigned short)arg1 modifierFlags:(unsigned long long)arg2;
- (void)unregisterHotKeysMatching:(CDUnknownBlockType)arg1;
- (void)unregisterHotKeysWithTarget:(id)arg1;
- (void)unregisterHotKeysWithTarget:(id)arg1 action:(SEL)arg2;

@end
