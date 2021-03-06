/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate.h>
#import <UIKit/_UIShadowedView.h>

@protocol UITabBarDelegate;
@class UIView, _UITabBarBackgroundView, _UIBackdropView, NSArray, UITabBarItem, _UITabBarAppearanceStorage, NSMutableArray, UIColor, UIImage;

@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView> {

	UIView* _customizeView;
	_UITabBarBackgroundView* _backgroundView;
	_UIBackdropView* _adaptiveBackdrop;
	UIView* _shadowView;
	<UITabBarDelegate>* _delegate;
	NSArray* _items;
	UITabBarItem* _selectedItem;
	NSArray* _customizationItems;
	int _barOrientation;
	struct {
		unsigned alertShown : 1;
		unsigned wasEnabled : 1;
		unsigned customized : 1;
		unsigned downButtonSentAction : 1;
		unsigned isLocked : 1;
		unsigned backgroundIsPattern : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned backgroundNeedsUpdate : 1;
	}  _tabBarFlags;
	NSArray* _buttonItems;
	CFArrayRef _hiddenItems;
	_UITabBarAppearanceStorage* _appearanceStorage;
	BOOL _dividerImagesChangeWithSelection;
	BOOL _dividerImagesAreInvalid;
	BOOL _hidesShadow;
	float _nextSelectionSlideDuration;
	NSMutableArray* _dividerImageViews;
	int _itemPositioning;
	float _itemDimension;
	float _itemSpacing;
	int _barMetrics;
	int _imageStyle;

}

