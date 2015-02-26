/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/XPCServices/IMTransferAgent.xpc/IMTransferAgent
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber, NSData;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying> {

	NSString* _responseAuthToken;
	NSNumber* _length;
	NSData* _signature;
	NSString* _responseRequestURL;
	NSString* _responseRequestorID;

}

@property (copy) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
@property (copy) NSNumber * length;                           //@synthesize length=_length - In the implementation block
@property (copy) NSString * responseAuthToken;                //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestURL;               //@synthesize responseRequestURL=_responseRequestURL - In the implementation block
@property (copy) NSString * responseRequestorID;              //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
-(id)responseAuthToken;
-(id)responseRequestURL;
-(id)responseRequestorID;
-(void)setResponseAuthToken:(id)arg1 ;
-(void)setResponseRequestorID:(id)arg1 ;
-(void)setResponseRequestURL:(id)arg1 ;
-(id)signature;
-(void)dealloc;
-(id)init;
-(id)length;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setLength:(id)arg1 ;
-(int)command;
-(void)handleResponseDictionary:(id)arg1 ;
-(int)responseCommand;
-(void)setSignature:(id)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end
