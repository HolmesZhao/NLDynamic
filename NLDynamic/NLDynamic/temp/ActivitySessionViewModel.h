//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PresentationEntry.h"

@class NSDate;

@interface ActivitySessionViewModel : PresentationEntry
{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _startDateInMinutesOfDay;
    long long _endDateInMinutesOfDay;
    double _timeIntervalInSeconds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long endDateInMinutesOfDay; // @synthesize endDateInMinutesOfDay=_endDateInMinutesOfDay;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long startDateInMinutesOfDay; // @synthesize startDateInMinutesOfDay=_startDateInMinutesOfDay;
@property(nonatomic) double timeIntervalInSeconds; // @synthesize timeIntervalInSeconds=_timeIntervalInSeconds;

@end

