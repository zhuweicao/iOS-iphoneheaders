/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {

	renditionkeytoken _stackKey[16];
	renditionkeytoken* _key;
	unsigned short _highwaterKeyCount;

}
+(void)initialize;
+(id)_placeHolderKey;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setThemeScale:(int)arg1 ;
-(void)setThemeLayer:(int)arg1 ;
-(int)themeLayer;
-(void)copyValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(void)setValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(int)themeState;
-(int)themeValue;
-(int)themeSize;
-(int)themeScale;
-(void)setThemeSize:(int)arg1 ;
-(void)setThemeState:(int)arg1 ;
-(void)setThemeValue:(int)arg1 ;
-(void)_expandKeyIfNecessaryForCount:(int)arg1 ;
-(unsigned short)_systemTokenCount;
-(int)themeElement;
-(int)themePart;
-(int)themeIdiom;
-(int)themeSubtype;
-(id)nameOfAttributeName:(int)arg1 ;
-(void)removeValueForKeyTokenIdentifier:(int)arg1 ;
-(id)initWithThemeElement:(int)arg1 themePart:(int)arg2 themeSize:(int)arg3 themeDirection:(int)arg4 themeValue:(int)arg5 themeDimension1:(int)arg6 themeDimension2:(int)arg7 themeState:(int)arg8 themePresentationState:(int)arg9 themeLayer:(int)arg10 themeScale:(int)arg11 themeIdentifier:(int)arg12 ;
-(void)setThemeElement:(int)arg1 ;
-(void)setThemePart:(int)arg1 ;
-(void)setThemeDirection:(int)arg1 ;
-(int)themeDirection;
-(void)setThemeDimension1:(int)arg1 ;
-(int)themeDimension1;
-(void)setThemeDimension2:(int)arg1 ;
-(int)themeDimension2;
-(void)setThemePresentationState:(int)arg1 ;
-(int)themePresentationState;
-(void)setThemeIdiom:(int)arg1 ;
-(void)setThemeSubtype:(int)arg1 ;
-(id)descriptionBasedOnKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 ;
-(int)themeIdentifier;
-(void)setThemeIdentifier:(int)arg1 ;
-(const renditionkeytoken*)keyList;
@end

