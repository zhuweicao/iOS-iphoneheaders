/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface GEOVStyleAttribute : PBCodable {

	int _intValue;
	unsigned _key;
	SCD_Struct_GE55 _has;

}

@property (assign,nonatomic) unsigned key;                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) bool hasIntValue; 
@property (assign,nonatomic) int intValue;                  //@synthesize intValue=_intValue - In the implementation block
-(void)setIntValue:(int)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)intValue;
-(unsigned)key;
-(id)dictionaryRepresentation;
-(void)setKey:(unsigned)arg1 ;
-(bool)hasIntValue;
-(void)setHasIntValue:(bool)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
