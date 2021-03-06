/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPUsageStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _domain;
	NSString* _lastAggregateStatisticsDisplayCountKey;
	double _lastAggregateStatisticsDisplayCountTime;

}
+(id)sharedStatistics;
-(void)incrementViewDisplayCountForViewController:(id)arg1 ;
-(void)incrementViewDisplayCountForKey:(id)arg1 ;
-(void)setAggregateStatisticsDomain:(id)arg1 ;
-(id)init;
-(id)domain;
@end

