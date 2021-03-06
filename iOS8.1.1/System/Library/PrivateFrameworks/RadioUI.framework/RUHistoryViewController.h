/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <RadioUI/RUAudioPreviewViewDelegate.h>
#import <RadioUI/RUHistoryDataSourceDelegate.h>
#import <RadioUI/RUPreviewSessionObserver.h>
#import <RadioUI/RUWishlistDataSourceDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUHistoryViewControllerDelegate;
@class SKUICircleProgressIndicator, UIActionSheet, NSArray, RUHistoryDataSource, UILabel, RUPreviewSession, MPAVItem, RadioHistoryCategory, UITableView, RURadioAdTrack, MPMoviePlayerController, RUWishlistDataSource, NSMutableArray, NSString;

@interface RUHistoryViewController : UIViewController <RUAudioPreviewViewDelegate, RUHistoryDataSourceDelegate, RUPreviewSessionObserver, RUWishlistDataSourceDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate> {

	SKUICircleProgressIndicator* _activityIndicator;
	UIActionSheet* _confirmationActionSheet;
	NSArray* _historyCategories;
	RUHistoryDataSource* _historyDataSource;
	UILabel* _loadingLabel;
	UILabel* _noHistoryLabel;
	RUPreviewSession* _previewSession;
	MPAVItem* _previewingAVItem;
	RadioHistoryCategory* _previewingHistoryCategory;
	UITableView* _tableView;
	RURadioAdTrack* _videoAdTrack;
	MPMoviePlayerController* _videoAdPreviewMoviePlayerController;
	RUWishlistDataSource* _wishlistDataSource;
	NSMutableArray* _wishlistedTracks;
	id<RUHistoryViewControllerDelegate> _delegate;
	long long _historyType;

}

@property (assign,nonatomic,__weak) id<RUHistoryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long historyType;                                          //@synthesize historyType=_historyType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_doneAction:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUHistoryViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<RUHistoryViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_isLoading;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)previewSession:(id)arg1 didChangeFromItem:(id)arg2 toItem:(id)arg3 ;
-(void)_updateViewForHorizontalSizeClassChange;
-(void)audioPreviewViewDidCancel:(id)arg1 forReason:(long long)arg2 ;
-(void)historyDataSourceDidUpdateHistoryCategories:(id)arg1 ;
-(id)historyDataSource:(id)arg1 viewControllerForPresentingAdTrack:(id)arg2 ;
-(void)_reportVideoAdPreviewDidFinishIfNeeded;
-(id)_newSegmentedControl;
-(void)_selectedSegmentIndexDidChangeAction:(id)arg1 ;
-(void)_updateViewForTraitCollectionChange;
-(void)_refreshHistoryTracks;
-(void)_refreshWishlistedTracks;
-(void)_updateViewForHistoryChange;
-(void)_endPreviewPlaybackWithOptions:(long long)arg1 fadeoutDuration:(double)arg2 ;
-(id)_wishlistedTrackAtIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg1 forAdTrack:(id)arg2 ;
-(void)_configureCell:(id)arg1 forRadioTrack:(id)arg2 ;
-(BOOL)_isHistoryItem:(id)arg1 effectivelyPlayingWithAVItem:(id)arg2 ;
-(id)_indexPathForPreviewingItem;
-(void)_videoAdPreviewMoviePlaybackDidFinishNotification:(id)arg1 ;
-(void)_updateTableViewRowHeight;
-(unsigned long long)_count;
-(void)_clearAction:(id)arg1 ;
-(void)wishlistDataSourceDidInvalidate:(id)arg1 ;
-(void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1 ;
-(long long)historyType;
@end

