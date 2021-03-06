/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AOSUserNotification : NSObject {

	BOOL _showMessage;
	BOOL _playSound;
	BOOL _showMsgInLockScreen;
	BOOL _dismissMsgOnUnlock;
	BOOL _dismissMsgOnLock;
	BOOL _isHighPrioritySound;
	BOOL _isFmipSound;
	int _category;
	NSString* _msgTitle;
	NSString* _msgText;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	/*^block*/ id _defaultButtonAction;
	/*^block*/ id _alternateButtonAction;
	int _alertLevel;
	NSString* _soundName;
	int _soundDuration;
	double _timeout;

}

@property (assign,nonatomic) int category;                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL showMessage;                             //@synthesize showMessage=_showMessage - In the implementation block
@property (assign,nonatomic) BOOL playSound;                               //@synthesize playSound=_playSound - In the implementation block
@property (nonatomic,retain) NSString * msgTitle;                          //@synthesize msgTitle=_msgTitle - In the implementation block
@property (nonatomic,retain) NSString * msgText;                           //@synthesize msgText=_msgText - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonTitle;                //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * alternateButtonTitle;              //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (nonatomic,copy) id defaultButtonAction;                         //@synthesize defaultButtonAction=_defaultButtonAction - In the implementation block
@property (nonatomic,copy) id alternateButtonAction;                       //@synthesize alternateButtonAction=_alternateButtonAction - In the implementation block
@property (assign,nonatomic) int alertLevel;                               //@synthesize alertLevel=_alertLevel - In the implementation block
@property (assign,nonatomic) double timeout;                               //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL showMsgInLockScreen;                     //@synthesize showMsgInLockScreen=_showMsgInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL dismissMsgOnUnlock;                      //@synthesize dismissMsgOnUnlock=_dismissMsgOnUnlock - In the implementation block
@property (assign,nonatomic) BOOL dismissMsgOnLock;                        //@synthesize dismissMsgOnLock=_dismissMsgOnLock - In the implementation block
@property (nonatomic,retain) NSString * soundName;                         //@synthesize soundName=_soundName - In the implementation block
@property (assign,nonatomic) int soundDuration;                            //@synthesize soundDuration=_soundDuration - In the implementation block
@property (assign,nonatomic) BOOL isHighPrioritySound;                     //@synthesize isHighPrioritySound=_isHighPrioritySound - In the implementation block
@property (assign,nonatomic) BOOL isFmipSound;                             //@synthesize isFmipSound=_isFmipSound - In the implementation block
+(void)stopAllSounds;
-(void)setPlaySound:(BOOL)arg1 ;
-(void)setDefaultButtonTitle:(id)arg1 ;
-(void)setAlternateButtonTitle:(id)arg1 ;
-(id)defaultButtonTitle;
-(id)alternateButtonTitle;
-(void)setShowMessage:(BOOL)arg1 ;
-(void)setMsgTitle:(id)arg1 ;
-(void)setMsgText:(id)arg1 ;
-(void)setShowMsgInLockScreen:(BOOL)arg1 ;
-(void)setDismissMsgOnUnlock:(BOOL)arg1 ;
-(void)setDismissMsgOnLock:(BOOL)arg1 ;
-(BOOL)showMessage;
-(id)msgTitle;
-(id)msgText;
-(/*^block*/ id)defaultButtonAction;
-(void)setDefaultButtonAction:(/*^block*/ id)arg1 ;
-(/*^block*/ id)alternateButtonAction;
-(void)setAlternateButtonAction:(/*^block*/ id)arg1 ;
-(int)alertLevel;
-(void)setAlertLevel:(int)arg1 ;
-(BOOL)showMsgInLockScreen;
-(BOOL)dismissMsgOnUnlock;
-(BOOL)dismissMsgOnLock;
-(int)soundDuration;
-(void)setSoundDuration:(int)arg1 ;
-(BOOL)isHighPrioritySound;
-(void)setIsHighPrioritySound:(BOOL)arg1 ;
-(BOOL)isFmipSound;
-(void)setIsFmipSound:(BOOL)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)activate;
-(void)setCategory:(int)arg1 ;
-(int)category;
-(void)setSoundName:(id)arg1 ;
-(id)soundName;
-(BOOL)playSound;
-(void).cxx_destruct;
@end

