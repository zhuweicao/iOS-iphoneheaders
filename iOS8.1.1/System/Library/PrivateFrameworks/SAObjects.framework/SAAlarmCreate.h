/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAAlarmObject;

@interface SAAlarmCreate : SADomainCommand

@property (nonatomic,retain) SAAlarmObject * alarmToCreate; 
+(id)create;
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAAlarmObject *)alarmToCreate;
-(void)setAlarmToCreate:(SAAlarmObject *)arg1 ;
@end

