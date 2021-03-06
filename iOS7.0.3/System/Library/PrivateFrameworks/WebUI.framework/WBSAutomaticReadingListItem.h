/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class NSString, NSDate, UIImage, WBSAutomaticReadingListSocialSource, NSURL;

@interface WBSAutomaticReadingListItem : NSObject {

	BOOL _repostedByAuthenticatedUser;
	BOOL _fetchingProfileImage;
	NSString* _uniqueIdentifier;
	id _sourceRecordID;
	NSDate* _sourceRecordCreationDate;
	NSString* _sourceRecordText;
	id _originatorID;
	NSString* _originatorDisplayName;
	NSString* _urlString;
	NSString* _reposterDisplayName;
	NSString* _reposterScreenName;
	UIImage* _originatorProfileImage;
	NSString* _socialSourceAccountIdentifier;

}

@property (nonatomic,readonly) WBSAutomaticReadingListSocialSource * socialSource; 
@property (nonatomic,copy) NSString * uniqueIdentifier;                                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) id sourceRecordID;                                                                //@synthesize sourceRecordID=_sourceRecordID - In the implementation block
@property (nonatomic,readonly) NSDate * sourceRecordCreationDate;                                                //@synthesize sourceRecordCreationDate=_sourceRecordCreationDate - In the implementation block
@property (nonatomic,readonly) NSString * sourceRecordText;                                                      //@synthesize sourceRecordText=_sourceRecordText - In the implementation block
@property (nonatomic,readonly) id originatorID;                                                                  //@synthesize originatorID=_originatorID - In the implementation block
@property (nonatomic,readonly) NSString * originatorDisplayName;                                                 //@synthesize originatorDisplayName=_originatorDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                                                             //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * reposterDisplayName;                                                   //@synthesize reposterDisplayName=_reposterDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * reposterScreenName;                                                    //@synthesize reposterScreenName=_reposterScreenName - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSRange displayURLRange; 
@property (nonatomic,readonly) NSURL * originatorProfileURL; 
@property (nonatomic,readonly) NSURL * sourceRecordURL; 
@property (nonatomic,readonly) NSString * domainString; 
@property (nonatomic,retain) UIImage * originatorProfileImage;                                                   //@synthesize originatorProfileImage=_originatorProfileImage - In the implementation block
@property (assign,getter=isRepostedByAuthenticatedUser,nonatomic) BOOL repostedByAuthenticatedUser;              //@synthesize repostedByAuthenticatedUser=_repostedByAuthenticatedUser - In the implementation block
@property (nonatomic,readonly) NSString * socialSourceAccountIdentifier;                                         //@synthesize socialSourceAccountIdentifier=_socialSourceAccountIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * originatorProfileImageURL; 
@property (nonatomic,readonly) NSURL * biggerOriginatorProfileImageURL; 
@property (assign,nonatomic) BOOL fetchingProfileImage;                                                          //@synthesize fetchingProfileImage=_fetchingProfileImage - In the implementation block
+(id)keyPathsForValuesAffectingDomainString;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)uniqueIdentifier;
-(id)displayString;
-(void)setUniqueIdentifier:(id)arg1 ;
-(id)urlString;
-(id)sourceRecordID;
-(id)socialSource;
-(id)sourceRecordText;
-(BOOL)fetchingProfileImage;
-(void)setFetchingProfileImage:(BOOL)arg1 ;
-(void)_fetchOriginatorProfileImageForSize:(CGSize)arg1 ;
-(id)bestOriginatorProfileImageForSize:(CGSize)arg1 ;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(void)setOriginatorProfileImage:(id)arg1 ;
-(id)originatorDisplayName;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)domainString;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(NSRange)displayURLRange;
-(id)originatorProfileImage;
-(id)sourceRecordCreationDate;
-(id)originatorID;
-(id)reposterDisplayName;
-(id)reposterScreenName;
-(BOOL)isRepostedByAuthenticatedUser;
-(void)setRepostedByAuthenticatedUser:(BOOL)arg1 ;
-(id)socialSourceAccountIdentifier;
@end

