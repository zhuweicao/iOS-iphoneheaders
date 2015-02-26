/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {

	TSUIntegerKeyDictionary* mDict;
	opaque_pthread_rwlock_t mDictRWLock;

}
-(void)setCell:(id)arg1 atCellID:(SCD_Struct_TS266)arg2 ;
-(id)cellAtCellID:(SCD_Struct_TS266)arg1 ;
-(void)removeAllCells;
-(id)allCells;
-(void)applyBlockToAllCells:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
@end
