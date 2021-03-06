/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVExternalDevice, UIScreen, NSString;

@interface MapsExternalAccessory : NSObject {

	BOOL _needsFuel;
	BOOL _rightHandDrive;
	BOOL _hasEngineType;
	int _engineType;
	BOOL _hasLowLightLevel;
	BOOL _lowLightLevel;
	AVExternalDevice* _externalDevice;
	UIScreen* _starkScreen;
	BOOL _limitLongLists;
	BOOL _disableSoftwareKeyboard;
	BOOL _starkIsNavigating;
	NSString* _manufacturer;
	NSString* _model;

}

@property (nonatomic,readonly) BOOL needsFuel;                                  //@synthesize needsFuel=_needsFuel - In the implementation block
@property (nonatomic,readonly) BOOL rightHandDrive;                             //@synthesize rightHandDrive=_rightHandDrive - In the implementation block
@property (nonatomic,readonly) BOOL hasEngineType;                              //@synthesize hasEngineType=_hasEngineType - In the implementation block
@property (nonatomic,readonly) int engineType;                                  //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,readonly) BOOL hasLowLightLevel;                           //@synthesize hasLowLightLevel=_hasLowLightLevel - In the implementation block
@property (nonatomic,readonly) BOOL lowLightLevel;                              //@synthesize lowLightLevel=_lowLightLevel - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                         //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSString * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL limitLongLists;                             //@synthesize limitLongLists=_limitLongLists - In the implementation block
@property (nonatomic,@dynamic,readonly) int maximumListLength; 
@property (nonatomic,readonly) BOOL disableSoftwareKeyboard;                    //@synthesize disableSoftwareKeyboard=_disableSoftwareKeyboard - In the implementation block
@property (nonatomic,readonly) BOOL externalAccessoryIsNavigating; 
@property (assign,nonatomic) BOOL starkIsNavigating;                            //@synthesize starkIsNavigating=_starkIsNavigating - In the implementation block
+(id)sharedInstance;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)_initializeVehicle:(id)arg1 ;
-(void)_updateVehicle:(id)arg1 ;
-(void)_connectAVDevice;
-(void)_updateExternalDevice:(id)arg1 ;
-(void)_disconnectAVDevice;
-(void)_updateExternalNavigationState:(id)arg1 ;
-(BOOL)starkIsNavigating;
-(void)_deviceUpdated;
-(void)_disconnectFromVehicle;
-(int)maximumListLength;
-(BOOL)externalAccessoryIsNavigating;
-(void)setStarkIsNavigating:(BOOL)arg1 ;
-(BOOL)needsFuel;
-(BOOL)hasEngineType;
-(BOOL)hasLowLightLevel;
-(BOOL)lowLightLevel;
-(BOOL)limitLongLists;
-(BOOL)disableSoftwareKeyboard;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)model;
-(BOOL)rightHandDrive;
-(void).cxx_destruct;
-(void)_accessoryDidConnect:(id)arg1 ;
-(id)manufacturer;
-(int)engineType;
@end

