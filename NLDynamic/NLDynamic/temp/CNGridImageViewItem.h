//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNGridViewItem.h"

@class NSImage, NSString;

@interface CNGridImageViewItem : CNGridViewItem
{
    NSImage *_itemImage;
    NSString *_itemTitle;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)initDefaultContent;
- (void)initProperties;
@property(retain) NSImage *itemImage; // @synthesize itemImage=_itemImage;
@property(retain) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
- (void)prepareForReuse;

@end
