/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/RemindersWidget.axbundle/RemindersWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemindersWidget/RemindersWidget-Structs.h>
#import <Reminders-Assistant/__RemindersCheckboxCellAccessibility_super.h>

@interface RemindersCheckboxCellAccessibility : __RemindersCheckboxCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)accessibilityUpdateChildren;
-(BOOL)accessibilityIsEditingReminder;
-(BOOL)_axInNotificationCenter;
-(BOOL)_accessibilityIsSearchReminderCell;
-(BOOL)_accessibilityIsNewReminderCell;
-(long long)_accessibilityIndexOfCheckbox;
-(BOOL)_accessibilityIsCheckbox:(id)arg1 ;
-(id)_axTextView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned long long)arg4 deadlinePosition:(unsigned long long)arg5 width:(double)arg6 ;
-(void)_axAnnotateTextView;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(BOOL)_accessibilityTableViewCellSubclassShouldExist;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)setAccessoryType:(long long)arg1 ;
-(id)accessibilityHint;
-(id)accessibilityCustomActions;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)_accessibilityCanDeleteTableViewCell;
@end
