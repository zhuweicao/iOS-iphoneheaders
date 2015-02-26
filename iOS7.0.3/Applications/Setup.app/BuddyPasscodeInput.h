/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@protocol BuddyPasscodeInputDelegate;
@class UILabel, UIButton;

@interface BuddyPasscodeInput : UIView {

	<BuddyPasscodeInputDelegate>* _delegate;
	UILabel* _instructions;
	UIButton* _skipButton;

}

@property (assign,nonatomic) <BuddyPasscodeInputDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * instructions;                               //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                //@synthesize skipButton=_skipButton - In the implementation block
-(void)skipButtonPressed;
-(void)setSkipButtonText:(id)arg1 ;
-(id)instructions;
-(void)setInstructions:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)passcodeField;
-(void)setSkipButton:(id)arg1 ;
-(id)skipButton;
-(void)disable;
-(void)setPasscode:(id)arg1 ;
-(id)passcode;
@end
