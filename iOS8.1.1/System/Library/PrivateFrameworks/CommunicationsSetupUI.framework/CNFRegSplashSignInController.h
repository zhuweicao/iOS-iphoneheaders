/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegSignInController.h>

@class CNFRegSigninLearnMoreView;

@interface CNFRegSplashSignInController : CNFRegSignInController {

	CNFRegSigninLearnMoreView* _signInView;

}
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)passwordTextField;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)specifierList;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUsernameText:(id)arg1 ;
-(id)usernameTextField;
-(id)_existingLearnMoreViewForSpecifier:(id)arg1 ;
-(id)_existingLearnMoreViewForSection:(long long)arg1 ;
-(BOOL)usernameIsEmpty;
-(BOOL)passwordIsEmpty;
-(void)setPasswordText:(id)arg1 ;
@end

