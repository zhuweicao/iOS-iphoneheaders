/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommand.h>

@class TSKReplaceAllCommand, NSString;

@interface TSKReplaceAllChildCommand : TSKCommand {

	TSKReplaceAllCommand* _parent;
	unsigned _countOfItemsReplaced;

}

@property (assign,nonatomic) TSKReplaceAllCommand * parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSString * findString; 
@property (nonatomic,readonly) NSString * replaceString; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned countOfItemsReplaced;              //@synthesize countOfItemsReplaced=_countOfItemsReplaced - In the implementation block
-(void)saveToArchive:(ReplaceAllChildCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ReplaceAllChildCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithParentCommand:(id)arg1 ;
-(id)findString;
-(id)replaceString;
-(unsigned)countOfItemsReplaced;
-(unsigned long long)options;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

