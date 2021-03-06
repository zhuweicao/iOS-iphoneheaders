/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXUIBezierPathOverride_super.h>

@interface GAXUIBezierPathOverride : GAXUIBezierPathOverride_super
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)_gaxUnderlyingPathDidChange;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addLineToPoint:(CGPoint)arg1 ;
-(void)addQuadCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)addArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5 ;
-(void)appendPath:(id)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(void)removeAllPoints;
@end

