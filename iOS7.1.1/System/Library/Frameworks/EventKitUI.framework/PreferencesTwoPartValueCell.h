/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol EKCellShortener;
@class TwoPartTextLabel, UIColor;

@interface PreferencesTwoPartValueCell : UITableViewCell {

	TwoPartTextLabel* _twoPartLabel;
	unsigned _notifiedShort;
	<EKCellShortener>* _shortener;

}

@property (nonatomic,readonly) TwoPartTextLabel * twoPartTextLabel; 
@property (assign,nonatomic,__weak) <EKCellShortener> * shortener;               //@synthesize shortener=_shortener - In the implementation block
@property (nonatomic,readonly) UIColor * valueColor; 
-(void)setShortener:(id)arg1 ;
-(id)twoPartTextLabel;
-(id)shortener;
-(id)valueColor;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
-(void)shorten;
-(void)layoutSubviews;
-(id)description;
-(void).cxx_destruct;
@end

