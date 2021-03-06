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

@class NSString, NSMutableArray;

@interface GEORating : PBCodable <NSCopying> {

	double _maxScore;
	double _score;
	int _numberOfRatings;
	int _numberOfReviews;
	NSString* _provider;
	NSMutableArray* _reviews;
	NSString* _uRL;
	SCD_Struct_GE47 _has;

}

@property (nonatomic,readonly) float numberOfStars; 
@property (assign,nonatomic) bool hasScore; 
@property (assign,nonatomic) double score;                          //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) bool hasMaxScore; 
@property (assign,nonatomic) double maxScore;                       //@synthesize maxScore=_maxScore - In the implementation block
@property (assign,nonatomic) bool hasNumberOfRatings; 
@property (assign,nonatomic) int numberOfRatings;                   //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) bool hasProvider; 
@property (nonatomic,retain) NSString * provider;                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) bool hasURL; 
@property (nonatomic,retain) NSString * uRL;                        //@synthesize uRL=_uRL - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviews;              //@synthesize reviews=_reviews - In the implementation block
@property (assign,nonatomic) bool hasNumberOfReviews; 
@property (assign,nonatomic) int numberOfReviews;                   //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
-(id)initWithLocalSearchBusiness:(id)arg1 ;
-(id)initWithLocalSearchBusiness:(id)arg1 ;
-(float)numberOfStars;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(double)score;
-(void)setProvider:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)dictionaryRepresentation;
-(bool)hasURL;
-(id)uRL;
-(void)setReviews:(id)arg1 ;
-(void)addReview:(id)arg1 ;
-(unsigned long long)reviewsCount;
-(void)clearReviews;
-(id)reviewAtIndex:(unsigned long long)arg1 ;
-(void)setHasMaxScore:(bool)arg1 ;
-(bool)hasMaxScore;
-(void)setNumberOfRatings:(int)arg1 ;
-(void)setHasNumberOfRatings:(bool)arg1 ;
-(bool)hasNumberOfRatings;
-(bool)hasProvider;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setHasNumberOfReviews:(bool)arg1 ;
-(bool)hasNumberOfReviews;
-(int)numberOfRatings;
-(id)reviews;
-(int)numberOfReviews;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(bool)arg1 ;
-(bool)hasScore;
-(id)provider;
@end

