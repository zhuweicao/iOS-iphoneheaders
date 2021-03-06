/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBFolderView.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class UIButton, SBNewsstandBackgroundView, NSString;

@interface SBNewsstandFolderView : SBFolderView <SBIconIndexNodeObserver> {

	UIButton* _storeButton;
	UIButton* _emptyImageButton;
	SBNewsstandBackgroundView* _backgroundView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 ;
-(void)handleReachabilityActivated:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)_storeButtonTapped:(id)arg1 ;
-(void)_updateEmptyState;
-(void)_newsstandStoreAvailabilityDidChangeNotification:(id)arg1 ;
-(BOOL)_showsTitle;
-(double)_titleFontSize;
-(void)dealloc;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setFolder:(id)arg1 ;
-(void)_layoutSubviews;
@end

