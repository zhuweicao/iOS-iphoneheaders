/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@class UIButton, UITableViewCell, UISwitch, NSString, UIImage, UILabel;

@interface BuddySwitchPage : BuddyTableViewController <BuddyController> {

	UIButton* _whatIsButton;
	UITableViewCell* _tableCell;
	id _delegate;
	UISwitch* _switch;
	NSString* _cellLabel;
	UIImage* _cellImage;
	UILabel* _infoLabel;
	UISwitch* _switchButton;

}

@property (nonatomic,retain) NSString * cellLabel;                   //@synthesize cellLabel=_cellLabel - In the implementation block
@property (nonatomic,retain) UIImage * cellImage;                    //@synthesize cellImage=_cellImage - In the implementation block
@property (nonatomic,readonly) UISwitch * switchButton;              //@synthesize switchButton=_switchButton - In the implementation block
+(float)infoLabelFontSize;
+(float)infoLabelTopMargin;
+(void)initialize;
-(id)initWithLabelText:(id)arg1 infoText:(id)arg2 ;
-(void)layoutOneLabel:(id)arg1 yOrigin:(float)arg2 constrict:(BOOL)arg3 ;
-(void)_whatIsPressed;
-(id)initWithLabelText:(id)arg1 infoText:(id)arg2 numberOfLines:(int)arg3 ;
-(void)setCellLabel:(id)arg1 ;
-(id)cellLabel;
-(id)cellImage;
-(void)setCellImage:(id)arg1 ;
-(id)switchButton;
-(void)donePressed;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end

