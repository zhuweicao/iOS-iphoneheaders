/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/ObservationTarget.h>

@class NSString;

@interface UserEventObservationTarget : ObservationTarget {

	NSString* _event;

}

@property (nonatomic,retain) NSString * event;              //@synthesize event=_event - In the implementation block
+(id)targetWithEvent:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setEvent:(id)arg1 ;
-(id)event;
@end

