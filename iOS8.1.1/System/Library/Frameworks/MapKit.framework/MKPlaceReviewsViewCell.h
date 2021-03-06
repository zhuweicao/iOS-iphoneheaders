/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, MKStarRatingAndLabelView, UILabel, NSMutableArray, UIImage, NSString, NSDate;

@interface MKPlaceReviewsViewCell : UITableViewCell {

	UIImageView* _pictureView;
	MKStarRatingAndLabelView* _starView;
	UILabel* _authorLabel;
	UILabel* _dateLabel;
	UILabel* _reviewLabel;
	NSMutableArray* _scaledConstraints;

}

@property (assign,nonatomic,__weak) UIImage * picture; 
@property (assign,nonatomic,__weak) NSString * author; 
@property (assign,nonatomic,__weak) NSDate * date; 
@property (assign,nonatomic,__weak) NSString * reviewText; 
@property (assign,nonatomic) unsigned long long rating; 
@property (nonatomic,retain) NSMutableArray * scaledConstraints;              //@synthesize scaledConstraints=_scaledConstraints - In the implementation block
+(double)intrinsicContentHeight;
+(id)reuseIdentifier;
-(void)contentSizeDidChange;
-(id)fontForAuthor;
-(void)setReviewText:(NSString *)arg1 ;
-(NSMutableArray *)scaledConstraints;
-(void)setScaledConstraints:(NSMutableArray *)arg1 ;
-(void)setRating:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)setDate:(NSDate *)arg1 ;
-(void)setPicture:(UIImage *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
@end

