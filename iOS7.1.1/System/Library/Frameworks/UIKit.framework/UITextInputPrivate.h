/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputPrivate <UITextInput,UITextInputTokenizer,UITextInputTraits_Private>
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@optional
+(void)_preheatDictationIfNecessary;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
-(id)metadataDictionariesForDictationResults;
-(id)textColorForCaretSelection;
-(long long)selectionGranularity;
-(void)setSelectionGranularity:(long long)arg1;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(double)arg1;
-(bool)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1;
-(void)dictationRecordingDidBegin;
-(void)_startDictation;
-(void)_stopDictation;
-(id)_dictationLanguage;
-(void)acceptedAutoFillWord:(id)arg1;
-(bool)isAutoFillMode;
-(double)_delayUntilRepeatInsertText:(id)arg1;
-(bool)_shouldRepeatInsertText:(id)arg1;
-(id)fontForCaretSelection;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1;

@required
-(id)interactionAssistant;
-(id)textInputTraits;
-(void)selectAll;
-(NSRange*)selectionRange;
-(bool)hasSelection;
-(bool)hasContent;
@end

