/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIUnsharpMask : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputIntensity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(bool)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputIntensity:(id)arg1 ;
-(id)_kernel;
-(id)inputIntensity;
-(void)setInputRadius:(id)arg1 ;
-(id)inputRadius;
@end
