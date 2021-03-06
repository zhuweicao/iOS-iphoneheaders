/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface PushedMailboxTableCell : UITableViewCell {

	UILabel* _mailboxName;
	UIImageView* _mailboxIcon;
	unsigned _level;

}

@property (assign,nonatomic) unsigned level;              //@synthesize level=_level - In the implementation block
+(int)_cacheIndexForType:(int)arg1 ;
+(id)_iconForType:(int)arg1 nested:(BOOL)arg2 ;
+(float)mtcOffsetForLevel:(int)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setLevel:(unsigned)arg1 ;
-(unsigned)level;
-(void)setEnabled:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)isChecked;
-(void)_setupMailFolderIconForImage:(id)arg1 ;
-(void)setMailboxName:(id)arg1 ;
@end

