/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {

	int _fontStyle;

}

@property (nonatomic,readonly) int fontStyle;              //@synthesize fontStyle=_fontStyle - In the implementation block
-(bool)isNumber;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2 isPartOfWord:(bool)arg3 ;
-(id)mathMLString;
-(bool)isNaturalSuperscript;
-(bool)canFormWordStartingWithExpression:(id)arg1 ;
-(bool)_isPrime;
-(int)fontStyle;
@end
