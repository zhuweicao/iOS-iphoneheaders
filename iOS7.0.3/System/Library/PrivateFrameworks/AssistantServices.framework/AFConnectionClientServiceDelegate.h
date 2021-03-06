/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFClientServiceDelegate.h>

@class AFConnection;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {

	AFConnection* _connection;

}
-(id)initWithConnection:(id)arg1 ;
-(id)_connectionDelegate;
-(oneway void)shouldSpeakChanged:(BOOL)arg1 ;
-(oneway void)requestDidReceiveCommand:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(oneway void)requestDidFailWithError:(id)arg1 requestClass:(id)arg2 ;
-(oneway void)requestRequestedOpenURL:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(oneway void)requestRequestedDismissAssistant;
-(oneway void)speechRecordingWillBegin;
-(oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(oneway void)speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1 ;
-(oneway void)speechRecognized:(id)arg1 ;
-(oneway void)speechRecognitionDidFail:(id)arg1 ;
-(oneway void)requestDidFinish;
-(void).cxx_destruct;
@end

