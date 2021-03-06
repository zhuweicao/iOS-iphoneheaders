/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHGraphicStyle.h>
#import <iWorkImport/GQTableGenerator.h>

@interface GQHTable : GQHGraphicStyle <GQTableGenerator>
+(void)splitTable:(id)arg1 ;
+(void)getVectorStylesForRowIndex:(unsigned short)arg1 rowSpan:(unsigned short)arg2 columnIndex:(unsigned short)arg3 columnSpan:(unsigned short)arg4 vectorStyles:(id*)arg5 state:(id)arg6 ;
+(void)mapVectorStyles:(id*)arg1 toCellStyle:(id)arg2 state:(id)arg3 ;
+(CFStringRef)createTableAttachmentIdWithNumber:(long long)arg1 ;
+(unsigned short)resolveGroupLevel:(id)arg1 model:(id)arg2 columnIndex:(int)arg3 tableState:(id)arg4 ;
+(void)mapCellStyle:(id)arg1 rowIndex:(unsigned short)arg2 rowSpan:(unsigned short)arg3 columnIndex:(unsigned short)arg4 columnSpan:(unsigned short)arg5 state:(id)arg6 cell:(id)arg7 level:(unsigned short)arg8 ;
+(id)mapBaseFillStyleForRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3 isGroupingCell:(bool)arg4 ;
+(int)beginTable:(id)arg1 state:(id)arg2 ;
+(int)beginCells:(id)arg1 state:(id)arg2 ;
+(int)handleCell:(id)arg1 state:(id)arg2 ;
+(int)endCells:(id)arg1 state:(id)arg2 ;
+(int)endTable:(id)arg1 state:(id)arg2 ;
+(int)mapCellContent:(id)arg1 xml:(id)arg2 state:(id)arg3 ;
+(void)addMissingCellWithRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3 ;
+(void)beginRowWithIndex:(unsigned short)arg1 state:(id)arg2 ;
+(void)addMissingCellsUpToRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3 ;
+(void)startTableWithTableAnchor:(CFStringRef)arg1 tableHeight:(float)arg2 state:(id)arg3 ;
+(const char*)name;
@end

