//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class FinishPreviewController, NSButton, NSTextField, NSView;

@interface FinishViewController : BaseViewController
{
    id <FinishViewControllerDelegate> _delegate;
    NSTextField *_textLabel;
    NSTextField *_titleTextField;
    NSTextField *_shareLabel;
    NSButton *_finishButton;
    NSButton *_facebookButton;
    NSButton *_twitterButton;
    NSView *_finishPreview;
    FinishPreviewController *_finishPreviewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FinishViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSButton *facebookButton; // @synthesize facebookButton=_facebookButton;
- (void)facebookToggled:(id)arg1;
@property(retain, nonatomic) NSButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) NSView *finishPreview; // @synthesize finishPreview=_finishPreview;
@property(retain, nonatomic) FinishPreviewController *finishPreviewController; // @synthesize finishPreviewController=_finishPreviewController;
- (void)finishToggled:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) NSTextField *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) NSTextField *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSButton *twitterButton; // @synthesize twitterButton=_twitterButton;
- (void)twitterToggled:(id)arg1;
- (void)updateStrings;
- (void)updateView;

@end

