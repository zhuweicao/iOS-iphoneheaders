/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioSearchRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	bool _excludeFeaturedStations;
	bool _shouldProcessCategories;
	NSString* _searchTerm;
	long long _searchCategory;
	unsigned long long _numberOfSearchResults;
	unsigned long long _searchResultsOffset;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;

}

@property (nonatomic,readonly) NSString * searchTerm;                                      //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) long long searchCategory;                                     //@synthesize searchCategory=_searchCategory - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearchResults;                     //@synthesize numberOfSearchResults=_numberOfSearchResults - In the implementation block
@property (assign,nonatomic) unsigned long long searchResultsOffset;                       //@synthesize searchResultsOffset=_searchResultsOffset - In the implementation block
@property (assign,nonatomic) bool excludeFeaturedStations;                                 //@synthesize excludeFeaturedStations=_excludeFeaturedStations - In the implementation block
@property (assign,nonatomic) bool shouldProcessCategories;                                 //@synthesize shouldProcessCategories=_shouldProcessCategories - In the implementation block
@property (nonatomic,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,readonly) SSMetricsPageEvent * metricsPageEvent;                      //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
-(id)searchTerm;
-(id)init;
-(id)description;
-(void)cancel;
-(void).cxx_destruct;
-(id)initWithSearchTerm:(id)arg1 ;
-(void)startWithSearchCompletionHandler:(/*^block*/ id)arg1 ;
-(long long)searchCategory;
-(void)setSearchCategory:(long long)arg1 ;
-(unsigned long long)searchResultsOffset;
-(void)setSearchResultsOffset:(unsigned long long)arg1 ;
-(bool)excludeFeaturedStations;
-(void)setExcludeFeaturedStations:(bool)arg1 ;
-(bool)shouldProcessCategories;
-(void)setShouldProcessCategories:(bool)arg1 ;
-(id)metricsPageEvent;
-(id)metricsConfiguration;
-(void)setNumberOfSearchResults:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSearchResults;
@end

