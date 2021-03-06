/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CLTimerScheduler.h>

@protocol OS_dispatch_source;
@class CLTimer, NSObject;

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler> {

	CLTimer* timer;
	NSObject<OS_dispatch_source>* _source;

}

@property (nonatomic,retain) NSObject<OS_dispatch_source> * source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) CLTimer * timer; 
-(void)reflectNextFireTime:(double)arg1 fireInterval:(double)arg2 ;
-(id)initWithDispatchSilo:(id)arg1 ;
-(void)dealloc;
-(id)source;
-(void)setSource:(id)arg1 ;
-(void).cxx_destruct;
-(void)setTimer:(id)arg1 ;
-(id)timer;
@end

