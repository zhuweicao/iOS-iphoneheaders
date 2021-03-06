/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem, BrowserICSPreviewPanel;

@interface BrowserICSPreviewPanelNavController : UINavigationController {

	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _activitiesBarButtonItem;
	BrowserICSPreviewPanel* _icsPanel;
	BOOL _closeBrowserPanelAlreadyCalled;

}
-(id)_activtyBarButtonItem;
-(id)_doneBarButonItem;
-(void)_ensureLeftBarButtonItemsIncludesActivitiesItem:(id)arg1 ;
-(void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1 ;
-(void)_ensureRightBarButtonItemsIncludesDoneItem:(id)arg1 ;
-(void)_updateNavigationBarItems;
-(void)setOwningPanel:(id)arg1 ;
-(void)setCloseBrowserPanelAlreadyCalled:(BOOL)arg1 ;
-(void)dealloc;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

