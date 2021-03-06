/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADService.h>
#import <assistantd/ADServiceConnectionSyncDelegate.h>

@class NSDictionary, NSString, ADServiceConnection;

@interface ADBundleService : ADService <ADServiceConnectionSyncDelegate> {

	NSDictionary* _domains;
	NSDictionary* _syncKeys;
	NSString* _path;
	NSString* _clearsDomainObjectsClassName;
	BOOL _connectionNeedsContextCleared;
	ADServiceConnection* _connection;
	/*^block*/ id _syncHandler;

}

@property (setter=_setSyncHandler:,nonatomic,copy) id _syncHandler;              //@synthesize syncHandler=_syncHandler - In the implementation block
+(id)requiredInfoDictionaryKeys;
-(void)syncFinishedOnConnection:(id)arg1 ;
-(void)connection:(id)arg1 receivedChunkWithPreAnchor:(id)arg2 post:(id)arg3 anchorValidity:(id)arg4 toAdd:(id)arg5 toRemove:(id)arg6 continueBlock:(/*^block*/ id)arg7 ;
-(void)handleCommand:(id)arg1 forDomain:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)clearDomainObjects;
-(void)resetExternalResources;
-(id)commandsForDomain:(id)arg1 ;
-(id)syncKeys;
-(id)initWithBundlePath:(id)arg1 infoDictionary:(id)arg2 ;
-(BOOL)implementsCommand:(id)arg1 forDomain:(id)arg2 ;
-(void)beginSyncForKey:(id)arg1 anchor:(id)arg2 validity:(id)arg3 count:(int)arg4 chunkHandler:(/*^block*/ id)arg5 ;
-(void)_parseInfoDictionary:(id)arg1 ;
-(void)_setSyncHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)_syncHandler;
-(id)info;
-(void).cxx_destruct;
-(id)_connection;
-(void)preheat;
-(id)handle;
-(id)domains;
@end

