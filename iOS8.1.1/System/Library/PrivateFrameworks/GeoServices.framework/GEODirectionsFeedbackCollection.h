/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE114 _navigationAudioFeedback;
	double _endTimeStamp;
	double _startTimeStamp;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _finalLocation;
	BOOL _arrivedAtDestination;
	SCD_Struct_GE50 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;                  //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) BOOL hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation;                           //@synthesize finalLocation=_finalLocation - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimeStamp; 
@property (assign,nonatomic) double startTimeStamp;                                 //@synthesize startTimeStamp=_startTimeStamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndTimeStamp; 
@property (assign,nonatomic) double endTimeStamp;                                   //@synthesize endTimeStamp=_endTimeStamp - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedAtDestination; 
@property (assign,nonatomic) BOOL arrivedAtDestination;                             //@synthesize arrivedAtDestination=_arrivedAtDestination - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationAudioFeedback; 
@property (assign,nonatomic) SCD_Struct_GE112 navigationAudioFeedback;              //@synthesize navigationAudioFeedback=_navigationAudioFeedback - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartTimeStamp:(double)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(void)setArrivedAtDestination:(BOOL)arg1 ;
-(void)setNavigationAudioFeedback:(SCD_Struct_GE112)arg1 ;
-(void)setEndTimeStamp:(double)arg1 ;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(unsigned long long)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFinalLocation;
-(void)setHasStartTimeStamp:(BOOL)arg1 ;
-(BOOL)hasStartTimeStamp;
-(void)setHasEndTimeStamp:(BOOL)arg1 ;
-(BOOL)hasEndTimeStamp;
-(void)setHasArrivedAtDestination:(BOOL)arg1 ;
-(BOOL)hasArrivedAtDestination;
-(void)setHasNavigationAudioFeedback:(BOOL)arg1 ;
-(BOOL)hasNavigationAudioFeedback;
-(NSMutableArray *)directionsFeedbacks;
-(GEOLocation *)finalLocation;
-(double)startTimeStamp;
-(double)endTimeStamp;
-(BOOL)arrivedAtDestination;
-(SCD_Struct_GE112)navigationAudioFeedback;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

