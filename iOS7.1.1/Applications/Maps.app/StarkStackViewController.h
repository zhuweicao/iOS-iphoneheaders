/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <Maps/StarkViewControllerPresentationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSMutableArray, UIViewController, StarkStackItem, UIView, UITapGestureRecognizer, StarkNavigationBar, StarkChromeViewController, UINavigationBar, NSArray;

@interface StarkStackViewController : UIViewController <UINavigationBarDelegate, StarkViewControllerPresentationDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	NSMutableArray* _items;
	UIViewController* _currentViewController;
	StarkStackItem* _disappearingItem;
	UIView* _containerView;
	UIView* _currentTransitionView;
	BOOL _isAlreadyPoppingNavItem;
	BOOL _isNavigationBarHidden;
	BOOL _isDeferedPop;
	UITapGestureRecognizer* _backRecognizer;
	UIView* _statusBarUnderlay;
	StarkNavigationBar* _topBar;
	int _activeTransitionCount;
	BOOL _suppressed;
	StarkChromeViewController* _starkChromeViewController;

}

@property (nonatomic,readonly) StarkChromeViewController * starkChromeViewController;              //@synthesize starkChromeViewController=_starkChromeViewController - In the implementation block
@property (nonatomic,readonly) UINavigationBar * topBar; 
@property (assign,getter=isSuppressed,nonatomic) BOOL suppressed;                                  //@synthesize suppressed=_suppressed - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(void)updateCurrentSelectionIfNeeded;
-(void)popToRootItemAnimated:(BOOL)arg1 ;
-(id)starkChromeViewController;
-(void)setAllowsHardwarePop:(BOOL)arg1 forMode:(id)arg2 ;
-(void)_handleBack:(id)arg1 ;
-(CGRect)_frameForNavigationBar;
-(id)_topBarBackgroundColorForViewController:(id)arg1 ;
-(void)popNavigationItemAnimated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_pushNavigationItem:(id)arg1 fromNavigationItem:(id)arg2 animated:(BOOL)arg3 replace:(BOOL)arg4 completion:(/*^block*/ id)arg5 ;
-(void)replaceTopItemWithItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_firstModeItemBelowIndex:(int)arg1 ;
-(void)popToNavigationItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_startTransition;
-(void)_popToViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_endTransition;
-(void)_popToNavigationItem:(id)arg1 usePopAnimation:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)_itemAboveItem:(id)arg1 ;
-(void)_replaceItem:(id)arg1 withItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)_popToNavigationItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)setNavigationBarHidden:(BOOL)arg1 fromEdge:(unsigned)arg2 withAnimation:(id)arg3 ;
-(BOOL)_statusBarUnderlayHiddenForViewController:(id)arg1 ;
-(void)_pushNavigationItem:(id)arg1 fromNavigationItem:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)transitionBegan:(id)arg1 ;
-(id)initWithChromeModeController:(id)arg1 rootItem:(id)arg2 ;
-(void)setSuppressed:(BOOL)arg1 ;
-(void)popToInsertedNavigationItem:(id)arg1 aboveItem:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)isSuppressed;
-(BOOL)_isTransitioning;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)topItem;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(id)items;
-(void)popNavigationItemAnimated:(BOOL)arg1 ;
-(void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(CGRect)_frameForViewController:(id)arg1 ;
-(void).cxx_destruct;
-(void)_updateItems;
-(CGRect)_statusBarFrame;
-(id)topBar;
-(void)_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

