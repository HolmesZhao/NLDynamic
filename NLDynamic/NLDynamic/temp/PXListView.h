//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class NSButton, NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface PXListView : NSScrollView
{
    id <PXListViewDelegate> _delegate;
    NSMutableArray *_reusableCells;
    NSMutableArray *_visibleCells;
    struct _NSRange _currentRange;
    unsigned long long _numberOfRows;
    NSMutableIndexSet *_selectedRows;
    struct _NSRange _visibleRange;
    double _totalHeight;
    double *_cellYOffsets;
    double _cellSpacing;
    BOOL _allowsEmptySelection;
    BOOL _allowsMultipleSelection;
    long long _lastSelectedRow;
    BOOL _verticalMotionCanBeginDrag;
    BOOL _usesLiveResize;
    double _widthPriorToResize;
    unsigned long long _dropRow;
    unsigned long long _dropHighlight;
    BOOL _isScrollToTopDisabled;
    BOOL _isScrollToTopShown;
    NSButton *_scrollToTopButton;
}

- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)addCellsFromVisibleRange;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (void)cacheCellLayout;
- (void)cacheLayout;
- (BOOL)canBecomeKeyView;
- (id)cellForDropHighlight:(unsigned long long *)arg1 row:(unsigned long long *)arg2;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;
- (void)concludeDragOperation:(id)arg1;
- (void)contentViewBoundsDidChange:(id)arg1;
- (struct CGRect)contentViewRect;
- (void)dealloc;
@property(nonatomic) id <PXListViewDelegate> delegate;
- (id)dequeueCellWithReusableIdentifier:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)deselectRowIndexes:(id)arg1;
- (void)deselectRows;
- (id)dragImageForRowsWithIndexes:(id)arg1 event:(id)arg2 clickedCell:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)enqueueCell:(id)arg1;
- (void)handleMouseDown:(id)arg1 inCell:(id)arg2;
- (void)handleMouseDownOutsideCells:(id)arg1;
- (void)hideScrollToTopButton;
- (unsigned long long)indexOfRowAtPoint:(struct CGPoint)arg1 returningProposedDropHighlight:(unsigned long long *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;
@property(nonatomic) BOOL isScrollToTopDisabled; // @synthesize isScrollToTopDisabled=_isScrollToTopDisabled;
@property(nonatomic) BOOL isScrollToTopShown; // @synthesize isScrollToTopShown=_isScrollToTopShown;
- (void)keyDown:(id)arg1;
- (void)layoutCell:(id)arg1 atRow:(unsigned long long)arg2;
- (void)layoutCells;
- (void)layoutCellsForResizeEvent;
- (BOOL)mouseDownCanMoveWindow;
- (void)moveDown:(id)arg1;
- (void)moveDownPositions:(unsigned long long)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpPositions:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (BOOL)performDragOperation:(id)arg1;
- (void)postSelectionDidChangeNotification;
- (struct CGRect)rectOfRow:(unsigned long long)arg1;
- (void)reloadData:(CDUnknownBlockType)arg1;
- (void)reloadRowAtIndex:(long long)arg1;
- (BOOL)resignFirstResponder;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)scrollRowToVisible:(unsigned long long)arg1;
- (void)scrollToRow:(unsigned long long)arg1;
- (void)scrollToTop;
@property(retain, nonatomic) NSButton *scrollToTopButton; // @synthesize scrollToTopButton=_scrollToTopButton;
- (void)scrollToYPositionAnimated:(float)arg1;
- (void)selectAll:(id)arg1;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
@property(nonatomic) unsigned long long selectedRow;
@property(retain, nonatomic) NSIndexSet *selectedRows;
- (void)setDropRow:(unsigned long long)arg1 dropHighlight:(unsigned long long)arg2;
- (void)setShowsDropHighlight:(BOOL)arg1;
@property(nonatomic) BOOL usesLiveResize; // @synthesize usesLiveResize=_usesLiveResize;
@property(nonatomic) BOOL verticalMotionCanBeginDrag; // @synthesize verticalMotionCanBeginDrag=_verticalMotionCanBeginDrag;
- (void)showScrollToTopButton;
- (void)updateCells;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (id)visibleCellForRow:(unsigned long long)arg1;
- (id)visibleCells;
- (id)visibleCellsForRowIndexes:(id)arg1;
- (struct _NSRange)visibleRange;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)windowSizing:(id)arg1;

@end

