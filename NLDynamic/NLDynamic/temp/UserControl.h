//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UserControl : NSObject
{
}

+ (BOOL)checkIfPassword:(id)arg1 validForUserName:(id)arg2;
+ (BOOL)checkIfPasswordValidForCurrentUser:(id)arg1;
+ (BOOL)doesUserExistWithUsername:(id)arg1;
+ (id)fullName;
+ (id)getAllMacCBUserIdentities;
+ (id)getAllMacUsers;
+ (id)getCurrentLogedInUsername;
+ (id)getUserImageForUserName:(id)arg1;
+ (id)getUserWithUserName:(id)arg1;
+ (BOOL)isUserWithUserNameInControl:(id)arg1;
+ (void)prepareUserControl;
+ (id)retreiveAllMacCBUserIdentitiesFromSystem;
+ (id)serialNumber;
+ (void)switchToUser:(id)arg1;
+ (void)switchToUserWithUserName:(id)arg1;
+ (id)userImage;
+ (BOOL)userWithUserNameIsEnabled:(id)arg1;
- (id)JSONString:(id)arg1;
- (void)test;

@end
