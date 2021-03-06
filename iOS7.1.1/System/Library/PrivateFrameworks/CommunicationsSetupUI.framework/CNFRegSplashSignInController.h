/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
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
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(id)specifierList;
-(void)_setFieldsEnabled:(bool)arg1 animated:(bool)arg2 ;
-(void)setUsernameText:(id)arg1 ;
-(void)_updateDescriptionText;
-(id)usernameTextField;
-(id)_existingLearnMoreViewForSpecifier:(id)arg1 ;
-(id)_existingLearnMoreViewForSection:(long long)arg1 ;
-(bool)usernameIsEmpty;
-(bool)passwordIsEmpty;
-(void)setPasswordText:(id)arg1 ;
@end

