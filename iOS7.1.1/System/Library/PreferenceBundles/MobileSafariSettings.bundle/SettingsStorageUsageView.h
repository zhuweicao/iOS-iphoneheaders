/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel;

@interface SettingsStorageUsageView : UIView <PSHeaderFooterView> {

	UILabel* _usedLabel;
	UILabel* _titleLabel;
	double _height;

}
+(id)groupSpecifierWithTitle:(id)arg1 totalUsage:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setUsageText:(id)arg1 ;
@end

