/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface TSCHStyleUtilities : NSObject
+(BOOL)hasShadow:(id)arg1 ;
+(id)nullShadow;
+(BOOL)propertyMap:(id)arg1 equivalentTo:(id)arg2 ;
+(BOOL)hasNoFill:(id)arg1 ;
+(BOOL)isNullFill:(id)arg1 ;
+(BOOL)upgradedShadowPropertyFromShadow:(id)arg1 outUpgraded:(id*)arg2 ;
+(void)upgradeAlignmentInParagraphStyles:(id)arg1 willModifyBlock:(/*^block*/ id)arg2 ;
+(BOOL)upgradeShadowProperties:(id)arg1 inMap:(id)arg2 ;
+(id)fullyPopulatedStyleFromStyle:(id)arg1 context:(id)arg2 ;
+(BOOL)p_hasShadow:(id)arg1 ;
+(id)fullyPopulatedStylesFromArray:(id)arg1 context:(id)arg2 ;
+(id)upgradedShadowPropertyForParagraphStyle:(id)arg1 ;
+(id)shadowToChartsNullShadow:(id)arg1 ;
+(id)chartsNullShadowToDefaultDisabledShadow:(id)arg1 ;
+(void)updateStyleState:(id)arg1 forMutationsPerStyleOwner:(id)arg2 ;
+(id)nullFill;
@end

