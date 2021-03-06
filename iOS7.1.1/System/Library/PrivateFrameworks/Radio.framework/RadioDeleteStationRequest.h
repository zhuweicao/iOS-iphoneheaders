/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class NSDictionary;

@interface RadioDeleteStationRequest : RadioSyncRequest {

	NSDictionary* _stationDictionary;
	unsigned long long _stationID;

}
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(id)changeList;
@end

