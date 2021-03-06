/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSKeychainSyncManager, UIAlertView, NSTimer, SetupChoice;

@interface BuddyAppleIDKeychainSyncPage : SetupChoiceController <UIAlertViewDelegate> {

	PSKeychainSyncManager* _manager;
	UIAlertView* _disableConfirmationAlert;
	UIAlertView* _approvalSentAlert;
	BOOL _brokenMode;
	NSTimer* _initializationTimeoutTimer;
	BOOL _circleExists;
	BOOL _isBackupEnabled;
	BOOL _restoreFlow;
	SetupChoice* _enableChoice;
	SetupChoice* _disableChoice;
	SetupChoice* _otherDeviceChoice;
	SetupChoice* _securityCodeChoice;
	/*^block*/ id _extendedInitializationCompletion;

}

@property (assign,nonatomic) BOOL restoreFlow;                               //@synthesize restoreFlow=_restoreFlow - In the implementation block
@property (nonatomic,retain) SetupChoice * enableChoice;                     //@synthesize enableChoice=_enableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * disableChoice;                    //@synthesize disableChoice=_disableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * otherDeviceChoice;                //@synthesize otherDeviceChoice=_otherDeviceChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * securityCodeChoice;               //@synthesize securityCodeChoice=_securityCodeChoice - In the implementation block
@property (nonatomic,copy) id extendedInitializationCompletion;              //@synthesize extendedInitializationCompletion=_extendedInitializationCompletion - In the implementation block
+(BOOL)controllerNeedsToRun;
-(void)choice:(id)arg1 resultWasValid:(BOOL)arg2 ;
-(BOOL)wantsNextButton;
-(id)footerDetailText;
-(void)performExtendedInitializationWithCompletion:(/*^block*/ id)arg1 ;
-(BOOL)controllerAllowsNavigatingBack;
-(id)footerIconName;
-(BOOL)footerIconHasRoundedCorners;
-(id)learnMoreButtonText;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)setEnableChoice:(id)arg1 ;
-(void)setDisableChoice:(id)arg1 ;
-(id)enableChoice;
-(id)disableChoice;
-(void)_setBrokenMode:(BOOL)arg1 ;
-(/*^block*/ id)extendedInitializationCompletion;
-(void)setExtendedInitializationCompletion:(/*^block*/ id)arg1 ;
-(void)initializationTimeoutTimerFired:(id)arg1 ;
-(void)loadSecureBackupState;
-(void)loadOptions;
-(void)setSecurityCodeChoice:(id)arg1 ;
-(void)setOtherDeviceChoice:(id)arg1 ;
-(void)_controllerDone;
-(void)_startEnableFlow;
-(id)otherDeviceChoice;
-(void)_showPeerApprovalAcknowledgement;
-(id)securityCodeChoice;
-(void)reloadOptions;
-(BOOL)restoreFlow;
-(void)setRestoreFlow:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleText;
@end

