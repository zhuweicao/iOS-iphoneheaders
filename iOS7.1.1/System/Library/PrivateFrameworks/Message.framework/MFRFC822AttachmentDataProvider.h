/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAttachmentDataProvider.h>

@class NSData, MFMimePart, MFMailMessage;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProvider> {

	NSData* _messageData;
	MFMimePart* _parentPart;
	MFMailMessage* _message;

}
-(void)dealloc;
-(id)initWithMessageData:(id)arg1 parentPart:(id)arg2 ;
-(id)messageForAttachment:(id)arg1 ;
-(bool)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3 ;
@end

