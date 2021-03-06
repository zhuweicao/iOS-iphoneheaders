/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_semaphore;
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSMutableArray, NSLock;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_semaphore>* _deathLock;
	NSString* _portName;
	NSProtocolChecker* _protocolChecker;
	NSMutableArray* _componentQueue;
	NSLock* _componentQueueLock;
	NSRecursiveLock* _componentQueueProcessingLock;
	BOOL _pendingComponentQueueProcessing;
	BOOL _busyForwarding;

}
-(void)dealloc;
@end

