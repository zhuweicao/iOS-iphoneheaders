/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutineSettings/CoreRoutineSettings-Structs.h>
#import <MapKit/MKPolygon.h>

@class NSSet, UIColor;

@interface RTPrivacyCluster : MKPolygon {

	NSSet* _privacyLOIs;
	long long _nameStyle;
	NSSet* _countrySet;
	NSSet* _administrativeAreaSet;
	NSSet* _localitySet;
	NSSet* _nameSet;
	NSSet* _subNameSet;

}

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSSet * privacyLOIs;              //@synthesize privacyLOIs=_privacyLOIs - In the implementation block
+(id)privacyClusterWithMapRect:(SCD_Struct_RT1)arg1 privacyLOIs:(id)arg2 ;
-(id)combineWithCluster:(id)arg1 ;
-(SCD_Struct_RT1)bestFitMapRect;
-(id)longName;
-(NSSet *)privacyLOIs;
-(void)_nameUsingPrivacyLOIs:(id)arg1 ;
-(id)privacyLOIsSortedByRecent;
-(id)privacyLOIsSortedByFrequency;
-(id)localizedInformation;
-(BOOL)containsCluster:(id)arg1 ;
-(id)description;
-(id)name;
-(UIColor *)color;
-(long long)recentCompare:(id)arg1 ;
-(long long)frequencyCompare:(id)arg1 ;
@end

