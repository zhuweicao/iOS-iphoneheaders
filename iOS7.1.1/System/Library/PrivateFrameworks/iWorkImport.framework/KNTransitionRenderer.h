/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationRenderer.h>

@class NSMutableArray, NSDictionary, CALayer, TSDFPSCounter;

@interface KNTransitionRenderer : KNAnimationRenderer {

	NSMutableArray* mTextures;
	long long mNumberOfAnimationsStarted;
	NSDictionary* mAnimatedLayers;
	bool mOutgoingSlideRendered;
	bool mShouldAnimateTransition;
	bool mAnimationsRanToCompletion;
	NSDictionary* mAttributes;
	id mTransitionEndCallbackTarget;
	SEL mTransitionEndCallbackSelector;
	CALayer* mBackgroundLayer;
	TSDFPSCounter* mFPSCounter;

}
-(void)p_checkForNullTransitions:(Class)arg1 ;
-(void)setupPluginContext;
-(void)p_generateLayers;
-(void)setupLayerTreeForTransition;
-(void)p_renderSlideIndex:(unsigned long long)arg1 ;
-(bool)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(bool)arg2 ;
-(id)plugin;
-(bool)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(bool)arg3 ;
-(void)p_removeAnimationsOnAnimatedLayers;
-(void)p_reset;
-(void)removeAnimationsAndFinish:(bool)arg1 ;
-(id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6 ;
-(void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)renderOutgoingSlideAndPrecacheIncomingSlide;
-(void)animateWithDelay:(double)arg1 ;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(void)teardown;
-(void)stopAnimations;
@end
