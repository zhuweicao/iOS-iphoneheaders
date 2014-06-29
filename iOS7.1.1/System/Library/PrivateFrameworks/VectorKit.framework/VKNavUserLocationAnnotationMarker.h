/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMeshAnnotationMarker.h>

@class VKAnimation, VGLTexture, VGLRenderState;

@interface VKNavUserLocationAnnotationMarker : VKMeshAnnotationMarker {

	bool _shouldBillboard;
	VKAnimation* _billboardAnimation;
	float _billboardFactor;
	float _scale;
	bool _shouldShowCourse;
	bool _puckFlipped;
	double _presentationCourse;
	double _sizePoints;
	double _puckOffset;
	bool _stale;
	VGLTexture* _arrowTexture;
	VGLTexture* _circleTexture;
	VKAnimation* _puckStyleAnimation;
	int _puckStyle;
	float _greyPuckAlphaScale;
	VGLRenderState* _puckRenderState;
	SCD_Struct_VK150 _puckState;
	int _style;
	VGLColor _arrowColor;
	VGLColor _arrowColorStale;
	float _circleBrightness;
	float _arrowBrightness;

}

@property (assign,nonatomic) bool shouldBillboard;                   //@synthesize shouldBillboard=_shouldBillboard - In the implementation block
@property (assign,nonatomic) bool shouldShowCourse;                  //@synthesize shouldShowCourse=_shouldShowCourse - In the implementation block
@property (assign,nonatomic) float scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign,getter=isStale,nonatomic) bool stale;              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double presentationCourse; 
@property (assign,nonatomic) VGLColor innerColor;                    //@synthesize arrowColor=_arrowColor - In the implementation block
-(void)dealloc;
-(void)setStyle:(int)arg1 ;
-(float)scale;
-(int)style;
-(void)setScale:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id).cxx_construct;
-(void)setModel:(id)arg1 ;
-(void)layoutWithContext:(id)arg1 ;
-(void)drawWithContext:(id)arg1 ;
-(void)_updatePuckStyle;
-(void)_updateTextures;
-(double)presentationCourse;
-(void)_drawPuckWithContext:(id)arg1 ;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setShouldBillboard:(bool)arg1 ;
-(void)setShouldShowCourse:(bool)arg1 ;
-(void)setStale:(bool)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 style:(int)arg3 ;
-(void)updateWithStyle:(id)arg1 ;
-(bool)isStale;
-(bool)shouldBillboard;
-(bool)shouldShowCourse;
-(VGLColor)innerColor;
-(void)setInnerColor:(VGLColor)arg1 ;
@end
