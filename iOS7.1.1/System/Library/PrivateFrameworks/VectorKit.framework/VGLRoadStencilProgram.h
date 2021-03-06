/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLProgram.h>

@interface VGLRoadStencilProgram : VGLProgram {

	int _uColor;
	VGLColor _color;

}

@property (assign,nonatomic) VGLColor color;              //@synthesize color=_color - In the implementation block
+(id)vertName;
+(id)fragName;
-(VGLColor)color;
-(void)setColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(void)setup;
@end

