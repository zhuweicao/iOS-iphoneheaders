/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SWRunWorkoutProxy : NSObject

@property (nonatomic,@dynamic,readonly) NSString * goalType; 
@property (nonatomic,@dynamic,readonly) NSString * presetGoal; 
@property (nonatomic,@dynamic,readonly) float goal; 
@property (nonatomic,@dynamic,readonly) NSString * sensorSearchState; 
@property (nonatomic,@dynamic,readonly) NSString * workoutState; 
@property (nonatomic,@dynamic,readonly) NSDictionary * workoutData; 
@property (nonatomic,@dynamic,readonly) bool hasEverStarted; 
@property (nonatomic,@dynamic,readonly) bool hasPowerSong; 
@property (nonatomic,@dynamic,readonly) NSString * powerSongName; 
@property (nonatomic,@dynamic,readonly) bool shouldControlMusic; 
@property (nonatomic,@dynamic,readonly) long long musicSelection; 
@property (nonatomic,@dynamic,readonly) NSString * currentSongName; 
@property (nonatomic,@dynamic,readonly) NSString * currentAlbumName; 
@property (nonatomic,@dynamic,readonly) NSString * currentArtistName; 
+(id)newProxy;
+(void)initialize;
-(void)activateWorkout;
-(void)pauseWorkout;
-(void)playPowerSong;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(void)prepareToActivateWorkout;
-(void)goToNowPlaying;
-(void)pauseMusic;
-(void)playMusic;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
@end
