/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class RCCompositionController;

@interface RCShareMemoViewController : UIActivityViewController {

	RCCompositionController* _compositionController;

}

@property (nonatomic,readonly) RCCompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
+(id)_newPresentedPrepareFailureAlertControllerForComposition:(id)arg1 ;
+(void)prepareToShareComposition:(id)arg1 ignoringInteraction:(BOOL)arg2 shouldContinuePreparingBlock:(/*^block*/id)arg3 preparedHandler:(/*^block*/id)arg4 ;
+(id)_newPresentedPrepareAlertControllerForComposition:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
+(id)unsupportedActivityTypes;
+(void)presentInViewController:(id)arg1 composition:(id)arg2 ignoringInteraction:(BOOL)arg3 shouldContinuePreparingBlock:(/*^block*/id)arg4 preparedToPresentBlock:(/*^block*/id)arg5 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithCompositionController:(id)arg1 ;
-(RCCompositionController *)compositionController;
@end

