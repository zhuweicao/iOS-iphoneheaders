/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLNotifierServiceProtocol <CLIntersiloServiceProtocol>
@required
-(void)register:(byref id)arg1 forNotification:(int)arg2 registrationInfo:(id)arg3;
-(void)unregister:(byref id)arg1 forNotification:(int)arg2;
-(void)forget:(byref id)arg1;
@end

