/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _LocalLibraryNotification : NSObject {

	bool _isSourceExternal;
	NSString* _notificationName;

}

@property (nonatomic,retain) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
@property (assign,nonatomic) bool isSourceExternal;                    //@synthesize isSourceExternal=_isSourceExternal - In the implementation block
-(void).cxx_destruct;
-(id)initWithNotificationName:(id)arg1 isSourceExternal:(bool)arg2 ;
-(id)notificationName;
-(void)setNotificationName:(id)arg1 ;
-(bool)isSourceExternal;
-(void)setIsSourceExternal:(bool)arg1 ;
@end

