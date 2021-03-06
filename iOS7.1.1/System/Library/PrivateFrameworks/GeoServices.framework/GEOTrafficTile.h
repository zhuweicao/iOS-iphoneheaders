/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSData;

@interface GEOTrafficTile : PBCodable <NSCopying> {

	NSMutableArray* _trafficIncidents;
	NSMutableArray* _trafficSegments;
	NSData* _vertices;

}

@property (nonatomic,readonly) bool hasVertices; 
@property (nonatomic,retain) NSData * vertices;                              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficSegments;               //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficIncidents;              //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
-(SCD_Struct_GE75*)createUnpackedVerticesWithGutterSize:(long long)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVertices:(id)arg1 ;
-(void)setTrafficSegments:(id)arg1 ;
-(void)setTrafficIncidents:(id)arg1 ;
-(void)addTrafficSegment:(id)arg1 ;
-(void)addTrafficIncident:(id)arg1 ;
-(unsigned long long)trafficSegmentsCount;
-(void)clearTrafficSegments;
-(id)trafficSegmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficIncidentsCount;
-(void)clearTrafficIncidents;
-(id)trafficIncidentAtIndex:(unsigned long long)arg1 ;
-(bool)hasVertices;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)vertices;
-(id)trafficSegments;
-(id)trafficIncidents;
@end

