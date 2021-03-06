/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIContext : NSObject {

	CIContextInternal* _priv;

}
+(id)clContextOptions:(id)arg1 ;
+(id)glesContextOptions:(id)arg1 ;
+(Context*)glesInternalContextWithEAGLContext:(id)arg1 options:(id)arg2 ;
+(Context*)glesInternalContextWithOptions:(id)arg1 ;
+(int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(id)_singletonContext;
+(id)contextWithEAGLContext:(id)arg1 ;
+(bool)applicationIsInForegroundState;
+(id)contextWithOptions:(id)arg1 ;
+(id)context;
+(id)contextWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(void)_gpuContextCheck;
-(CGColorSpaceRef)_colorspace;
-(id)initWithEAGLContext:(id)arg1 ;
-(id)initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)render:(id)arg1 toIOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(bool)_isEAGLBackedContext;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 ;
-(void)_insertEventMarker:(const char*)arg1 ;
-(void)drawImage:(id)arg1 atPoint:(CGPoint)arg2 fromRect:(CGRect)arg3 ;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(IOSurfaceRef)createIOSurface:(id)arg1 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 ;
-(unsigned long long)maximumInputImageSize;
-(unsigned long long)maximumOutputImageSize;
-(CGSize)inputImageMaximumSize;
-(CGSize)outputImageMaximumSize;
-(void)dealloc;
-(id)init;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lock;
-(void)unlock;
-(IOSurfaceRef)createIOSurface:(id)arg1 fromRect:(CGRect)arg2 ;
@end

