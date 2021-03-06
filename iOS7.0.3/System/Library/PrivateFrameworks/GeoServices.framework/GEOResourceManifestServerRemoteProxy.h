/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate, OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock, NSHashTable;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {

	<GEOResourceManifestServerProxyDelegate>* _delegate;
	NSObject<OS_xpc_object>* _conn;
	NSLock* _connLock;
	NSHashTable* _cancellingConnections;
	NSLock* _cancellingConnectionsLock;
	int _closedCount;
	BOOL _started;
	BOOL _hiDPI;
	unsigned _retryCount;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	NSObject<OS_dispatch_queue>* _serverQueue;

}

@property (assign,nonatomic) <GEOResourceManifestServerProxyDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)authToken;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(oneway void)forceUpdate;
-(oneway void)startServer:(id)arg1 ;
-(void)openConnection;
-(void)closeConnection;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)getResourceManifestWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(oneway void)resetActiveTileGroup;
-(void)_handleMessage:(id)arg1 xpcMessage:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_setupConnection;
@end

