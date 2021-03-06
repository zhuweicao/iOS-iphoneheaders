/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVFlashlightInternal_FigRecorder;

@interface AVFlashlight_FigRecorder : NSObject {

	AVFlashlightInternal_FigRecorder* _internal;

}

@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (getter=isOverheated,nonatomic,readonly) BOOL overheated; 
@property (nonatomic,readonly) float flashlightLevel; 
+(BOOL)hasFlashlight;
+(void)initialize;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(float)flashlightLevel;
-(void)_refreshIsAvailable;
-(BOOL)bringupFigRecorderWithError:(id*)arg1 ;
-(void)teardownFigRecorder;
-(BOOL)ensureFigRecorderWithError:(id*)arg1 ;
-(BOOL)turnPowerOnWithError:(id*)arg1 ;
-(BOOL)setFlashlightLevel:(float)arg1 withError:(id*)arg2 ;
-(BOOL)isOverheated;
-(void)turnPowerOff;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isAvailable;
@end

