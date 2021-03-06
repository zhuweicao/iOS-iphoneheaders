/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSCHStyleUtilities : NSObject
+(bool)hasShadow:(id)arg1 ;
+(id)nullShadow;
+(bool)propertyMap:(id)arg1 equivalentTo:(id)arg2 ;
+(bool)hasNoFill:(id)arg1 ;
+(bool)isNullFill:(id)arg1 ;
+(bool)upgradedShadowPropertyFromShadow:(id)arg1 outUpgraded:(id*)arg2 ;
+(void)upgradeAlignmentInParagraphStyles:(id)arg1 willModifyBlock:(/*^block*/ id)arg2 ;
+(bool)upgradeShadowProperties:(id)arg1 inMap:(id)arg2 ;
+(id)fullyPopulatedStyleFromStyle:(id)arg1 context:(id)arg2 ;
+(bool)p_hasShadow:(id)arg1 ;
+(id)fullyPopulatedStylesFromArray:(id)arg1 context:(id)arg2 ;
+(id)upgradedShadowPropertyForParagraphStyle:(id)arg1 ;
+(id)shadowToChartsNullShadow:(id)arg1 ;
+(id)chartsNullShadowToDefaultDisabledShadow:(id)arg1 ;
+(void)updateStyleState:(id)arg1 forMutationsPerStyleOwner:(id)arg2 ;
+(id)nullFill;
@end

