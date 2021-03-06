/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ACSportsMatchupLineScoreView : UIView {

	UILabel* _periodNameLabel;
	UILabel* _firstScoreLabel;
	UILabel* _secondScoreLabel;

}

@property (nonatomic,readonly) UILabel * periodNameLabel;               //@synthesize periodNameLabel=_periodNameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * firstScoreLabel;               //@synthesize firstScoreLabel=_firstScoreLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondScoreLabel;              //@synthesize secondScoreLabel=_secondScoreLabel - In the implementation block
-(UILabel *)periodNameLabel;
-(double)legendHeight;
-(id)initWithFrame:(CGRect)arg1 isTotal:(BOOL)arg2 isCondensed:(BOOL)arg3 ;
-(double)lineScoreColumnWidthWithNumberOfColumns:(unsigned long long)arg1 ;
-(void)setPeriodName:(id)arg1 firstScore:(id)arg2 secondScore:(id)arg3 winningEntity:(id)arg4 homeIsFirst:(BOOL)arg5 ;
-(id)_newAddedScoreLabelIsTotal:(BOOL)arg1 isCondensed:(BOOL)arg2 isPeriod:(BOOL)arg3 ;
-(double)lineScoreRowHeight;
-(double)_legendBaselineAdjust;
-(double)_rowBaselineAdjust;
-(UILabel *)firstScoreLabel;
-(UILabel *)secondScoreLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

