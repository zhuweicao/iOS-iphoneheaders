/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess;

@interface GEOMapTileFinder : GEOMapRequest {

	SCD_Struct_GE12 _center;
	double _radius;
	/*^block*/ id _tileHandler;
	BOOL _isCanceling;

}

@property (nonatomic,copy) id tileHandler;                      //@synthesize tileHandler=_tileHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)dealloc;
-(void)cancel;
-(id).cxx_construct;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE12)arg2 radius:(double)arg3 ;
-(void)findTiles:(/*^block*/ id)arg1 ;
-(void)findTiles:(/*^block*/ id)arg1 excludingKey:(const GEOTileKey*)arg2 ;
-(void)setTileHandler:(/*^block*/ id)arg1 ;
-(void)_fetchDataForKeys:(const unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >*)arg1 ;
-(/*^block*/ id)tileHandler;
-(id)map;
@end

