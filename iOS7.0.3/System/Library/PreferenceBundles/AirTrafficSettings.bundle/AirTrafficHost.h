/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface AirTrafficHost : NSObject {

	NSDictionary* _hostDict;

}

@property (getter=libraryIdentifier,nonatomic,readonly) NSString * libraryIdentifier; 
@property (getter=lastSyncTime,nonatomic,readonly) NSNumber * lastSyncTime; 
@property (getter=hostName,nonatomic,readonly) NSString * name; 
@property (getter=syncedAssetsString,nonatomic,readonly) NSString * syncedAssetsString; 
@property (getter=isWifiEnabled,nonatomic,readonly) BOOL wifiEnabled; 
-(id)syncedAssetsString;
-(id)localizedAssetTypeForDataclass:(id)arg1 ;
-(id)initWithHostDictionary:(id)arg1 ;
-(id)libraryIdentifier;
-(id)hostName;
-(BOOL)isWifiEnabled;
-(id)lastSyncTime;
-(void).cxx_destruct;
@end

