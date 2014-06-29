/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/WebContentAnalysisUI.app/WebContentAnalysisUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebContentAnalysisUI/WebContentAnalysisUI-Structs.h>
#import <Preferences/DevicePINController.h>

@class NSObject;

@interface WFServicePINEntryViewController : DevicePINController {

	NSObject* _delegate;

}

@property (assign,nonatomic,__weak) NSObject * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)settingEnabled;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(void)setPane:(id)arg1 ;
-(BOOL)requiresKeyboard;
-(CFStringRef)defaultsID;
-(BOOL)validatePIN:(id)arg1 ;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsTable;
-(BOOL)simplePIN;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)performActionAfterPINSet;
-(void)setPIN:(id)arg1 ;
-(void)performActionAfterPINRemove;
-(void)performActionAfterPINEntry;
@end
