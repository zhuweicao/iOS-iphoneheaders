/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVDeleteTaskDelegate.h>
#import <CoreDAV/CoreDAVPutTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskGroupDelegate.h>
#import <CoreDAV/CoreDAVMkcolTaskDelegate.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString, NSArray, NSMutableArray, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {

	int _phase;
	NSURL* _folderURL;
	NSString* _previousCTag;
	NSString* _nextCTag;
	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	NSString* _previousPTag;
	NSString* _nextPTag;
	NSArray* _actions;
	void* _context;
	unsigned long long _multiGetBatchSize;
	NSMutableArray* _unsubmittedTasks;
	NSURL* _addMemberURL;
	bool _useMultiGet;
	NSMutableSet* _syncReportDeletedURLs;
	NSMutableDictionary* _leafURLToETag;
	NSMutableArray* _childCollectionURL;
	Class _appSpecificDataItemClass;
	Class _appSpecificContainerItemClass;
	bool _syncItemOrder;
	NSMutableDictionary* _folderURLToChildrenURLOrder;
	bool _preflightCTag;

}

@property (readonly) NSURL * folderURL;                                                         //@synthesize folderURL=_folderURL - In the implementation block
@property (readonly) NSString * previousCTag;                                                   //@synthesize previousCTag=_previousCTag - In the implementation block
@property (assign) bool preflightCTag;                                                          //@synthesize preflightCTag=_preflightCTag - In the implementation block
@property (retain) NSString * previousSyncToken;                                                //@synthesize previousSyncToken=_previousSyncToken - In the implementation block
@property (readonly) void* context;                                                             //@synthesize context=_context - In the implementation block
@property (assign) unsigned long long multiGetBatchSize;                                        //@synthesize multiGetBatchSize=_multiGetBatchSize - In the implementation block
@property (assign,nonatomic,@dynamic) <CoreDAVLocalDBTreeInfoProvider> * delegate; 
@property (readonly) NSDictionary * folderURLToChildrenURLOrder;                                //@synthesize folderURLToChildrenURLOrder=_folderURLToChildrenURLOrder - In the implementation block
@property (retain) NSString * nextCTag;                                                         //@synthesize nextCTag=_nextCTag - In the implementation block
-(void)dealloc;
-(id)description;
-(void*)context;
-(id)_copyContainerParserMappings;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)bailWithError:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)_tearDownAllUnsubmittedTasks;
-(void)cancelTaskGroup;
-(unsigned long long)_submitTasks;
-(id)dataContentType;
-(void)_pushActions;
-(void)_getDataPayloads;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4 ;
-(bool)isWhitelistedError:(id)arg1 ;
-(void)setPreviousSyncToken:(id)arg1 ;
-(id)nextCTag;
-(void)_postTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setNextCTag:(id)arg1 ;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(void)syncAway;
-(unsigned long long)multiGetBatchSize;
-(void)setMultiGetBatchSize:(unsigned long long)arg1 ;
-(id)folderURL;
-(id)previousCTag;
-(id)previousSyncToken;
-(void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)_getItemTags;
-(void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1 ;
-(id)copyFolderMultiGetTaskWithURLs:(id)arg1 ;
-(void)_getTopFolderTags;
-(void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3 ;
-(bool)shouldSyncChildWithResourceType:(id)arg1 ;
-(void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(bool)arg6 context:(void*)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 ;
-(bool)preflightCTag;
-(void)setPreflightCTag:(bool)arg1 ;
-(id)folderURLToChildrenURLOrder;
@end

