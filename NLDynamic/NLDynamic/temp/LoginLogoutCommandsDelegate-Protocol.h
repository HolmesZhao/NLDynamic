//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LoginLogoutExecution, NSString;

@protocol LoginLogoutCommandsDelegate <NSObject>
- (void)loginLogoutCommands:(LoginLogoutExecution *)arg1 canNotLoginWithPassword:(NSString *)arg2;
- (void)loginLogoutCommands:(LoginLogoutExecution *)arg1 didUpdateState:(int)arg2;
- (void)loginLogoutCommandsCommandFailed:(LoginLogoutExecution *)arg1;
- (void)loginLogoutCommandsDidInsertPassword:(LoginLogoutExecution *)arg1;
@end

