//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NearLockListViewCell.h"

@class NSTextField;

@interface TrackEventCell : NearLockListViewCell
{
    NSTextField *_dateText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *dateText; // @synthesize dateText=_dateText;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateCellForCellViewModel:(id)arg1;

@end

