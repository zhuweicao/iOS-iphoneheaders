/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUCache.h>

@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache {

	TSUReadWriteQueue* mReadWriteQueue;

}

@property (nonatomic,readonly) TSUReadWriteQueue * readWriteQueue; 
-(bool)hasFlushableContent;
-(void)removeObjectForKey:(id)arg1 andWait:(bool)arg2 ;
-(id)readWriteQueue;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)unload;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
@end
