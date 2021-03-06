/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface TileLayer : CALayer {

	TileGrid* _tileGrid;
	unsigned _paintCount;

}

@property (assign,nonatomic) unsigned paintCount;              //@synthesize paintCount=_paintCount - In the implementation block
@property (assign,nonatomic) TileGrid* tileGrid;               //@synthesize tileGrid=_tileGrid - In the implementation block
+(id)layerBeingPainted;
-(id)actionForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(unsigned)paintCount;
-(void)setPaintCount:(unsigned)arg1 ;
-(TileGrid*)tileGrid;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setTileGrid:(TileGrid*)arg1 ;
-(void)layoutSublayers;
@end

