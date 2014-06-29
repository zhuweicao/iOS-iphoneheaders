/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EAAccessoryDelegate;
#import <ExternalAccessory/ExternalAccessory-Structs.h>
@class NSString, NSDictionary, NSMutableArray, NSArray;

@interface EAAccessoryInternal : NSObject {

	bool _connected;
	unsigned _connectionID;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _serialNumber;
	NSString* _firmwareRevision;
	NSString* _hardwareRevision;
	NSString* _macAddress;
	NSString* _preferredApp;
	int _classType;
	NSDictionary* _audioPorts;
	unsigned _capabilities;
	bool _notPresentInIAPAccessoriesArray;
	NSMutableArray* _sessionsList;
	NSArray* _eqNames;
	int _iPodOutOptionsMask;
	int _locationSentenceTypesMask;
	NSDictionary* _vehicleInfoSupportedTypes;
	NSDictionary* _vehicleInfoInitialData;
	CFAccessoryRef _cfAccessory;
	/*function pointer*/ void* _cfAccessoryPortPropertyCallback;
	void* _cfAccessoryPortPropertyContext;
	NSDictionary* _protocols;
	<EAAccessoryDelegate>* _delegate;
	NSString* _bonjourName;
	bool _hasIPConnection;
	bool _isAvailableOverBonjour;
	unsigned _eqIndex;

}

@property (assign,nonatomic) bool connected;                                                          //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) unsigned connectionID;                                                   //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * name;                                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                                    //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                                   //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareRevision;                                               //@synthesize firmwareRevision=_firmwareRevision - In the implementation block
@property (nonatomic,copy) NSString * hardwareRevision;                                               //@synthesize hardwareRevision=_hardwareRevision - In the implementation block
@property (nonatomic,copy) NSString * macAddress;                                                     //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,copy) NSString * preferredApp;                                                   //@synthesize preferredApp=_preferredApp - In the implementation block
@property (assign,nonatomic) int classType;                                                           //@synthesize classType=_classType - In the implementation block
@property (nonatomic,retain) NSDictionary * audioPorts;                                               //@synthesize audioPorts=_audioPorts - In the implementation block
@property (assign,nonatomic) unsigned capabilities;                                                   //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) bool notPresentInIAPAccessoriesArray;                                    //@synthesize notPresentInIAPAccessoriesArray=_notPresentInIAPAccessoriesArray - In the implementation block
@property (nonatomic,readonly) NSArray * sessionsList; 
@property (assign,nonatomic) CFAccessoryRef cfAccessory;                                              //@synthesize cfAccessory=_cfAccessory - In the implementation block
@property (assign,nonatomic) /*function pointer*/ void* cfAccessoryPortPropertyCallback;              //@synthesize cfAccessoryPortPropertyCallback=_cfAccessoryPortPropertyCallback - In the implementation block
@property (assign,nonatomic) void* cfAccessoryPortPropertyContext;                                    //@synthesize cfAccessoryPortPropertyContext=_cfAccessoryPortPropertyContext - In the implementation block
@property (nonatomic,retain) NSArray * eqNames;                                                       //@synthesize eqNames=_eqNames - In the implementation block
@property (assign,nonatomic) unsigned eqIndex;                                                        //@synthesize eqIndex=_eqIndex - In the implementation block
@property (assign,nonatomic) int iPodOutOptionsMask;                                                  //@synthesize iPodOutOptionsMask=_iPodOutOptionsMask - In the implementation block
@property (assign,nonatomic) int locationSentenceTypesMask;                                           //@synthesize locationSentenceTypesMask=_locationSentenceTypesMask - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoSupportedTypes;                                //@synthesize vehicleInfoSupportedTypes=_vehicleInfoSupportedTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoInitialData;                                   //@synthesize vehicleInfoInitialData=_vehicleInfoInitialData - In the implementation block
@property (nonatomic,retain) NSDictionary * protocols;                                                //@synthesize protocols=_protocols - In the implementation block
@property (assign,nonatomic) <EAAccessoryDelegate> * delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * bonjourName;                                                    //@synthesize bonjourName=_bonjourName - In the implementation block
@property (assign,nonatomic) bool hasIPConnection;                                                    //@synthesize hasIPConnection=_hasIPConnection - In the implementation block
@property (assign,nonatomic) bool isAvailableOverBonjour;                                             //@synthesize isAvailableOverBonjour=_isAvailableOverBonjour - In the implementation block
-(void)setHasIPConnection:(bool)arg1 ;
-(void)setIsAvailableOverBonjour:(bool)arg1 ;
-(id)bonjourName;
-(void)setBonjourName:(id)arg1 ;
-(unsigned)connectionID;
-(/*function pointer*/ void*)cfAccessoryPortPropertyCallback;
-(void)setIPodOutOptionsMask:(int)arg1 ;
-(void)setModelNumber:(id)arg1 ;
-(void)setFirmwareRevision:(id)arg1 ;
-(void)setHardwareRevision:(id)arg1 ;
-(void)setConnectionID:(unsigned)arg1 ;
-(void)setProtocols:(id)arg1 ;
-(void)setPreferredApp:(id)arg1 ;
-(void)setClassType:(int)arg1 ;
-(void)setEqNames:(id)arg1 ;
-(void)setEqIndex:(unsigned)arg1 ;
-(void)setLocationSentenceTypesMask:(int)arg1 ;
-(void)setVehicleInfoSupportedTypes:(id)arg1 ;
-(void)setVehicleInfoInitialData:(id)arg1 ;
-(void)setAudioPorts:(id)arg1 ;
-(id)modelNumber;
-(id)firmwareRevision;
-(id)hardwareRevision;
-(id)protocols;
-(bool)hasIPConnection;
-(bool)isAvailableOverBonjour;
-(void)setNotPresentInIAPAccessoriesArray:(bool)arg1 ;
-(id)sessionsList;
-(bool)notPresentInIAPAccessoriesArray;
-(CFAccessoryRef)cfAccessory;
-(void)setCfAccessory:(CFAccessoryRef)arg1 ;
-(void)setCfAccessoryPortPropertyCallback:(/*function pointer*/ void*)arg1 ;
-(void*)cfAccessoryPortPropertyContext;
-(void)setCfAccessoryPortPropertyContext:(void*)arg1 ;
-(id)preferredApp;
-(int)classType;
-(id)audioPorts;
-(id)eqNames;
-(unsigned)eqIndex;
-(int)locationSentenceTypesMask;
-(id)vehicleInfoSupportedTypes;
-(id)vehicleInfoInitialData;
-(int)iPodOutOptionsMask;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setConnected:(bool)arg1 ;
-(id)macAddress;
-(void)setMacAddress:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(void)setManufacturer:(id)arg1 ;
-(id)manufacturer;
-(void)addSession:(id)arg1 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(bool)connected;
-(void)setSerialNumber:(id)arg1 ;
-(unsigned)capabilities;
-(id)serialNumber;
@end
