//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSButton, NSTextField;

@interface MacControllerTrackTutorialView : BaseViewController
{
    id <MacControllerTrackTutorialViewDelegate> _delegate;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSTextField *_imageTitle;
    NSTextField *_firstDescriptionLabel;
    NSTextField *_secondDescriptionLabel;
    NSTextField *_thirdDescriptionLabel;
    NSTextField *_fourthDescriptionLabel;
    NSTextField *_fifthDescriptionLabel;
    NSTextField *_filterLabel;
    NSButton *_showButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MacControllerTrackTutorialViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSTextField *fifthDescriptionLabel; // @synthesize fifthDescriptionLabel=_fifthDescriptionLabel;
@property(retain, nonatomic) NSTextField *filterLabel; // @synthesize filterLabel=_filterLabel;
@property(retain, nonatomic) NSTextField *firstDescriptionLabel; // @synthesize firstDescriptionLabel=_firstDescriptionLabel;
@property(retain, nonatomic) NSTextField *fourthDescriptionLabel; // @synthesize fourthDescriptionLabel=_fourthDescriptionLabel;
@property(retain, nonatomic) NSTextField *imageTitle; // @synthesize imageTitle=_imageTitle;
- (void)previousToggled:(id)arg1;
@property(retain, nonatomic) NSTextField *secondDescriptionLabel; // @synthesize secondDescriptionLabel=_secondDescriptionLabel;
@property(retain, nonatomic) NSButton *showButton; // @synthesize showButton=_showButton;
@property(retain, nonatomic) NSTextField *thirdDescriptionLabel; // @synthesize thirdDescriptionLabel=_thirdDescriptionLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)showToggled:(id)arg1;
- (void)updateStrings;
- (void)viewDidLoad;

@end

