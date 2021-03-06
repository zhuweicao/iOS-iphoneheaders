/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <iTunesStore/ISDataProvider.h>

@class SZExtractor, NSArray, NSString, NSError;

@interface StreamUnzippingDataProvider : ISDataProvider {

	unsigned long long _expectedUncompressedSize;
	SZExtractor* _extractor;
	BOOL _extractorComplete;
	NSArray* _hashes;
	int _hashType;
	NSString* _localFilePath;
	long long _numberOfBytesToHash;
	long long _streamedBytes;
	NSError* _unzipError;
	BOOL _shouldResumeFromLocalBytes;

}

@property (readonly) unsigned long long expectedUncompressedSize;              //@synthesize expectedUncompressedSize=_expectedUncompressedSize - In the implementation block
@property (retain) NSString * localFilePath;                                   //@synthesize localFilePath=_localFilePath - In the implementation block
@property (assign) BOOL shouldResumeFromLocalBytes;                            //@synthesize shouldResumeFromLocalBytes=_shouldResumeFromLocalBytes - In the implementation block
@property (readonly) NSError * unzipError;                                     //@synthesize unzipError=_unzipError - In the implementation block
@property (retain) NSArray * hashes;                                           //@synthesize hashes=_hashes - In the implementation block
@property (assign) int hashType;                                               //@synthesize hashType=_hashType - In the implementation block
@property (assign) long long numberOfBytesToHash;                              //@synthesize numberOfBytesToHash=_numberOfBytesToHash - In the implementation block
@property (readonly) SZExtractor * extractor;                                  //@synthesize extractor=_extractor - In the implementation block
@property (getter=isExtractorComplete) BOOL extractorComplete;                 //@synthesize extractorComplete=_extractorComplete - In the implementation block
@property (assign) long long streamedBytes;                                    //@synthesize streamedBytes=_streamedBytes - In the implementation block
+(BOOL)isHashMismatchError:(id)arg1 ;
-(void)_suspendStream;
-(unsigned long long)expectedUncompressedSize;
-(void)_completeStream;
-(id)unzipError;
-(BOOL)isExtractorComplete;
-(void)setExtractorComplete:(BOOL)arg1 ;
-(BOOL)_openExtractor;
-(int)hashType;
-(id)initWithExpectedUncompressedSize:(unsigned long long)arg1 ;
-(id)hashFailureHeaderStringForUnzipError;
-(id)extractor;
-(void)setHashType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setup;
-(long long)numberOfBytesToHash;
-(BOOL)isStream;
-(void)streamCancelled;
-(long long)streamedBytes;
-(BOOL)isStreamComplete;
-(id)closeStream;
-(void)resetStream;
-(void)streamDidFailWithError:(id)arg1 ;
-(BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(id)hashes;
-(id)localFilePath;
-(BOOL)shouldResumeFromLocalBytes;
-(void)setStreamedBytes:(long long)arg1 ;
-(void)setHashes:(id)arg1 ;
-(void)setLocalFilePath:(id)arg1 ;
-(void)setNumberOfBytesToHash:(long long)arg1 ;
-(void)setShouldResumeFromLocalBytes:(BOOL)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

