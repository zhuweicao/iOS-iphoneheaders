/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuSheet.h>

@class NSArray, NSString;

@interface SCATModernMenuCommonTasksSheet : SCATModernMenuSheet {

	NSArray* _commonTasks;
	NSString* _alertIdentifier;

}

@property (nonatomic,retain) NSArray * commonTasks;                   //@synthesize commonTasks=_commonTasks - In the implementation block
@property (nonatomic,retain) NSString * alertIdentifier;              //@synthesize alertIdentifier=_alertIdentifier - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)initWithMenu:(id)arg1 ;
-(void)setCommonTasks:(NSArray *)arg1 ;
-(void)_loadCommonTasks;
-(NSArray *)commonTasks;
-(NSString *)alertIdentifier;
-(void)setAlertIdentifier:(NSString *)arg1 ;
-(void)dealloc;
@end

