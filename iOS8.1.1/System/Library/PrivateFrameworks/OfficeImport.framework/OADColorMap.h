/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OADColorMap : NSObject {

	NSMutableDictionary* mMappings;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)addMapping:(int)arg1 index:(int)arg2 ;
-(int)mappingForIndex:(int)arg1 ;
-(void)addDefaultMappings:(BOOL)arg1 ;
@end

