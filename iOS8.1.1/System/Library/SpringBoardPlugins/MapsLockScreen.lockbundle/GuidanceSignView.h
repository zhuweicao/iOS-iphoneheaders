/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class MNSignStyle;

@interface GuidanceSignView : UIView {

	BOOL _wantsManeuverPeekingAdjustment;
	BOOL _delayLayout;
	MNSignStyle* _style;
	int _variant;
	BOOL _displayedOnLockscreen;
	BOOL _inactive;
	BOOL _wantsManueverPeekingAdjustment;
	BOOL _shouldHideDivider;

}

@property (assign,nonatomic) BOOL wantsManueverPeekingAdjustment;              //@synthesize wantsManueverPeekingAdjustment=_wantsManueverPeekingAdjustment - In the implementation block
@property (assign,nonatomic) BOOL shouldHideDivider;                           //@synthesize shouldHideDivider=_shouldHideDivider - In the implementation block
@property (assign,nonatomic) BOOL delayLayout;                                 //@synthesize delayLayout=_delayLayout - In the implementation block
@property (assign,nonatomic) BOOL displayedOnLockscreen;                       //@synthesize displayedOnLockscreen=_displayedOnLockscreen - In the implementation block
@property (assign,nonatomic) BOOL inactive;                                    //@synthesize inactive=_inactive - In the implementation block
@property (nonatomic,retain) MNSignStyle * style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int variant;                                      //@synthesize variant=_variant - In the implementation block
-(void)didAnimateStyleValuesFromTheme;
-(void)updateManueverPeekingPosition:(id)arg1 ;
-(void)willAnimateStyleValuesFromTheme;
-(void)updateDividerHeightForRect:(CGRect)arg1 ;
-(double)deltaForScrollChange:(id)arg1 ;
-(void)setShouldHideDivider:(BOOL)arg1 ;
-(void)updateSignAlpha:(double)arg1 ;
-(void)updateStyleValuesFromTheme;
-(void)setInstructionsText:(id)arg1 shorterAlternatives:(id)arg2 ;
-(void)setDisplayedOnLockscreen:(BOOL)arg1 ;
-(BOOL)wantsManueverPeekingAdjustment;
-(BOOL)displayedOnLockscreen;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)shouldHideDivider;
-(void)setDelayLayout:(BOOL)arg1 ;
-(BOOL)inactive;
-(void)updateAlpha:(id)arg1 ;
-(void)textLinesShouldAnimateFromHeight:(double)arg1 ;
-(void)updateManueverOriginXForScrollPosition:(double)arg1 ;
-(void)transformSublayersByPercentComplete:(double)arg1 ;
-(void)setWantsManueverPeekingAdjustment:(BOOL)arg1 ;
-(void)setNeedsLayout;
-(MNSignStyle *)style;
-(void)setStyle:(MNSignStyle *)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(BOOL)delayLayout;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end

