/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDropShadow.h>

@interface TSDMutableDropShadow : TSDDropShadow

@property (assign,nonatomic,@dynamic) double angle; 
@property (assign,nonatomic,@dynamic) double offset; 
@property (assign,nonatomic,@dynamic) double radius; 
@property (assign,nonatomic,@dynamic) double opacity; 
@property (assign,nonatomic,@dynamic) CGColorRef color; 
@property (assign,getter=isEnabled,nonatomic,@dynamic) bool enabled; 
-(void)setTSUColor:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setEnabled:(bool)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
@end

