/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>

@protocol SBAppSwitcherCacheVended;
@class UIView, SBWallpaperEffectView, SBAppSwitcherStatusBarViewCache, NSString, SBZoomView;

@interface SBAppSwitcherContinuityAppView : UIView <SBAppSwitcherPageContentView> {

	UIView* _containerView;
	SBWallpaperEffectView* _wallpaperView;
	UIView*<SBAppSwitcherCacheVended> _fakeStatusBarView;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	NSString* _bundleIdentifier;
	SBZoomView* _zoomView;
	long long _orientation;

}

@property (assign,nonatomic) long long orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_viewDismissing:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 bundleIdentifier:(id)arg2 ;
-(CGAffineTransform)_rotationTransformForOrientation:(long long)arg1 ;
-(void)_willAnimateDismiss:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
@end

