/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTextRun;

@interface PMTextRunMapper : CMMapper {

	OADTextRun* mTextRun;

}
-(id)fontScheme;
-(id)copyCharacterStyleWithState:(id)arg1 ;
-(bool)_isDefaultFill:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextRun:(id)arg1 parent:(id)arg2 ;
@end

