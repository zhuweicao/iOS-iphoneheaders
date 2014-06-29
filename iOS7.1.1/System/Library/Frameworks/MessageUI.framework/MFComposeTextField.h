/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextField.h>

@interface MFComposeTextField : UITextField {

	bool _isShowingDictationPlaceholder;

}

@property (nonatomic,readonly) bool isShowingDictationPlaceholder;              //@synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder - In the implementation block
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2 ;
-(bool)isShowingDictationPlaceholder;
@end
