/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray, UISwitch, NSArray;

@interface UIInputSwitcherView : UIKeyboardMenuView {

	int m_currentInputModeIndex;
	BOOL m_keyboardSettingsFromSwitcher;
	NSMutableArray* m_inputModes;
	UISwitch* m_predictiveSwitch;

}

@property (nonatomic,retain) NSArray * inputModes; 
@property (assign,nonatomic) BOOL keyboardSettingsFromSwitcher; 
+(id)sharedInstance;
+(id)activeInstance;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setInputMode:(id)arg1 ;
-(long long)numberOfItems;
-(id)selectedInputMode;
-(id)previousInputMode;
-(NSArray *)inputModes;
-(id)nextInputMode;
-(void)selectInputMode:(id)arg1 ;
-(CGSize)preferredSize;
-(long long)defaultSelectedIndex;
-(id)predictiveSwitch;
-(void)toggleKeyboardPredictionPreference;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(id)localizedTitleForItemAtIndex:(int)arg1 ;
-(id)fontForItemAtIndex:(int)arg1 ;
-(id)subtitleForItemAtIndex:(int)arg1 ;
-(id)subtitleFontForItemAtIndex:(int)arg1 ;
-(id)titleForItemAtIndex:(int)arg1 ;
-(void)setKeyboardSettingsFromSwitcher:(BOOL)arg1 ;
-(void)setInputModes:(NSArray *)arg1 ;
-(BOOL)keyboardSettingsFromSwitcher;
-(void)switchAction;
-(void)selectRowForInputMode:(id)arg1 ;
-(void)selectNextInputMode;
-(void)selectPreviousInputMode;
@end
