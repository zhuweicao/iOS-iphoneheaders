/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/DAMailboxFetchSearchResultConsumer.h>
#import <DAEAS/DAMailboxStreamingContentConsumer.h>

@protocol MFDAStreamingContentConsumer;
@class MFConditionLock, MFError;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {

	MFConditionLock* _doneCondition;
	<MFDAStreamingContentConsumer>* _streamConsumer;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) <MFDAStreamingContentConsumer> * streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)waitUntilDone;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(bool)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setStreamConsumer:(id)arg1 ;
-(id)streamConsumer;
-(bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(void)searchResultFetchedWithResponses:(id)arg1 ;
-(id)error;
@end

