/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)resetWithError:(id*)arg1 ;
-(void)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(BOOL)arg3 ;
-(void)discardDeleteForRemappedRecordWithIdentifier:(id)arg1 ;
@end

