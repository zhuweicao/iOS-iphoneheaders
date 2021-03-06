/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSData, NSDictionary, NSArray;

@interface MRMediaRemoteState : NSObject {

	BOOL _canBeNowPlayingApp;
	/*^block*/ id _commandHandlerBlock;
	NSMutableDictionary* _commandHandlerBlocks;
	BOOL _isOverrideApp;
	BOOL _keepAlive;
	int _originDiscoveryCount;
	int _notifyRestoreClientStateForLaunch;
	int _notifyDidLaunchToken;
	NSData* _nowPlayingArtworkData;
	NSDictionary* _nowPlayingInfo;
	unsigned _routeDiscoveryCount;

}

@property (nonatomic,copy) id commandHandlerBlock;                          //@synthesize commandHandlerBlock=_commandHandlerBlock - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApp;                       //@synthesize canBeNowPlayingApp=_canBeNowPlayingApp - In the implementation block
@property (assign,nonatomic) BOOL isOverrideApp;                            //@synthesize isOverrideApp=_isOverrideApp - In the implementation block
@property (assign,nonatomic) BOOL keepAlive;                                //@synthesize keepAlive=_keepAlive - In the implementation block
@property (nonatomic,retain) NSData * nowPlayingArtworkData;                //@synthesize nowPlayingArtworkData=_nowPlayingArtworkData - In the implementation block
@property (nonatomic,retain) NSDictionary * nowPlayingInfo;                 //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) NSArray * commandHandlerBlocks; 
-(void)setNowPlayingInfo:(id)arg1 ;
-(id)nowPlayingInfo;
-(void)dealloc;
-(id)init;
-(void)setCanBeNowPlayingApp:(BOOL)arg1 ;
-(void)setCommandHandlerBlock:(/*^block*/ id)arg1 ;
-(void)addCommandHandlerBlock:(/*^block*/ id)arg1 forKey:(id)arg2 ;
-(void)removeCommandHandlerBlockForKey:(id)arg1 ;
-(BOOL)isOverrideApp;
-(void)setIsOverrideApp:(BOOL)arg1 ;
-(id)nowPlayingArtworkData;
-(void)setNowPlayingArtworkData:(id)arg1 ;
-(void)beginOriginDiscovery;
-(void)endOriginDiscovery;
-(void)beginRouteDiscovery;
-(void)endRouteDiscovery;
-(void)setKeepAlive:(BOOL)arg1 ;
-(/*^block*/ id)commandHandlerBlock;
-(id)commandHandlerBlocks;
-(void)_avSystemControllerServerConnectionDiedNotification:(id)arg1 ;
-(BOOL)canBeNowPlayingApp;
-(BOOL)keepAlive;
@end

