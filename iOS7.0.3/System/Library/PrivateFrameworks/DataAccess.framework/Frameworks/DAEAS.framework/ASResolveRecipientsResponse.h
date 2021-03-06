/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSNumber, NSArray;

@interface ASResolveRecipientsResponse : ASItem {

	NSMutableArray* _responses;
	NSNumber* _easStatus;

}

@property (retain) NSArray * responses;               //@synthesize responses=_responses - In the implementation block
@property (retain) NSNumber * easStatus;              //@synthesize easStatus=_easStatus - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(id)easStatus;
-(id)responses;
-(void)setEASStatus:(id)arg1 ;
-(void)addResponse:(id)arg1 ;
-(void)setResponses:(id)arg1 ;
@end

