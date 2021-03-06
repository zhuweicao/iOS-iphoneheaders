/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:17:14 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mstreamd/XPCNSServiceConnectionDelegate.h>

@class NSMutableDictionary;

@interface MSMSASServiceConnection : NSObject <XPCNSServiceConnectionDelegate> {

	NSMutableDictionary* _foregroundPingTimerByPersonID;
	NSMutableDictionary* _XPCForegroundRequestByPersonID;

}

@property (nonatomic,retain) NSMutableDictionary * foregroundPingTimerByPersonID;               //@synthesize foregroundPingTimerByPersonID=_foregroundPingTimerByPersonID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * XPCForegroundRequestByPersonID;              //@synthesize XPCForegroundRequestByPersonID=_XPCForegroundRequestByPersonID - In the implementation block
-(id)foregroundPingTimerByPersonID;
-(void)_foregroundPingTimerDidExpire:(id)arg1 ;
-(id)XPCForegroundRequestByPersonID;
-(void)_handleForegroundPing:(id)arg1 request:(id)arg2 ;
-(void)_handleFocusAlbum:(id)arg1 ;
-(void)setForegroundPingTimerByPersonID:(id)arg1 ;
-(void)setXPCForegroundRequestByPersonID:(id)arg1 ;
-(void).cxx_destruct;
-(id)workQueue;
-(void)XPCNSServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)XPCNSServiceConnectionDidDisconnect:(id)arg1 ;
@end

