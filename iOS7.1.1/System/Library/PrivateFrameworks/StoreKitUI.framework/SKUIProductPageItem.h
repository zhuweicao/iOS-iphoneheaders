/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItem.h>

@class NSURL, NSArray, SKUIItemContentRating, NSString, SKUIDeveloperInfo, NSMutableDictionary, SKUIStoreNotes;

@interface SKUIProductPageItem : SKUIItem {

	NSURL* _artistPageURL;
	NSArray* _childItemIdentifiers;
	SKUIItemContentRating* _contentRating;
	NSString* _copyrightString;
	SKUIDeveloperInfo* _developerInfo;
	NSArray* _inAppPurchases;
	NSString* _installationRequirementsDescription;
	NSString* _itemDescription;
	NSString* _lastUpdateDateString;
	NSString* _licenseAgreementURLString;
	NSMutableDictionary* _loadedChildItems;
	NSArray* _parentBundleItemIdentifiers;
	NSString* _privacyPolicyURLString;
	NSString* _regularPriceString;
	NSArray* _releaseNotes;
	NSString* _reviewsURLString;
	NSArray* _screenshots;
	NSArray* _secondaryContentRatings;
	NSString* _sellerName;
	NSString* _shortenedProductPageURLString;
	SKUIStoreNotes* _storeNotes;
	long long _supportedFeatures;
	NSString* _supportURLString;
	NSArray* _trailers;
	NSString* _updateDescription;

}

@property (nonatomic,readonly) NSURL * artistPageURL;                                       //@synthesize artistPageURL=_artistPageURL - In the implementation block
@property (nonatomic,readonly) SKUIItemContentRating * contentRating;                       //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSString * copyrightString;                                  //@synthesize copyrightString=_copyrightString - In the implementation block
@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;                           //@synthesize developerInfo=_developerInfo - In the implementation block
@property (nonatomic,readonly) NSArray * inAppPurchases;                                    //@synthesize inAppPurchases=_inAppPurchases - In the implementation block
@property (nonatomic,readonly) NSString * installationRequirementsDescription;              //@synthesize installationRequirementsDescription=_installationRequirementsDescription - In the implementation block
@property (nonatomic,readonly) NSString * itemDescription;                                  //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSString * lastUpdateDateString;                             //@synthesize lastUpdateDateString=_lastUpdateDateString - In the implementation block
@property (nonatomic,readonly) NSString * licenseAgreementURLString;                        //@synthesize licenseAgreementURLString=_licenseAgreementURLString - In the implementation block
@property (nonatomic,readonly) NSArray * parentBundleItemIdentifiers;                       //@synthesize parentBundleItemIdentifiers=_parentBundleItemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * privacyPolicyURLString;                           //@synthesize privacyPolicyURLString=_privacyPolicyURLString - In the implementation block
@property (nonatomic,readonly) NSString * regularPriceString;                               //@synthesize regularPriceString=_regularPriceString - In the implementation block
@property (nonatomic,readonly) NSArray * releaseNotes;                                      //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,readonly) NSString * reviewsURLString;                                 //@synthesize reviewsURLString=_reviewsURLString - In the implementation block
@property (nonatomic,readonly) NSArray * screenshots;                                       //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryContentRatings;                           //@synthesize secondaryContentRatings=_secondaryContentRatings - In the implementation block
@property (nonatomic,readonly) NSString * sellerName;                                       //@synthesize sellerName=_sellerName - In the implementation block
@property (nonatomic,readonly) NSString * shortenedProductPageURLString;                    //@synthesize shortenedProductPageURLString=_shortenedProductPageURLString - In the implementation block
@property (nonatomic,readonly) SKUIStoreNotes * storeNotes;                                 //@synthesize storeNotes=_storeNotes - In the implementation block
@property (nonatomic,readonly) long long supportedFeatures;                                 //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (nonatomic,readonly) NSString * supportURLString;                                 //@synthesize supportURLString=_supportURLString - In the implementation block
@property (nonatomic,readonly) NSArray * trailers;                                          //@synthesize trailers=_trailers - In the implementation block
@property (nonatomic,readonly) NSString * updateDescription;                                //@synthesize updateDescription=_updateDescription - In the implementation block
-(void).cxx_destruct;
-(id)contentRating;
-(id)childItemIdentifiers;
-(id)loadedChildItems;
-(id)childItemForIdentifier:(id)arg1 ;
-(long long)numberOfChildItems;
-(id)developerInfo;
-(id)screenshots;
-(id)storeNotes;
-(id)itemDescription;
-(id)updateDescription;
-(id)inAppPurchases;
-(id)releaseNotes;
-(long long)supportedFeatures;
-(id)parentBundleItemIdentifiers;
-(id)trailers;
-(id)lastUpdateDateString;
-(id)secondaryContentRatings;
-(id)artistPageURL;
-(id)regularPriceString;
-(id)sellerName;
-(id)installationRequirementsDescription;
-(void)_setVersionHistory:(id)arg1 ;
-(void)_setInAppPurchases:(id)arg1 ;
-(id)licenseAgreementURLString;
-(id)privacyPolicyURLString;
-(id)reviewsURLString;
-(id)shortenedProductPageURLString;
-(id)supportURLString;
-(id)copyrightString;
-(id)initWithLookupDictionary:(id)arg1 ;
@end

