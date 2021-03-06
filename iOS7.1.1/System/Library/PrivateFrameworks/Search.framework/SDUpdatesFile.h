/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:53:41 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSFileHandle;

@interface SDUpdatesFile : NSObject {

	NSString* _displayIdentifier;
	NSString* _category;
	NSFileHandle* _fileHandle;
	BOOL _justFakeIt;
	unsigned long long _readLength;

}
-(id)initWithAppID:(id)arg1 andCategory:(id)arg2 ;
-(void)openFileForAppending;
-(void)addUpdates:(id)arg1 ;
-(void)blowAwayUpdatesFile;
-(void)closeUpdatesFile;
-(void)openUpdatesFileForReading;
-(id)updates;
-(void)_createUpdatesFile;
-(void)dealloc;
-(void)reset;
@end

