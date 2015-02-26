/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <AirPortAssistant/StepByStepUIDevicePicker.h>

@class UIView, UILabel, NSString;

@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	UIView* justTextContainerView2;
	UILabel* justTextLabel2;
	NSString* personalizedBaseName;

}

@property (nonatomic,retain) UIView * justTextContainerView2; 
@property (nonatomic,retain) NSString * personalizedBaseName; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned)arg3 toString:(id)arg4 ;
-(void)setPersonalizedBaseName:(id)arg1 ;
-(id)personalizedBaseName;
-(void)validateAndUpdateNextButton;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)primaryActionSelected:(BOOL)arg1 ;
-(void)prepareParams;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
-(void)setupEditableBaseStationName;
-(void)setJustTextContainerView2:(id)arg1 ;
-(id)justTextContainerView2;
@end
