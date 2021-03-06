/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movie/Movie-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIMovieScrubberDelegate.h>
#import <Movie/MPMoviePlayerControllerDelegate.h>

@protocol QLMovieViewControllerDelegate;
@class MPMoviePlayerController, NSURL, UIMovieScrubber, UIView, UIButton, NSTimer, UIImage, UIImageView, NSMutableDictionary, NSArray, UITapGestureRecognizer, QLMovieScrubberDataSource;

@interface QLMovieViewController : UIViewController <UIMovieScrubberDelegate, MPMoviePlayerControllerDelegate> {

	<QLMovieViewControllerDelegate>* _delegate;
	MPMoviePlayerController* _moviePlayer;
	NSURL* _contentURL;
	UIMovieScrubber* _scrubber;
	UIView* _overlayPlayButtonView;
	UIButton* _playPauseButton;
	UIView* _scrubberContainerView;
	NSTimer* _scrubberUpdateTimer;
	UIImage* _posterFrame;
	UIImageView* _posterFrameImageView;
	int _enableAnimationCount;
	double _animationDuration;
	/*^block*/ id _canPlayBlock;
	int _controlStyle;
	double _scrubberVerticalOffset;
	unsigned _didAppear : 1;
	unsigned _showsPlayOverlay : 1;
	unsigned _showsScrubber : 1;
	unsigned _scrubberVisible : 1;
	unsigned _showsEmbeddedControls : 1;
	unsigned _canCreateMetadata : 1;
	unsigned _canPlay : 1;
	unsigned _wantsScrubberUpdates : 1;
	unsigned _isVisible : 1;
	unsigned _showingScrubber : 1;
	unsigned _scrubbing : 1;
	unsigned _shouldResumePlayAfterScrubbing : 1;
	unsigned _playing : 1;
	unsigned _needToPrepareToPlay : 1;
	unsigned _loadScrubberThumbnails : 1;
	unsigned _hasBeenPlayed : 1;
	NSMutableDictionary* _cachedThumbnails;
	NSArray* _landscapeSummaryThumbnailTimestamps;
	NSArray* _portraitSummaryThumbnailTimestamps;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	QLMovieScrubberDataSource* _scrubberDataSource;
	NSURL* _originalContentURL;
	bool _canEdit;

}

@property (assign) <QLMovieViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) double animationDuration;                      //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) bool showsScrubber; 
@property (assign,nonatomic) double scrubberVerticalOffset; 
@property (assign,nonatomic) bool wantsScrubberUpdates; 
@property (assign,nonatomic) bool showsPlayOverlay; 
@property (assign,nonatomic) int controlStyle; 
@property (assign,nonatomic) bool canCreateMetadata; 
@property (assign,nonatomic) bool canPlay; 
@property (assign,nonatomic) bool canEdit;                                  //@synthesize canEdit=_canEdit - In the implementation block
@property (getter=isAudioOnly,readonly) bool audioOnly; 
@property (assign,nonatomic) bool disallowsAMRAudio; 
-(void)setWantsScrubberUpdates:(bool)arg1 ;
-(void)_setScrubberVisible:(bool)arg1 duration:(double)arg2 ;
-(void)_playConditionally:(id)arg1 ;
-(void)_cancelPrepareMoviePlayer;
-(bool)wantsScrubberUpdates;
-(double)scrubberVerticalOffset;
-(id)movieScrubber;
-(bool)canPlay;
-(void)setCanPlay:(bool)arg1 ;
-(void)setCanPlayBlock:(/*^block*/ id)arg1 ;
-(void)_updateMovieVisibility;
-(void)preparePosterFrame;
-(id)_overlayPlayButtonView;
-(bool)_isAVNotificationApropos:(id)arg1 ;
-(void)_prepareMoviePlayerAfterDelay;
-(void)_setScrubberPlayVisible:(bool)arg1 animated:(bool)arg2 ;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(void)_startScrubberUpdateTimer;
-(void)_movieIsPreparedForDisplay:(id)arg1 ;
-(void)_moviePlaybackDidFinish:(id)arg1 ;
-(bool)isAudioOnly;
-(void)_updatePlaybackRange;
-(void)_updateScrubberTimer;
-(void)playPause:(id)arg1 ;
-(void)_movieDidExitFullScreen:(id)arg1 ;
-(void)_airPlayVideoActiveDidChange:(id)arg1 ;
-(void)_stopScrubberUpdateTimer;
-(void)setControlsVisible:(bool)arg1 duration:(double)arg2 ;
-(void)_updatePosterFrame;
-(void)_updateScrubberState;
-(void)_updateScrubberLayout;
-(void)_movieDidEnterFullScreen:(id)arg1 ;
-(void)_updatePosterFrameBackgroundColor;
-(double)movieDuration;
-(void)_updatePrepareToPlayState;
-(void)_updatePlayButton:(bool)arg1 ;
-(void)_updateScrubberThumb;
-(void)_createMovieViewIfNeeded;
-(void)_tearDownMovieView;
-(void)setCanCreateMetadata:(bool)arg1 ;
-(void)_setDoubleTapEnabled:(bool)arg1 ;
-(void)_updateScrubberDataSource;
-(void)_avControllerPlaybackStateChanged:(id)arg1 ;
-(void)_moviePlaybackStateChanged:(id)arg1 ;
-(void)_setPlaying:(bool)arg1 isNotification:(bool)arg2 ;
-(void)_movieIsReadyForDisplay:(id)arg1 ;
-(void)setContentURL:(id)arg1 ;
-(id)contentURL;
-(int)controlStyle;
-(void)setControlStyle:(int)arg1 ;
-(void)prepareToPlay;
-(bool)isPreparedToPlay;
-(void)play;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(bool)moviePlayerBookmarkButtonPressed:(id)arg1 ;
-(bool)moviePlayerNextButtonPressed:(id)arg1 ;
-(bool)moviePlayerPreviousButtonPressed:(id)arg1 ;
-(bool)moviePlayerShareButtonPressed:(id)arg1 ;
-(void)moviePlayer:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)moviePlayerDidShowOverlay:(id)arg1 ;
-(void)moviePlayer:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)moviePlayerDidHideOverlay:(id)arg1 ;
-(bool)disallowsAMRAudio;
-(void)setDisallowsAMRAudio:(bool)arg1 ;
-(bool)isPlaying;
-(id)moviePlayer;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setAnimationDuration:(double)arg1 ;
-(bool)canBecomeFirstResponder;
-(void)disableAnimation;
-(void)enableAnimation;
-(bool)isAnimationEnabled;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(double)animationDuration;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)_doubleTapRecognized:(id)arg1 ;
-(id)_snapshotImage;
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1 ;
-(void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(double)startTime;
-(void)pause;
-(CGSize)naturalSize;
-(void)play:(id)arg1 ;
-(void)setCanEdit:(bool)arg1 ;
-(void)setShowsPlayOverlay:(bool)arg1 ;
-(void)setShowsScrubber:(bool)arg1 ;
-(bool)canCreateMetadata;
-(bool)canEdit;
-(void)_updateScrubberValue;
-(void)_createScrubberIfNeeded;
-(bool)showsPlayOverlay;
-(bool)showsScrubber;
-(double)endTime;
@end

