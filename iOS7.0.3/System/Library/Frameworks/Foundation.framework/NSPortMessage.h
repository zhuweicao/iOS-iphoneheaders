/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSPort, NSMutableArray;

@interface NSPortMessage : NSObject {

	NSPort* localPort;
	NSPort* remotePort;
	NSMutableArray* components;
	unsigned msgid;
	void* reserved2;
	void* reserved;

}
-(id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3 ;
-(void)setMsgid:(unsigned)arg1 ;
-(id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3 ;
-(id)sendPort;
-(id)receivePort;
-(unsigned)msgid;
-(BOOL)sendBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)components;
@end

