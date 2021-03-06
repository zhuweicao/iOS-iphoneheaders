/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/ReportAProblemReporter.h>

@class NSMutableArray, ProblemItem, ReportAProblemNavigationController;

@interface RAPiCloudNotifyViewController : UITableViewController <ReportAProblemReporter> {

	NSMutableArray* _items;
	ProblemItem* _doNotNotifyMeItem;
	ProblemItem* _notifyMeItem;

}

@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)updateEnabledState;
-(BOOL)canReportProblem;
-(void)populateProblem:(id)arg1 ;
-(void)send:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)navigationController;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)cancel:(id)arg1 ;
@end

