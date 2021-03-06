/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)addListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)hasListenerID:(id)arg1 forService:(id)arg2 ;
-(void)_postNotificationForService:(id)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)_isValidServiceType:(id)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(id)arg1 create:(BOOL)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
@end

