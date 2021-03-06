/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/NSNetServiceDelegate.h>
#import <AXHearingAidSupport/NSStreamDelegate.h>

@protocol AXHARemoteControllerDelegate;
@class NSNetService, NSMutableArray, NSInputStream, NSOutputStream, AXHATimer, NSMutableData, AXHARemoteMessage, NSString;

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {

	BOOL _didValidateHIID;
	id<AXHARemoteControllerDelegate> _delegate;
	NSNetService* _service;
	NSMutableArray* _outputDataQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	AXHATimer* _communicationTimer;
	NSMutableData* _inputBuffer;
	NSMutableData* _outputBuffer;
	NSMutableArray* _ackQueue;
	AXHATimer* _ackTimer;
	AXHATimer* _dataTimer;
	AXHARemoteMessage* _currentMessageInFlight;

}

@property (assign,nonatomic) id<AXHARemoteControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNetService * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDataQueue;                        //@synthesize outputDataQueue=_outputDataQueue - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                             //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                           //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) BOOL didValidateHIID;                                    //@synthesize didValidateHIID=_didValidateHIID - In the implementation block
@property (nonatomic,retain) AXHATimer * communicationTimer;                          //@synthesize communicationTimer=_communicationTimer - In the implementation block
@property (nonatomic,retain) NSMutableData * inputBuffer;                             //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,retain) NSMutableData * outputBuffer;                            //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (nonatomic,retain) NSMutableArray * ackQueue;                               //@synthesize ackQueue=_ackQueue - In the implementation block
@property (nonatomic,retain) AXHATimer * ackTimer;                                    //@synthesize ackTimer=_ackTimer - In the implementation block
@property (nonatomic,retain) AXHATimer * dataTimer;                                   //@synthesize dataTimer=_dataTimer - In the implementation block
@property (nonatomic,retain) AXHARemoteMessage * currentMessageInFlight;              //@synthesize currentMessageInFlight=_currentMessageInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(BOOL)isConnecting;
-(void)dealloc;
-(void)setDelegate:(id<AXHARemoteControllerDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<AXHARemoteControllerDelegate>)delegate;
-(id)name;
-(void)closeConnectionWithError:(id)arg1 ;
-(BOOL)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 andAckCompletion:(/*^block*/id)arg3 ;
-(void)openConnectionIfNecessary;
-(BOOL)isSlave;
-(BOOL)sendObject:(id)arg1 ;
-(void)setOutputDataQueue:(NSMutableArray *)arg1 ;
-(void)setAckQueue:(NSMutableArray *)arg1 ;
-(void)setInputBuffer:(NSMutableData *)arg1 ;
-(void)setOutputBuffer:(NSMutableData *)arg1 ;
-(void)setAckTimer:(AXHATimer *)arg1 ;
-(void)setDataTimer:(AXHATimer *)arg1 ;
-(void)setCommunicationTimer:(AXHATimer *)arg1 ;
-(void)setDidValidateHIID:(BOOL)arg1 ;
-(void)setCurrentMessageInFlight:(AXHARemoteMessage *)arg1 ;
-(void)setupStream:(id)arg1 ;
-(AXHATimer *)communicationTimer;
-(AXHATimer *)ackTimer;
-(AXHATimer *)dataTimer;
-(void)setSecuritySettingsForStream:(id)arg1 ;
-(NSMutableArray *)ackQueue;
-(NSMutableArray *)outputDataQueue;
-(void)finishedSending:(id)arg1 ;
-(id)nextMessageInQueue;
-(void)enqueueData:(id)arg1 ;
-(void)didCommunicate;
-(void)messageWasAcked:(id)arg1 ;
-(BOOL)didValidateHIID;
-(void)sendDataChunk;
-(AXHARemoteMessage *)currentMessageInFlight;
-(NSMutableData *)outputBuffer;
-(void)validatePairedAid;
-(void)clearMessageQueue;
-(NSMutableData *)inputBuffer;
-(void)receivedData:(id)arg1 ;
-(void)acceptConnection:(int)arg1 ;
-(NSInputStream *)inputStream;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSNetService *)service;
-(void)setService:(NSNetService *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)resetConnection;
-(NSOutputStream *)outputStream;
-(BOOL)isConnected;
@end

