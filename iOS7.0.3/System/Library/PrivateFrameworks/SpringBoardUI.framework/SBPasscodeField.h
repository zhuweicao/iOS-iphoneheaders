/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPasscodeField.h>

@interface SBPasscodeField : UIPasscodeField {

	int _style;
	float _okFontSize;
	float _cancelFontSize;
	float _buttonWidth;
	BOOL _showsCancelButton;
	BOOL _isAlphanumericField;

}

@property (assign,getter=isOkayButtonEnabled,nonatomic) BOOL okayButtonEnabled; 
@property (assign,nonatomic) BOOL showsCancelButton;                                         //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) int clearButtonMode; 
@property (assign,nonatomic) BOOL isAlphanumericField;                                       //@synthesize isAlphanumericField=_isAlphanumericField - In the implementation block
+(Class)textFieldClass;
-(id)_initWithStyle:(int)arg1 ;
-(id)textInputTraits;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(BOOL)arg2 ;
-(void)_updateFields;
-(void)_textDidChange;
-(void)setShowsOKButton:(BOOL)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)setClearButtonMode:(int)arg1 ;
-(int)clearButtonMode;
-(void)setIsAlphanumericField:(BOOL)arg1 ;
-(BOOL)isOkayButtonEnabled;
-(void)setOkayButtonEnabled:(BOOL)arg1 ;
-(id)_entryField;
-(void)_updateButtonMetrics;
-(id)_localizedOKString;
-(id)_localizedCancelString;
-(void)_updateButtonTitle;
-(void)_updateButtonFrame;
-(BOOL)isAlphanumericField;
@end

