/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEONameInfo, NSString, NSMutableArray;

@interface GEOStep : PBCodable <NSCopying> {

	SCD_Struct_GE59* _laneGuidances;
	unsigned _laneGuidancesCount;
	unsigned _laneGuidancesSpace;
	SCD_Struct_GE61* _junctionElements;
	unsigned _junctionElementsCount;
	unsigned _junctionElementsSpace;
	unsigned _distance;
	GEONameInfo* _exitNumber;
	unsigned _expectedTime;
	int _hintFirstAnnouncementZilchIndex;
	NSString* _instructions;
	int _junctionType;
	int _maneuverEndBasicIndex;
	int _maneuverEndZilchIndex;
	NSMutableArray* _maneuverNames;
	int _maneuverStartZilchIndex;
	int _maneuverType;
	NSString* _notice;
	int _overrideDrivingSide;
	int _overrideTransportType;
	NSMutableArray* _signposts;
	unsigned _stepID;
	NSMutableArray* _substeps;
	BOOL _endsOnFwy;
	BOOL _toFreeway;
	BOOL _tollAhead;
	BOOL _tollPrior;
	SCD_Struct_GE62 _has;

}

@property (nonatomic,readonly) unsigned maneuverEndIndex; 
@property (nonatomic,readonly) unsigned maneuverStartIndex; 
@property (nonatomic,readonly) BOOL hasHintFirstAnnouncementIndex; 
@property (nonatomic,readonly) int hintFirstAnnouncementIndex; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                      //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverEndBasicIndex; 
@property (assign,nonatomic) int maneuverEndBasicIndex;                            //@synthesize maneuverEndBasicIndex=_maneuverEndBasicIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverStartZilchIndex; 
@property (assign,nonatomic) int maneuverStartZilchIndex;                          //@synthesize maneuverStartZilchIndex=_maneuverStartZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverEndZilchIndex; 
@property (assign,nonatomic) int maneuverEndZilchIndex;                            //@synthesize maneuverEndZilchIndex=_maneuverEndZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                    //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                                     //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                       //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,readonly) unsigned laneGuidancesCount; 
@property (nonatomic,readonly) SCD_Struct_GE59* laneGuidances; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType;                                     //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,readonly) unsigned junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE61* junctionElements; 
@property (nonatomic,retain) NSMutableArray * signposts;                           //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) BOOL hasHintFirstAnnouncementZilchIndex; 
@property (assign,nonatomic) int hintFirstAnnouncementZilchIndex;                  //@synthesize hintFirstAnnouncementZilchIndex=_hintFirstAnnouncementZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasOverrideTransportType; 
@property (assign,nonatomic) int overrideTransportType;                            //@synthesize overrideTransportType=_overrideTransportType - In the implementation block
@property (assign,nonatomic) BOOL hasOverrideDrivingSide; 
@property (assign,nonatomic) int overrideDrivingSide;                              //@synthesize overrideDrivingSide=_overrideDrivingSide - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber;                             //@synthesize exitNumber=_exitNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTollPrior; 
@property (assign,nonatomic) BOOL tollPrior;                                       //@synthesize tollPrior=_tollPrior - In the implementation block
@property (assign,nonatomic) BOOL hasTollAhead; 
@property (assign,nonatomic) BOOL tollAhead;                                       //@synthesize tollAhead=_tollAhead - In the implementation block
@property (assign,nonatomic) BOOL hasEndsOnFwy; 
@property (assign,nonatomic) BOOL endsOnFwy;                                       //@synthesize endsOnFwy=_endsOnFwy - In the implementation block
@property (nonatomic,retain) NSMutableArray * substeps;                            //@synthesize substeps=_substeps - In the implementation block
@property (assign,nonatomic) BOOL hasToFreeway; 
@property (assign,nonatomic) BOOL toFreeway;                                       //@synthesize toFreeway=_toFreeway - In the implementation block
@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) NSString * instructions;                              //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) BOOL hasNotice; 
@property (nonatomic,retain) NSString * notice;                                    //@synthesize notice=_notice - In the implementation block
-(id)instructions;
-(void)setInstructions:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setNotice:(id)arg1 ;
-(BOOL)hasNotice;
-(id)notice;
-(BOOL)hasDistance;
-(BOOL)hasExpectedTime;
-(unsigned)expectedTime;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(void)setManeuverNames:(id)arg1 ;
-(void)clearLaneGuidances;
-(void)clearJunctionElements;
-(void)setSignposts:(id)arg1 ;
-(void)setExitNumber:(id)arg1 ;
-(void)setSubsteps:(id)arg1 ;
-(void)addManeuverName:(id)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(void)addSubsteps:(id)arg1 ;
-(BOOL)hasStepID;
-(void)setStepID:(unsigned)arg1 ;
-(BOOL)hasManeuverEndBasicIndex;
-(int)maneuverEndBasicIndex;
-(void)setManeuverEndBasicIndex:(int)arg1 ;
-(BOOL)hasManeuverStartZilchIndex;
-(int)maneuverStartZilchIndex;
-(void)setManeuverStartZilchIndex:(int)arg1 ;
-(BOOL)hasManeuverEndZilchIndex;
-(int)maneuverEndZilchIndex;
-(void)setManeuverEndZilchIndex:(int)arg1 ;
-(BOOL)hasManeuverType;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(unsigned)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned)arg1 ;
-(unsigned)laneGuidancesCount;
-(SCD_Struct_GE59)laneGuidanceAtIndex:(unsigned)arg1 ;
-(void)addLaneGuidance:(SCD_Struct_GE59)arg1 ;
-(BOOL)hasJunctionType;
-(int)junctionType;
-(void)setJunctionType:(int)arg1 ;
-(unsigned)junctionElementsCount;
-(SCD_Struct_GE61)junctionElementAtIndex:(unsigned)arg1 ;
-(void)addJunctionElement:(SCD_Struct_GE61)arg1 ;
-(unsigned)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned)arg1 ;
-(BOOL)hasHintFirstAnnouncementZilchIndex;
-(int)hintFirstAnnouncementZilchIndex;
-(void)setHintFirstAnnouncementZilchIndex:(int)arg1 ;
-(void)setOverrideTransportType:(int)arg1 ;
-(BOOL)hasOverrideDrivingSide;
-(int)overrideDrivingSide;
-(void)setOverrideDrivingSide:(int)arg1 ;
-(BOOL)hasExitNumber;
-(id)exitNumber;
-(BOOL)hasTollPrior;
-(BOOL)tollPrior;
-(void)setTollPrior:(BOOL)arg1 ;
-(BOOL)hasTollAhead;
-(BOOL)tollAhead;
-(void)setTollAhead:(BOOL)arg1 ;
-(BOOL)hasEndsOnFwy;
-(BOOL)endsOnFwy;
-(void)setEndsOnFwy:(BOOL)arg1 ;
-(unsigned)substepsCount;
-(void)clearSubsteps;
-(id)substepsAtIndex:(unsigned)arg1 ;
-(BOOL)hasToFreeway;
-(BOOL)toFreeway;
-(void)setToFreeway:(BOOL)arg1 ;
-(BOOL)hasInstructions;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)setHasManeuverEndBasicIndex:(BOOL)arg1 ;
-(void)setHasManeuverStartZilchIndex:(BOOL)arg1 ;
-(void)setHasManeuverEndZilchIndex:(BOOL)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(SCD_Struct_GE59*)laneGuidances;
-(void)setLaneGuidances:(SCD_Struct_GE59*)arg1 count:(unsigned)arg2 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(SCD_Struct_GE61*)junctionElements;
-(void)setJunctionElements:(SCD_Struct_GE61*)arg1 count:(unsigned)arg2 ;
-(void)setHasHintFirstAnnouncementZilchIndex:(BOOL)arg1 ;
-(void)setHasOverrideTransportType:(BOOL)arg1 ;
-(void)setHasOverrideDrivingSide:(BOOL)arg1 ;
-(void)setHasTollPrior:(BOOL)arg1 ;
-(void)setHasTollAhead:(BOOL)arg1 ;
-(void)setHasEndsOnFwy:(BOOL)arg1 ;
-(void)setHasToFreeway:(BOOL)arg1 ;
-(id)maneuverNames;
-(id)signposts;
-(id)substeps;
-(id)maneuverDescription;
-(BOOL)hasHintFirstAnnouncementIndex;
-(int)hintFirstAnnouncementIndex;
-(id)intersectionNameInfo;
-(void)shieldInfo:(/*^block*/ id)arg1 ;
-(BOOL)maneuverIsHighwayExit;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)maneuverStartIndex;
-(unsigned)stepID;
-(BOOL)hasOverrideTransportType;
-(int)overrideTransportType;
-(unsigned)maneuverEndIndex;
-(id)firstNameInfo;
@end

