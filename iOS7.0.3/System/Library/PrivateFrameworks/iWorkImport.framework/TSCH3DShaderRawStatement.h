/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderStatement.h>

@class NSString;

@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement> {

	NSString* mString;
	TSCH3DShaderType mLinkageType;

}

@property (nonatomic,readonly) NSString * string; 
@property (assign,nonatomic) TSCH3DShaderType linkageType; 
+(id)statementWithString:(id)arg1 linkageType:(TSCH3DShaderType)arg2 ;
-(void)setLinkageType:(TSCH3DShaderType)arg1 ;
-(TSCH3DShaderType)linkageType;
-(void)setGeneratedForType:(TSCH3DShaderType)arg1 ;
-(id)initWithString:(id)arg1 linkageType:(TSCH3DShaderType)arg2 ;
-(id)resolve;
-(void)dealloc;
-(id)string;
-(id).cxx_construct;
-(BOOL)isLinked;
@end

