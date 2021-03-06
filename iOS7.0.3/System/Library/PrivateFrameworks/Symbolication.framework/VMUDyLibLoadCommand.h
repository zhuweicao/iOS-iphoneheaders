/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMULoadCommand.h>

@class NSString;

@interface VMUDyLibLoadCommand : VMULoadCommand {

	NSString* _path;
	unsigned _currentVersion;
	unsigned _compatibilityVersion;

}
-(void)dealloc;
-(id)description;
-(id)path;
-(unsigned)currentVersion;
-(id)initWithMemory:(id)arg1 ;
-(BOOL)isLoadDyLib;
-(unsigned)compatibilityVersion;
@end

