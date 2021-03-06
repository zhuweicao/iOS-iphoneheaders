/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/NSCoding.h>

@class AVPlayerController, NSTimer;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {

	AVPlayerController* _playerController;
	double _interval;
	double _resolution;
	double _currentTime;
	NSTimer* _timer;

}

@property (assign) double currentTimeWithinEndTimes; 
@property (readonly) double remainingTime; 
@property (readonly) double remainingTimeWithinEndTimes; 
@property (getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges,readonly) BOOL thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges; 
@property (getter=isCurrentTimeAtEndOfSeekableTimeRanges,readonly) BOOL currentTimeAtEndOfSeekableTimeRanges; 
@property (retain) AVPlayerController * playerController; 
@property (assign) double interval; 
@property (assign) double resolution; 
@property (assign) double currentTime; 
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTime;
+(id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfCurrentTime;
-(double)currentTimeWithinEndTimes;
-(double)remainingTimeWithinEndTimes;
-(BOOL)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
-(BOOL)isCurrentTimeAtEndOfSeekableTimeRanges;
-(void)setCurrentTimeWithinEndTimes:(double)arg1 ;
-(double)remainingTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(AVPlayerController *)playerController;
-(double)resolution;
-(void)setResolution:(double)arg1 ;
-(double)currentTime;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
@end

