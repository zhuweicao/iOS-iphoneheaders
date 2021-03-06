/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImage, UIBezierPath;

@interface SUGridTableViewCellBackgroundView : UIView {

	UIColor* _backgroundColor;
	unsigned long long _borderedEdges;
	UIImage* _borderImage;
	UIBezierPath* _bottomCornersPath;
	UIBezierPath* _topCornersPath;

}

@property (assign,nonatomic) unsigned long long borderedEdges;              //@synthesize borderedEdges=_borderedEdges - In the implementation block
@property (nonatomic,retain) UIImage * borderImage;                         //@synthesize borderImage=_borderImage - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setBorderImage:(id)arg1 ;
-(id)borderImage;
-(void)_resetCachedPaths;
-(id)_topCornersPath;
-(id)_bottomCornersPath;
-(void)drawInteriorBordersWithRect:(CGRect)arg1 ;
-(void)_drawBorderToRect:(CGRect)arg1 fromRect:(CGRect)arg2 ;
-(void)setBorderedEdges:(unsigned long long)arg1 ;
-(unsigned long long)borderedEdges;
@end

