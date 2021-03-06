/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@class CKContainerID, NSString, CKAccountInfo;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding> {

	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKAccountInfo* _accountInfoOverride;

}

@property (nonatomic,retain) CKContainerID * containerID;                               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) CKAccountInfo * accountInfoOverride;                       //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAccountInfoOverride:(CKAccountInfo *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CKContainerID *)containerID;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(CKAccountInfo *)accountInfoOverride;
@end

