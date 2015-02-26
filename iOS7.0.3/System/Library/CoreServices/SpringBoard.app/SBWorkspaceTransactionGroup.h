/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBWorkspaceTransactionDelegate.h>

@class NSMutableArray, NSArray;

@interface SBWorkspaceTransactionGroup : SBWorkspaceTransaction <SBWorkspaceTransactionDelegate> {

	NSMutableArray* _transactions;

}

@property (assign,nonatomic) <SBWorkspaceTransactionGroupDelegate> * delegate; 
@property (nonatomic,readonly) NSArray * transactions;                                      //@synthesize transactions=_transactions - In the implementation block
-(BOOL)canBeInterrupted;
-(void)interruptWithReason:(int)arg1 ;
-(BOOL)_shouldBeWatchdogged:(id*)arg1 ;
-(void)addTransaction:(id)arg1 ;
-(id)initWithTransactions:(id)arg1 ;
-(BOOL)applicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2 ;
-(BOOL)applicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2 ;
-(BOOL)workspaceWillSuspend;
-(BOOL)workspaceDidSuspend;
-(BOOL)workspaceWillResume;
-(BOOL)workspaceDidResume;
-(BOOL)applicationDidStartLaunching:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)applicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)applicationActivated:(id)arg1 ;
-(BOOL)applicationLaunchDidFail:(id)arg1 ;
-(BOOL)alertWillActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)alertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)alertWillDeactivate:(id)arg1 ;
-(BOOL)alertDidDeactivate:(id)arg1 ;
-(void)transactionDidFinish:(id)arg1 success:(BOOL)arg2 ;
-(void)addMilestones:(int)arg1 ;
-(void)_doForAllTransactions:(/*^block*/ id)arg1 ;
-(id)transactions;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)applicationExited:(id)arg1 ;
-(void)commit;
@end
