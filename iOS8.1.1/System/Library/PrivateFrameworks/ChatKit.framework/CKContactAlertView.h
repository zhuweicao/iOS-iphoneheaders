/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface CKContactAlertView : UIView {

	NSString* _contactDescription;
	UIImage* _image;
	UIImageView* _contactImageView;
	UILabel* _contactLabel;

}

@property (nonatomic,retain) NSString * contactDescription;               //@synthesize contactDescription=_contactDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * contactLabel;                      //@synthesize contactLabel=_contactLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(UIImageView *)contactImageView;
-(void)setContactDescription:(NSString *)arg1 ;
-(NSString *)contactDescription;
-(UILabel *)contactLabel;
-(void)setContactLabel:(UILabel *)arg1 ;
@end

