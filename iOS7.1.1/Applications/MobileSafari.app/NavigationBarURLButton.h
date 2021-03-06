/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, UIImage;

@interface NavigationBarURLButton : UIButton {

	UIImageView* _overlayImageView;
	UIImageView* _tintImageView;
	UIImage* _darkBackgroundImage;
	UIImage* _lightBackgroundImage;
	BOOL _showsDarkBackground;
	float _backgroundAlphaFactor;

}

@property (assign,nonatomic) float backgroundAlphaFactor;              //@synthesize backgroundAlphaFactor=_backgroundAlphaFactor - In the implementation block
@property (assign,nonatomic) BOOL showsDarkBackground;                 //@synthesize showsDarkBackground=_showsDarkBackground - In the implementation block
-(void)_updateBackgroundImageAnimated:(BOOL)arg1 ;
-(void)setShowsDarkBackground:(BOOL)arg1 ;
-(void)setBackgroundAlphaFactor:(float)arg1 ;
-(float)backgroundAlphaFactor;
-(BOOL)showsDarkBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

