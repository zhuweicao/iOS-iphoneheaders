/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary, FCRFaceDetector;

@interface CIFaceCoreDetector : CIDetector {

	CIContext* context;
	NSMutableDictionary* featureOptions;
	FCRFaceDetector* faceCoreDetector;

}

@property (nonatomic,retain) CIContext * context; 
@property (assign) FCRFaceDetector * faceCoreDetector; 
-(id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(CGAffineTransform*)arg3 ;
-(id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(CGAffineTransform)ctmForImageWithBounds:(CGRect)arg1 orientation:(int)arg2 ;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(id)faceCoreDetector;
-(void)setFaceCoreDetector:(id)arg1 ;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)finalize;
@end