@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,nonatomic) <UITabBarDelegate> * delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic) UITabBarItem * selectedItem; 
@property (nonatomic,@dynamic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (assign,nonatomic) int itemPositioning;                                                                              //@synthesize itemPositioning=_itemPositioning - In the implementation block
@property (assign,nonatomic) float itemWidth;                                                                                  //@synthesize itemDimension=_itemDimension - In the implementation block
@property (assign,nonatomic) float itemSpacing;                                                                                //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) int barStyle; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (assign,setter=_setBarOrientation:,nonatomic) int _barOrientation; 
@property (assign,setter=_setBackgroundNeedsUpdate:,nonatomic) BOOL _backgroundNeedsUpdate; 
@property (assign,setter=_setNextSelectionSlideDuration:,nonatomic) float _nextSelectionSlideDuration;                         //@synthesize nextSelectionSlideDuration=_nextSelectionSlideDuration - In the implementation block
@property (assign,setter=_setTabButtonWidth:,nonatomic) float _tabButtonWidth; 
@property (assign,setter=_setInterTabButtonSpacing:,nonatomic) float _interTabButtonSpacing; 
@property (assign,setter=_setDividerImagesChangeWithSelection:,nonatomic) BOOL _dividerImagesChangeWithSelection;              //@synthesize dividerImagesChangeWithSelection=_dividerImagesChangeWithSelection - In the implementation block
@property (assign,setter=_setDividerImagesAreInvalid:,nonatomic) BOOL _dividerImagesAreInvalid;                                //@synthesize dividerImagesAreInvalid=_dividerImagesAreInvalid - In the implementation block
@property (setter=_setDividerImageViews:,nonatomic,retain) NSMutableArray * _dividerImageViews;                                //@synthesize dividerImageViews=_dividerImageViews - In the implementation block
@property (assign,setter=_setBarMetrics:,nonatomic) int _barMetrics;                                                           //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) int _imageStyle;                                                           //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,setter=_setHidesShadow:,nonatomic) BOOL _hidesShadow;                                                        //@synthesize hidesShadow=_hidesShadow - In the implementation block
+(void)_initializeForIdiom:(int)arg1 ;
+(float)_buttonGap;
+(id)_tabBarForView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(id)_backgroundView;
-(void)_setVisualAltitude:(float)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(BOOL)isTranslucent;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isLocked;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(BOOL)_canDrawContent;
-(void)setTintColor:(id)arg1 ;
-(void)tintColorDidChange;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(BOOL)_subclassImplementsDrawRect;
-(id)backgroundImage;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(id)_appearanceStorage;
-(void)_setBackgroundView:(id)arg1 ;
-(id)_effectiveBarTintColor;
-(id)_shadowView;
-(void)_updateBackgroundImage;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(BOOL)_wantsAdaptiveBackdrop;
-(int)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(BOOL)_hidesShadow;
-(void)_setHidesShadow:(BOOL)arg1 ;
-(id)barTintColor;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2 ;
-(BOOL)_isTranslucent;
-(void)_setBarOrientation:(int)arg1 ;
-(void)setSelectedItem:(id)arg1 ;
-(void)beginCustomizingItems:(id)arg1 ;
-(BOOL)isCustomizing;
-(void)setBackgroundImage:(id)arg1 ;
-(void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setBadgeValue:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeGlyph:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2 ;
-(id)buttonItems;
-(void)setButtonItems:(id)arg1 ;
-(void)_cleanupAdaptiveBackdrop;
-(void)_buttonDownDelayed:(id)arg1 ;
-(void)_buttonDown:(id)arg1 ;
-(void)_buttonUp:(id)arg1 ;
-(void)_buttonCancel:(id)arg1 ;
-(void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned)arg2 rightButtonState:(unsigned)arg3 ;
-(id)_dividerImageForLeftButtonState:(unsigned)arg1 rightButtonState:(unsigned)arg2 ;
-(id)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(id)arg1 ;
-(id)selectedImageTintColor;
-(void)setSelectedImageTintColor:(id)arg1 ;
-(int)_barMetrics;
-(void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(BOOL)arg3 swapping:(BOOL)arg4 ;
-(void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2 ;
-(void)_setBackgroundImage:(id)arg1 ;
-(void)_setSelectionIndicatorImage:(id)arg1 ;
-(void)_setLabelFont:(id)arg1 ;
-(void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2 ;
-(void)_setLabelShadowColor:(id)arg1 ;
-(void)_setLabelShadowOffset:(CGSize)arg1 ;
-(void)_setBackgroundNeedsUpdate:(BOOL)arg1 ;
-(void)setItemWidth:(float)arg1 ;
-(float)itemWidth;
-(void)setItemSpacing:(float)arg1 ;
-(float)itemSpacing;
-(void)_setBarMetrics:(int)arg1 ;
-(void)_setImageStyle:(int)arg1 ;
-(void)_doCommonTabBarInit;
-(id)_topmostDividerImageView;
-(void)_invalidateDividerImages;
-(void)_updateDividerImagesIfNecessary;
-(void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(float)arg3 ;
-(void)_showItemsAnimated:(BOOL)arg1 ;
-(int)_imageStyle;
-(void)_hideItemsAnimated:(BOOL)arg1 ;
-(int)_effectiveBarOrientation;
-(BOOL)_backgroundNeedsUpdate;
-(void)_customizeWithAvailableItems:(id)arg1 ;
-(void)_dismissCustomizeSheet:(BOOL)arg1 ;
-(void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2 ;
-(void)_effectiveBarTintColorDidChange;
-(int)_tabBarTabStyle;
-(void)_setTabBarTabStyle:(int)arg1 ;
-(void)_setTabButtonWidth:(float)arg1 ;
-(float)_tabButtonWidth;
-(void)_setInterTabButtonSpacing:(float)arg1 ;
-(float)_interTabButtonSpacing;
-(id)selectedItem;
-(int)_barOrientation;
-(BOOL)endCustomizingAnimated:(BOOL)arg1 ;
-(float)_nextSelectionSlideDuration;
-(void)_setNextSelectionSlideDuration:(float)arg1 ;
-(BOOL)_dividerImagesChangeWithSelection;
-(void)_setDividerImagesChangeWithSelection:(BOOL)arg1 ;
-(BOOL)_dividerImagesAreInvalid;
-(void)_setDividerImagesAreInvalid:(BOOL)arg1 ;
-(id)_dividerImageViews;
-(void)_setDividerImageViews:(id)arg1 ;
-(int)itemPositioning;
-(void)setItemPositioning:(int)arg1 ;
-(void)_tabBarFinishedAnimating;
-(void)dismissCustomizeSheet:(BOOL)arg1 ;
-(void)_alertWillShow:(BOOL)arg1 duration:(float)arg2 ;
-(void)_alertDidHide;
-(void)_adjustButtonSelection:(id)arg1 ;
-(void)_finishCustomizeAnimation:(id)arg1 ;
-(void)_customizeDoneButtonAction:(id)arg1 ;
-(void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1 ;
-(void)_configureItems:(id)arg1 ;
-(BOOL)_isHidden:(id)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
@end

