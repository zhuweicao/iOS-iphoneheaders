/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK2 _mapRect;
	SCD_Struct_MK2 _region;
	unsigned long long _mapType;
	int _mode;
	bool _showsPointsOfInterest;
	bool _showsBuildings;
	bool _rendersInBackground;
	CGSize _size;
	double _scale;
	bool _usingRect;

}

@property (nonatomic,copy) MKMapCamera * camera;                                                                                //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 mapRect;                                                                            //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 region;                                                                             //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                                                        //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) bool showsPointsOfInterest;                                                                        //@synthesize showsPointsOfInterest=_showsPointsOfInterest - In the implementation block
@property (assign,nonatomic) bool showsBuildings;                                                                               //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                                                                      //@synthesize scale=_scale - In the implementation block
@property (assign,setter=_setRendersInBackground:,getter=_rendersInBackground,nonatomic) bool rendersInBackground;              //@synthesize rendersInBackground=_rendersInBackground - In the implementation block
@property (nonatomic,readonly) bool usingRect;                                                                                  //@synthesize usingRect=_usingRect - In the implementation block
-(SCD_Struct_MK2)mapRect;
-(bool)usingRect;
-(bool)_rendersInBackground;
-(CGSize)size;
-(id)init;
-(double)scale;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(void).cxx_destruct;
-(void)_setRendersInBackground:(bool)arg1 ;
-(id)camera;
-(void)setCamera:(id)arg1 ;
-(void)setMapRect:(SCD_Struct_MK2)arg1 ;
-(void)setRegion:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)region;
-(unsigned long long)mapType;
-(bool)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(bool)arg1 ;
-(bool)showsBuildings;
-(void)setShowsBuildings:(bool)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
@end

