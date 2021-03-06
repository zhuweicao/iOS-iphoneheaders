/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNRecordingEvent.h>

@interface KNRecordingPauseEvent : KNRecordingEvent {

	long long mPauseEventType;

}

@property (nonatomic,readonly) long long pauseEventType; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(id)initWithStartTime:(double)arg1 ;
-(id)initWithStartTime:(double)arg1 pauseEventType:(long long)arg2 ;
-(long long)pauseEventType;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
@end

