/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AddressBookUI/ABContactViewController.h>
#import <Maps/AddBookmarkViewControllerDelegate.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>
#import <Maps/MUNearbyAppsCellDelegate.h>
#import <Maps/SKProductPageViewControllerDelegate.h>
#import <Maps/MUPlaceCardPhotosControllerDelegate.h>
#import <Maps/MUPlaceCardReviewsControllerDelegate.h>
#import <Maps/MUActivityViewControllerDelegate.h>

@protocol PlaceViewControllerDataSource, PlaceViewControllerDelegate;
@class InfoCardHeaderView, UISegmentedControl, UIView, ABCardGroup, MUPlaceCardReviewsController, MUPlaceCardPhotosController, BusinessHourProvider, NSArray, SKProductPageViewController, NearbyAppsMetricsCoordinator, SearchResult;

@interface PlaceViewController : ABContactViewController <AddBookmarkViewControllerDelegate, ABContactViewControllerDelegate, MUNearbyAppsCellDelegate, SKProductPageViewControllerDelegate, MUPlaceCardPhotosControllerDelegate, MUPlaceCardReviewsControllerDelegate, MUActivityViewControllerDelegate> {

	InfoCardHeaderView* _headerView;
	UISegmentedControl* _tabBar;
	UIView* _tabBarContainerView;
	UIView* _bottomDivider;
	ABCardGroup* _businessHoursGroup;
	ABCardGroup* _businessAttributionGroup;
	ABCardGroup* _nearbyAppsGroup;
	<PlaceViewControllerDataSource>* _alternateDataSource;
	MUPlaceCardReviewsController* _reviewsController;
	MUPlaceCardPhotosController* _photosController;
	BusinessHourProvider* _hoursProvider;
	NSArray* _storeLookupItems;
	SKProductPageViewController* _storePageViewController;
	NearbyAppsMetricsCoordinator* _metricsCoordinator;
	BOOL _isSearching;
	BOOL _showTransitDirections;
	BOOL _showDirections;
	BOOL _showAddToBookmarks;
	BOOL _showRemovePin;
	BOOL _showBusinessAttributes;
	BOOL _showSourceAttribution;
	BOOL _showReportAProblem;
	BOOL _showNearbyApps;
	BOOL _showShareActionsButton;
	<PlaceViewControllerDelegate>* _placeViewControllerDelegate;
	SearchResult* _searchResult;

}

