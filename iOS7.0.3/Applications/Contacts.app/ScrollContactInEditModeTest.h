/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>

@class ABPeoplePickerNavigationController, NSDictionary;

@interface ScrollContactInEditModeTest : NSObject <UINavigationControllerDelegate, ABContactViewControllerDelegate> {

	ABPeoplePickerNavigationController* _peoplePicker;
	NSDictionary* _testOptions;

}

@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;              //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) NSDictionary * testOptions;                                     //@synthesize testOptions=_testOptions - In the implementation block
-(BOOL)startTestWithOptions:(id)arg1 peoplePicker:(id)arg2 ;
-(void)setTestOptions:(id)arg1 ;
-(id)testOptions;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2 ;
-(void)dealloc;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)peoplePicker;
-(void)setPeoplePicker:(id)arg1 ;
-(void).cxx_destruct;
@end

