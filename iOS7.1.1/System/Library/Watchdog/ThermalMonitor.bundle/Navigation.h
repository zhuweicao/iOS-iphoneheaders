/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface Navigation : NSObject {

	bool naviSwitch;
	int notificationToken;

}

@property (readonly) bool naviSwitch; 
-(void)checkNaviStatus;
-(bool)naviSwitch;
-(void)dealloc;
-(id)init;
@end

