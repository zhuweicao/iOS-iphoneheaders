/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlertManager, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeHomeToPluginAlert : SBUIMainScreenAnimationController {

	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _alert;
	BOOL _alertIsTransparent;
	BOOL _alertViewIsAnimatingItself;
	BOOL _finishedPrimaryFadeAnimation;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(id)initWithAlertManager:(id)arg1 alert:(id)arg2 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end

