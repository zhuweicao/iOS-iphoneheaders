/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellRegionIterating.h>

@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating> {

	set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> >* mCellRangeSet;
	SCD_Struct_TS267 mCellID;
	SCD_Struct_TS500 mBoundingCellRange;

}
-(SCD_Struct_TS267)getNext;
-(id)initWithCellRegion:(id)arg1 ;
-(void)terminate;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
