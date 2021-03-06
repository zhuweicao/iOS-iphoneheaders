/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Assistant/ABPeoplePickerNavigationControllerDelegate.h>

@class ABPeoplePickerNavigationController, NSArray, UIPopoverController, AFSettingsConnection, PSSpecifier, NSString;

@interface AssistantController : PSListController <ABPeoplePickerNavigationControllerDelegate> {

	void* _addressBook;
	ABPeoplePickerNavigationController* _meCardPicker;
	NSArray* _assistantSettings;
	NSArray* _voiceControlSettings;
	UIPopoverController* _meCardPopover;
	AFSettingsConnection* _settingsConnection;
	BOOL _shouldShowGenderSpecifier;
	PSSpecifier* _genderSpecifier;

}

@property (nonatomic,readonly) void* addressBook;                   //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assistantLanguageTitlesDictionary;
+(id)voiceControlLanguageIdentifiers;
+(id)bundle;
-(id)assistantEnabled:(id)arg1 ;
-(id)assistantSpeechEnabled:(id)arg1 ;
-(void)outputVoiceDidChange;
-(void)assistantDisabledCancelled:(id)arg1 ;
-(void)assistantAboutDonePressed:(id)arg1 ;
-(id)assistantLanguage:(id)arg1 ;
-(void)setAssistantLanguage:(id)arg1 ;
-(void)prepareForSnapshot;
-(void)setAssistantLanguage:(id)arg1 forSpecifier:(id)arg2 ;
-(id)voiceControlLanguage:(id)arg1 ;
-(id)meCard:(id)arg1 ;
-(void)setVoiceControlLanguage:(id)arg1 specifier:(id)arg2 ;
-(void)_updateSpecifiersForLanguage:(id)arg1 ;
-(id)voiceTrigger:(id)arg1 ;
-(void)setAssistantEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAssistantVoiceGender:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAssistantSpeechEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setVoiceTrigger:(id)arg1 forSpecifier:(id)arg2 ;
-(id)assistantVoiceGender:(id)arg1 ;
-(void)assistantEnabledConfirmed:(id)arg1 ;
-(void)showAboutAssistantSheet:(id)arg1 ;
-(void)assistantDisabledConfirmed:(id)arg1 ;
-(void)assistantEnabledCancelled:(id)arg1 ;
-(id)_localizeTriggerString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)bundle;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)_dismissMeCardPickerAnimated:(BOOL)arg1 ;
-(void)_showMeCardPopover;
-(void)showMeCardPicker:(id)arg1 ;
-(void)setAssistantEnabled:(BOOL)arg1 ;
-(void*)addressBook;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)willResignActive;
@end

