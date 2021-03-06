/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOProblemProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltaireProblemProvider : GEOProblemProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/ id _errorHandler;
	/*^block*/ id _finishedHandler;

}
+(void)_resetURL;
+(void)setUsePersistentConnection:(BOOL)arg1 ;
+(unsigned short)providerID;
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)cancelRequest;
@end

