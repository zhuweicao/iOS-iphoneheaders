/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLCloudProgressFooterView;

@interface PLFooterViewUpdater : NSObject {

	PLCloudProgressFooterView* _footerView;

}

@property (assign,nonatomic) PLCloudProgressFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
-(id)init;
-(void)timerFired:(id)arg1 ;
-(void)startTimer;
-(PLCloudProgressFooterView *)footerView;
-(void)setFooterView:(PLCloudProgressFooterView *)arg1 ;
@end
