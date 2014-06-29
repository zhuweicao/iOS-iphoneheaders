/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <CoreFoundation/NSCopying.h>

@protocol TSCHNotifyOnModify;
@class TSCHChartInfo, TSUIntToIntDictionary;

@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying> {

	<TSCHNotifyOnModify>* mObjectToNotify;
	TSCHChartInfo* mChartInfo;
	TSUIntToIntDictionary* mRemoteSeriesIndexForGridSeriesIndex;
	TSUIntToIntDictionary* mGridSeriesIndexForRemoteSeriesIndex;

}

@property (assign,nonatomic) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) <TSCHNotifyOnModify> * objectToNotify; 
@property (nonatomic,readonly) bool isPhantom; 
@property (nonatomic,readonly) int direction; 
+(id)propertiesThatInvalidateMediator;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(ChartMediatorArchive*)arg1 ;
-(void)loadFromArchive:(const ChartMediatorArchive*)arg1 ;
-(void)willModify;
-(void)clearParent;
-(id)chartInfo;
-(id)initWithChartInfo:(id)arg1 ;
-(id)numberFormatForAxis:(id)arg1 ;
-(id)numberFormatForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 ;
-(id)objectToNotify;
-(void)setObjectToNotify:(id)arg1 ;
-(void)setChartInfo:(id)arg1 ;
-(bool)isPhantom;
-(id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2 ;
-(void)invalidateAndSynchronizeMediator;
-(id)p_errorBarDataForSeries:(unsigned long long)arg1 withSpec:(SCD_Struct_TS453*)arg2 updateType:(int)arg3 ;
-(void)updateGridWithSpec:(SCD_Struct_TS453*)arg1 ;
-(id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1 ;
-(id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
-(id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2 ;
-(id)categoryLabelFormulas;
-(id)commandToChangeCategoryLabelFormulas:(id)arg1 ;
-(id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3 ;
-(id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2 ;
-(id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2 ;
-(id)seriesDataFormulaForSeriesDimension:(id)arg1 ;
-(unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)arg1 ;
-(bool)preferSeriesToValues;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)direction;
-(bool)isEditing;
@end
