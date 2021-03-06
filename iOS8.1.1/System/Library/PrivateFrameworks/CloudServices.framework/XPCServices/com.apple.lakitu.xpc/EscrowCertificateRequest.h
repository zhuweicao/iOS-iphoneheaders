/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <com.apple.lakitu/EscrowGenericRequest.h>

@class NSArray;

@interface EscrowCertificateRequest : EscrowGenericRequest {

	NSArray* baseRootCertVersions;
	NSArray* trustedRootCertVersions;

}

@property (nonatomic,retain) NSArray * baseRootCertVersions; 
@property (nonatomic,retain) NSArray * trustedRootCertVersions; 
+(Class)responseClass;
-(void)setBaseRootCertVersions:(NSArray *)arg1 ;
-(void)setTrustedRootCertVersions:(NSArray *)arg1 ;
-(NSArray *)baseRootCertVersions;
-(NSArray *)trustedRootCertVersions;
-(id)urlString;
-(id)bodyDictionary;
@end

