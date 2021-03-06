/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSURL;

@interface SKUIAssetViewElement : SKUIViewElement {

	double _initialPlaybackTime;
	long long _itemIdentifier;
	double _playbackDuration;
	NSURL* _url;

}

@property (assign,nonatomic) double initialPlaybackTime;              //@synthesize initialPlaybackTime=_initialPlaybackTime - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) double playbackDuration;               //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                           //@synthesize url=_url - In the implementation block
-(void)setInitialPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(double)playbackDuration;
-(NSURL *)URL;
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

