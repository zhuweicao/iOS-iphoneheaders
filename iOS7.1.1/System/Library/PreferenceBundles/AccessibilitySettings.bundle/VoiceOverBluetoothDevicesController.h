/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AccessibilitySettings/VoiceOverBluetoothAlertDelegate.h>

@class NSMutableArray, NSMutableDictionary, PSSpecifier, NSString, VoiceOverBluetoothAlert, VoiceOverBluetoothSSPPairingRequest, UIAlertView, NSArray;

@interface VoiceOverBluetoothDevicesController : PSListController <VoiceOverBluetoothAlertDelegate> {

	NSMutableArray* _mainSpecifiersGroup;
	NSMutableArray* _deviceSpecifiersGroup;
	NSMutableDictionary* _devicesDict;
	NSMutableDictionary* _pairingPINDict;
	bool _power;
	bool _scanningEnabled;
	bool _bluetoothIsBusy;
	PSSpecifier* _currentDeviceSpecifier;
	NSString* _primaryDeviceAddress;
	VoiceOverBluetoothAlert* _alert;
	VoiceOverBluetoothSSPPairingRequest* _sspAlert;
	bool _togglingPower;
	unsigned _authorizedServices;
	UIAlertView* _powerAlert;

}

@property (assign,nonatomic) bool scanningEnabled;                          //@synthesize scanningEnabled=_scanningEnabled - In the implementation block
@property (assign,nonatomic) bool bluetoothIsBusy;                          //@synthesize bluetoothIsBusy=_bluetoothIsBusy - In the implementation block
@property (nonatomic,readonly) PSSpecifier * currentSpecifier;              //@synthesize currentDeviceSpecifier=_currentDeviceSpecifier - In the implementation block
@property (nonatomic,retain) NSString * primaryDeviceAddress;               //@synthesize primaryDeviceAddress=_primaryDeviceAddress - In the implementation block
@property (nonatomic,retain) NSArray * mainSpecifiersGroup;                 //@synthesize mainSpecifiersGroup=_mainSpecifiersGroup - In the implementation block
@property (assign,nonatomic) unsigned authorizedServices;                   //@synthesize authorizedServices=_authorizedServices - In the implementation block
-(unsigned)authorizedServices;
-(id)bluetoothPowerAlertMessage;
-(id)_pairedDeviceSpecifiers;
-(void)_startDiscoverable;
-(void)_sspNumericComparisonHandler:(id)arg1 ;
-(void)setPrimaryDeviceAddress:(id)arg1 ;
-(void)_pinRequestHandler:(id)arg1 ;
-(void)_showScanningUI:(bool)arg1 ;
-(void)_showBluetoothPowerFooter:(bool)arg1 ;
-(void)setScanningEnabled:(bool)arg1 ;
-(void)_stopDiscoverable;
-(id)primaryDeviceAddress;
-(id)devicesGroupName;
-(void)deviceConnected:(id)arg1 ;
-(void)_stopConnectable;
-(bool)shouldAddDevice:(id)arg1 ;
-(void)setMainSpecifiersGroup:(id)arg1 ;
-(void)_startConnectable;
-(id)bluetoothPoweredOffFooter;
-(void)showBluetoothPowerAlert:(bool)arg1 ;
-(void)_sspConfirmationHandler:(id)arg1 ;
-(void)primaryDeviceWasUnpaired;
-(bool)_isBluetoothPowerFooterShowing;
-(void)setAuthorizedServices:(unsigned)arg1 ;
-(void)_sspPasskeyDisplayHandler:(id)arg1 ;
-(void)handleReloadSpecifiers;
-(id)mainSpecifiersGroup;
-(bool)scanningEnabled;
-(bool)bluetoothIsBusy;
-(void)_cleanupPairing;
-(void)_stopScanning;
-(void)_startScanning;
-(void)authenticationRequestHandler:(id)arg1 ;
-(void)devicePairedHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)deviceDiscoveredHandler:(id)arg1 ;
-(void)deviceUpdatedHandler:(id)arg1 ;
-(void)deviceRemovedHandler:(id)arg1 ;
-(void)deviceUnpairedHandler:(id)arg1 ;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)setBluetoothIsBusy:(bool)arg1 ;
-(void)_addDevice:(id)arg1 ;
-(void)_updateDevicePosition:(id)arg1 ;
-(id)_specifierForDevice:(id)arg1 ;
-(id)currentSpecifier;
-(void)_removeDevice:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(bool)shouldReloadSpecifiersOnResume;
-(void)willResignActive;
-(void)willBecomeActive;
@end

