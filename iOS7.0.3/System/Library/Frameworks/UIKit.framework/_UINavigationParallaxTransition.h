/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBasicAnimationFactory.h>
#import <UIKit/UIViewControllerAnimatedTransitioningEx.h>

@protocol UIViewControllerContextTransitioning;
@class _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView, UIView;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {

	BOOL _interactionAborted;
	BOOL _clipUnderlapWhileTransitioning;
	int _operation;
	<UIViewControllerContextTransitioning>* _transitionContext;
	_UINavigationInteractiveTransitionBase* _interactionController;
	_UIParallaxDimmingView* _borderDimmingView;
	_UIParallaxDimmingView* _contentDimmingView;
	UIView* _containerFromView;
	UIView* _containerToView;
	UIView* _clipUnderView;
	int _transitionStyle;
	float _transitionGap;

}

@property (assign,nonatomic) int operation;                                                               //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) <UIViewControllerContextTransitioning> * transitionContext;                  //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                     //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) _UINavigationInteractiveTransitionBase * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * borderDimmingView;                                  //@synthesize borderDimmingView=_borderDimmingView - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * contentDimmingView;                                 //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,retain) UIView * containerFromView;                                                  //@synthesize containerFromView=_containerFromView - In the implementation block
@property (nonatomic,retain) UIView * containerToView;                                                    //@synthesize containerToView=_containerToView - In the implementation block
@property (nonatomic,retain) UIView * clipUnderView;                                                      //@synthesize clipUnderView=_clipUnderView - In the implementation block
@property (assign,nonatomic) BOOL clipUnderlapWhileTransitioning;                                         //@synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning - In the implementation block
@property (assign,nonatomic) int transitionStyle;                                                         //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) float transitionGap;                                                         //@synthesize transitionGap=_transitionGap - In the implementation block
-(void)dealloc;
-(void)setContentDimmingView:(id)arg1 ;
-(void)setBorderDimmingView:(id)arg1 ;
-(id)interactionController;
-(void)setTransitionContext:(id)arg1 ;
-(void)setInteractionAborted:(BOOL)arg1 ;
-(id)contentDimmingView;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(int)transitionStyle;
-(double)transitionDuration:(id)arg1 ;
-(id)borderDimmingView;
-(void)setClipUnderView:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setInteractionController:(id)arg1 ;
-(BOOL)interactionAborted;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)initWithCurrentOperation:(int)arg1 ;
-(id)resizedToContainerView;
-(id)resizedFromContainerView;
-(id)transitionContext;
-(id)containerFromView;
-(void)setContainerFromView:(id)arg1 ;
-(id)containerToView;
-(void)setContainerToView:(id)arg1 ;
-(id)clipUnderView;
-(BOOL)clipUnderlapWhileTransitioning;
-(void)setClipUnderlapWhileTransitioning:(BOOL)arg1 ;
-(void)setTransitionStyle:(int)arg1 ;
-(float)transitionGap;
-(void)setTransitionGap:(float)arg1 ;
@end

