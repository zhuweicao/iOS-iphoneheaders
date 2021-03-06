/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, UIImage, NSData;

@interface UIKBRenderer : NSObject {

	CGContextRef _cachingContext;
	/*^block*/ id _cachingContextCompletion;
	BOOL _opaque;
	CGContextRef _ctx;
	float _scale;
	int _renderFlags;
	NSString* _cacheKey;
	UIImage* _renderedImage;
	CGSize _size;

}

@property (nonatomic,readonly) CGContextRef context;                 //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,readonly) NSData * contextData; 
@property (nonatomic,readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float scale;                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL opaque;                          //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,readonly) int renderFlags;                      //@synthesize renderFlags=_renderFlags - In the implementation block
@property (nonatomic,readonly) UIImage * renderedImage;              //@synthesize renderedImage=_renderedImage - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                    //@synthesize cacheKey=_cacheKey - In the implementation block
+(id)rendererWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(float)arg3 opaque:(BOOL)arg4 renderFlags:(int)arg5 ;
+(CGContextRef)imageContextWithSize:(CGSize)arg1 scale:(float)arg2 opaque:(BOOL)arg3 invert:(BOOL)arg4 ;
-(void)dealloc;
-(CGSize)size;
-(float)scale;
-(CGContextRef)context;
-(void)renderKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(BOOL)opaque;
-(void)renderBackgroundTraits:(id)arg1 ;
-(id)cacheKey;
-(BOOL)loadCachedImageForHashString:(id)arg1 ;
-(id)renderedImage;
-(id)contextData;
-(void)setCacheKey:(id)arg1 ;
-(int)renderFlags;
-(void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)renderShadowEffect:(id)arg1 withTraits:(id)arg2 ;
-(id)initWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(float)arg3 opaque:(BOOL)arg4 renderFlags:(int)arg5 ;
-(void)ensureContext;
-(void)addPathForTraits:(id)arg1 displayRect:(CGRect*)arg2 ;
-(void)addRoundRect:(CGRect)arg1 radius:(float)arg2 corners:(unsigned)arg3 ;
-(void)addPathForRenderGeometry:(id)arg1 ;
-(void)_drawLinearGradient:(id)arg1 inRect:(CGRect)arg2 ;
-(CGContextRef)_contextForCacheImageSize:(CGSize)arg1 ;
-(void)_completeCacheImageWithTraitsIfNecessary:(id)arg1 ;
-(void)renderBackgroundTraits:(id)arg1 allowCaching:(BOOL)arg2 ;
-(void)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 ;
-(void)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 ;
-(void)renderKeyPathContents:(id)arg1 withTraits:(id)arg2 ;
-(void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(void)_drawKeyImage:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(BOOL)_drawSingleSymbol:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(BOOL)_drawKeyString:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(CGPathRef)_thickShiftGlyphPath;
-(CGPathRef)_thinShiftGlyphPath;
-(CGPathRef)_deleteGlyphPaths;
-(void)drawPath:(CGPathRef)arg1 weight:(float)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 fill:(BOOL)arg5 ;
-(void)drawShiftPath:(BOOL)arg1 weight:(float)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 ;
-(void)addPathForFlickPopupGeometries:(id)arg1 ;
-(void)addPathForFlickGeometry:(id)arg1 ;
-(void)addPathForSplitGeometry:(id)arg1 ;
-(id)pathForRenderGeometry:(id)arg1 ;
-(id)pathForFlickGeometry:(id)arg1 ;
-(id)pathForFlickPopupGeometries:(id)arg1 ;
-(id)pathForSplitGeometry:(id)arg1 ;
@end

