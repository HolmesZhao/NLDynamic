//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNGridView, CNGridViewItem, NSArray, NSString;

@protocol CNGridViewDataSource <NSObject>
- (CNGridViewItem *)gridView:(CNGridView *)arg1 itemAtIndex:(long long)arg2 inSection:(long long)arg3;
- (unsigned long long)gridView:(CNGridView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (NSString *)gridView:(CNGridView *)arg1 titleForHeaderInSection:(long long)arg2;
- (unsigned long long)numberOfSectionsInGridView:(CNGridView *)arg1;
- (NSArray *)sectionIndexTitlesForGridView:(CNGridView *)arg1;
@end
