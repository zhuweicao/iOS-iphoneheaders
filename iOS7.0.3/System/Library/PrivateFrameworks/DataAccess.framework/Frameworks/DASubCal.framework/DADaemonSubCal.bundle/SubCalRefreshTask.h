/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DASubCal/SubCalDATask.h>
#import <DASubCal/SubCalURLRequestDelegate.h>
#import <DADaemonSubCal/SubCalICSDataCallbackActor.h>
#import <DADaemonSubCal/DADataclassLockWatcher.h>
#import <DADaemonSubCal/DABabysittable.h>

@protocol SubCalRefreshTaskDelegate;
@class NSData, NSURL, NSString, SubCalURLRequest, SubCalICSDataActor;

@interface SubCalRefreshTask : SubCalDATask <SubCalURLRequestDelegate, SubCalICSDataCallbackActor, DADataclassLockWatcher, DABabysittable> {

	<SubCalRefreshTaskDelegate>* _delegate;
	NSData* _tmpICSData;
	NSURL* _subscriptionURL;
	NSString* _username;
	NSString* _password;
	double _timestamp;
	BOOL _updateCalendarProperties;
	BOOL _removeAlarms;
	NSString* _storeExternalId;
	NSString* _calendarExternalId;
	NSString* _accountId;
	NSString* _calendarName;
	NSString* _colorString;
	NSString* _persistentStoreId;
	SubCalURLRequest* _request;
	SubCalICSDataActor* _backgroundActor;
	BOOL _forceRefresh;
	BOOL _waitingForGateKeeper;
	BOOL _holdingGateKeeperLock;
	BOOL _usingTmpICSData;
	BOOL _isSpinning;

}

@property (assign,nonatomic) <SubCalRefreshTaskDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * subscriptionURL;                             //@synthesize subscriptionURL=_subscriptionURL - In the implementation block
@property (nonatomic,retain) NSString * storeExternalId;                          //@synthesize storeExternalId=_storeExternalId - In the implementation block
@property (nonatomic,retain) NSString * calendarExternalId;                       //@synthesize calendarExternalId=_calendarExternalId - In the implementation block
@property (nonatomic,retain) NSString * calendarName;                             //@synthesize calendarName=_calendarName - In the implementation block
@property (nonatomic,retain) NSString * persistentStoreId;                        //@synthesize persistentStoreId=_persistentStoreId - In the implementation block
@property (nonatomic,retain) NSString * accountId;                                //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * username;                                 //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                 //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSData * tmpICSData;                                 //@synthesize tmpICSData=_tmpICSData - In the implementation block
@property (assign) BOOL removeAlarms;                                             //@synthesize removeAlarms=_removeAlarms - In the implementation block
@property (assign) BOOL forceRefresh;                                             //@synthesize forceRefresh=_forceRefresh - In the implementation block
@property (nonatomic,retain) NSString * colorString;                              //@synthesize colorString=_colorString - In the implementation block
@property (assign) BOOL updateCalendarProperties;                                 //@synthesize updateCalendarProperties=_updateCalendarProperties - In the implementation block
@property (nonatomic,readonly) SubCalICSDataActor * backgroundActor;              //@synthesize backgroundActor=_backgroundActor - In the implementation block
-(id)password;
-(void)setColorString:(id)arg1 ;
-(void)setCalendarName:(id)arg1 ;
-(id)calendarName;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)subscriptionURL;
-(void)setSubscriptionURL:(id)arg1 ;
-(id)waiterID;
-(void)performTask;
-(id)accountId;
-(void)setAccountId:(id)arg1 ;
-(void)_setSpinning:(BOOL)arg1 ;
-(id)_initializeCalendarDatabase;
-(void)_makeBackgroundActor;
-(void)_lockedPrepareToProcessDataWithBlock:(/*^block*/ id)arg1 ;
-(id)backgroundActor;
-(void)_acquireGatekeeperLockAndProcessDataWithBlock:(/*^block*/ id)arg1 ;
-(void)_processICSData:(id)arg1 ;
-(void)_updateSubscribedCalendarWithTmpICSData:(id)arg1 ;
-(void)_updateSubscribedCalendarWithDataFromURL:(id)arg1 ;
-(void)_processICSDataFromFile:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 ;
-(void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)arg1 continuation:(/*^block*/ id)arg2 ;
-(void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2 ;
-(void)subCalICSDataActor:(id)arg1 completedWithError:(id)arg2 ;
-(void)willFinish;
-(void)performDelegateCallbackWithError:(id)arg1 ;
-(id)tmpICSData;
-(void)setTmpICSData:(id)arg1 ;
-(BOOL)removeAlarms;
-(void)setRemoveAlarms:(BOOL)arg1 ;
-(id)storeExternalId;
-(void)setStoreExternalId:(id)arg1 ;
-(id)calendarExternalId;
-(void)setCalendarExternalId:(id)arg1 ;
-(BOOL)forceRefresh;
-(void)setForceRefresh:(BOOL)arg1 ;
-(id)persistentStoreId;
-(void)setPersistentStoreId:(id)arg1 ;
-(BOOL)updateCalendarProperties;
-(void)setUpdateCalendarProperties:(BOOL)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)colorString;
-(id)username;
@end

