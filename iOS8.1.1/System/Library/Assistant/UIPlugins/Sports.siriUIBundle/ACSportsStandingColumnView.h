/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class NSMutableArray, NSArray;

@interface ACSportsStandingColumnView : ACSportsEntityView {

	NSMutableArray* _statLabels;
	NSArray* _snippetColumnHeaders;
	BOOL _isFirstHeaderGroup;

}

@property (assign,nonatomic) BOOL isFirstHeaderGroup;              //@synthesize isFirstHeaderGroup=_isFirstHeaderGroup - In the implementation block
+(double)interimSpacing;
-(void)setIsFirstHeaderGroup:(BOOL)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(void)setSnippetColumns:(id)arg1 ;
-(double)statLabelMinX;
-(BOOL)isFirstHeaderGroup;
-(BOOL)_columnsContainMultipleStats;
-(void)_updateStatLabels;
-(unsigned long long)_numberOfStatColumns;
-(double)_nonStatLabelColumnWidth;
-(double)statLabelBaselineOffset;
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(id)labelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

