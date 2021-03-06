/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <IMFoundation/IMSystemMonitorListener.h>

@class NSArray, NSMutableDictionary, NSTimer, NSString, IMAccount, NSDictionary, NSSet, IMServiceImpl;

@interface CNFRegController : NSObject <IMSystemMonitorListener> {

	NSArray* _services;
	NSArray* _accounts;
	NSMutableDictionary* _accountFilterCache;
	/*^block*/ id _accountRegistrationBlock;
	/*^block*/ id _callerIdChangedBlock;
	/*^block*/ id _accountAddedBlock;
	/*^block*/ id _accountRemovedBlock;
	/*^block*/ id _aliasStatusChangedBlock;
	/*^block*/ id _aliasRemovedBlock;
	/*^block*/ id _aliasAddedBlock;
	/*^block*/ id _vettedAliasesChangedBlock;
	/*^block*/ id _profileChangedBlock;
	/*^block*/ id _profileStatusChangedBlock;
	/*^block*/ id _accountAuthorizationChangedBlock;
	/*^block*/ id _accountActivationChangedBlock;
	/*^block*/ id _willLaunchURLBlock;
	/*^block*/ id _resetBlock;
	/*^block*/ id _serviceDidBecomeUnsupportedBlock;
	long long _serviceType;
	/*^block*/ id _alertHandler;
	NSTimer* _wifiAlertWatchTimer;
	long long _requiredWifiCount;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	bool _originalUsesBackgroundNetwork;
	NSString* _logName;
	unsigned long long _logIndent;
	long long _systemAccountType;
	IMAccount* _systemAccount;
	struct {
		unsigned listeningForAccountChanges : 1;
		unsigned listeningForCallerIDChanges : 1;
		unsigned listeningForAccountActivation : 1;
		unsigned preventingIdleSleep : 1;
		unsigned expectingWiFiPicker : 1;
		unsigned showedWifiFirstRunAlert : 1;
		unsigned ignoringAccountChanges : 1;
		unsigned activatingAccounts : 1;
	}  _controllerFlags;
	NSDictionary* _cachedCallerIDMap;

}

