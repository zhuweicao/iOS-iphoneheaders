/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, ISHashError, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {

	int _fileDescriptor;
	NSArray* _hashes;
	ISHashError* _lastHashError;
	NSString* _localFilePath;
	CC_MD5state_st _md5Context;
	long long _numberOfBytesToHash;
	bool _shouldResumeFromLocalBytes;
	long long _totalBytesWritten;
	long long _validatedBytes;

}

@property (retain) NSString * localFilePath;                     //@synthesize localFilePath=_localFilePath - In the implementation block
@property (assign) bool shouldResumeFromLocalBytes;              //@synthesize shouldResumeFromLocalBytes=_shouldResumeFromLocalBytes - In the implementation block
@property (retain) NSArray * hashes;                             //@synthesize hashes=_hashes - In the implementation block
@property (assign) long long numberOfBytesToHash;                //@synthesize numberOfBytesToHash=_numberOfBytesToHash - In the implementation block
@property (copy) ISHashError * lastHashError;                    //@synthesize lastHashError=_lastHashError - In the implementation block
@property (assign) long long streamedBytes;                      //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (assign) long long validatedBytes;                     //@synthesize validatedBytes=_validatedBytes - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setup;
-(long long)numberOfBytesToHash;
-(bool)isStream;
-(long long)streamedBytes;
-(id)closeStream;
-(void)resetStream;
-(bool)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(void)_closeFile;
-(id)hashes;
-(id)localFilePath;
-(bool)_writeDataWithoutHashing:(id)arg1 returningError:(id*)arg2 ;
-(bool)_writeDataWithHashing:(id)arg1 returningError:(id*)arg2 ;
-(bool)_openFile;
-(bool)_truncateToSize:(long long)arg1 ;
-(bool)shouldResumeFromLocalBytes;
-(long long)validatedBytes;
-(long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1 ;
-(void)setValidatedBytes:(long long)arg1 ;
-(void)setLastHashError:(id)arg1 ;
-(void)setStreamedBytes:(long long)arg1 ;
-(bool)_checkHashForByteCount:(long long)arg1 ;
-(void)setHashes:(id)arg1 ;
-(id)lastHashError;
-(void)setLocalFilePath:(id)arg1 ;
-(void)setNumberOfBytesToHash:(long long)arg1 ;
-(void)setShouldResumeFromLocalBytes:(bool)arg1 ;
-(bool)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

