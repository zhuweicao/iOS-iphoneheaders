/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIViewController.h>

@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController {

	BiometricKitUIEnrollViewController* _enrollController;

}

@property (nonatomic,retain) BiometricKitUIEnrollViewController * enrollController;              //@synthesize enrollController=_enrollController - In the implementation block
-(id)enrollController;
-(CGRect)frameForEnrollmentController;
-(void)setEnrollController:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

