/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/SFUDataRepresentation.h>
#import <iWorkImport/SFUZipArchiveDataRepresentation.h>

@class NSData, NSString;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	NSData* mData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)inputStream;
-(id)bufferedInputStream;
-(BOOL)isReadable;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(long long)dataLength;
@end

