/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying> {

	unsigned long long mSeriesIndex;
	unsigned long long mValueIndex;

}

@property (nonatomic,readonly) unsigned long long seriesIndex; 
@property (nonatomic,readonly) unsigned long long valueIndex; 
+(id)repElementIndexWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2 ;
-(id)initWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2 ;
-(id)seriesIndexSet;
-(id)valueIndexSet;
-(unsigned long long)valueIndex;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned long long)seriesIndex;
@end

