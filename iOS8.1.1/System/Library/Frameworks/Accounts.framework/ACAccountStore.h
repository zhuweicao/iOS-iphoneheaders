/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, ACRemoteAccountStoreSession, NSArray;

@interface ACAccountStore : NSObject {

	NSString* _clientBundleID;
	NSObject*<OS_dispatch_queue> _replyQueue;
	id _daemonAccountStoreDidChangeObserver;
	ACRemoteAccountStoreSession* _remoteAccountStoreSession;

}

@property (nonatomic,__weak,readonly) NSArray * accounts; 
@property (readonly) NSString * effectiveBundleID;                                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) ACRemoteAccountStoreSession * remoteAccountStoreSession;              //@synthesize remoteAccountStoreSession=_remoteAccountStoreSession - In the implementation block
+(BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1 ;
+(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
+(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(id)_mailAccountTypeIdentifiers;
-(BOOL)hasMailAccountsForSync;
-(id)mailAccountsForSync;
-(id)aida_AppleIDAuthenticationAccountType;
-(id)aida_AppleIDAuthenticationAccounts;
-(id)_primaryiCloudAccount;
-(id)aida_accountForiCloudAccount:(id)arg1 ;
-(void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)aida_accountForPrimaryiCloudAccount;
-(id)aaui_accountDescriptionFromEmailAddress:(id)arg1 ;
-(void)da_loadDAAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)da_loadDAAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)da_accounts;
-(id)da_accountsEnabledForDADataclasses:(long long)arg1 ;
-(id)da_accountsWithAccountTypeIdentifiers:(id)arg1 ;
-(id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 ;
-(void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)aa_grandSlamAccountWithUsername:(id)arg1 ;
-(id)aa_appleAccountType;
-(id)aa_appleAccounts;
-(void)_performUpdateRequestWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)aa_primaryAppleAccountWithPreloadedDataclasses;
-(id)aa_appleAccountWithUsername:(id)arg1 ;
-(id)aa_accountsEnabledForDataclass:(id)arg1 ;
-(void)aa_registerAppleAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)aa_appleAccountWithPersonID:(id)arg1 ;
-(id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1 ;
-(id)aa_primaryAppleAccount;
-(void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)accountsWithAccountType:(id)arg1 appleID:(id)arg2 ;
-(id)accountWithAppleID:(id)arg1 ;
-(id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 ;
-(void)setRemoteAccountStoreSession:(ACRemoteAccountStoreSession *)arg1 ;
-(void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithRemoteEndpoint:(id)arg1 ;
-(void)insertAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)canSaveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)credentialForAccount:(id)arg1 bundleID:(id)arg2 ;
-(id)parentAccountForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 ;
-(id)enabledDataclassesForAccount:(id)arg1 ;
-(id)provisionedDataclassesForAccount:(id)arg1 ;
-(id)supportedDataclassesForAccountType:(id)arg1 ;
-(id)syncableDataclassesForAccountType:(id)arg1 ;
-(id)accessKeysForAccountType:(id)arg1 ;
-(id)appPermissionsForAccountType:(id)arg1 ;
-(BOOL)permissionForAccountType:(id)arg1 ;
-(id)grantedPermissionsForAccountType:(id)arg1 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 ;
-(id)typeIdentifierForDomain:(id)arg1 ;
-(id)dataclassActionsForAccountDeletion:(id)arg1 ;
-(BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1 ;
-(id)tetheredSyncSourceTypeForDataclass:(id)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 ;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 ;
-(id)displayTypeForAccountWithIdentifier:(id)arg1 ;
-(id)accountIdentifiersEnabledToSyncDataclass:(id)arg1 ;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)disconnectFromRemoteAccountStore;
-(ACRemoteAccountStoreSession *)remoteAccountStoreSession;
-(id)allDataclasses;
-(id)credentialForAccount:(id)arg1 serviceID:(id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAccountWithDescription:(id)arg1 ;
-(id)accountIdentifiersEnabledForDataclass:(id)arg1 ;
-(id)allAccountTypes;
-(id)dataclassActionsForAccountSave:(id)arg1 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg1 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 ;
-(id)initWithEffectiveBundleID:(id)arg1 ;
-(id)accountsWithAccountType:(id)arg1 ;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 error:(id*)arg2 ;
-(NSArray *)accounts;
-(void)accountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)credentialForAccount:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)addClientToken:(id)arg1 forAccount:(id)arg2 ;
-(id)clientTokenForAccount:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleURL:(id)arg1 ;
-(void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 ;
-(void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)effectiveBundleID;
@end
