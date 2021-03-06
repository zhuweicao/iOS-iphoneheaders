/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSTimer : NSObject
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5 ;
+(id)allocWithZone:(NSZone)arg1 ;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(double)_cffireTime;
-(CFStringRef)copyDebugDescription;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(void)invalidate;
-(bool)isValid;
-(void)setFireDate:(id)arg1 ;
-(id)userInfo;
-(SCD_Struct_NS4*)context;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(bool)arg6 ;
-(double)timeInterval;
-(id)fireDate;
-(double)interval;
-(long long)order;
@end

