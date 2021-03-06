/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject {

	NSDictionary* _accountTypeToPluginNameMap;
	NSMutableDictionary* _pluginCache;

}
+(id)sharedInstance;
-(id)init;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(id)_accountViewProviderPluginForAccountTypeID:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)_loadAccountViewProviderPluginWithName:(id)arg1 ;
@end

