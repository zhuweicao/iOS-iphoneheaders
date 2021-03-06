/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSManagedObject, RadioModel, NSArray, NSData, NSURL, NSString, NSDictionary, SAMPMediaEntity, RadioArtworkCollection;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol> {

	bool _databaseBacked;
	bool _editEnabled;
	bool _isExplicit;
	bool _featured;
	bool _gatewayVideoAdEnabled;
	bool _premiumPlacement;
	bool _shared;
	bool _sharingEnabled;
	bool _sponsored;
	bool _subscribed;
	bool _likesEnabled;
	bool _previewOnly;
	bool _skipEnabled;
	bool _virtualPlayEnabled;
	int _skipFrequency;
	int _sortOrder;
	int _subscriberCount;
	NSManagedObject* _managedObject;
	RadioModel* _model;
	NSArray* _trackPlaybackDescriptorQueue;
	long long _adamID;
	NSData* _adData;
	NSURL* _artworkURL;
	NSData* _artworkURLData;
	NSString* _coreSeedName;
	NSDictionary* _debugDictionary;
	NSArray* _editableFields;
	unsigned long long _impressionThreshold;
	NSString* _name;
	long long _persistentID;
	id _seedTracks;
	NSString* _shareToken;
	NSString* _skipIdentifier;
	double _skipInterval;
	NSArray* _skipTimestamps;
	long long _songMixType;
	NSString* _stationDescription;
	NSString* _stationHash;
	long long _stationID;
	NSURL* _streamURL;
	NSURL* _streamCertificateURL;
	NSURL* _streamKeyURL;

}

