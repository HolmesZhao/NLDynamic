//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NearLockListViewCell.h"

#import "NearLockListViewCellProtocol.h"

@class NLButton3, NSString;

@interface SimpleButtonCell : NearLockListViewCell <NearLockListViewCellProtocol>
{
    NLButton3 *_customButton;
}

+ (double)cellHeight;
+ (id)nibName;
- (void).cxx_destruct;
- (void)buttonToggled:(id)arg1;
@property(retain, nonatomic) NLButton3 *customButton; // @synthesize customButton=_customButton;
- (void)prepareForReuse;
- (void)updateCellForCellViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

