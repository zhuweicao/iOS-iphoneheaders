/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShadowsRenderer.h>

@class NSArray, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {

	NSArray* mPyramidResources;
	TSCH3DPyramidBlurFBOResource* mFinalShadowResource;
	tvec2<int> mInitialSize;
	int mRequestedSize;
	float mTargetRadiusFactor;

}
-(float)blurSlackForQuality:(float)arg1 ;
-(void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(/*^block*/id)arg3 ;
-(id)shadowsFBOForContext:(id)arg1 ;
-(void)unprotectShadowInSession:(id)arg1 ;
-(id)initWithSize:(int)arg1 targetRadiusFactor:(float)arg2 ;
-(id)p_allResources;
-(void)p_setupResourcesForSize:(tvec2<int>)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

