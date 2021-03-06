/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, BKSApplicationDataStoreRepositoryClient;

@interface BKSApplicationDataStore : NSObject {

	NSString* _bundleId;
	BKSApplicationDataStoreRepositoryClient* _client;
	bool _clientNeedsCheckin;

}
+(void)synchronize;
+(void)_doWithClassClient:(/*^block*/ id)arg1 ;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
+(void)setPrefetchedKeys:(id)arg1 ;
+(void)_setClassClient:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)_initWithBundleId:(id)arg1 client:(id)arg2 ;
-(id)_makeSafe:(id)arg1 forType:(Class)arg2 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/ id)arg2 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/ id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/ id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/ id)arg3 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
@end

