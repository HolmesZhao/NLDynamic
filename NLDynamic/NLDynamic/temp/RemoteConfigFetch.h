//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RemoteConfigFetch : NSObject
{
    id <RemoteConfigFetchDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RemoteConfigFetchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didFetchDictionary:(id)arg1;
- (void)fetchConfigFileWithURLString:(id)arg1;
- (void)fetchConfigFileWithURLString:(id)arg1 withDelegate:(id)arg2;

@end
