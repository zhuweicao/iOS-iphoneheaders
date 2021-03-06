/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIBannerItem.h>
#import <SpringBoard/SBDefaultBannerViewSource.h>

@class BBBulletin, BBObserver, NSArray, UIImage, SBUISound;

@interface SBBulletinBannerItem : SBUIBannerItem <SBDefaultBannerViewSource> {

	BBBulletin* _seedBulletin;
	BBObserver* _observer;
	NSArray* _additionalBulletins;
	UIImage* _iconImage;
	SBUISound* _sound;

}
+(id)itemWithBulletin:(id)arg1 andObserver:(id)arg2 ;
+(id)itemWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3 ;
-(id)sourceDate;
-(id)attachmentImage;
-(id)_initWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3 ;
-(void)_setSound;
-(id)seedBulletin;
-(id)_appName;
-(id)additionalBulletins;
-(id)sortDate;
-(void)dealloc;
-(/*^block*/ id)action;
-(id)title;
-(id)message;
-(id)iconImage;
-(unsigned)accessoryStyle;
-(id)sound;
-(BOOL)inertWhenLocked;
-(id)attachmentText;
-(BOOL)isVIP;
-(BOOL)isCritical;
-(BOOL)overridesQuietMode;
-(BOOL)canShowInAssistant;
-(id)pullDownNotification;
@end

