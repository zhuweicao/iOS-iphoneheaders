/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class NSArray, NSMutableArray, UIAlertView, PSSpecifier, NSString;

@interface PhoneSettingsNetworksController : PSListItemsController {

	NSArray* _networks;
	NSMutableArray* _networksSpecifiersArray;
	long long _indexOfNetworkToJoin;
	int _state;
	UIAlertView* _errorAlertView;
	PSSpecifier* _automaticSpecifier;
	PSSpecifier* _searchingSpecifier;
	PSSpecifier* _titleSpecifier;
	NSString* _cachedMobileIdentity;
	bool _isBeingPresented;

}

@property (retain) NSArray * networks;                                    //@synthesize networks=_networks - In the implementation block
@property (retain) NSMutableArray * networksSpecifiersArray;              //@synthesize networksSpecifiersArray=_networksSpecifiersArray - In the implementation block
@property (readonly) long long indexOfNetworkToJoin;                      //@synthesize indexOfNetworkToJoin=_indexOfNetworkToJoin - In the implementation block
@property (readonly) int state;                                           //@synthesize state=_state - In the implementation block
@property (readonly) UIAlertView * errorAlertView;                        //@synthesize errorAlertView=_errorAlertView - In the implementation block
@property (readonly) PSSpecifier * automaticSpecifier; 
@property (readonly) PSSpecifier * searchingSpecifier; 
@property (readonly) PSSpecifier * titleSpecifier; 
+(id)descriptionForState:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(id)titleSpecifier;
-(id)automaticSpecifier;
-(void)_registerEventListeners;
-(void)_deregisterEventListeners;
-(bool)_isInManualMode;
-(bool)_isInAutomaticMode;
-(int)_currentNetworkSelectionState;
-(bool)_currentNetworkIsInNetworkList;
-(id)networks;
-(void)_selectedItemFromNetworkListAtIndex:(long long)arg1 ;
-(void)_errorDialogDismissed;
-(void)_receivedNetworkList;
-(void)_failedToReceiveNetworkList;
-(void)_failedToSwitchToNetwork;
-(void)_switchedToNetwork;
-(void)_changedOperator;
-(void)setNetworks:(id)arg1 ;
-(void)_updateSpecifierContents;
-(void)_updateCells;
-(bool)_indexOfNetworkToJoinIsValid;
-(long long)indexOfNetworkToJoin;
-(void)_updateNavBarTitle;
-(void)_setAutomaticSwitchOn:(bool)arg1 animated:(bool)arg2 ;
-(void)_showNetworkRetrievalError;
-(id)searchingSpecifier;
-(id)networksSpecifiersArray;
-(void)setNetworksSpecifiersArray:(id)arg1 ;
-(id)_carrierSpecifierWithDictionary:(id)arg1 ;
-(long long)_indexOfCurrentNetwork;
-(void)_handleRadioOffErrorNotification:(id)arg1 ;
-(void)_handleSimChangedNotification:(id)arg1 ;
-(void)_handleNetworksChangedNotification:(id)arg1 ;
-(void)_handleNetworkSelectionChangedNotification:(id)arg1 ;
-(void)_handleOperatorChangedNotification:(id)arg1 ;
-(void)_handleManualNetworkRequiresReselectionNotification:(id)arg1 ;
-(id)_localizedNetworkNameForNetworkDictionary:(id)arg1 ;
-(id)_carrierSpecifierWithName:(id)arg1 ;
-(void)_autoSwitchTurnedOn;
-(void)_autoSwitchTurnedOff;
-(long long)_indexOfNetworkWithCode:(id)arg1 ;
-(void)setAutomaticSwitchState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getAutomaticSwitchStateForSpecifier:(id)arg1 ;
-(id)errorAlertView;
-(void)_updateCachedMobileIdentity;
-(void)_settingsResumed;
-(void)_transitionToState:(int)arg1 ;
-(bool)shouldReloadSpecifiersOnResume;
-(void)willBecomeActive;
-(void)listItemSelected:(id)arg1 ;
-(id)descriptionDictionary;
@end

