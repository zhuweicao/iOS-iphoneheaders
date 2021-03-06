/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDCollection.h>
#import <OfficeImport/OADColorPalette.h>

@interface EDColorsCollection : EDCollection <OADColorPalette> {

	unsigned mDefaultColorsCount;

}
+(bool)isSystemColorId:(unsigned)arg1 ;
+(int)systemColorIdFromIndex:(unsigned)arg1 ;
+(unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)arg1 ;
+(int)oadSchemeColorIdFromThemeIndex:(int)arg1 ;
-(id)colorWithIndex:(unsigned)arg1 ;
-(id)initWithDefaultSetup:(bool)arg1 ;
-(void)addPalette:(const unsigned*)arg1 paletteSize:(unsigned long)arg2 paletteX:(const unsigned*)arg3 paletteXSize:(unsigned)arg4 ;
-(unsigned)addOrEquivalentColorExcludingDefaults:(id)arg1 ;
-(void)setupDefaults;
-(const unsigned*)defaultPalette;
-(void)addColors:(const unsigned*)arg1 count:(unsigned long)arg2 defaultColors:(const unsigned*)arg3 defaultCount:(unsigned)arg4 ;
-(unsigned)defaultColorsCount;
-(void)addDefaultPalette;
@end

