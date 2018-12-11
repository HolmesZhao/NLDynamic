//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface FailedLoginAttemptListener : NSObject
{
    id <FailedLoginAttemptListenerDelegate> _delegate;
    NSTimer *_timerToCheckIfLoginSucceded;
}

- (void).cxx_destruct;
- (void)checkIfLoginFailedAttempt;
@property(nonatomic) __weak id <FailedLoginAttemptListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDetectLoginFileChanges;
- (id)fileLocationForLoginAttempt;
- (id)init;
@property(retain, nonatomic) NSTimer *timerToCheckIfLoginSucceded; // @synthesize timerToCheckIfLoginSucceded=_timerToCheckIfLoginSucceded;
- (void)startLoginCheckTimer;
- (void)startObservingFailedLoginAttempts;

@end

