/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetCache, NSOperationQueue, RadioRequestContext, NSObject, NSString;

@interface MPRadioOperationQueue : NSObject {

	AVAssetCache* _assetCache;
	NSOperationQueue* _operationQueue;
	RadioRequestContext* _requestContext;
	NSObject<OS_dispatch_queue>* _serialQueue;
	NSString* _highQualityAssetFlavor;

}

@property (nonatomic,readonly) AVAssetCache * assetCache;                      //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,readonly) NSString * highQualityAssetFlavor;              //@synthesize highQualityAssetFlavor=_highQualityAssetFlavor - In the implementation block
+(id)sharedQueue;
-(id)assetCache;
-(id)highQualityAssetFlavor;
-(void)addStationWithRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(void)addGetTracksOperation:(id)arg1 ;
-(void)loadRadioConfigurationWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)getHistoryWithRequest:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_updateHighQualityAssetFlavorWithStoreBag:(id)arg1 ;
-(void)_addOperation:(id)arg1 ;
-(void)_cancelPlaybackPreparation;
-(void)cancelPlaybackPreparation;
-(void)preparePlaybackForStation:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)sendPlayEventCollection:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)warmOperationQueue;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

