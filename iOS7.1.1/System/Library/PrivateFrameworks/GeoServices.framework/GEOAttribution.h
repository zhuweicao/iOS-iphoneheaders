/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEOAttribution : PBCodable <NSCopying> {

	NSString* _badge;
	NSString* _badgeChecksum;
	NSString* _logo;
	NSString* _logoChecksum;
	NSString* _name;
	NSString* _url;

}

@property (nonatomic,readonly) bool hasBadge; 
@property (nonatomic,retain) NSString * badge;                      //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) bool hasLogo; 
@property (nonatomic,retain) NSString * logo;                       //@synthesize logo=_logo - In the implementation block
@property (nonatomic,readonly) bool hasName; 
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) bool hasUrl; 
@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) bool hasBadgeChecksum; 
@property (nonatomic,retain) NSString * badgeChecksum;              //@synthesize badgeChecksum=_badgeChecksum - In the implementation block
@property (nonatomic,readonly) bool hasLogoChecksum; 
@property (nonatomic,retain) NSString * logoChecksum;               //@synthesize logoChecksum=_logoChecksum - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(bool)hasBadge;
-(id)badge;
-(bool)hasLogo;
-(id)logo;
-(id)badgeChecksum;
-(id)logoChecksum;
-(bool)hasUrl;
-(void)setBadge:(id)arg1 ;
-(void)setLogo:(id)arg1 ;
-(void)setBadgeChecksum:(id)arg1 ;
-(void)setLogoChecksum:(id)arg1 ;
-(bool)hasBadgeChecksum;
-(bool)hasLogoChecksum;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(bool)hasName;
@end

