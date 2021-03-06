/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPStorage, TSWPSelection, TSWPAttachment, TSKAddedToDocumentContext;

@interface TSWPInsertAttachmentCommand : TSWPTextBaseCommand {

	TSWPStorage* _storage;
	TSWPSelection* _selection;
	TSWPAttachment* _attachment;
	TSKAddedToDocumentContext* _dolcContext;
	TSWPStorageTransaction* _undoRedoTransaction;
	NSRange _redoRestoreRange;

}

@property (nonatomic,readonly) TSWPStorage * storage; 
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(InsertAttachmentCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const InsertAttachmentCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)shouldRunSynchronously;
-(void)p_invalidateRange:(NSRange)arg1 ;
-(void)p_invalidateSelection:(id)arg1 ;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 attachment:(id)arg3 dolcContext:(id)arg4 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id).cxx_construct;
-(NSRange)undoRedo;
-(BOOL)process;
-(id)actionString;
@end

