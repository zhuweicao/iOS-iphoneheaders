/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <StoreKitUI/SSMetricsEventFieldProvider.h>

@class NSArray;

@interface SKUIFlowcaseComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _flowcaseItems;
	long long _missingItemCount;

}

@property (nonatomic,readonly) NSArray * flowcaseItems;              //@synthesize flowcaseItems=_flowcaseItems - In the implementation block
-(void).cxx_destruct;
-(long long)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(bool)isMissingItemData;
-(id)metricsElementName;
-(void)_updateWithMissingItems:(id)arg1 ;
-(id)flowcaseItems;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
@end

