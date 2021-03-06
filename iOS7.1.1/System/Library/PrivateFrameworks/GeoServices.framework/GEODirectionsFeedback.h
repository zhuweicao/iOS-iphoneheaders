/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable <NSCopying> {

	SCD_Struct_GE88* _stepFeedbacks;
	unsigned long long _stepFeedbacksCount;
	unsigned long long _stepFeedbacksSpace;
	NSData* _directionResponseID;
	NSMutableArray* _traversedRouteIDs;

}

@property (nonatomic,readonly) bool hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID;                         //@synthesize directionResponseID=_directionResponseID - In the implementation block
@property (nonatomic,retain) NSMutableArray * traversedRouteIDs;                   //@synthesize traversedRouteIDs=_traversedRouteIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long stepFeedbacksCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* stepFeedbacks; 
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDirectionResponseID:(id)arg1 ;
-(void)addTraversedRouteIDs:(id)arg1 ;
-(void)addStepFeedback:(SCD_Struct_GE88)arg1 ;
-(void)setTraversedRouteIDs:(id)arg1 ;
-(void)clearStepFeedbacks;
-(unsigned long long)traversedRouteIDsCount;
-(void)clearTraversedRouteIDs;
-(id)traversedRouteIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stepFeedbacksCount;
-(SCD_Struct_GE88)stepFeedbackAtIndex:(unsigned long long)arg1 ;
-(bool)hasDirectionResponseID;
-(SCD_Struct_GE88*)stepFeedbacks;
-(void)setStepFeedbacks:(SCD_Struct_GE88*)arg1 count:(unsigned long long)arg2 ;
-(id)directionResponseID;
-(id)traversedRouteIDs;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

