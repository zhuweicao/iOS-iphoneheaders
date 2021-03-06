/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSPathStore2 : NSString {

	unsigned _lengthAndRefCount;
	unsigned short _characters[0];

}
+(id)pathStoreWithCharacters:(const unsigned short*)arg1 length:(unsigned)arg2 ;
+(id)pathWithComponents:(id)arg1 ;
-(id)stringByExpandingTildeInPath;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1 ;
-(id)_stringByStandardizingPathUsingCache:(BOOL)arg1 ;
-(id)stringByAbbreviatingWithTildeInPath;
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned)hash;
-(unsigned)length;
-(id)stringByAppendingPathComponent:(id)arg1 ;
-(id)stringByResolvingSymlinksInPath;
-(id)pathComponents;
-(BOOL)isAbsolutePath;
-(id)stringByStandardizingPath;
-(id)lastPathComponent;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)pathExtension;
-(id)stringByDeletingPathExtension;
-(id)stringByAppendingPathExtension:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(id)stringByDeletingLastPathComponent;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