@property (assign,nonatomic) <PlaceViewControllerDelegate> * placeViewControllerDelegate;              //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                              //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) BOOL showDirections;                                                      //@synthesize showDirections=_showDirections - In the implementation block
@property (assign,nonatomic) BOOL showTransitDirections;                                               //@synthesize showTransitDirections=_showTransitDirections - In the implementation block
@property (assign,nonatomic) BOOL showAddToBookmarks;                                                  //@synthesize showAddToBookmarks=_showAddToBookmarks - In the implementation block
@property (assign,nonatomic) BOOL showRemovePin;                                                       //@synthesize showRemovePin=_showRemovePin - In the implementation block
@property (assign,nonatomic) BOOL showReportAProblem;                                                  //@synthesize showReportAProblem=_showReportAProblem - In the implementation block
@property (assign,nonatomic) BOOL showNearbyApps;                                                      //@synthesize showNearbyApps=_showNearbyApps - In the implementation block
@property (assign,nonatomic) BOOL showShareActionsButton;                                              //@synthesize showShareActionsButton=_showShareActionsButton - In the implementation block
@property (nonatomic,retain) InfoCardHeaderView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * tabBar;                                              //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,nonatomic) BOOL showBusinessAttributes;                                              //@synthesize showBusinessAttributes=_showBusinessAttributes - In the implementation block
@property (assign,nonatomic) BOOL showSourceAttribution;                                               //@synthesize showSourceAttribution=_showSourceAttribution - In the implementation block
@property (nonatomic,readonly) NearbyAppsMetricsCoordinator * metricsCoordinator; 
-(void)setSearchResult:(id)arg1 ;
-(void)addBookmarkControllerCancelled:(id)arg1 ;
-(void)addBookmarkControllerSaved:(id)arg1 ;
-(void)mapsActivityViewController:(id)arg1 addBookmarkWithSearchResult:(id)arg2 title:(id)arg3 ;
-(void)mapsActivityViewController:(id)arg1 performedActivityOfType:(id)arg2 withSearchResult:(id)arg3 completed:(BOOL)arg4 ;
-(void)setPlaceViewControllerDelegate:(id)arg1 ;
-(void)setShowShareActionsButton:(BOOL)arg1 ;
-(void)setShowNearbyApps:(BOOL)arg1 ;
-(void)setShowAddToBookmarks:(BOOL)arg1 ;
-(void)setShowTransitDirections:(BOOL)arg1 ;
-(void)setShowReportAProblem:(BOOL)arg1 ;
-(void)setShowRemovePin:(BOOL)arg1 ;
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithInfo:(id)arg2 ;
-(void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1 ;
-(void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1 ;
-(void)placeCardReviewsController:(id)arg1 didSelectViewDealWithInfo:(id)arg2 ;
-(void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithInfo:(id)arg2 ;
-(void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3 ;
-(void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3 ;
-(void)resumeHeaderViewAnimations;
-(void)suspendHeaderViewAnimations;
-(id)placeViewControllerDelegate;
-(void)_setupHeaderView;
-(void)_setupActions;
-(void)_setupBusinessHours;
-(void)_setupBusinessAttribution;
-(void)_setupNearbyApps;
-(void)presentHeaderView;
-(BOOL)showShareActionsButton;
-(void)_showShareSheet:(id)arg1 ;
-(void)resetHeaderView;
-(BOOL)_showPhotosAndReviewsTabBar;
-(void)_tabBarSegmentChanged:(id)arg1 ;
-(void)_tabBarSegmentChanged:(id)arg1 needsReload:(BOOL)arg2 ;
-(void)setShowBusinessAttributes:(BOOL)arg1 ;
-(void)setShowSourceAttribution:(BOOL)arg1 ;
-(BOOL)showBusinessAttributes;
-(BOOL)showSourceAttribution;
-(BOOL)showNearbyApps;
-(void)_findNearbyAppsAtCoordinate:(SCD_Struct_Si10)arg1 ;
-(void)_directionsToAddress:(id)arg1 ;
-(void)_directionsFromAddress:(id)arg1 ;
-(BOOL)showTransitDirections;
-(void)_transitDirectionsToAddress:(id)arg1 ;
-(BOOL)showRemovePin;
-(void)_removePin:(id)arg1 ;
-(void)_addToBookmarks:(id)arg1 ;
-(BOOL)showReportAProblem;
-(void)_reportAProblem:(id)arg1 ;
-(void)_createReminder:(id)arg1 ;
-(void)_simulateLocation:(id)arg1 ;
-(id)_reviewsController;
-(id)_photosController;
-(void)_handleBusinessAttributionRequest;
-(void)_openAttributionWithLinkType:(int)arg1 geoRequirement:(int)arg2 info:(id)arg3 ;
-(void)_addToBookmarksWithTitle:(id)arg1 ;
-(id)metricsCoordinator;
-(void)_openAppWithBundleID:(id)arg1 ;
-(void)_displayAppWithMetadata:(id)arg1 ;
-(void)_addToAddressBook:(id)arg1 ;
-(BOOL)showAddToBookmarks;
-(id)initWithContact:(id)arg1 ;
-(id)contactHeaderView;
-(id)contactView:(id)arg1 cellForItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(float)contactView:(id)arg1 heightForItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(id)contactViewController:(id)arg1 highlightColorForPropertyItem:(id)arg2 contact:(id)arg3 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(int)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tabBar;
-(void)setTabBar:(id)arg1 ;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
-(BOOL)showDirections;
-(void)setShowDirections:(BOOL)arg1 ;
-(id)searchResult;
@end

