/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GQZArchiveInputStream;
#import <iWorkImport/iWorkImport-Structs.h>
@interface GQZEntry : NSObject {

	id<GQZArchiveInputStream> mInput;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;

}
-(id)initFromCentralFileHeader:(const char*)arg1 inputStream:(id)arg2 ;
-(xmlDoc*)recoverXmlDocument;
-(xmlTextReaderRef)xmlReader:(BOOL)arg1 ;
-(void)dealloc;
-(id)data;
-(id)inputStream;
-(xmlDoc*)xmlDocument;
-(void)readZip64ExtraField:(const char*)arg1 size:(unsigned long long)arg2 ;
@end

