/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADTableCellBorderStyle, OADFill;

@interface OADTableCellStyle : NSObject {

	OADTableCellBorderStyle* mBorderStyle;
	OADFill* mFill;

}
+(id)defaultStyle;
+(id)defaultFill;
-(void)dealloc;
-(id)fill;
-(void)setBorderStyle:(id)arg1 ;
-(id)borderStyle;
-(void)setFill:(id)arg1 ;
-(id)shallowCopy;
-(void)applyOverridesFrom:(id)arg1 ;
@end

