/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (nonatomic,copy,readonly) NSString * locationText; 
-(id)description;
-(id)message;
-(id)time;
-(id)sender;
-(Class)balloonViewClass;
-(BOOL)isFromMe;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
-(NSString *)locationText;
@end
