/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager {

	UITextInputController* _inputController;

}

@property (assign,nonatomic) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(void)removeAllActions;
-(void)setInputController:(id)arg1 ;
-(id)inputController;
@end

