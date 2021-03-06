/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSURL, NSData, NSArray, NSDictionary;

@interface RadioManagedStation : NSManagedObject

@property (assign,nonatomic) long long stationID; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long adamID; 
@property (assign,nonatomic) int sortOrder; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stationDescription; 
@property (nonatomic,copy) NSString * coreSeedName; 
@property (nonatomic,copy) NSURL * artworkURL; 
@property (nonatomic,copy) NSData * artworkURLData; 
@property (nonatomic,retain) NSArray * seedTracks; 
@property (assign,nonatomic) long long songMixType; 
@property (assign,nonatomic) BOOL editEnabled; 
@property (nonatomic,retain) NSArray * editableFields; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (assign,nonatomic) BOOL likesEnabled; 
@property (assign,nonatomic) BOOL skipEnabled; 
@property (assign,nonatomic) int skipFrequency; 
@property (nonatomic,copy) NSString * skipIdentifier; 
@property (assign,nonatomic) double skipInterval; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue; 
@property (assign,nonatomic) BOOL virtualPlayEnabled; 
@property (assign,getter=isFeatured,nonatomic) BOOL featured; 
@property (assign,getter=isGatewayVideoAdEnabled,nonatomic) BOOL gatewayVideoAdEnabled; 
@property (assign,getter=isSponsored,nonatomic) BOOL sponsored; 
@property (nonatomic,retain) NSData * adData; 
@property (assign,nonatomic) unsigned long long impressionThreshold; 
@property (assign,getter=isPremiumPlacement,nonatomic) BOOL premiumPlacement; 
@property (assign,getter=isPreviewOnly,nonatomic) BOOL previewOnly; 
@property (assign,getter=isShared,nonatomic) BOOL shared; 
@property (assign,getter=isSharingEnabled,nonatomic) BOOL sharingEnabled; 
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed; 
@property (assign,nonatomic) int subscriberCount; 
@property (nonatomic,copy) NSString * shareToken; 
@property (nonatomic,copy) NSDictionary * debugDictionary; 
@property (nonatomic,retain) NSURL * streamURL; 
@property (getter=isPreview,nonatomic,readonly) BOOL preview; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)defaultPropertiesToFetch;
-(BOOL)isSubscribed;
-(void)setSubscribed:(BOOL)arg1 ;
-(BOOL)isShared;
-(NSString *)stationHash;
-(long long)stationID;
-(void)setPersistentID:(long long)arg1 ;
-(NSString *)stationDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(NSDictionary *)dictionaryRepresentation;
-(void)setShared:(BOOL)arg1 ;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(BOOL)isExplicit;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(long long)persistentID;
-(NSDictionary *)debugDictionary;
-(BOOL)isFeatured;
-(BOOL)isSponsored;
-(NSData *)artworkURLData;
-(BOOL)editEnabled;
-(BOOL)isGatewayVideoAdEnabled;
-(BOOL)isPremiumPlacement;
-(NSString *)shareToken;
-(NSString *)skipIdentifier;
-(BOOL)virtualPlayEnabled;
-(NSArray *)seedTracks;
-(id)additionalReferencedTrackDescriptors;
-(void)setAdData:(NSData *)arg1 ;
-(void)setArtworkURLData:(NSData *)arg1 ;
-(void)setCoreSeedName:(NSString *)arg1 ;
-(void)setDebugDictionary:(NSDictionary *)arg1 ;
-(void)setEditEnabled:(BOOL)arg1 ;
-(void)setEditableFields:(NSArray *)arg1 ;
-(void)setFeatured:(BOOL)arg1 ;
-(void)setGatewayVideoAdEnabled:(BOOL)arg1 ;
-(void)setImpressionThreshold:(unsigned long long)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setLikesEnabled:(BOOL)arg1 ;
-(void)setPremiumPlacement:(BOOL)arg1 ;
-(void)setPreviewOnly:(BOOL)arg1 ;
-(void)setSeedTracks:(NSArray *)arg1 ;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(void)setShareToken:(NSString *)arg1 ;
-(void)setSkipEnabled:(BOOL)arg1 ;
-(void)setSkipFrequency:(int)arg1 ;
-(void)setSkipIdentifier:(NSString *)arg1 ;
-(void)setSkipInterval:(double)arg1 ;
-(void)setSkipTimestamps:(NSArray *)arg1 ;
-(void)setSponsored:(BOOL)arg1 ;
-(void)setStationDescription:(NSString *)arg1 ;
-(void)setStreamURL:(NSURL *)arg1 ;
-(void)setStreamCertificateURL:(id)arg1 ;
-(void)setStreamKeyURL:(id)arg1 ;
-(void)setSubscriberCount:(int)arg1 ;
-(void)setVirtualPlayEnabled:(BOOL)arg1 ;
-(NSArray *)skipTimestamps;
-(NSURL *)streamURL;
-(id)streamCertificateURL;
-(id)streamKeyURL;
-(NSString *)coreSeedName;
-(NSArray *)editableFields;
-(BOOL)isSharingEnabled;
-(BOOL)likesEnabled;
-(int)subscriberCount;
-(NSURL *)artworkURL;
-(BOOL)skipEnabled;
-(int)skipFrequency;
-(double)skipInterval;
-(NSData *)adData;
-(void)setTrackPlaybackDescriptorQueue:(NSArray *)arg1 ;
-(NSArray *)trackPlaybackDescriptorQueue;
-(BOOL)isPreviewOnly;
-(void)setSongMixType:(long long)arg1 ;
-(long long)songMixType;
-(id)feedbackDictionaryRepresentation;
-(BOOL)isPreview;
-(unsigned long long)impressionThreshold;
-(long long)adamID;
-(void)setAdamID:(long long)arg1 ;
@end

