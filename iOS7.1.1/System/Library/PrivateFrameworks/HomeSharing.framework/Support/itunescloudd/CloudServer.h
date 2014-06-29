/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudPushNotificationControllerDelegate.h>
#import <iTunesStore/SSAuthenticateRequestDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, CloudPushNotificationController, HSCloudAvailabilityController, NSOperationQueue;

@interface CloudServer : NSObject <CloudPushNotificationControllerDelegate, SSAuthenticateRequestDelegate> {

	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	unsigned long long _daemonConfiguration;
	BOOL _ignoreAccountChanges;
	int _preferredVideoQuality;
	NSMutableSet* _runAssertions;
	CloudPushNotificationController* _pushNotificationController;
	HSCloudAvailabilityController* _availabilityController;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _backgroundOperationQueue;
	BOOL _networkActivityIndicatorVisible;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long daemonConfiguration;                     //@synthesize daemonConfiguration=_daemonConfiguration - In the implementation block
@property (assign,nonatomic) BOOL ignoreAccountChanges;                                    //@synthesize ignoreAccountChanges=_ignoreAccountChanges - In the implementation block
@property (nonatomic,readonly) int preferredVideoQuality;                                  //@synthesize preferredVideoQuality=_preferredVideoQuality - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                          //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * backgroundOperationQueue;                //@synthesize backgroundOperationQueue=_backgroundOperationQueue - In the implementation block
+(id)addRunAssertionWithName:(id)arg1 ;
+(void)removeRunAssertion:(id)arg1 ;
+(id)_runAssertionAccessQueue;
+(id)_runAssertionsSet;
+(id)server;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(void)sendAsynchronousRequest:(id)arg1 priority:(int)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)enumerateBackgroundOperationsUsingBlock:(/*^block*/ id)arg1 ;
-(void)pushNotificationControllerDidReceiveUpdateRequest:(id)arg1 forService:(int)arg2 toDatabaseRevision:(unsigned)arg3 ;
-(BOOL)cancelOperationsByClass:(Class)arg1 ;
-(void)_initSerialQueues;
-(id)_pushNotificationController;
-(void)_clientDidOpenConnection:(id)arg1 ;
-(BOOL)_migrateToLatestUserVersion;
-(void)_handleMessage:(unsigned long long)arg1 withDictionary:(id)arg2 forClientConnection:(id)arg3 ;
-(BOOL)_validateAndRepairPurchases;
-(BOOL)_migrateFromUserVersion0to348294:(int*)arg1 ;
-(BOOL)_migrateFromUserVersion348294to348295:(int*)arg1 ;
-(BOOL)_migrateFromUserVersion348295to366559:(int*)arg1 ;
-(BOOL)_migrateFromUserVersion366559to370000:(int*)arg1 ;
-(BOOL)_migrateFromUserVersion370000to370100:(int*)arg1 ;
-(BOOL)_migrateFromUserVersion370100to370200:(int*)arg1 ;
-(BOOL)isSagaEnabled;
-(void)logPowerEvent:(id)arg1 payload:(id)arg2 ;
-(BOOL)hasOperationsOfClass:(Class)arg1 ;
-(unsigned long long)daemonConfiguration;
-(BOOL)ignoreAccountChanges;
-(void)setIgnoreAccountChanges:(BOOL)arg1 ;
-(int)preferredVideoQuality;
-(id)backgroundOperationQueue;
-(id)operationQueue;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
-(void)stop;
-(id)connectionQueue;
-(void)enumerateOperationsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_accountsDidChangeNotification:(id)arg1 ;
@end
