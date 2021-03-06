/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSAPdfHyperlinkController.h>

@class NSArray;

@interface KNPdfHyperlinkController : TSAPdfHyperlinkController {

	NSArray* mSlides;
	CGRect mCanvasRect;
	long long mCurrentSlideNumber;

}

@property (assign,nonatomic) long long currentSlideNumber; 
-(CGRect)canvasRect;
-(BOOL)ignoreUrl:(id)arg1 ;
-(BOOL)isDestination:(id)arg1 ;
-(id)destinationFromUrl:(id)arg1 ;
-(long long)currentSlideNumber;
-(void)setCurrentSlideNumber:(long long)arg1 ;
-(void)addHyperlinksForReps:(id)arg1 targetRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(id)nameForSlide:(id)arg1 ;
-(id)nameFromIndex:(unsigned long long)arg1 ;
-(long long)getFirstNonHiddenIndex:(unsigned long long)arg1 delta:(long long)arg2 ;
-(id)initWithShow:(id)arg1 ;
-(id)currentSlideName;
-(void)dealloc;
@end

