/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSDate, NSTimeZone, NSCalendar, NSString, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (nonatomic,@dynamic,copy) NSDate * fireDate; 
@property (nonatomic,@dynamic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,@dynamic) unsigned long long repeatInterval; 
@property (nonatomic,@dynamic,copy) NSCalendar * repeatCalendar; 
@property (nonatomic,@dynamic,copy) NSString * alertBody; 
@property (assign,nonatomic,@dynamic) bool hasAction; 
@property (nonatomic,@dynamic,copy) NSString * alertAction; 
@property (nonatomic,@dynamic,copy) NSString * alertLaunchImage; 
@property (nonatomic,@dynamic,copy) NSString * soundName; 
@property (assign,nonatomic,@dynamic) long long applicationIconBadgeNumber; 
@property (nonatomic,@dynamic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic,@dynamic) int totalRepeatCount; 
@property (assign,nonatomic,@dynamic) int remainingRepeatCount; 
@property (assign,nonatomic,@dynamic) bool hideAlertTitle; 
@property (assign,nonatomic,@dynamic) bool allowSnooze; 
@property (assign,nonatomic,@dynamic) int soundType; 
@property (assign,nonatomic,@dynamic) bool interruptAudioAndLockDevice; 
@property (assign,nonatomic,@dynamic) bool resumeApplicationInBackground; 
@property (assign,nonatomic,@dynamic) bool fireNotificationsWhenAppRunning; 
@property (assign,nonatomic,@dynamic) bool showAlarmStatusBarItem; 
@property (nonatomic,@dynamic,copy) NSString * customLockSliderLabel; 
@property (nonatomic,@dynamic,copy) NSString * firedNotificationName; 
@property (nonatomic,@dynamic,copy) NSString * snoozedNotificationName; 
@property (assign,nonatomic,@dynamic) bool isSystemAlert; 
+(id)alloc;
+(id)allocWithZone:(NSZone)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isValid;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(long long)compareFireDates:(id)arg1 ;
-(void)clearNonSystemProperties;
@end

