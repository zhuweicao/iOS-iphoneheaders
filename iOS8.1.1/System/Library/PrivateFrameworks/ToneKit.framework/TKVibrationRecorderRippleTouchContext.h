/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderRippleTouchContext : NSObject {

	double _creationTimestamp;
	CGPoint _location;

}

@property (nonatomic,readonly) CGPoint location; 
@property (assign,setter=_setCreationTimestamp:,nonatomic) double _creationTimestamp;              //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign,setter=_setLocation:,nonatomic) CGPoint _location;                               //@synthesize location=_location - In the implementation block
-(id)init;
-(void)reset;
-(CGPoint)location;
-(double)_creationTimestamp;
-(void)_setCreationTimestamp:(double)arg1 ;
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(CGPoint)arg2 ;
-(CGPoint)_location;
-(void)_setLocation:(CGPoint)arg1 ;
@end

