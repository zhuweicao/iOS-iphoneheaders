/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/VideosTableCell.h>

@class UIButton, UILabel;

@interface VideosTVEpisodeCell : VideosTableCell {

	UIButton* _readMoreButton;
	UILabel* _descriptionLabel;
	UILabel* _dateLabel;
	BOOL _expanded;
	BOOL _animating;
	float _normalHeight;

}
+(id)descriptionForMediaItem:(id)arg1 ;
+(float)expandedHeightForDescription:(id)arg1 withContentWidth:(float)arg2 ;
-(void)_readMoreButtonPressed:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 normalHeight:(float)arg2 ;
-(void)setMediaItem:(id)arg1 hidesArtwork:(BOOL)arg2 hidesUnplayed:(BOOL)arg3 cache:(id)arg4 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(BOOL)isExpanded;
-(void).cxx_destruct;
-(float)artworkWidth;
@end
