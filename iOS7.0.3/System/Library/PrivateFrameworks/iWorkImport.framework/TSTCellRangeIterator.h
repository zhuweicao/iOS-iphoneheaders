/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSTCellRangeIteratorDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCellIterator;

@interface TSTCellRangeIterator : NSObject {

	TSTCellIterator* mCellIterator;
	SCD_Struct_TS501* mIterData;
	BOOL mIterDataValid;
	BOOL mCellValidForDelegate;
	<TSTCellRangeIteratorDelegate>* mDelegate;

}

@property (nonatomic,readonly) BOOL cellValid; 
-(id)initWithTableModel:(id)arg1 region:(id)arg2 delegate:(id)arg3 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS497)arg2 delegate:(id)arg3 ;
-(BOOL)cellValid;
-(id)initWithTableModel:(id)arg1 delegate:(id)arg2 ;
-(BOOL)processRange;
-(void)dealloc;
-(id).cxx_construct;
@end

