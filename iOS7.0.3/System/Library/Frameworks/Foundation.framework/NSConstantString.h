/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
-(const char*)cString;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned)cStringLength;
-(unsigned)fastestEncoding;
-(unsigned)smallestEncoding;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned)arg2 ;
-(const char*)lossyCString;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)copy;
-(id)autorelease;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(unsigned)length;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(int)compare:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)finalize;
-(BOOL)canBeConvertedToEncoding:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

