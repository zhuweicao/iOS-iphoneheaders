/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSData;


@protocol MapsSynced <NSObject>
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@optional
-(void)setPosition:(double)arg1;
-(double)position;

@required
-(NSString *)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1;
-(BOOL)updateFromSyncData:(id)arg1;
-(NSData *)syncData;

@end
