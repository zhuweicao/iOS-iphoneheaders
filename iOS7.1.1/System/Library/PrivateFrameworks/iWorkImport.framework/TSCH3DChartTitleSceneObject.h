/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartLabelsContainingSceneObject.h>

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(CGSize)p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id*)arg2 ;
+(CGSize)labelWrapSizeForScene:(id)arg1 ;
+(bool)setLabelWrapBounds:(const box<glm::detail::tvec2<float> >*)arg1 forScene:(id)arg2 ;
+(TSCH3DScenePart)partWithChartInfo:(id)arg1 ;
-(int)p_animationTextureSceneDelegateChunkPlane;
-(void)addTitleAnimationToClips:(id)arg1 ;
-(void)renderLabels:(id)arg1 ;
-(void)renderAnnotatedLabels:(id)arg1 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(bool)isAnnotated;
-(void)p_renderLabel:(id)arg1 ;
@end
