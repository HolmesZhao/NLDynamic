//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ANSLogger : NSObject
{
    BOOL _debugMode;
}

+ (id)sharedLogger;
@property(nonatomic) BOOL debugMode; // @synthesize debugMode=_debugMode;
- (void)internalLog:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (void)log:(id)arg1;
- (void)logWithLabel:(id)arg1 format:(id)arg2;

@end
