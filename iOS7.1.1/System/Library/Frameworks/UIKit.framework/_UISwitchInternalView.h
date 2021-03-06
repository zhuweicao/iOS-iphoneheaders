/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISwitchInternalViewProtocol.h>

@class UIColor, UIImage, UIImageView, UIView, CALayer;

@interface _UISwitchInternalView : UIView <_UISwitchInternalViewProtocol> {

	UIImage* _colorMask;
	UIImage* _shapeMask;
	UIImage* _shapeShadow;
	UIImage* _thumb;
	UIImage* _thumbPressed;
	double _position;
	bool _pressed;
	UIImageView* _colorView;
	UIImageView* _thumbView;
	UIImageView* _labelView;
	UIColor* _onTintColor;
	UIColor* _tintColor;
	UIColor* _thumbTintColor;
	UIColor* _nonAlternateColor;
	UIImage* _onImage;
	UIImage* _offImage;
	bool _on;
	bool _sendAction;
	bool _useAlternateColor;
	bool _animating;
	UIImageView* _idleImageView;
	UIView* _interactiveView;
	CALayer* _backgroundLayer;

}

@property (nonatomic,retain) UIColor * onTintColor;                 //@synthesize onTintColor=_onTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                   //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;              //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,retain) UIImage * onImage; 
@property (nonatomic,retain) UIImage * offImage; 
@property (assign,nonatomic) bool on;                               //@synthesize on=_on - In the implementation block
@property (assign,nonatomic) bool useAlternateColor;                //@synthesize useAlternateColor=_useAlternateColor - In the implementation block
+(id)_defaultOnTintColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(void)_setPressed:(bool)arg1 ;
-(void)setThumbTintColor:(id)arg1 ;
-(id)thumbTintColor;
-(void)_setOn:(bool)arg1 animated:(bool)arg2 force:(bool)arg3 ;
-(id)_labelImage;
-(id)_colorImage;
-(void)_cleanUpAfterAnimating;
-(void)_setOnTintColor:(id)arg1 ;
-(void)_setupThumbImages;
-(void)_setupBackgroundLayer;
-(void)_buildControl;
-(id)_snapshotImage;
-(void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_setProgress:(double)arg1 animated:(bool)arg2 withDuration:(double)arg3 force:(bool)arg4 sendAction:(bool)arg5 ;
-(void)_sendActions;
-(void)_setProgress:(double)arg1 ;
-(void)_prepareForInteraction;
-(void)setSendAction:(bool)arg1 ;
-(void)_setPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3 shouldAnimateLabels:(bool)arg4 completion:(/*^block*/ id)arg5 ;
-(id)onTintColor;
-(void)setOnTintColor:(id)arg1 ;
-(id)onImage;
-(void)setOnImage:(id)arg1 ;
-(id)offImage;
-(void)setOffImage:(id)arg1 ;
-(bool)on;
-(void)setOn:(bool)arg1 ;
-(bool)useAlternateColor;
-(void)setUseAlternateColor:(bool)arg1 ;
-(bool)sendAction;
@end

