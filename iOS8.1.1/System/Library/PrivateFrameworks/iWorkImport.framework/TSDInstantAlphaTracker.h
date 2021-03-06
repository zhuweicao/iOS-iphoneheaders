/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayoutManipulatingTracker.h>

@class TSDImageRep, TSUColor, TSDInstantAlphaImage, NSMutableArray, TSDInstantAlphaBinaryBitmap, TSUIntegerKeyDictionary;

@interface TSDInstantAlphaTracker : NSObject <TSDLayoutManipulatingTracker> {

	TSDImageRep* mImageRep;
	BOOL mCurrentlyInOperation;
	CGPoint mStartPoint;
	TSUColor* mStartColor;
	long long mTolerance;
	BOOL mAllowDisconnectedRegions;
	BOOL mOperationShouldSubtract;
	double mAngleInRadiansForUIFeedback;
	CGPoint mControllingPoint;
	CGSize mUnderlyingImageSize;
	CGSize mRawImageSize;
	CGSize mVisualImageSize;
	TSDInstantAlphaImage* mMaskingImage;
	NSMutableArray* mDecoratorLayers;
	TSUColor* mFillColor;
	TSDInstantAlphaBinaryBitmap* mLastBitmap;
	TSUIntegerKeyDictionary* mWandBitmapCache;
	TSUIntegerKeyDictionary* mDisconnectedBitmapCache;
	BOOL mOperationWasCancelled;

}

@property (assign,nonatomic) BOOL allowDisconnectedRegions; 
@property (assign,nonatomic) BOOL operationShouldSubtract; 
@property (assign,nonatomic) long long tolerance; 
@property (assign,nonatomic) double angleInRadiansForUIFeedback; 
@property (assign,nonatomic) CGPoint controllingPoint; 
+(id)newInstantAlphaImageWithCGImage:(CGImageRef)arg1 ofSize:(CGSize)arg2 ;
+(id)newMaskBitmapWithPoint:(CGPoint)arg1 image:(id)arg2 tolerance:(unsigned long long)arg3 oldMaskBitmap:(id)arg4 ;
+(id)newMaskSeedFillWithPoint:(CGPoint)arg1 inImage:(id)arg2 tolerance:(unsigned long long)arg3 oldFill:(id)arg4 ;
-(void)changeDynamicLayoutsForReps:(id)arg1 ;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1 ;
-(void)commitChangesForReps:(id)arg1 ;
-(BOOL)supportsAlignmentGuides;
-(BOOL)operationShouldBeDynamic;
-(CGPoint)p_convertNaturalPointToImagePoint:(CGPoint)arg1 ;
-(id)colorForOperationAtPoint:(CGPoint)arg1 ;
-(double)angleInRadiansForUIFeedback;
-(CGPoint)controllingPoint;
-(BOOL)allowDisconnectedRegions;
-(void)p_updateDecoratorLayersWithMask:(id)arg1 ;
-(void)beginIAOperationAtPoint:(CGPoint)arg1 ;
-(void)cancelCurrentOperation;
-(id)decoratorLayers;
-(id)bezierPathForIABitmap:(id)arg1 ;
-(void)setAllowDisconnectedRegions:(BOOL)arg1 ;
-(BOOL)operationShouldSubtract;
-(void)setOperationShouldSubtract:(BOOL)arg1 ;
-(void)setAngleInRadiansForUIFeedback:(double)arg1 ;
-(void)setControllingPoint:(CGPoint)arg1 ;
-(long long)tolerance;
-(void)setTolerance:(long long)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
@end

