/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@interface SagaStartLoadArtworkOperation : CloudLibraryOperation {

	unsigned long long _sagaID;
	/*^block*/id _artworkLoadedCompletionHandler;

}

@property (nonatomic,copy) id artworkLoadedCompletionHandler;              //@synthesize artworkLoadedCompletionHandler=_artworkLoadedCompletionHandler - In the implementation block
-(id)initWithSagaID:(unsigned long long)arg1 ;
-(void)setArtworkLoadedCompletionHandler:(id)arg1 ;
-(id)artworkLoadedCompletionHandler;
-(void)main;
@end

