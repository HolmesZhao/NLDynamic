//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MusicController : NSObject
{
    int _musicControllerDidStopMusic;
    NSMutableArray *_prioritizedArrayOfMusicControllers;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) int musicControllerDidStopMusic; // @synthesize musicControllerDidStopMusic=_musicControllerDidStopMusic;
- (id)musicControllerOfTypeFromArray:(int)arg1;
- (void)pause;
- (void)playIfPreviouslyStopped;
- (id)primaryMusicController;
@property(retain, nonatomic) NSMutableArray *prioritizedArrayOfMusicControllers; // @synthesize prioritizedArrayOfMusicControllers=_prioritizedArrayOfMusicControllers;

@end
