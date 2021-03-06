/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <PhotosUI/PUAlbumListTableViewController.h>
#import <Preferences/PSController.h>

@protocol PSController;
@class WallpaperAlbumListTableViewControllerSpec, UIViewController, PSRootController, PSSpecifier;

@interface WallpaperAlbumListTableViewController : PUAlbumListTableViewController <PSController> {

	WallpaperAlbumListTableViewControllerSpec* _wallpaperAlbumListTableViewSpec;
	UIViewController<PSController>* _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	unsigned _albumCount;

}

@property (nonatomic,retain) WallpaperAlbumListTableViewControllerSpec * wallpaperAlbumListTableViewSpec;              //@synthesize wallpaperAlbumListTableViewSpec=_wallpaperAlbumListTableViewSpec - In the implementation block
@property (assign,nonatomic) UIViewController<PSController> * parentController;                                        //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                                                        //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                                  //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) unsigned albumCount;                                                                      //@synthesize albumCount=_albumCount - In the implementation block
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)suspend;
-(int)tableViewStyle;
-(void)handleMagicCategorySelection:(id)arg1 ;
-(void)setAlbumCount:(unsigned)arg1 ;
-(void)_navigateToDynamic;
-(void)_navigateToVR;
-(void)_navigateToPanorama;
-(void)_navigateToStills;
-(unsigned)albumCount;
-(id)wallpaperAlbumListTableViewSpec;
-(void)_navigateToWallpaperGridControllerWithCategoryKey:(id)arg1 andTitle:(id)arg2 ;
-(void)setWallpaperAlbumListTableViewSpec:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)parentController;
-(void)setParentController:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)setAlbumList:(id)arg1 ;
-(id)backgroundColorForTableView;
-(BOOL)canShowSyncProgress;
-(NSObject*)albumAtIndexPath:(id)arg1 ;
-(BOOL)showsEmptyPlaceholderWhenEmpty;
-(void)setTitleForCell:(id)arg1 withAlbum:(NSObject*)arg2 ;
-(BOOL)showsTopPlaceholdersSection;
-(BOOL)showsBottomPlaceholdersSection;
-(void)navigateToAssetContainer:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(id)rootController;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)setRootController:(id)arg1 ;
-(void)pushController:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(float)arg1 ;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
-(void).cxx_destruct;
@end

