/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class NSMutableArray;

@interface TetheringSwitchFooterView : UIView <PSHeaderFooterView> {

	NSMutableArray* _labels;

}
-(id)initWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 inTableView:(id)arg2 shouldSetSize:(bool)arg3 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end
