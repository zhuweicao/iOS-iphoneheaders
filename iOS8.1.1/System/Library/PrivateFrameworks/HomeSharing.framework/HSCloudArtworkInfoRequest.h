/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSCloudArtworkInfoRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 ;
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 sessionID:(unsigned)arg3 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 ;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 sessionID:(unsigned)arg3 ;
@end

