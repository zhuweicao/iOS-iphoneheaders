/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, NSDate, GKPlayerInternal, NSData, NSArray, GKGameInternal;

@interface GKTurnBasedMatchInternal : GKInternalRepresentation {

	NSString* _matchID;
	NSString* _status;
	NSString* _message;
	NSDictionary* _localizableMessage;
	NSString* _reason;
	NSDate* _creationDate;
	NSDate* _lastTurnDate;
	NSDate* _deletionDate;
	GKPlayerInternal* _currentPlayer;
	NSString* _lastTurnPlayerID;
	NSData* _matchData;
	NSString* _matchDataVersion;
	NSArray* _participants;
	NSString* _bundleID;
	NSString* _bundleVersion;
	GKGameInternal* _game;
	NSArray* _exchanges;
	unsigned _turnNumber;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	BOOL _currentParticipant;

}

@property (nonatomic,retain) NSString * matchID;                             //@synthesize matchID=_matchID - In the implementation block
@property (nonatomic,retain) NSString * status;                              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastTurnDate;                          //@synthesize lastTurnDate=_lastTurnDate - In the implementation block
@property (nonatomic,retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned char minPlayers;                       //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) unsigned char maxPlayers;                       //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (nonatomic,retain) NSDate * deletionDate;                          //@synthesize deletionDate=_deletionDate - In the implementation block
@property (assign,nonatomic) BOOL currentParticipant;                        //@synthesize currentParticipant=_currentParticipant - In the implementation block
@property (assign,nonatomic) unsigned turnNumber;                            //@synthesize turnNumber=_turnNumber - In the implementation block
@property (nonatomic,retain) NSString * lastTurnPlayerID;                    //@synthesize lastTurnPlayerID=_lastTurnPlayerID - In the implementation block
@property (nonatomic,retain) NSData * matchData;                             //@synthesize matchData=_matchData - In the implementation block
@property (nonatomic,retain) NSString * matchDataVersion;                    //@synthesize matchDataVersion=_matchDataVersion - In the implementation block
@property (nonatomic,retain) NSArray * participants;                         //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSArray * exchanges;                            //@synthesize exchanges=_exchanges - In the implementation block
@property (nonatomic,retain) GKGameInternal * game;                          //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * currentPlayer;               //@synthesize currentPlayer=_currentPlayer - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)exchanges;
-(id)currentPlayer;
-(id)localizableMessage;
-(void)setLocalizableMessage:(id)arg1 ;
-(id)matchData;
-(void)setCurrentParticipant:(BOOL)arg1 ;
-(void)setMatchData:(id)arg1 ;
-(void)setReason:(id)arg1 ;
-(void)setMatchID:(id)arg1 ;
-(void)setCurrentPlayer:(id)arg1 ;
-(unsigned)turnNumber;
-(void)setTurnNumber:(unsigned)arg1 ;
-(id)lastTurnPlayerID;
-(void)setLastTurnPlayerID:(id)arg1 ;
-(void)setParticipants:(id)arg1 ;
-(id)matchDataVersion;
-(void)setMatchDataVersion:(id)arg1 ;
-(void)setExchanges:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(id)lastTurnDate;
-(void)setLastTurnDate:(id)arg1 ;
-(BOOL)currentParticipant;
-(unsigned char)minPlayers;
-(unsigned char)maxPlayers;
-(void)setMinPlayers:(unsigned char)arg1 ;
-(void)setMaxPlayers:(unsigned char)arg1 ;
-(id)participants;
-(id)matchID;
-(id)bundleVersion;
-(id)bundleID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)reason;
-(void)setDeletionDate:(id)arg1 ;
-(id)deletionDate;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(void)setBundleID:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
@end

