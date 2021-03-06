/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSArray, NSString;

@interface AXHearingLiveListenMeterCell : PSTableCell {

	NSArray* dotImageViews;
	NSString* _liveListenUpdateUUID;

}

@property (nonatomic,retain) NSArray * dotImageViews; 
@property (nonatomic,retain) NSString * liveListenUpdateUUID;              //@synthesize liveListenUpdateUUID=_liveListenUpdateUUID - In the implementation block
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDotImageViews:(id)arg1 ;
-(id)liveListenUpdateUUID;
-(void)setLiveListenUpdateUUID:(id)arg1 ;
-(id)dotImageViews;
-(void)audioLevelDidChange:(float)arg1 ;
-(void)setMeterLevel:(int)arg1 ;
@end

