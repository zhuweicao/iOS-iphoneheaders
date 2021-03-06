/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessExpress/DataAccessExpress-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {

	NSString* _accountID;
	int _dataclass;

}

@property (readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (readonly) int dataclass;                     //@synthesize dataclass=_dataclass - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)dataclass;
-(id)initWithAccountID:(id)arg1 andDataclass:(int)arg2 ;
-(id)accountID;
@end