@property (nonatomic,readonly) SAMPMediaEntity * SAMPMediaEntityRepresentation; 
@property (assign,nonatomic) long long stationID;                                                    //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                                   //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long persistentID;                                                 //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long adamID;                                                       //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) int sortOrder;                                                          //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * stationDescription;                                            //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,copy) NSURL * artworkURL;                                                       //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSString * coreSeedName;                                                  //@synthesize coreSeedName=_coreSeedName - In the implementation block
@property (assign,getter=isPreviewOnly,nonatomic) bool previewOnly;                                  //@synthesize previewOnly=_previewOnly - In the implementation block
@property (nonatomic,retain) id seedTracks;                                                          //@synthesize seedTracks=_seedTracks - In the implementation block
@property (assign,nonatomic) long long songMixType;                                                  //@synthesize songMixType=_songMixType - In the implementation block
@property (assign,nonatomic) bool editEnabled;                                                       //@synthesize editEnabled=_editEnabled - In the implementation block
@property (nonatomic,retain) NSArray * editableFields;                                               //@synthesize editableFields=_editableFields - In the implementation block
@property (assign,nonatomic) bool isExplicit;                                                        //@synthesize isExplicit=_isExplicit - In the implementation block
@property (assign,nonatomic) bool likesEnabled;                                                      //@synthesize likesEnabled=_likesEnabled - In the implementation block
@property (assign,nonatomic) bool skipEnabled;                                                       //@synthesize skipEnabled=_skipEnabled - In the implementation block
@property (assign,nonatomic) int skipFrequency;                                                      //@synthesize skipFrequency=_skipFrequency - In the implementation block
@property (nonatomic,copy) NSString * skipIdentifier;                                                //@synthesize skipIdentifier=_skipIdentifier - In the implementation block
@property (assign,nonatomic) double skipInterval;                                                    //@synthesize skipInterval=_skipInterval - In the implementation block
@property (nonatomic,copy) NSArray * skipTimestamps;                                                 //@synthesize skipTimestamps=_skipTimestamps - In the implementation block
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue;                                   //@synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue - In the implementation block
@property (assign,nonatomic) bool virtualPlayEnabled;                                                //@synthesize virtualPlayEnabled=_virtualPlayEnabled - In the implementation block
@property (assign,getter=isFeatured,nonatomic) bool featured;                                        //@synthesize featured=_featured - In the implementation block
@property (assign,getter=isGatewayVideoAdEnabled,nonatomic) bool gatewayVideoAdEnabled;              //@synthesize gatewayVideoAdEnabled=_gatewayVideoAdEnabled - In the implementation block
@property (assign,getter=isSponsored,nonatomic) bool sponsored;                                      //@synthesize sponsored=_sponsored - In the implementation block
@property (nonatomic,retain) NSData * adData;                                                        //@synthesize adData=_adData - In the implementation block
@property (assign,nonatomic) unsigned long long impressionThreshold;                                 //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
@property (assign,getter=isPremiumPlacement,nonatomic) bool premiumPlacement;                        //@synthesize premiumPlacement=_premiumPlacement - In the implementation block
@property (getter=isPreview,nonatomic,readonly) bool preview; 
@property (nonatomic,retain) NSURL * streamURL;                                                      //@synthesize streamURL=_streamURL - In the implementation block
@property (nonatomic,retain) NSURL * streamCertificateURL;                                           //@synthesize streamCertificateURL=_streamCertificateURL - In the implementation block
@property (nonatomic,retain) NSURL * streamKeyURL;                                                   //@synthesize streamKeyURL=_streamKeyURL - In the implementation block
@property (assign,getter=isSharingEnabled,nonatomic) bool sharingEnabled;                            //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,getter=isShared,nonatomic) bool shared;                                            //@synthesize shared=_shared - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) bool subscribed;                                    //@synthesize subscribed=_subscribed - In the implementation block
@property (assign,nonatomic) int subscriberCount;                                                    //@synthesize subscriberCount=_subscriberCount - In the implementation block
@property (nonatomic,copy) NSString * shareToken;                                                    //@synthesize shareToken=_shareToken - In the implementation block
@property (nonatomic,copy) NSDictionary * debugDictionary;                                           //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * feedbackDictionaryRepresentation; 
@property (nonatomic,copy) NSData * artworkURLData;                                                  //@synthesize artworkURLData=_artworkURLData - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isDatabaseBacked,nonatomic,readonly) bool databaseBacked;                          //@synthesize databaseBacked=_databaseBacked - In the implementation block
@property (nonatomic,readonly) NSManagedObject * managedObject;                                      //@synthesize managedObject=_managedObject - In the implementation block
@property (nonatomic,readonly) RadioModel * model;                                                   //@synthesize model=_model - In the implementation block
+(id)SAMPMediaEntityRepresentationForStationID:(long long)arg1 ;
-(id)SAMPMediaEntityRepresentation;
-(void)setSortOrder:(int)arg1 ;
-(bool)isSubscribed;
-(int)sortOrder;
-(void)setSubscribed:(bool)arg1 ;
-(bool)isShared;
-(void)setSkipFrequency:(int)arg1 ;
-(void)setSkipInterval:(double)arg1 ;
-(int)skipFrequency;
-(double)skipInterval;
-(id)trackPlaybackDescriptorQueue;
-(id)artworkCollection;
-(bool)isExplicit;
-(id)stationHash;
-(long long)stationID;
-(void)setStationHash:(id)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(id)artworkURL;
-(id)stationDescription;
-(void)setTrackPlaybackDescriptorQueue:(id)arg1 ;
-(id)adData;
-(long long)adamID;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)model;
-(id)dictionaryRepresentation;
-(void).cxx_destruct;
-(void)setShared:(bool)arg1 ;
-(long long)persistentID;
-(id)managedObject;
-(id)debugDictionary;
-(bool)isFeatured;
-(bool)isSponsored;
-(long long)songMixType;
-(id)seedTracks;
-(id)artworkURLData;
-(id)coreSeedName;
-(id)editableFields;
-(bool)editEnabled;
-(id)feedbackDictionaryRepresentation;
-(unsigned long long)impressionThreshold;
-(bool)isGatewayVideoAdEnabled;
-(bool)isPremiumPlacement;
-(bool)isPreview;
-(bool)isPreviewOnly;
-(bool)isSharingEnabled;
-(bool)likesEnabled;
-(void)setAdData:(id)arg1 ;
-(void)setArtworkURL:(id)arg1 ;
-(void)setArtworkURLData:(id)arg1 ;
-(void)setCoreSeedName:(id)arg1 ;
-(void)setDebugDictionary:(id)arg1 ;
-(void)setEditEnabled:(bool)arg1 ;
-(void)setEditableFields:(id)arg1 ;
-(void)setFeatured:(bool)arg1 ;
-(void)setGatewayVideoAdEnabled:(bool)arg1 ;
-(void)setImpressionThreshold:(unsigned long long)arg1 ;
-(void)setIsExplicit:(bool)arg1 ;
-(void)setLikesEnabled:(bool)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setPremiumPlacement:(bool)arg1 ;
-(void)setPreviewOnly:(bool)arg1 ;
-(void)setSeedTracks:(id)arg1 ;
-(void)setSharingEnabled:(bool)arg1 ;
-(void)setShareToken:(id)arg1 ;
-(void)setSkipEnabled:(bool)arg1 ;
-(void)setSkipIdentifier:(id)arg1 ;
-(void)setSkipTimestamps:(id)arg1 ;
-(void)setSongMixType:(long long)arg1 ;
-(void)setSponsored:(bool)arg1 ;
-(void)setStationDescription:(id)arg1 ;
-(void)setStreamURL:(id)arg1 ;
-(void)setStreamCertificateURL:(id)arg1 ;
-(void)setStreamKeyURL:(id)arg1 ;
-(void)setSubscriberCount:(int)arg1 ;
-(void)setVirtualPlayEnabled:(bool)arg1 ;
-(id)shareToken;
-(bool)skipEnabled;
-(id)skipIdentifier;
-(id)skipTimestamps;
-(id)streamURL;
-(id)streamCertificateURL;
-(id)streamKeyURL;
-(int)subscriberCount;
-(bool)virtualPlayEnabled;
-(void)_radioModelWasDeletedNotification:(id)arg1 ;
-(bool)isDatabaseBacked;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2 ;
-(id)artworkURLForSize:(CGSize)arg1 expectedSize:(CGSize*)arg2 ;
-(void)setAdamID:(long long)arg1 ;
@end

