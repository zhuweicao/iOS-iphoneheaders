/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VMUSection : NSObject {

	NSString* _sectionName;
	NSString* _segmentName;
	unsigned long long _addr;
	unsigned long long _size;
	unsigned _offset;
	unsigned _align;
	unsigned _reloff;
	unsigned _nreloc;
	unsigned _flags;
	unsigned _reserved1;
	unsigned _reserved2;

}
-(void)dealloc;
-(unsigned long long)size;
-(id)description;
-(unsigned)offset;
-(unsigned)flags;
-(unsigned long long)addr;
-(id)segmentName;
-(id)sectionName;
-(BOOL)isSection32;
-(BOOL)isSection64;
-(unsigned)reloff;
-(unsigned)nreloc;
-(unsigned)reserved1;
-(unsigned)reserved2;
-(unsigned)align;
@end

