/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface __NSSetM : NSMutableSet {

	unsigned _used : 58;
	unsigned long long _size;
	unsigned long long _mutations;
	id* _objs;

}
+(id)__new:(const id*)arg1 :(unsigned long long)arg2 :(bool)arg3 ;
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)_mutate;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)objectEnumerator;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)member:(id)arg1 ;
-(void)finalize;
@end

