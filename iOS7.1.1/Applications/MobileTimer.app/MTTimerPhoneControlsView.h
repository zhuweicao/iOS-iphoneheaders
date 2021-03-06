/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/TimerControlsView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol TimerControlsTarget;
@class UITableView, MTTimerPickerView, UITableViewCell, MTTimerButtonsView, NSString;

@interface MTTimerPhoneControlsView : TimerControlsView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	MTTimerPickerView* _pickerView;
	UITableViewCell* _toneChooserCell;
	MTTimerButtonsView* _buttonsView;
	NSString* _toneName;
	<TimerControlsTarget>* _target;
	BOOL _isInInitialState;

}
-(void)setTimerToneName:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(id)initWithTarget:(id)arg1 ;
@end

