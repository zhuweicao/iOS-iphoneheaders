/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {

	GEOPDAnalyticMetadata* _analyticMetadata;
	GEOPDClientMetadata* _clientMetadata;
	GEORPProblem* _problem;
	GEORPUserCredentials* _userCredentials;

}

@property (nonatomic,readonly) BOOL hasProblem; 
@property (nonatomic,retain) GEORPProblem * problem;                                //@synthesize problem=_problem - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;                //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;              //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                  //@synthesize clientMetadata=_clientMetadata - In the implementation block
-(id)initWithProblem:(id)arg1 traits:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(BOOL)hasClientMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(GEOPDClientMetadata *)clientMetadata;
-(void)setProblem:(GEORPProblem *)arg1 ;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(BOOL)hasProblem;
-(BOOL)hasUserCredentials;
-(GEORPProblem *)problem;
-(GEORPUserCredentials *)userCredentials;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

