/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKAchievementInternal, GKGame, GKPlayer, NSString, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	bool _showsCompletionBanner;
	bool _hidden;
	GKAchievementInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (nonatomic,@dynamic,copy) NSString * identifier; 
@property (assign,nonatomic,@dynamic) double percentComplete; 
@property (getter=isCompleted,nonatomic,readonly) bool completed; 
@property (assign,getter=isHidden,nonatomic) bool hidden;                        //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,@dynamic,copy) NSDate * lastReportedDate; 
@property (assign,nonatomic) bool showsCompletionBanner;                         //@synthesize showsCompletionBanner=_showsCompletionBanner - In the implementation block
@property (nonatomic,@dynamic,copy) NSString * playerID; 
@property (nonatomic,@dynamic,readonly) NSString * groupIdentifier; 
@property (assign,nonatomic) GKGame * game;                                      //@synthesize game=_game - In the implementation block
@property (retain) GKAchievementInternal * internal;                             //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                  //@synthesize player=_player - In the implementation block
+(void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
+(void)loadAchievementsForGame:(id)arg1 players:(id)arg2 includeUnreported:(bool)arg3 includeHidden:(bool)arg4 withCompletionHandler:(/*^block*/ id)arg5 ;
+(void)reportAchievements:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadAchievementsWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)resetAchievementsWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)reportAchievements:(id)arg1 whileScreeningChallenges:(bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(/*^block*/ id)arg4 ;
+(void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(/*^block*/ id)arg4 ;
+(bool)supportsSecureCoding;
+(bool)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)issueChallengeForGame:(id)arg1 toPlayers:(id)arg2 message:(id)arg3 ;
-(id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)issueChallengeToPlayers:(id)arg1 message:(id)arg2 ;
-(void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)loadImageWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)showBanner;
-(id)imageURL;
-(bool)canBeShared;
-(id)_gkSharingInfo;
-(void)_gkSetSharingInfo:(id)arg1 ;
-(id)fetchSharingInfo;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(bool)isCompleted;
-(void)setInternal:(id)arg1 ;
-(void)setShowsCompletionBanner:(bool)arg1 ;
-(bool)showsCompletionBanner;
-(id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2 ;
-(void)reportAchievementWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(id)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isHidden;
-(bool)respondsToSelector:(SEL)arg1 ;
-(void)setHidden:(bool)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

