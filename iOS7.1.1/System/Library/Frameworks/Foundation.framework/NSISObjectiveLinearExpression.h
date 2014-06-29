/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSISRowBody.h>

@class NSMutableArray;

@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody> {

	CFDictionaryRef _priorityMap;
	NSMutableArray* _variablesSortedByPriorityVectors;
	CFDataRef _constant;

}
-(void)verifyInternalIntegrity;
-(void)enumerateVariables:(/*^block*/ id)arg1 ;
-(void)removeVariable:(id)arg1 ;
-(void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 processVariableNewToReceiver:(/*^block*/ id)arg4 processVariableDroppedFromReceiver:(/*^block*/ id)arg5 ;
-(void)addExpression:(id)arg1 priority:(double)arg2 times:(double)arg3 processVariableNewToReceiver:(/*^block*/ id)arg4 processVariableDroppedFromReceiver:(/*^block*/ id)arg5 ;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/ id)arg3 processVariableDroppedFromReceiver:(/*^block*/ id)arg4 ;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(/*^block*/ id)arg4 processVariableDroppedFromReceiver:(/*^block*/ id)arg5 ;
-(id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
-(void)leadingPriority:(double*)arg1 andValue:(double*)arg2 forVariable:(id)arg3 ;
-(id)initWithLinearExpression:(id)arg1 priority:(double)arg2 ;
-(bool)constantTermIsZero;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 ;
-(unsigned long long)variableCount;
-(void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 ;
-(void)incrementConstantWithPriority:(double)arg1 value:(double)arg2 ;
-(CFDataRef)priorityVectorForVariable:(id)arg1 ;
-(void)setPriorityVector:(CFDataRef)arg1 forKnownAbsentVariable:(id)arg2 ;
-(void)incrementConstantWithPriorityVector:(CFDataRef)arg1 timesScalarCoefficient:(double)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
