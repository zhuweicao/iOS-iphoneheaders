/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface CNFRegLearnMoreButton : UIButton {

	int _style;
	NSString* _buttonText;
	BOOL _alwaysUnderline;
	BOOL _usesImage;

}

@property (assign,nonatomic) int style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * buttonText;               //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) BOOL alwaysUnderline;              //@synthesize alwaysUnderline=_alwaysUnderline - In the implementation block
@property (assign,nonatomic) BOOL usesImage;                    //@synthesize usesImage=_usesImage - In the implementation block
+(id)roundedButtonWithText:(id)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setButtonText:(id)arg1 ;
-(void)setUsesImage:(BOOL)arg1 ;
-(void)setAlwaysUnderline:(BOOL)arg1 ;
-(void)_setupLearnMoreTextForCurrentStyle;
-(void)_setupArrowImageForCurrentStyle;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 text:(id)arg3 ;
-(BOOL)usesImage;
-(BOOL)alwaysUnderline;
-(id)buttonText;
@end

