/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <Foundation/NSOperation.h>

@class RCSavedRecording, NSString;

@interface RCSavedRecordingTrimOperation : NSOperation {

	BOOL _trimOriginalFile;
	RCSavedRecording* _savedRecording;
	RCSavedRecording* _sourceRecording;
	NSString* _trimmedPath;
	SCD_Struct_RC1 _timeRangeToTrim;
	SCD_Struct_RC1 _trimmedTimeRange;

}

@property (nonatomic,readonly) RCSavedRecording * savedRecording;               //@synthesize savedRecording=_savedRecording - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * sourceRecording;              //@synthesize sourceRecording=_sourceRecording - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RC1 timeRangeToTrim;                  //@synthesize timeRangeToTrim=_timeRangeToTrim - In the implementation block
@property (nonatomic,readonly) BOOL trimOriginalFile;                           //@synthesize trimOriginalFile=_trimOriginalFile - In the implementation block
@property (nonatomic,readonly) NSString * trimmedPath;                          //@synthesize trimmedPath=_trimmedPath - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RC1 trimmedTimeRange;                 //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
+(BOOL)_trimWaveformAtPath:(id)arg1 clipToTimeRange:(SCD_Struct_RC1)arg2 outputPath:(id)arg3 ;
-(void)main;
-(id)savedRecording;
-(id)initWithSavedRecording:(id)arg1 timeRangeToTrim:(SCD_Struct_RC1)arg2 souceRecording:(id)arg3 ;
-(id)sourceRecording;
-(SCD_Struct_RC1)timeRangeToTrim;
-(BOOL)trimOriginalFile;
-(id)trimmedPath;
-(SCD_Struct_RC1)trimmedTimeRange;
-(void).cxx_destruct;
@end
