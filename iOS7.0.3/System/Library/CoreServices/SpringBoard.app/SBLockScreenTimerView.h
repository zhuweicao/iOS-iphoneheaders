/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSDate, SBLockScreenTimerDialView, UILabel, _UILegibilityLabel;

@interface SBLockScreenTimerView : UIView {

	NSDate* _endDate;
	SBLockScreenTimerDialView* _timerDial;
	UILabel* _layoutLabel;
	_UILegibilityLabel* _timerLabel;

}
+(id)_timerFont;
+(float)interItemSpacing;
-(void)setTimerHidden:(BOOL)arg1 ;
-(void)updateTimerLabel;
-(void)setLegibilitySettings:(id)arg1 textStrength:(float)arg2 dialStrength:(float)arg3 ;
-(id)_newTimerDialForSettings:(id)arg1 strength:(float)arg2 ;
-(id)_newLegibilityLabelForSettings:(id)arg1 strength:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(float)baselineOffsetFromBottom;
@end

