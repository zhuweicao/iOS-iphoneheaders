/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSArray, NSString, NSNumber;

@interface IDSRegistrationMessage : FTIDSMessage <NSCopying> {

	NSData* _validationData;
	NSArray* _responseServices;
	NSString* _language;
	NSArray* _services;
	NSString* _hardwareVersion;
	NSString* _osVersion;
	NSString* _softwareVersion;
	NSString* _protocolVersion;
	NSString* _deviceName;
	NSNumber* _responseHBI;

}

@property (copy) NSData * validationData;                 //@synthesize validationData=_validationData - In the implementation block
@property (copy) NSString * deviceName;                   //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (copy) NSString * hardwareVersion;              //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (copy) NSString * osVersion;                    //@synthesize osVersion=_osVersion - In the implementation block
@property (copy) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (copy) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSArray * services;                      //@synthesize services=_services - In the implementation block
@property (copy) NSArray * responseServices;              //@synthesize responseServices=_responseServices - In the implementation block
@property (copy) NSNumber * responseHBI;                  //@synthesize responseHBI=_responseHBI - In the implementation block
-(id)bagKey;
-(id)osVersion;
-(id)protocolVersion;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)deviceName;
-(void)setProtocolVersion:(id)arg1 ;
-(id)validationData;
-(void)setValidationData:(id)arg1 ;
-(id)responseServices;
-(id)responseHBI;
-(void)setServices:(id)arg1 ;
-(void)setHardwareVersion:(id)arg1 ;
-(void)setOsVersion:(id)arg1 ;
-(void)setSoftwareVersion:(id)arg1 ;
-(bool)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)services;
-(id)softwareVersion;
-(id)hardwareVersion;
-(void)setResponseServices:(id)arg1 ;
-(void)setResponseHBI:(id)arg1 ;
-(id)nonStandardMessageHeadersForOutgoingPush;
-(id)messageBody;
-(void)setDeviceName:(id)arg1 ;
-(id)requiredKeys;
@end

