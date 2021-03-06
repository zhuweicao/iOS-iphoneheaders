/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIRenditionMetrics : NSObject {

	CGSize _imageSize;
	CGSize _edgeBottomLeftMargin;
	CGSize _edgeTopRightMargin;
	CGSize _alignmentBottomLeftMargin;
	CGSize _alignmentTopRightMargin;
	double _scale;
	struct {
		unsigned scalesVertically : 1;
		unsigned scalesHorizontally : 1;
		unsigned reserved : 14;
	}  _crmFlags;

}
-(double)scale;
-(CGSize)imageSize;
-(id)initWithImageSize:(CGSize)arg1 edgeBottomLeft:(CGSize)arg2 edgeTopRight:(CGSize)arg3 alignmentBottomLeft:(CGSize)arg4 alignmentTopRight:(CGSize)arg5 scalesVertically:(bool)arg6 scalesHorizontally:(bool)arg7 scale:(double)arg8 ;
-(CGSize)edgeBottomLeftMargin;
-(CGSize)edgeTopRightMargin;
-(CGSize)alignmentBottomLeftMargin;
-(CGSize)alignmentTopRightMargin;
-(bool)scalesVertically;
-(bool)scalesHorizontally;
-(CGRect)edgeRect;
-(CGRect)alignmentRect;
-(CGRect)insetRectWithMetrics:(CGRect)arg1 ;
@end

