//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ListCellViewModel.h"

@interface SliderCellVM : ListCellViewModel
{
    int _minValue;
    int _maxValue;
    int _currentValue;
    CDUnknownBlockType _textValueFunc;
    CDUnknownBlockType _didUpdate;
}

- (void).cxx_destruct;
@property(nonatomic) int currentValue; // @synthesize currentValue=_currentValue;
@property(copy) CDUnknownBlockType didUpdate; // @synthesize didUpdate=_didUpdate;
@property(nonatomic) int maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) int minValue; // @synthesize minValue=_minValue;
@property(copy) CDUnknownBlockType textValueFunc; // @synthesize textValueFunc=_textValueFunc;

@end

