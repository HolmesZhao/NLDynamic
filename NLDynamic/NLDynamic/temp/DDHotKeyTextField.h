//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class DDHotKey;

@interface DDHotKeyTextField : NSTextField
{
    DDHotKey *_hotKey;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) DDHotKey *hotKey; // @synthesize hotKey=_hotKey;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end

