/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPPodcast;

@interface SAMPPlayPodcastStation : SADomainCommand

@property (nonatomic,retain) SAMPPodcast * station; 
+(id)playPodcastStation;
+(id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)station;
-(void)setStation:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
@end

