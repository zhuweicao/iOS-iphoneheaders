/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>

@class KNBuildFlameSystem, TSDGLShader, TSDGLTextureInfo, TSDGLDataBuffer;

@interface KNBuildFlame : KNAnimationEffect <KNFrameBuildAnimator> {

	KNBuildFlameSystem* mFlameSystem;
	TSDGLShader* mFlameShader;
	TSDGLTextureInfo* mFlameTexture;
	CATransform3D mBaseTransform;
	TSDGLShader* mObjectShader;
	TSDGLDataBuffer* mObjectDataBuffer;
	CGRect mDrawableFrame;
	CGRect mFrameRect;
	TSDGLShader* mFBOShader;
	TSDGLDataBuffer* mFBODataBuffer;
	unsigned mFBOTexture;
	unsigned mFramebuffer;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(BOOL)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(CATransform3D)p_orthoTransformWithScale:(float)arg1 offset:(CGPoint)arg2 ;
-(id)p_flameSystemForTR:(id)arg1 build:(id)arg2 ;
-(void)p_setupFBOWithSize:(CGSize)arg1 ;
-(void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2 ;
-(void)dealloc;
@end

