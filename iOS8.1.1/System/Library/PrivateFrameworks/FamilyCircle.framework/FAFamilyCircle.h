/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <familycircled/NSSecureCoding.h>

@class NSArray, FAFamilyCloudKitProperties, NSDictionary;

@interface FAFamilyCircle : NSObject <NSSecureCoding> {

	NSArray* _members;
	FAFamilyCloudKitProperties* _cloudKitProperties;
	NSDictionary* __serverResponse;

}

@property (readonly) NSArray * members;                                            //@synthesize members=_members - In the implementation block
@property (readonly) FAFamilyCloudKitProperties * cloudKitProperties;              //@synthesize cloudKitProperties=_cloudKitProperties - In the implementation block
@property (readonly) NSDictionary * _serverResponse;                               //@synthesize _serverResponse=__serverResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServerResponse:(id)arg1 ;
-(FAFamilyCloudKitProperties *)cloudKitProperties;
-(NSDictionary *)_serverResponse;
-(NSArray *)members;
@end

