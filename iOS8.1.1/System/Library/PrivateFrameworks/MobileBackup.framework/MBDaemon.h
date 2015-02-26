/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface MBDaemon : NSObject {

	unsigned _assertions;
	NSObject*<OS_dispatch_queue> _assertionsQueue;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_source> _dispatchThreadLimitTimer;
	unsigned _powerAssertionID;
	unsigned _powerAssertions;

}
+(id)sharedDaemon;
-(void)_incrementWorkAssertions;
-(void)releaseWorkAssertion;
-(void)holdWorkAssertion;
-(void)setupSignalHandlers;
-(void)_checkDispatchThreadLimit;
-(void)_handleSignal:(int)arg1 ;
-(void)_decrementWorkAssertions;
-(void)resetIdleTimer;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)shutdown;
-(id)eventQueue;
-(void)reboot;
-(void)_scheduleIdleTimer;
@end