@property (nonatomic,readonly) IMAccount * systemAccount; 
@property (nonatomic,readonly) long long systemAccountType; 
@property (nonatomic,readonly) NSArray * appleIDAccounts; 
@property (nonatomic,readonly) NSArray * phoneAccounts; 
@property (nonatomic,readonly) NSArray * failedAccounts; 
@property (assign,nonatomic) long long serviceType;                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id accountRegistrationBlock;                                      //@synthesize accountRegistrationBlock=_accountRegistrationBlock - In the implementation block
@property (nonatomic,copy) id accountAddedBlock;                                             //@synthesize accountAddedBlock=_accountAddedBlock - In the implementation block
@property (nonatomic,copy) id accountRemovedBlock;                                           //@synthesize accountRemovedBlock=_accountRemovedBlock - In the implementation block
@property (nonatomic,copy) id callerIdChangedBlock;                                          //@synthesize callerIdChangedBlock=_callerIdChangedBlock - In the implementation block
@property (nonatomic,copy) id aliasStatusChangedBlock;                                       //@synthesize aliasStatusChangedBlock=_aliasStatusChangedBlock - In the implementation block
@property (nonatomic,copy) id aliasAddedBlock;                                               //@synthesize aliasAddedBlock=_aliasAddedBlock - In the implementation block
@property (nonatomic,copy) id aliasRemovedBlock;                                             //@synthesize aliasRemovedBlock=_aliasRemovedBlock - In the implementation block
@property (nonatomic,copy) id vettedAliasesChangedBlock;                                     //@synthesize vettedAliasesChangedBlock=_vettedAliasesChangedBlock - In the implementation block
@property (nonatomic,copy) id resetBlock;                                                    //@synthesize resetBlock=_resetBlock - In the implementation block
@property (nonatomic,copy) id serviceDidBecomeUnsupportedBlock;                              //@synthesize serviceDidBecomeUnsupportedBlock=_serviceDidBecomeUnsupportedBlock - In the implementation block
@property (nonatomic,copy) id profileChangedBlock;                                           //@synthesize profileChangedBlock=_profileChangedBlock - In the implementation block
@property (nonatomic,copy) id profileStatusChangedBlock;                                     //@synthesize profileStatusChangedBlock=_profileStatusChangedBlock - In the implementation block
@property (nonatomic,copy) id accountAuthorizationChangedBlock;                              //@synthesize accountAuthorizationChangedBlock=_accountAuthorizationChangedBlock - In the implementation block
@property (nonatomic,copy) id accountActivationChangedBlock;                                 //@synthesize accountActivationChangedBlock=_accountActivationChangedBlock - In the implementation block
@property (nonatomic,copy) id willLaunchURLBlock;                                            //@synthesize willLaunchURLBlock=_willLaunchURLBlock - In the implementation block
@property (nonatomic,readonly) NSArray * accounts; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * allAvailableAliases; 
@property (nonatomic,readonly) NSArray * useableAliases; 
@property (nonatomic,readonly) NSArray * emailAliases; 
@property (assign,getter=isServiceEnabled,nonatomic) bool serviceEnabled; 
@property (getter=isServiceSupported,nonatomic,readonly) bool serviceSupported; 
@property (nonatomic,copy) NSArray * services;                                               //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) id alertHandler;                                                  //@synthesize alertHandler=_alertHandler - In the implementation block
@property (nonatomic,@dynamic,readonly) NSSet * serviceNames; 
@property (nonatomic,@dynamic,readonly) IMServiceImpl * firstService; 
@property (nonatomic,readonly) NSDictionary * cachedCallerIDMap;                             //@synthesize cachedCallerIDMap=_cachedCallerIDMap - In the implementation block
+(id)controllerForServiceType:(long long)arg1 ;
-(id)systemAccount;
-(void)refreshSystemAccount;
-(bool)hasSystemAccount;
-(void)__updateSystemAccount;
-(long long)systemAccountType;
-(void)openURL:(id)arg1 ;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(bool)deviceCanTakeNetworkAction;
-(void)showNetworkAlert;
-(void)_stopWiFiAlertWatchTimer;
-(bool)deviceHasNetworkEnabled;
-(bool)deviceHasSaneNetworkConnection;
-(id)networkSettingsURLAllowingCellular:(bool)arg1 ;
-(void)_showNetworkAlertWithMessage:(id)arg1 ;
-(void)showNetworkAlertIfNecessary;
-(void)_startWiFiAlertWatchTimer;
-(void)showNetworkFirstRunAlert;
-(void)_wifiAlertWatchTimerFired:(id)arg1 ;
-(void)resetNetworkFirstRunAlert;
-(id)guessedDisplayAlias;
-(id)guessedAccountName;
-(bool)_isValidCallerIDAlias:(id)arg1 forAccount:(id)arg2 ;
-(id)_guessedDisplayAliasFromAccounts:(id)arg1 ;
-(id)guessedAlias;
-(id)appleIDAccounts;
-(void)_clearFilterCache;
-(id)_predicatesWithFilter:(long long)arg1 ;
-(id)_accountsPassingTests:(id)arg1 message:(id)arg2 ;
-(id)accountsWithFilter:(long long)arg1 message:(id)arg2 ;
-(/*^block*/ id)__filter_appleIDAccountPredicate;
-(/*^block*/ id)__filter_phoneAccountPredicate;
-(/*^block*/ id)__filter_activeAccountsPredicate;
-(/*^block*/ id)__filter_inactiveAccountsPredicate;
-(/*^block*/ id)__filter_failedAccountsPredicate;
-(/*^block*/ id)__filter_validatedAliasPredicate;
-(/*^block*/ id)__filter_signInCompletePredicate;
-(/*^block*/ id)__filter_validatedProfilePredicate;
-(/*^block*/ id)__filter_signedInPredicate;
-(/*^block*/ id)__filter_operationalPredicate;
-(id)accountsWithFilter:(long long)arg1 ;
-(id)phoneAccounts;
-(id)failedAccounts;
-(id)activeAccounts;
-(void)showSetupFaceTimeOverCellularAlertWithCompletion:(/*^block*/ id)arg1 ;
-(bool)isConnected;
-(id)displayAccount;
-(id)initWithServiceType:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)connect;
-(void)setAlertHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)alertHandler;
-(void)_purgeExcessAccounts;
-(id)_logName;
-(void)_startListeningForCallerIDChanges;
-(void)stopListeningForAccountChanges;
-(void)_stopListeningForCallerIDChanges;
-(id)firstService;
-(id)loginForAccount:(id)arg1 ;
-(void)_signOutAccount:(id)arg1 delete:(bool)arg2 ;
-(void)connect:(bool)arg1 ;
-(bool)__ensureSingleAppleIDAccountExistsWithLogin:(id)arg1 ;
-(id)_createAccountWithLogin:(id)arg1 foundExisting:(bool*)arg2 ;
-(void)activateAccounts;
-(void)activateAccountsExcludingAccounts:(id)arg1 ;
-(void)_clearAccountCache;
-(void)setServiceEnabled:(bool)arg1 ;
-(id)_accountForAlias:(id)arg1 accounts:(id)arg2 ;
-(bool)_aliasIsDevicePhoneNumber:(id)arg1 ;
-(bool)_shouldFilterOutAlias:(id)arg1 onAccount:(id)arg2 ;
-(id)aliasesForAccounts:(id)arg1 ;
-(id)_aliasesFromAccounts:(id)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)_aliasesForAccount:(id)arg1 ;
-(/*^block*/ id)_aliasComparator;
-(id)_vettedAliasesForAccount:(id)arg1 ;
-(id)_allAvailableAliasesForAccount:(id)arg1 ;
-(id)vettedAliasesForAccounts:(id)arg1 ;
-(id)allAvailableAliasesForAccounts:(id)arg1 ;
-(id)useableAliasesForAccounts:(id)arg1 ;
-(id)_aliasesPassingTest:(/*^block*/ id)arg1 ;
-(id)accountForAlias:(id)arg1 ;
-(bool)_addAliases:(id)arg1 toAccount:(id)arg2 validate:(bool)arg3 ;
-(bool)addAlias:(id)arg1 toAccount:(id)arg2 ;
-(bool)_accountIsAuthenticated:(id)arg1 ;
-(bool)_accountHasValidatedLocale:(id)arg1 ;
-(unsigned long long)accountState:(id)arg1 ;
-(bool)hasFailedLogin;
-(void)accountAdded:(id)arg1 ;
-(void)accountRegistrationChanged:(id)arg1 ;
-(void)callerIdChanged:(id)arg1 ;
-(void)aliasesChanged:(id)arg1 ;
-(void)vettedAliasesChanged:(id)arg1 ;
-(void)aliasStatusChanged:(id)arg1 ;
-(void)profileChanged:(id)arg1 ;
-(void)profileValidationStateChanged:(id)arg1 ;
-(void)authorizationCredentialsChanged:(id)arg1 ;
-(void)accountActivationStateChanged:(id)arg1 ;
-(void)deviceCapabilityChanged:(id)arg1 ;
-(bool)shouldHandleAccountNotification:(id)arg1 ;
-(/*^block*/ id)accountAddedBlock;
-(/*^block*/ id)accountRemovedBlock;
-(/*^block*/ id)accountRegistrationBlock;
-(/*^block*/ id)callerIdChangedBlock;
-(/*^block*/ id)profileChangedBlock;
-(/*^block*/ id)profileStatusChangedBlock;
-(/*^block*/ id)accountAuthorizationChangedBlock;
-(/*^block*/ id)accountActivationChangedBlock;
-(/*^block*/ id)aliasStatusChangedBlock;
-(/*^block*/ id)aliasAddedBlock;
-(/*^block*/ id)aliasRemovedBlock;
-(void)handleAliasAdded:(id)arg1 ;
-(void)handleAliasRemoved:(id)arg1 ;
-(/*^block*/ id)vettedAliasesChangedBlock;
-(void)setAccountRegistrationBlock:(/*^block*/ id)arg1 ;
-(void)setAccountAddedBlock:(/*^block*/ id)arg1 ;
-(void)setAccountRemovedBlock:(/*^block*/ id)arg1 ;
-(void)setCallerIdChangedBlock:(/*^block*/ id)arg1 ;
-(void)setAliasStatusChangedBlock:(/*^block*/ id)arg1 ;
-(void)setAliasAddedBlock:(/*^block*/ id)arg1 ;
-(void)setAliasRemovedBlock:(/*^block*/ id)arg1 ;
-(void)setVettedAliasesChangedBlock:(/*^block*/ id)arg1 ;
-(void)setResetBlock:(/*^block*/ id)arg1 ;
-(void)setServiceDidBecomeUnsupportedBlock:(/*^block*/ id)arg1 ;
-(void)setProfileChangedBlock:(/*^block*/ id)arg1 ;
-(void)setProfileStatusChangedBlock:(/*^block*/ id)arg1 ;
-(void)setAccountAuthorizationChangedBlock:(/*^block*/ id)arg1 ;
-(void)setAccountActivationChangedBlock:(/*^block*/ id)arg1 ;
-(void)deactivateAccounts;
-(void)startListeningForAccountChanges;
-(bool)isServiceSupported;
-(/*^block*/ id)serviceDidBecomeUnsupportedBlock;
-(void)_nukeCallerIDCache;
-(void)_postCallerIDChanged;
-(void)_handleCallerIDChangedForResume:(id)arg1 ;
-(void)_handleCallerIDChanged;
-(id)serviceNames;
-(id)firstAccount;
-(id)accountWithLogin:(id)arg1 ;
-(id)beginAccountSetupWithLogin:(id)arg1 authID:(id)arg2 authToken:(id)arg3 regionInfo:(id)arg4 foundExisting:(bool*)arg5 ;
-(id)beginAccountSetupWithLogin:(id)arg1 password:(id)arg2 foundExisting:(bool*)arg3 ;
-(id)beginAccountSetupWithAccount:(id)arg1 ;
-(void)signoutAccount:(id)arg1 ;
-(id)localPhoneNumberSentinelAlias;
-(id)allAvailableAliases;
-(id)useableAliases;
-(id)emailAliases;
-(bool)hasAliasNamed:(id)arg1 ;
-(id)aliasNamed:(id)arg1 ;
-(bool)removeAlias:(id)arg1 fromAccount:(id)arg2 ;
-(bool)canRemoveAlias:(id)arg1 ;
-(bool)setAliases:(id)arg1 onAccount:(id)arg2 ;
-(id)aliasSummaryString:(bool*)arg1 ;
-(unsigned long long)accountStateForAccount:(id)arg1 ;
-(unsigned long long)accountState;
-(bool)hasFailedLoginDueToBadLogin;
-(bool)shouldShowAlertForError:(id)arg1 ;
-(bool)isServiceEnabled;
-(bool)cellularDataEnabled;
-(void)setCellularDataEnabled:(bool)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)nukeAllCallerIDSettings;
-(id)displayAlias;
-(bool)setDisplayAlias:(id)arg1 ;
-(id)_logSpace;
-(void)_incrementLogIndent;
-(void)_decrementLogIndent;
-(/*^block*/ id)resetBlock;
-(/*^block*/ id)willLaunchURLBlock;
-(void)setWillLaunchURLBlock:(/*^block*/ id)arg1 ;
-(id)cachedCallerIDMap;
-(id)accounts;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(void)clearAllCaches;
-(void)systemApplicationDidEnterBackground;
-(void)setServices:(id)arg1 ;
-(bool)addAlias:(id)arg1 ;
-(id)aliases;
-(id)services;
-(id)vettedAliases;
-(bool)hasAlias:(id)arg1 ;
-(bool)validateAlias:(id)arg1 ;
-(bool)unvalidateAlias:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(void)removeAllHandlers;
@end

