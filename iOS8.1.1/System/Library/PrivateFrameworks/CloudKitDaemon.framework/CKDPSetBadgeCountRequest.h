/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {

	unsigned _badgeCount;
	BOOL _forDevice;
	SCD_Struct_CK5 _has;

}

@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) unsigned badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) BOOL hasForDevice; 
@property (assign,nonatomic) BOOL forDevice;                   //@synthesize forDevice=_forDevice - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBadgeCount:(unsigned)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(void)setForDevice:(BOOL)arg1 ;
-(void)setHasForDevice:(BOOL)arg1 ;
-(BOOL)hasForDevice;
-(unsigned)badgeCount;
-(BOOL)forDevice;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

