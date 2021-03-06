/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIResourceLoaderDelegate;
@class SKUIClientContext, NSOperationQueue, NSMutableDictionary;

@interface SKUIResourceLoader : NSObject {

	SKUIClientContext* _clientContext;
	<SKUIResourceLoaderDelegate>* _delegate;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _operationsByRequestID;
	NSMutableDictionary* _resourcesByRequestID;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) <SKUIResourceLoaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdle,nonatomic,readonly) BOOL idle; 
-(id)operationQueue;
-(BOOL)isIdle;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)clientContext;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(int)arg2 ;
-(void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2 ;
-(void)_sendDidIdleIfNecessary;
-(void)addResource:(id)arg1 forRequestIdentifier:(unsigned)arg2 ;
-(id)cachedResourceForRequestIdentifier:(unsigned)arg1 ;
-(void)cancelRequestWithIdentifier:(unsigned)arg1 ;
-(void)removeAllCachedResources;
-(void)setReason:(int)arg1 forRequestWithIdentifier:(unsigned)arg2 ;
-(void).cxx_destruct;
-(void)cancelAllRequests;
-(id)initWithOperationQueue:(id)arg1 ;
@end

