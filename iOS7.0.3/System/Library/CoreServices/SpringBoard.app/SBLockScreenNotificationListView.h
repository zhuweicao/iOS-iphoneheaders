/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel;
@class SBLockScreenNotificationTableView, UIView, CADisplayLink, NSTimer, NSMutableDictionary;

@interface SBLockScreenNotificationListView : UIView <UITableViewDataSource, UITableViewDelegate> {

	SBLockScreenNotificationTableView* _tableView;
	UIView* _tableHeaderView;
	UIView* _tableFooterView;
	UIView* _topPocketView;
	UIView* _bottomPocketView;
	UIView* _containerView;
	<SBLockScreenNotificationViewDelegate>* _delegate;
	<SBLockScreenNotificationModel>* _model;
	CADisplayLink* _displayLink;
	float _currentTextAlpha;
	double _fadeStartTimestamp;
	NSTimer* _oldTextDisabledTimer;
	unsigned _indexOfNewItem;
	BOOL _notificationCellIsScrollingToPasscode;
	float _notificationScrollDecelerationRatio;
	NSMutableDictionary* _heightForListItemCache;
	float _totalContentHeight;
	float _startingScrollOffset;
	float _lastDistanceScrolled;
	BOOL _updateCellsToVisibleOnPluginWillDisable;

}

@property (assign,nonatomic) <SBLockScreenNotificationViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) <SBLockScreenNotificationModel> * model;                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL updateCellsToVisibleOnPluginWillDisable;                   //@synthesize updateCellsToVisibleOnPluginWillDisable=_updateCellsToVisibleOnPluginWillDisable - In the implementation block
-(id)_tableHeaderView;
-(void)updateForAdditionOfItemAtIndex:(unsigned)arg1 allowHighlightOnInsert:(BOOL)arg2 ;
-(void)updateForModificationOfItemWithOldIndex:(unsigned)arg1 andNewIndex:(unsigned)arg2 ;
-(void)updateForRemovalOfItemAtIndex:(unsigned)arg1 removedItem:(id)arg2 ;
-(void)updateForRemovalOfItems;
-(void)lockScreenDidEndScrollingOnPage:(int)arg1 ;
-(void)scrollToTopOfListAnimated:(BOOL)arg1 ;
-(id)_tableFooterView;
-(id)_pocketLineColor;
-(BOOL)_disableIdleTimer:(BOOL)arg1 ;
-(void)_clearTextDisabledTimer;
-(void)_clearTextFadeTimer;
-(void)_resetAllFadeTimers;
-(void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_setNonSelectedCellsToVisible:(BOOL)arg1 withSelectedCell:(id)arg2 ;
-(void)setUpdateCellsToVisibleOnPluginWillDisable:(BOOL)arg1 ;
-(void)_scrollingEndedInScrollView:(id)arg1 ;
-(void)_updateBottomShadowVisibility;
-(int)_rowAnimationForInsert;
-(void)_updateTotalContentHeight;
-(void)_disableExistingContent;
-(int)_rowAnimationForDelete;
-(void)_postludeForUpdateForRemoval:(BOOL)arg1 ;
-(void)_pluginWillDisable:(id)arg1 ;
-(void)_textDisabledTimerFired:(id)arg1 ;
-(void)_cellTextFadeTimerFired:(id)arg1 ;
-(BOOL)updateCellsToVisibleOnPluginWillDisable;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(id)model;
-(void)prepareForRemoval;
-(UIEdgeInsets)_contentViewInsets;
-(void)setModel:(id)arg1 ;
@end

