/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/ASParsingNotifyOfUnknownTokens.h>

@class NSNumber, NSDictionary;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens> {

	NSNumber* _foundStatus;
	NSDictionary* _parseRules;

}

@property (retain) NSNumber * foundStatus;              //@synthesize foundStatus=_foundStatus - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
-(void)dealloc;
-(void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2 ;
-(id)asParseRules;
-(id)initWithCodePage:(int)arg1 statusToken:(int)arg2 ;
-(id)foundStatus;
-(void)setFoundStatus:(id)arg1 ;
@end
