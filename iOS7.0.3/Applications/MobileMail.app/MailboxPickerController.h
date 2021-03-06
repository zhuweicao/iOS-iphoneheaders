/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewController.h>
#import <MobileMail/MailboxListViewControllerMailDelegate.h>
#import <MobileMail/EditFavoritesControllerDelegate.h>
#import <MobileMail/FavoriteItemSelectionTarget.h>
#import <MobileMail/MailboxEditingControllerDelegate.h>

@class MailboxListViewControllerMail, FavoriteItem, NSMutableDictionary, NSArray;

@interface MailboxPickerController : UITableViewController <MailboxListViewControllerMailDelegate, EditFavoritesControllerDelegate, FavoriteItemSelectionTarget, MailboxEditingControllerDelegate> {

	MailboxListViewControllerMail* _mailboxListViewController;
	FavoriteItem* _lastSelectedItem;
	CGPoint _savedContentOffset;
	NSMutableDictionary* _headerViews;
	NSArray* _defaultToolbarItems;
	NSArray* _editingToolbarItems;
	BOOL _viewIsVisible;
	BOOL _isRefreshing;
	BOOL _showingVIPSettings;
	BOOL _showingFavoritesEditor;
	BOOL _showingAddButton;
	unsigned _selectedSourceType;

}

@property (assign,nonatomic) unsigned selectedSourceType;              //@synthesize selectedSourceType=_selectedSourceType - In the implementation block
@property (assign,nonatomic) BOOL showingVIPSettings;                  //@synthesize showingVIPSettings=_showingVIPSettings - In the implementation block
@property (assign,nonatomic) BOOL showingFavoritesEditor;              //@synthesize showingFavoritesEditor=_showingFavoritesEditor - In the implementation block
@property (assign,nonatomic) BOOL showingAddButton;                    //@synthesize showingAddButton=_showingAddButton - In the implementation block
@property (assign,nonatomic) BOOL isRefreshing; 
-(void)setSelectedSourceType:(unsigned)arg1 ;
-(void)selectCombinedMailboxWithType:(int)arg1 animated:(BOOL)arg2 ;
-(void)selectMailbox:(id)arg1 animated:(BOOL)arg2 ;
-(void)selectAccount:(id)arg1 animated:(BOOL)arg2 ;
-(id)mailboxListViewController;
-(id)mailboxContentViewController;
-(id)selectedAccounts;
-(int)propagateChangeDownwards:(id)arg1 ;
-(void)dismissAndUnfocus;
-(unsigned)selectedSourceType;
-(BOOL)containsMultipleAccounts;
-(void)selectCombinedInboxWithSourceType:(unsigned)arg1 animated:(BOOL)arg2 ;
-(void)pulledToRefresh:(id)arg1 ;
-(void)updateIsRefreshing;
-(void)statusBarProgressDidChange:(id)arg1 ;
-(void)showMailboxEditingControllerWithMailbox:(id)arg1 ;
-(void)newMailboxClicked:(id)arg1 ;
-(void)mailboxEditingControllerDidFinish:(id)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_vipSendersDidChange:(id)arg1 ;
-(void)_flagStyleDidChange:(id)arg1 ;
-(void)_favoritesDidChange:(id)arg1 ;
-(void)_sharedMailboxControllerBadgeCountDidChange:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)enableRefreshControl:(BOOL)arg1 ;
-(BOOL)showingFavoritesEditor;
-(void)_updateSharedMailboxesExposure:(int)arg1 ;
-(void)_setLastSelectedItem:(id)arg1 ;
-(BOOL)showingVIPSettings;
-(void)_updatedSelectedState:(id)arg1 ;
-(void)setShowingVIPSettings:(BOOL)arg1 ;
-(void)setShowingFavoritesEditor:(BOOL)arg1 ;
-(BOOL)showingAddButton;
-(void)setShowingAddButton:(BOOL)arg1 ;
-(void)_updateCellForSourceType:(id)arg1 ;
-(void)_setBackButtonTitle:(id)arg1 ;
-(void)_pushMailboxContentViewControllerIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_updateCheckmarkColor:(id)arg1 ;
-(BOOL)_isAddButton:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)isCellSelectable:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_detailsDisclosureButtonTapped:(id)arg1 ;
-(void)_addFavoriteButtonClicked;
-(void)editFavoritesControllerDidFinish:(id)arg1 ;
-(void)showVIPSettingsAnimated:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)applicationWillSuspend;
-(BOOL)shouldAutorotate;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_Ma3*)arg1 ;
-(BOOL)isRefreshing;
-(void)setIsRefreshing:(BOOL)arg1 ;
-(void)_updateToolbarItems:(BOOL)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
@end

