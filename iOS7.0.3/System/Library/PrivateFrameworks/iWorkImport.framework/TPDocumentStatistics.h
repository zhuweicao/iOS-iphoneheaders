/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSWPTextStatistics;

@interface TPDocumentStatistics : NSObject <NSCopying> {

	TSWPTextStatistics* _textStatistics;
	unsigned _pageCount;
	BOOL _isAccurate;

}

@property (nonatomic,retain) TSWPTextStatistics * textStatistics;              //@synthesize textStatistics=_textStatistics - In the implementation block
@property (assign,nonatomic) unsigned pageCount;                               //@synthesize pageCount=_pageCount - In the implementation block
@property (assign,nonatomic) BOOL isAccurate;                                  //@synthesize isAccurate=_isAccurate - In the implementation block
-(void)setIsAccurate:(BOOL)arg1 ;
-(BOOL)isAccurate;
-(void)resetStatistics;
-(void)setTextStatistics:(id)arg1 ;
-(id)initWithTextStatistics:(id)arg1 pageCount:(unsigned)arg2 ;
-(id)textStatistics;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)pageCount;
-(void)setPageCount:(unsigned)arg1 ;
@end

