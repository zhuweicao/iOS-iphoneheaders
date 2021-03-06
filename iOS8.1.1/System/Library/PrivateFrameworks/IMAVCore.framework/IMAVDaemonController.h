/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMAVDaemonProtocol, OS_dispatch_queue;
#import <IMAVCore/IMAVCore-Structs.h>
@class IMRemoteObject, IMLocalObject, IMAVDaemonListener, NSProtocolChecker, NSString, NSMutableArray, NSLock, NSObject;

@interface IMAVDaemonController : NSObject {

	IMRemoteObject*<IMAVDaemonProtocol> _remoteObject;
	IMLocalObject* _localObject;
	IMAVDaemonListener* _daemonListener;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSMutableArray* _listeners;
	NSLock* _connectionLock;
	NSObject*<OS_dispatch_queue> _listenerLockQueue;
	NSObject*<OS_dispatch_queue> _remoteDaemonLockQueue;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	NSObject*<OS_dispatch_queue> _localObjectLockQueue;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _hasCheckedForDaemon;
	BOOL _acquiringDaemonConnection;

}

@property (nonatomic,readonly) IMAVDaemonListener * listener;                                 //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remoteMessageQueue;              //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
+(id)sharedInstance;
-(BOOL)isConnecting;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(IMAVDaemonListener *)listener;
-(BOOL)addListenerID:(id)arg1 ;
-(void)_disconnectFromDaemon;
-(void)_cleanUpConnection;
-(BOOL)_makeConnectionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_localObjectDiedNotification:(id)arg1 ;
-(void)_remoteObjectDiedNotification:(id)arg1 ;
-(void)_noteSetupComplete;
-(void)_localObjectCleanup;
-(void)_remoteObjectCleanup;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg1 ;
-(BOOL)__isRemoteObjectValidOnQueue:(id)arg1 ;
-(BOOL)remoteObjectExists;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(BOOL)localObjectExists;
-(BOOL)hasListenerForID:(id)arg1 ;
-(void)_listenerSetUpdated;
-(BOOL)removeListenerID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_remoteMessageQueue;
-(BOOL)isConnected;
-(void)_connectToDaemon;
@end

