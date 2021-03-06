/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/NSCopying.h>
#import <CoreImage/NSCoding.h>

@interface CIVector : NSObject <NSCopying, NSCoding> {

	unsigned long long _count;
	SCD_Union_CI13* _u;

}
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithX:(double)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
+(id)vectorWithCGPoint:(CGPoint)arg1 ;
+(id)vectorWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
+(id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
+(id)vectorWithCGRect:(CGRect)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 ;
-(double*)_values;
-(id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithX:(double)arg1 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
-(id)initWithCGPoint:(CGPoint)arg1 ;
-(id)initWithCGRect:(CGRect)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(double)Z;
-(double)W;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGAffineTransform)CGAffineTransformValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)CGRectValue;
-(CGPoint)CGPointValue;
-(id)initWithString:(id)arg1 ;
-(double)valueAtIndex:(unsigned long long)arg1 ;
-(double)X;
-(double)Y;
-(void)finalize;
-(id)stringRepresentation;
@end

