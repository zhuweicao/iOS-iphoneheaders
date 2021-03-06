/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface TSUZipArchive : NSObject {

	unsigned long long _options;
	NSMutableDictionary* _entriesMap;
	NSMutableSet* _entries;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) unsigned long long archiveLength; 
-(id)tsp_dataForEntry:(id)arg1 ;
-(void)collapseCommonRootDirectory;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
-(void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)readCentralFileHeaderWithBuffer:(const void*)arg1 dataSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)readFilenameFromBuffer:(const void*)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readExtraFieldsFromBuffer:(const void*)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readFileCommentFromBuffer:(const void*)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readZip64ExtraFieldFromBuffer:(const void*)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id*)arg4 ;
-(id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(void)readArchiveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readChannelForEntry:(id)arg1 ;
-(id)streamReadChannelForEntry:(id)arg1 ;
-(id)entryForName:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)debugDescription;
-(BOOL)isValid;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)addEntry:(id)arg1 ;
@end

