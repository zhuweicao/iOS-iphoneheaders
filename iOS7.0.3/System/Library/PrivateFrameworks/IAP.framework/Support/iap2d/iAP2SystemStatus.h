/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@interface iAP2SystemStatus : NSObject {

	unsigned long long _holdState;
	BTSessionImplRef _session;

}

@property (assign,nonatomic) unsigned long long holdState;              //@synthesize holdState=_holdState - In the implementation block
@property (nonatomic,readonly) BTSessionImplRef btSession;              //@synthesize session=_session - In the implementation block
+(id)GetDeviceName;
+(id)GetMobileGestaltKeyValue:(CFStringRef)arg1 ;
+(id)GetSerialNumber;
+(id)GetModelName;
+(id)GetSoftwareVersion;
+(id)sharedInstance;
-(bool)IsHoldSwitchOn;
-(unsigned char)modeForMACAddress:(id)arg1 ;
-(void)clearRegisteredComponentsForConnectionID:(unsigned)arg1 ;
-(int)UpdateBTComponent:(id)arg1 withState:(int)arg2 ;
-(void)registerComponent:(id)arg1 forConnectionID:(unsigned)arg2 ;
-(BOOL)isComponent:(id)arg1 registeredForConnectionID:(unsigned)arg2 ;
-(void)unregisterComponent:(id)arg1 forConnectionID:(unsigned)arg2 ;
-(void)setMode:(unsigned char)arg1 forMACAddress:(id)arg2 ;
-(id)GetNowPlayingApp;
-(id)GetNowPlayingAppName;
-(bool)IsAssistiveTouchEnabled;
-(void)PostSwapAccessoryNotificationActivate:(id)arg1 deactivate:(id)arg2 ;
-(void)NotifyOfUSBHostModeChange:(id)arg1 ;
-(void)PostNowPlayingAppChangedNotification;
-(void)PostAudioOutputStateChange:(unsigned char)arg1 ;
-(unsigned long long)holdState;
-(void)setHoldState:(unsigned long long)arg1 ;
-(BTSessionImplRef)btSession;
-(void)dealloc;
-(id)init;
@end

