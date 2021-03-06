/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface BWJPEGEncoderNode : BWNode {

	NSObject*<OS_dispatch_queue> _thumbnailGenerationQueue;
	NSObject*<OS_dispatch_group> _thumbnailGenerationGroup;
	OpaqueVTPixelTransferSessionRef _pixelTransferSession;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)_generateThumbnailForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 outputSurface:(_IOSurface*)arg3 ;
-(void)_encodeJPEGForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 outputSurface:(_IOSurface*)arg3 outputSurfaceSize:(int*)arg4 ;
@end

