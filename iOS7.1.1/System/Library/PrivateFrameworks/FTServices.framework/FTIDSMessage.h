/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushCert;
	SecKeyRef _identityKey;
	NSData* _identityCert;
	SecKeyRef _identityPublicKey;
	SecKeyRef _pushKey;
	SecKeyRef _pushPublicKey;
	NSData* _pushToken;
	NSString* _selfURI;
	NSMutableArray* _certDataArray;
	NSMutableArray* _publicKeyArray;
	NSMutableArray* _privateKeyArray;
	NSMutableArray* _userIDArray;

}

@property (assign,nonatomic) SecKeyRef pushPrivateKey;                    //@synthesize pushKey=_pushKey - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPublicKey;                     //@synthesize pushPublicKey=_pushPublicKey - In the implementation block
@property (nonatomic,copy) NSData * pushCertificate;                      //@synthesize pushCert=_pushCert - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSString * selfURI;                            //@synthesize selfURI=_selfURI - In the implementation block
@property (nonatomic,copy) NSMutableArray * certDataArray;                //@synthesize certDataArray=_certDataArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * publicKeyArray;               //@synthesize publicKeyArray=_publicKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * privateKeyArray;              //@synthesize privateKeyArray=_privateKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * userIDArray;                  //@synthesize userIDArray=_userIDArray - In the implementation block
@property (assign,nonatomic) SecKeyRef identityPrivateKey;                //@synthesize identityKey=_identityKey - In the implementation block
@property (assign,nonatomic) SecKeyRef identityPublicKey;                 //@synthesize identityPublicKey=_identityPublicKey - In the implementation block
@property (nonatomic,copy) NSData * IDCertificate;                        //@synthesize identityCert=_identityCert - In the implementation block
-(void)setPushToken:(id)arg1 ;
-(id)pushToken;
-(long long)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)IDCertificate;
-(id)certDataArray;
-(id)publicKeyArray;
-(id)privateKeyArray;
-(void)setIdentityPublicKey:(SecKeyRef)arg1 ;
-(void)setPublicKeyArray:(id)arg1 ;
-(void)setPrivateKeyArray:(id)arg1 ;
-(void)setCertDataArray:(id)arg1 ;
-(void)setUserIDArray:(id)arg1 ;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(void)setPushCertificate:(id)arg1 ;
-(SecKeyRef)identityPrivateKey;
-(SecKeyRef)identityPublicKey;
-(void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(SecKeyRef)arg3 publicKey:(SecKeyRef)arg4 ;
-(id)userIDArray;
-(id)additionalMessageHeadersForOutgoingPush;
-(id)additionalMessageHeaders;
-(bool)wantsSignature;
-(bool)wantsBodySignature;
-(id)pushCertificate;
-(SecKeyRef)pushPrivateKey;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(bool)wantsBagKey;
-(bool)wantsHTTPHeaders;
-(bool)wantsCompressedBody;
-(bool)wantsBinaryPush;
-(long long)responseCommand;
-(void)setSelfURI:(id)arg1 ;
-(void)setIDCertificate:(id)arg1 ;
-(void)setIdentityPrivateKey:(SecKeyRef)arg1 ;
-(id)selfURI;
@end

