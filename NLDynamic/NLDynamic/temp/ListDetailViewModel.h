//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseViewController, NLWindowController;

@interface ListDetailViewModel : NSObject
{
    BaseViewController *_baseController;
    NLWindowController *_windowController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseViewController *baseController; // @synthesize baseController=_baseController;
- (id)initWithTitle:(id)arg1 controller:(id)arg2;
- (id)initWithTitle:(id)arg1 list:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mainView;
- (BOOL)performCustomActionOnBackButtonToggled;
@property(retain, nonatomic) NLWindowController *windowController; // @synthesize windowController=_windowController;
- (id)titleDescriptionText;
- (void)updateShownView;

@end

