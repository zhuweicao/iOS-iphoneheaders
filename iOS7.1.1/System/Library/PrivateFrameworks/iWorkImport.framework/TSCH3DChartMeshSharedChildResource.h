/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartMeshResources;

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent> {

	TSCH3DChartMeshResources* mParent;
	bool mChildRegenerated;
	int mCaching;
	DataBufferInfo mBufferInfo;
	unsigned long long mResourceIdentifier;

}

@property (readonly) DataBufferInfo bufferInfo; 
@property (assign,nonatomic) int caching; 
@property (nonatomic,readonly) unsigned long long resourceIdentifier; 
@property (assign,nonatomic) bool childRegenerated; 
+(id)resourceWithParent:(id)arg1 ;
-(void)clearParent;
-(DataBufferInfo)bufferInfo;
-(int)caching;
-(void)setCaching:(int)arg1 ;
-(unsigned long long)resourceIdentifier;
-(bool)childRegenerated;
-(void)setChildRegenerated:(bool)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(id)initWithParent:(id)arg1 ;
@end

