//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (PerformBlockAfterDelay)
+ (void)fireStaticBlockAfterDelay:(CDUnknownBlockType)arg1;
+ (void)performStaticAfterDelay:(double)arg1 staticBlock:(CDUnknownBlockType)arg2;
+ (void)performStaticBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)fireBlockAfterDelay:(CDUnknownBlockType)arg1;
- (void)performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
@end

