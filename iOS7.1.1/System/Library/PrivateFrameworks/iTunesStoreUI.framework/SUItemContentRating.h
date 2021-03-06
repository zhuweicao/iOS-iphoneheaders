/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	long long _rank;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	long long _ratingSystem;
	SSItemArtworkImage* _ratingSystemLogo;
	bool _shouldHideWhenRestricted;

}

@property (getter=isExplicitContent,nonatomic,readonly) bool explicitContent; 
@property (assign,nonatomic) long long rank;                                               //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                   //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                         //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) long long ratingSystem;                                       //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) SSItemArtworkImage * ratingSystemLogo;                          //@synthesize ratingSystemLogo=_ratingSystemLogo - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) bool restricted; 
@property (assign,nonatomic) bool shouldHideWhenRestricted;                                //@synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted - In the implementation block
+(long long)ratingSystemFromString:(id)arg1 ;
-(bool)isExplicitContent;
-(bool)_isRatingSystemForApps:(long long)arg1 ;
-(bool)_isRatingSystemForMovies:(long long)arg1 ;
-(bool)_isRatingSystemForTV:(long long)arg1 ;
-(bool)_isRatingSystemForMusic:(long long)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(long long)ratingSystem;
-(id)ratingLabel;
-(id)ratingDescription;
-(void)setRatingDescription:(id)arg1 ;
-(void)setRatingLabel:(id)arg1 ;
-(void)setRatingSystem:(long long)arg1 ;
-(long long)rank;
-(void)setRank:(long long)arg1 ;
-(bool)isRestricted;
-(bool)shouldHideWhenRestricted;
-(id)ratingSystemLogo;
-(void)setRatingSystemLogo:(id)arg1 ;
-(void)setShouldHideWhenRestricted:(bool)arg1 ;
@end

