/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIDrawable : NSObject
+(id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)arg1 ;
+(id)addShapeWithBounds:(CGRect)arg1 rotation:(float)arg2 geometry:(id)arg3 state:(id)arg4 ;
+(void)mapStyleAndTextFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(CGSize)sizeOfDiagram:(id)arg1 ;
+(void)mapStyleForPresentationName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
+(id)shapeGeometryForRectangle;
+(void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(id)shapeGeometryForRoundedRectangleWithRadius:(float)arg1 ;
+(id)shapeGeometryForEllipse;
+(id)shapeGeometryForBezierPath:(id)arg1 gSpace:(CGRect)arg2 ;
+(void)map1dArrowStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)map1dArrowStyleToShape:(id)arg1 state:(id)arg2 ;
+(id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)arg1 ;
+(id)presentationWithName:(id)arg1 point:(id)arg2 ;
+(id)styleForPresentation:(id)arg1 point:(id)arg2 state:(id)arg3 ;
+(void)mapShapeProperties:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapShapeProperties:(id)arg1 shapeStyle:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
+(id)styleForLabelName:(id)arg1 styleCount:(int)arg2 styleIndex:(int)arg3 state:(id)arg4 ;
+(void)addArrowHeadToShapeProperties:(id)arg1 ;
+(id)shapeGeometryWithShapeType:(int)arg1 adjustValues:(const int*)arg2 ;
+(void)mapStyleForLabelName:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapStyleForLabelName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
@end

