/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PSCellularUsageApp : NSObject {

	NSString* _bundleIdentifier;
	NSString* _displayName;
	double _totalBytesUsed;
	double _roamingBytesUsed;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) double totalBytesUsed;                    //@synthesize totalBytesUsed=_totalBytesUsed - In the implementation block
@property (assign,nonatomic) double roamingBytesUsed;                  //@synthesize roamingBytesUsed=_roamingBytesUsed - In the implementation block
-(double)totalBytesUsed;
-(void)setTotalBytesUsed:(double)arg1 ;
-(double)roamingBytesUsed;
-(void)setRoamingBytesUsed:(double)arg1 ;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
@end

