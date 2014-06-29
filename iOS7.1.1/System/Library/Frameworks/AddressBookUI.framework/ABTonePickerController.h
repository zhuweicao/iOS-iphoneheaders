/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIView;

@interface ABTonePickerController : UINavigationController {

	UIView* _tonePicker;

}

@property (assign,nonatomic) <ABPickerControllerDelegate> * delegate; 
@property (nonatomic,retain) UIView * tonePicker;                                  //@synthesize tonePicker=_tonePicker - In the implementation block
-(id)tonePicker;
-(id)initWithAlertType:(int)arg1 selectedAlert:(id)arg2 ;
-(void)doneButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(void)setTonePicker:(id)arg1 ;
-(void)dealloc;
-(void)viewWillDisappear:(bool)arg1 ;
@end
