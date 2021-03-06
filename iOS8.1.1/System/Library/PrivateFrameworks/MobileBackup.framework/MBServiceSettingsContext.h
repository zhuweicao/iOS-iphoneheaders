/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/MBSettingsContext.h>

@class MBServiceAccount, MBServiceLockManager, NSString, MBServiceRestoreMode, MBWatchdog, MBPowerAssertion;

@interface MBServiceSettingsContext : MBSettingsContext {

	MBServiceAccount* _account;
	MBServiceLockManager* _lockManager;
	NSString* _backupUDID;
	long long _snapshotID;
	NSString* _cacheDir;
	NSString* _systemDir;
	MBServiceRestoreMode* _restoreMode;
	MBWatchdog* _watchdog;
	MBPowerAssertion* _powerAssertion;

}

@property (nonatomic,retain) MBServiceAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MBServiceLockManager * lockManager;              //@synthesize lockManager=_lockManager - In the implementation block
@property (nonatomic,retain) NSString * backupUDID;                           //@synthesize backupUDID=_backupUDID - In the implementation block
@property (assign,nonatomic) long long snapshotID;                            //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,retain) NSString * cacheDir;                             //@synthesize cacheDir=_cacheDir - In the implementation block
@property (nonatomic,readonly) NSString * cachePath; 
@property (nonatomic,readonly) NSString * chunkStorePath; 
@property (nonatomic,retain) NSString * systemDir;                            //@synthesize systemDir=_systemDir - In the implementation block
@property (nonatomic,retain) MBServiceRestoreMode * restoreMode;              //@synthesize restoreMode=_restoreMode - In the implementation block
@property (nonatomic,retain) MBWatchdog * watchdog;                           //@synthesize watchdog=_watchdog - In the implementation block
@property (nonatomic,retain) MBPowerAssertion * powerAssertion;               //@synthesize powerAssertion=_powerAssertion - In the implementation block
-(NSString *)chunkStorePath;
-(void)setBackupUDID:(NSString *)arg1 ;
-(void)setSnapshotID:(long long)arg1 ;
-(MBServiceRestoreMode *)restoreMode;
-(void)setLockManager:(MBServiceLockManager *)arg1 ;
-(void)setSystemDir:(NSString *)arg1 ;
-(void)setCacheDir:(NSString *)arg1 ;
-(void)setRestoreMode:(MBServiceRestoreMode *)arg1 ;
-(MBServiceLockManager *)lockManager;
-(NSString *)cacheDir;
-(NSString *)systemDir;
-(void)dealloc;
-(MBWatchdog *)watchdog;
-(MBServiceAccount *)account;
-(void)setWatchdog:(MBWatchdog *)arg1 ;
-(void)setAccount:(MBServiceAccount *)arg1 ;
-(MBPowerAssertion *)powerAssertion;
-(void)setPowerAssertion:(MBPowerAssertion *)arg1 ;
-(NSString *)cachePath;
-(NSString *)backupUDID;
-(long long)snapshotID;
@end

