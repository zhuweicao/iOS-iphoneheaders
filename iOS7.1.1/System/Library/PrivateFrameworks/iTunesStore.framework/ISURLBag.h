/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSURLBagContext, SSNetworkConstraints, NSDictionary, NSArray, NSSet;

@interface ISURLBag : NSObject {

	SSURLBagContext* _context;
	SSNetworkConstraints* _defaultConstraints;
	NSDictionary* _dictionary;
	NSArray* _guidPatterns;
	NSSet* _guidSchemes;
	NSDictionary* _headerPatterns;
	double _invalidationTime;
	bool _loadedFromDiskCache;

}

@property (readonly) NSSet * availableStorefrontItemKinds; 
@property (getter=isValid,nonatomic,readonly) bool valid; 
@property (assign,nonatomic) double invalidationTime;                        //@synthesize invalidationTime=_invalidationTime - In the implementation block
@property (assign,nonatomic) bool loadedFromDiskCache;                       //@synthesize loadedFromDiskCache=_loadedFromDiskCache - In the implementation block
@property (nonatomic,copy) SSURLBagContext * URLBagContext; 
@property (nonatomic,readonly) NSDictionary * URLBagDictionary; 
@property (nonatomic,readonly) long long versionIdentifier; 
+(bool)_allowUnsignedBags;
+(void)_loadItemKindURLBagKeyMap;
+(id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2 ;
+(bool)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)urlBagForContext:(id)arg1 ;
+(id)urlForKey:(id)arg1 inBagContext:(id)arg2 ;
+(bool)urlIsTrusted:(id)arg1 inBagContext:(id)arg2 ;
+(id)valueForKey:(id)arg1 inBagContext:(id)arg2 ;
+(id)storeFrontURLBagKeyForItemKind:(id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(bool)isValid;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)urlForKey:(id)arg1 ;
-(id)URLBagDictionary;
-(id)URLBagContext;
-(id)initWithRawDictionary:(id)arg1 ;
-(void)_setDictionary:(id)arg1 ;
-(id)_copyGUIDPatternsFromDictionary:(id)arg1 ;
-(id)_copyGUIDSchemesFromDictionary:(id)arg1 ;
-(id)_copyHeaderPatternsFromDictionary:(id)arg1 ;
-(id)_networkConstraintsCachePath;
-(bool)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2 ;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_writeURLResolutionCacheFile;
-(double)invalidationTime;
-(void)setInvalidationTime:(double)arg1 ;
-(id)copyExtraHeadersForURL:(id)arg1 ;
-(bool)shouldSendGUIDForURL:(id)arg1 ;
-(bool)urlIsTrusted:(id)arg1 ;
-(bool)loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(id)availableStorefrontItemKinds;
-(void)setInvalidationTimeWithExprationInterval:(double)arg1 ;
-(id)sanitizedURLForURL:(id)arg1 ;
-(void)setURLBagContext:(id)arg1 ;
-(bool)loadedFromDiskCache;
-(void)setLoadedFromDiskCache:(bool)arg1 ;
-(id)URLForURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(long long)versionIdentifier;
-(id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2 ;
-(id)networkConstraintsForDownloadKind:(id)arg1 ;
@end

