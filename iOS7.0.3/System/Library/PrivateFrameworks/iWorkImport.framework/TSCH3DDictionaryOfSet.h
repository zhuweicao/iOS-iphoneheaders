/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface TSCH3DDictionaryOfSet : NSObject <NSFastEnumeration> {

	NSMutableDictionary* mSets;

}
+(id)dictionaryWithMutableDictionaryClass:(Class)arg1 ;
+(id)dictionary;
-(id)initWithMutableDictionaryClass:(Class)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)allKeys;
-(id)objectsForKey:(id)arg1 ;
@end

