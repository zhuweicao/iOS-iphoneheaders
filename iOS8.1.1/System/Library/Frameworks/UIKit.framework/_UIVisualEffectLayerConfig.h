/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject {

	double _opacity;
	NSString* _filterType;
	UIColor* _fillColor;

}

@property (nonatomic,readonly) double opacity;                     //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
+(id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3 ;
-(void)dealloc;
-(double)opacity;
-(UIColor *)fillColor;
-(NSString *)filterType;
-(void)configureLayerView:(id)arg1 ;
@end

