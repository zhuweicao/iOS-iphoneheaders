/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface SSUpdatesDatabaseSchema : NSObject
+(id)databasePath;
+(void)createSchemaInDatabase:(id)arg1 withName:(id)arg2 ;
+(BOOL)databaseRequiresMigration:(id)arg1 ;
+(void)_migrate7000to7001InDatabase:(id)arg1 ;
@end

