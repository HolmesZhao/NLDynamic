//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SecurityAgentListener;

@protocol SecurityAgentListenerDelegate <NSObject>
- (void)nearLockDidChange:(SecurityAgentListener *)arg1;
- (void)securitAgentDidChange:(SecurityAgentListener *)arg1;
- (void)systemPreferancesDidChange:(SecurityAgentListener *)arg1;
@end

