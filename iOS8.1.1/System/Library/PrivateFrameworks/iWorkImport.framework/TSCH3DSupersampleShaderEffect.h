/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DShaderEffect.h>

@class TSCH3DShaderVariable;

@interface TSCH3DSupersampleShaderEffect : TSCH3DShaderEffect {

	unsigned long long mSize;
	unsigned long long mSamples;
	TSCH3DShaderVariable* mSupersampleTexcoords;

}
+(id)variableAccum;
+(id)effectWithSize:(unsigned long long)arg1 samples:(unsigned long long)arg2 ;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(id)variableAccum;
-(id)initWithSize:(unsigned long long)arg1 samples:(unsigned long long)arg2 ;
-(void)p_addSampleAtX:(float)arg1 y:(float)arg2 weight:(double)arg3 program:(id)arg4 accumVariable:(id)arg5 variableIndex:(unsigned long long)arg6 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end

