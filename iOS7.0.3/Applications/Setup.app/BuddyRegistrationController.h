/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class UISwitch, NSArray, NSURLConnection;

@interface BuddyRegistrationController : BuddyTableViewController <BuddyController> {

	<BuddyControllerDelegate>* _delegate;
	UISwitch* _registrationSwitch;
	NSArray* _rowTitles;
	NSArray* _sectionSwitches;
	NSArray* _sectionFooters;
	NSURLConnection* _registrationConnection;
	BOOL _registrationSuccessful;

}
+(BOOL)controllerNeedsToRun;
+(id)DSIDForRegistration;
+(id)URLForRegistration;
+(BOOL)showRegistrationOptIn;
+(void)initialize;
-(void)_startSpinning;
-(void)_stopSpinning;
-(void)_registrationFinished;
-(void)registerDevice;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)controllerDone;
@end
