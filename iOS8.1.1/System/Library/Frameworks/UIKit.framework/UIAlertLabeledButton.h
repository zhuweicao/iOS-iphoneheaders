/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UILabel;

@interface UIAlertLabeledButton : UIAlertButton {

	UILabel* _typeLabel;
	double _titleOffset;

}

@property (nonatomic,readonly) UILabel * typeLabel; 
@property (assign,nonatomic) double titleOffset;                 //@synthesize titleOffset=_titleOffset - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(double)titleOffset;
-(void)setTitleOffset:(double)arg1 ;
-(UILabel *)typeLabel;
@end

