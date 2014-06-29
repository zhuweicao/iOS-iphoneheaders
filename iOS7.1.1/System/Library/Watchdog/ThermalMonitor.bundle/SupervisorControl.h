/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/PidComponent.h>
#import <ThermalMonitor/tGraphDataSource.h>

@class CommonProduct;

@interface SupervisorControl : PidComponent <tGraphDataSource> {

	CommonProduct* cProduct;
	float hotspotTemperature;
	float THERMAL_TRAP_LOAD;
	float THERMAL_TRAP_SLEEP;
	float releaseHysteresis;
	int tState;
	ForcedThermalLevelStruct forcedThermalLevel[2];
	bool isEngagedWithHysteresis;

}

@property (nonatomic,readonly) float hotspotTemperature; 
@property (assign,nonatomic) float THERMAL_TRAP_LOAD; 
@property (assign,nonatomic) float THERMAL_TRAP_SLEEP; 
+(id)supervisorControlWithName:(const char*)arg1 forMitigationType:(int)arg2 forProduct:(id)arg3 withParams:(CFDictionaryRef)arg4 ;
-(float)THERMAL_TRAP_LOAD;
-(void)setTHERMAL_TRAP_SLEEP:(float)arg1 ;
-(bool)hotspotIsEngaged;
-(void)setTHERMAL_TRAP_LOAD:(float)arg1 ;
-(float)THERMAL_TRAP_SLEEP;
-(int)getThermalStateofHotspot;
-(float)calculateTargetDifference;
-(float)hotspotTemperature;
-(void)calculateControlEffort:(float)arg1 ;
-(bool)shouldForceThermalLevelForThreshold:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(int)numberOfFields;
-(id)initWithSC:(const char*)arg1 :(int)arg2 :(id)arg3 :(CFDictionaryRef)arg4 ;
-(void)dealloc;
@end
