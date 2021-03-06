/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager, NSURL, SBASAppSyncState;

@interface SBASAppSyncStatePersistence : NSObject {

	NSFileManager* _fileManager;
	NSURL* _url;
	SBASAppSyncState* _state;

}

@property (nonatomic,copy) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) SBASAppSyncState * state;              //@synthesize state=_state - In the implementation block
-(id)_generateURLIfNeededWithError:(id*)arg1 ;
-(id)_errWithCode:(long long)arg1 desc:(id)arg2 err:(id)arg3 ;
-(void)dealloc;
-(SBASAppSyncState *)state;
-(NSURL *)URL;
-(id)reset;
-(void)setURL:(NSURL *)arg1 ;
-(id)load;
-(id)save:(id)arg1 ;
-(id)_fileManager;
@end

