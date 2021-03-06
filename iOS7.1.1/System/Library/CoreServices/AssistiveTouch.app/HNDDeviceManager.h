/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:09 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDDeviceDetectorDelegate.h>
#import <assistivetouchd/HNDDeviceDelegate.h>

@class NSMutableArray;

@interface HNDDeviceManager : NSObject <HNDDeviceDetectorDelegate, HNDDeviceDelegate> {

	BOOL _detectDevices;
	NSMutableArray* _devices;
	double _lastMoveTimeX;
	double _lastMoveTimeY;
	float _allowedMoveRate;

}

@property (assign,nonatomic) BOOL detectDevices;              //@synthesize detectDevices=_detectDevices - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(void)setDetectDevices:(BOOL)arg1 ;
-(void)deviceDetector:(id)arg1 didFindDevice:(IOHIDDeviceRef)arg2 ;
-(void)device:(id)arg1 didUnload:(BOOL)arg2 ;
-(void)device:(id)arg1 didPostEvent:(id)arg2 ;
-(int)deviceCountWithSecondaryButtons;
-(BOOL)detectDevices;
-(id)init;
-(int)deviceCount;
@end

