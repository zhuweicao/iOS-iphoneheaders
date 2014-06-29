/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {

	NSURL* _baseURL;
	int _writeStyle;

}

@property (assign) int writeStyle;               //@synthesize writeStyle=_writeStyle - In the implementation block
@property (retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)baseURL;
-(id)payloadAsFullURL;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(id)payloadAsOriginalURL;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
-(void)setBaseURL:(id)arg1 ;
-(void)write:(id)arg1 ;
@end
