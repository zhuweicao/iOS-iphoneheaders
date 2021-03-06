/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKAttributedRoute, VKAttributedRouteMatch, CLLocation, NSDate;

@interface VKAttributedRouteTrackedLocation : NSObject {

	VKAttributedRoute* _route;
	VKAttributedRouteMatch* _matchedLocation;
	CLLocation* _rawLocation;
	NSDate* _lastTimeInTunnel;
	PolylineCoordinate _lastGoodMatchCoordinate;
	PolylineCoordinate _newStepLastRouteCoord;
	SCD_Struct_VK61 _newStepLastGeoCoord;
	unsigned _newStepProgressions;
	double _newStepDistanceTraveled;
	double _estimatedCourse;

}

@property (nonatomic,readonly) VKAttributedRoute * route;                               //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) VKAttributedRouteMatch * matchedLocation;                //@synthesize matchedLocation=_matchedLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * rawLocation;                                //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate lastGoodMatchCoordinate;              //@synthesize lastGoodMatchCoordinate=_lastGoodMatchCoordinate - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeInTunnel;                                 //@synthesize lastTimeInTunnel=_lastTimeInTunnel - In the implementation block
@property (nonatomic,readonly) double timeSinceTunnel; 
@property (nonatomic,readonly) unsigned newStepProgressions;                            //@synthesize newStepProgressions=_newStepProgressions - In the implementation block
@property (nonatomic,readonly) double newStepDistanceTraveled;                          //@synthesize newStepDistanceTraveled=_newStepDistanceTraveled - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate newStepLastRouteCoord;                //@synthesize newStepLastRouteCoord=_newStepLastRouteCoord - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK61 newStepLastGeoCoord;                     //@synthesize newStepLastGeoCoord=_newStepLastGeoCoord - In the implementation block
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
-(id)route;
-(id)initWithRoute:(id)arg1 ;
-(id)matchedLocation;
-(void)updatedWithProjectedRouteMatch:(id)arg1 ;
-(PolylineCoordinate)lastGoodMatchCoordinate;
-(double)timeSinceTunnel;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)updateWithRouteMatch:(id)arg1 rawLocation:(id)arg2 newStepProgressions:(unsigned)arg3 newStepDistanceTraveled:(double)arg4 newStepLastRouteCoord:(PolylineCoordinate)arg5 newStepLastGeoCoord:(SCD_Struct_VK61)arg6 ;
-(unsigned)newStepProgressions;
-(SCD_Struct_VK61)newStepLastGeoCoord;
-(double)newStepDistanceTraveled;
-(PolylineCoordinate)newStepLastRouteCoord;
-(void)setLastTimeInTunnel:(id)arg1 ;
-(void)setMatchedLocation:(id)arg1 ;
-(void)forceGoodRouteMatch;
-(id)rawLocation;
-(id)lastTimeInTunnel;
@end

