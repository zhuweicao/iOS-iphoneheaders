/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSASAssetCollectionChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ctag;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                         //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(id)description;
-(id)ctag;
-(BOOL)wasDeleted;
-(void)setCtag:(id)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(void)setGUID:(id)arg1 ;
-(id)GUID;
-(void).cxx_destruct;
@end
