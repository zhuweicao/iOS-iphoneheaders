/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIFont, UIAlertView, NSString;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {

	double _cellTextWidth;
	UIFont* _cellFont;
	UIAlertView* _disableRecoveryConfirmationAlert;
	BOOL _showsDisableRecoveryOption;

}

@property (assign,nonatomic) BOOL showsDisableRecoveryOption;              //@synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
-(void)nextPressed;
-(void)setShowsDisableRecoveryOption:(BOOL)arg1 ;
-(void)_finishedWithSpecifier:(id)arg1 ;
-(BOOL)showsDisableRecoveryOption;
@end

