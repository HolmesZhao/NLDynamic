//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class DDHotKey, DDHotKeyTextField;

@interface DDHotKeyTextFieldEditor : NSTextView
{
    BOOL _hasSeenKeyDown;
    id _globalMonitor;
    DDHotKey *_originalHotKey;
    DDHotKeyTextField *_hotKeyField;
}

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
@property(nonatomic) __weak DDHotKeyTextField *hotKeyField; // @synthesize hotKeyField=_hotKeyField;
- (void)processHotkeyEvent:(id)arg1;
- (BOOL)resignFirstResponder;

@end

