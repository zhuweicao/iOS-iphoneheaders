/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/ACDS.vvservice/ACDS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ACDS/ACDS-Structs.h>
#import <VisualVoicemail/VVService.h>

@class ACDSTaskQueue, ACDSTask, NSMutableSet, NSString;

@interface ACDSService : VVService {

	ACDSTaskQueue* _queue;
	ACDSTask* _activeTask;
	int _activeTaskType;
	SCD_Struct_AC0* _performContext;
	int _flagPushAttempts;
	NSMutableSet* _flagChangedRecords;
	NSString* _encryptedPassword;
	vmdhRef _securityHandle;
	unsigned char _serverPublicKey[64];
	int _serverPublicKeyLength;
	double _lastParamFetchTime;
	struct {
		unsigned initialSetupRequired : 1;
		unsigned outstandingListFetch : 1;
		unsigned outstandingListFetchBeforeFetch : 1;
		unsigned suppressPasswordError : 1;
		unsigned endingTask : 1;
		unsigned suspendChangeTracking : 2;
	}  _acdsServiceFlags;
	int _keybagChangeToken;

}
+(void)initialize;
-(void)removeAllRecords;
-(void)setSubscribed:(BOOL)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_performTask:(id)arg1 ;
-(id)mailboxName;
-(void)reportError:(id)arg1 ;
-(void)_doInitialURLSetup;
-(void)_flagsChanged:(id)arg1 ;
-(void)_setServerURL:(id)arg1 ;
-(void)_reprocessQueue;
-(void)_storeChangedExternally:(id)arg1 ;
-(void)_recordsAllRemoved:(id)arg1 ;
-(void)_recordsRemoved:(id)arg1 ;
-(void)setChangedRecords:(id)arg1 merging:(BOOL)arg2 ;
-(void)_setPassword:(id)arg1 isInitial:(BOOL)arg2 ;
-(int)_valueForParameter:(CFStringRef)arg1 defaultValue:(int)arg2 ;
-(void)retrieveParametersNow:(BOOL)arg1 ;
-(BOOL)_validEncryptedPasswordExists;
-(id)_taskForMessageFetch:(void*)arg1 ;
-(void)_setOutstandingListFetch:(BOOL)arg1 ;
-(void)enqueueTask:(id)arg1 ;
-(void)_rescheduleQueueTimer;
-(void)retrieveMessageList;
-(void)_setActiveTask:(id)arg1 error:(id)arg2 ;
-(id)_encryptedPassword;
-(void)_reportError:(id)arg1 forTask:(id)arg2 ;
-(void)_closeConnectionIfQueueIsEmpty;
-(id)_dequeueFetchTask;
-(void)_scheduleRetryForFetchTask:(id)arg1 givenError:(id)arg2 ;
-(void)_completedTaskSuccessfully:(id)arg1 ;
-(void)setSecurityHandle:(vmdhRef)arg1 ;
-(void)setServerPublicKey:(char*)arg1 length:(int)arg2 ;
-(CFStringRef)createEncryptedPasswordForString:(id)arg1 ;
-(void)storeMailboxParametersFromDictionary:(id)arg1 ;
-(void)setChangeTrackingSuspended:(BOOL)arg1 ;
-(id)copyChangedRecords;
-(void)pushFlagsForChangedRecords:(id)arg1 ;
-(id)_nonTrivialActiveTask;
-(void)precacheDataForRecords:(id)arg1 ;
-(BOOL)_handleResponse:(CFHTTPMessageRef)arg1 body:(CFDataRef)arg2 isComplete:(BOOL)arg3 isFirstData:(BOOL)arg4 streamError:(SCD_Struct_AC5*)arg5 task:(id)arg6 ;
-(BOOL)areHTTPSConnectionsAllowed;
-(void)kill;
-(BOOL)mailboxRequiresSetup;
-(BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
-(void)setOnline:(BOOL)arg1 ;
-(void)synchronize:(BOOL)arg1 ;
-(BOOL)isInSync;
-(void)handleNotification:(id)arg1 isMWI:(BOOL)arg2 ;
-(void)displayPasswordRequestIfNecessary;
-(void)setMailboxRequiresSetup:(BOOL)arg1 ;
-(void)removeAllNonDetachedRecords;
-(void)handlePasswordRequestCancellation;
-(int)maximumGreetingDuration;
-(int)maximumRecordedNameDuration;
-(int)minimumPasswordLength;
-(int)maximumPasswordLength;
-(int)mailboxGreetingType;
-(BOOL)taskOfTypeExists:(int)arg1 ;
-(void)progressiveDataLengthsForRecord:(void*)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3 ;
-(BOOL)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(BOOL*)arg2 ;
-(BOOL)headerChangesPending;
-(BOOL)synchronizationPending;
-(BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL*)arg1 ;
-(void)retrieveDataForRecord:(void*)arg1 ;
-(void)changePassword:(id)arg1 fromPassword:(id)arg2 ;
-(void)retrieveGreeting;
-(void)setGreetingType:(int)arg1 withData:(id)arg2 duration:(unsigned)arg3 ;
-(void)moveRecordToTrash:(void*)arg1 ;
-(void)moveRecordFromTrash:(void*)arg1 ;
@end

