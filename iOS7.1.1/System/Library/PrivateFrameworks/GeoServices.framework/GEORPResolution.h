/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOMapRegion, NSMutableArray;

@interface GEORPResolution : PBCodable <NSCopying> {

	double _resolutionDate;
	GEOMapRegion* _displayRegion;
	NSMutableArray* _localizedChangeLists;
	NSMutableArray* _updatedPlaces;
	SCD_Struct_GE55 _has;

}

@property (assign,nonatomic) bool hasResolutionDate; 
@property (assign,nonatomic) double resolutionDate;                              //@synthesize resolutionDate=_resolutionDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedPlaces;                     //@synthesize updatedPlaces=_updatedPlaces - In the implementation block
@property (nonatomic,readonly) bool hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion;                       //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedChangeLists;              //@synthesize localizedChangeLists=_localizedChangeLists - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUpdatedPlaces:(id)arg1 ;
-(void)setDisplayRegion:(id)arg1 ;
-(void)setLocalizedChangeLists:(id)arg1 ;
-(void)addUpdatedPlace:(id)arg1 ;
-(void)addLocalizedChangeList:(id)arg1 ;
-(unsigned long long)updatedPlacesCount;
-(void)clearUpdatedPlaces;
-(id)updatedPlaceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)localizedChangeListsCount;
-(void)clearLocalizedChangeLists;
-(id)localizedChangeListAtIndex:(unsigned long long)arg1 ;
-(void)setResolutionDate:(double)arg1 ;
-(void)setHasResolutionDate:(bool)arg1 ;
-(bool)hasResolutionDate;
-(bool)hasDisplayRegion;
-(double)resolutionDate;
-(id)updatedPlaces;
-(id)displayRegion;
-(id)localizedChangeLists;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

