/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <kbd/TILinguisticDataSourceMessage.h>

@class NSDate, NSString, NSDictionary;

@interface TIMailOutgoingMessage : NSObject <TILinguisticDataSourceMessage> {

	NSDictionary* _searchResult;

}

@property (nonatomic,retain) NSDictionary * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSString * recipient; 
@property (nonatomic,copy,readonly) NSString * body; 
-(void)dealloc;
-(NSString *)body;
-(NSString *)recipient;
-(void)setSearchResult:(NSDictionary *)arg1 ;
-(NSDictionary *)searchResult;
-(NSDate *)dateSent;
@end

