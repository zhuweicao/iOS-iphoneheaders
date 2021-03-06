/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBSearchGestureObserver.h>

@class SBDockView, SBDockIconListView, TPLegacyLCDTextView, SBFParallaxSettings, SBSearchViewController, SBRootFolder;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver> {

	SBDockView* _dockView;
	SBDockIconListView* _dockListView;
	TPLegacyLCDTextView* _idleTextView;
	SBFParallaxSettings* _parallaxSettings;
	float _searchGestureProgress;
	SBSearchViewController* _searchViewController;

}

@property (nonatomic,retain) SBRootFolder * folder; 
@property (nonatomic,readonly) SBSearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
-(id)searchViewController;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)resetIconListViews;
-(void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2 ;
-(id)dockView;
-(void)setDockOffscreenFraction:(float)arg1 ;
-(void)setDockVerticalStretch:(float)arg1 ;
-(id)iconListViewAtIndex:(unsigned)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3 ;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(float)arg1 ;
-(void)willAnimate;
-(void)didAnimate;
-(void)layoutViewsForSearch;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 forSnapshot:(BOOL)arg4 ;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(void)_configureParallax;
-(float)effectiveStatusBarHeight;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)tearDownListViews;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)setOrientation:(int)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(void)lcdTextViewCompletedScroll:(id)arg1 ;
-(void)_layoutSubviews;
-(void)setIdleText:(id)arg1 ;
@end

