/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UILabel, NSString, UIFont;

@interface SUTableHeaderView : UIView {

	UIColor* _bottomBorderColor;
	UIEdgeInsets _edgeInsets;
	long long _index;
	long long _style;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;              //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) UIFont * subtitleFont; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) UIColor * textColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(long long)style;
-(void)setShadowColor:(id)arg1 ;
-(void)sizeToFit;
-(id)title;
-(id)shadowColor;
-(id)textColor;
-(long long)index;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)titleFont;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)subtitleFont;
-(void)setIndex:(long long)arg1 ;
-(void)setBottomBorderColor:(id)arg1 ;
-(id)bottomBorderColor;
-(void)setSubtitleFont:(id)arg1 ;
-(void)setTitleFont:(id)arg1 ;
@end

