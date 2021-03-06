/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/PlaceViewControllerDelegate.h>

@protocol PlacePresentationControllerDelegate;
@class PlaceViewController, UIViewController, UIPopoverController, SearchResult;

@interface PlacePresentationController : NSObject <PlaceViewControllerDelegate> {

	<PlacePresentationControllerDelegate>* _presentationDelegate;
	PlaceViewController* _placeViewController;
	UIViewController* _presentingViewController;
	UIPopoverController* _calloutPopoverController;
	SearchResult* _searchResult;

}

@property (assign,nonatomic) <PlacePresentationControllerDelegate> * presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,retain) PlaceViewController * placeViewController;                                 //@synthesize placeViewController=_placeViewController - In the implementation block
@property (assign,nonatomic) UIViewController * presentingViewController;                               //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIPopoverController * calloutPopoverController;                            //@synthesize calloutPopoverController=_calloutPopoverController - In the implementation block
@property (nonatomic,copy) SearchResult * searchResult;                                                 //@synthesize searchResult=_searchResult - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(id)placeViewController;
-(void)updatePlaceWithSearchResult:(id)arg1 ;
-(void)setCalloutPopoverController:(id)arg1 ;
-(void)presentPlaceWithSearchResult:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupPlaceViewController:(id)arg1 ;
-(id)_placeViewControllerWithSearchResult:(id)arg1 ;
-(void)setPlaceViewController:(id)arg1 ;
-(void)placeViewControllerAnimationFinished:(id)arg1 ;
-(void)placeViewController:(id)arg1 didSelectDirectionsToAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectDirectionsFromAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectTransitDirectionsToAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectAddToBookmarksWithAddressIdentifier:(int)arg2 title:(id)arg3 ;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)placeViewControllerDidSelectRemovePin:(id)arg1 ;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1 ;
-(void)placeViewController:(id)arg1 didSelectHomePage:(id)arg2 ;
-(void)placeViewController:(id)arg1 didSelectPhoneNumber:(id)arg2 ;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1 ;
-(void)placeViewControllerDidDismiss:(id)arg1 ;
-(void)placeViewControllerDidSelectInfo:(id)arg1 ;
-(void)placeViewControllerDidSelectPhotos:(id)arg1 ;
-(void)placeViewControllerDidSelectReviews:(id)arg1 ;
-(void)placeViewControllerDidLaunchYelp:(id)arg1 ;
-(void)dismissPresentedPlaceAnimated:(BOOL)arg1 ;
-(id)presentationDelegate;
-(void)setPresentationDelegate:(id)arg1 ;
-(id)calloutPopoverController;
-(void)dealloc;
-(id)presentingViewController;
-(void)setPresentingViewController:(id)arg1 ;
-(id)searchResult;
@end

