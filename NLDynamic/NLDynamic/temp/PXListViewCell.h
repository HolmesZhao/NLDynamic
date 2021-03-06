//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString, PXListView;

@interface PXListViewCell : NSView
{
    BOOL _selectionIsDisabled;
    unsigned long long _dropHighlight;
    PXListView *_listView;
    NSString *_reusableIdentifier;
    unsigned long long _row;
}

+ (id)cellLoadedFromNibNamed:(id)arg1 bundle:(id)arg2 reusableIdentifier:(id)arg3;
+ (id)cellLoadedFromNibNamed:(id)arg1 reusableIdentifier:(id)arg2;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (void)dealloc;
- (void)didUpdateSelection;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) unsigned long long dropHighlight; // @synthesize dropHighlight=_dropHighlight;
- (id)initWithCoder:(id)arg1;
- (id)initWithReusableIdentifier:(id)arg1;
@property(readonly, getter=isSelected) BOOL selected;
- (void)layoutSubviews;
@property(nonatomic) PXListView *listView; // @synthesize listView=_listView;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseUp:(id)arg1;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *reusableIdentifier; // @synthesize reusableIdentifier=_reusableIdentifier;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) BOOL selectionIsDisabled; // @synthesize selectionIsDisabled=_selectionIsDisabled;
- (void)updateSelectionColor;

@end

