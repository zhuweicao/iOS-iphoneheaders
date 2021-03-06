/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLFileSystemPersistence : NSObject {

	NSObject<OS_dispatch_queue>* _writerQueue;

}
+(id)sharedInstance;
+(id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1 ;
+(void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 ;
+(void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistMetadata:(id)arg1 fileURL:(id)arg2 ;
+(void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2 ;
@end

