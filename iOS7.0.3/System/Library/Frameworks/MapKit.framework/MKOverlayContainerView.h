/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@protocol MKOverlayContainerViewDelegate;
@class NSMutableOrderedSet, NSMapTable, NSMutableArray, UIView, NSArray;

@interface MKOverlayContainerView : UIView {

	NSMutableOrderedSet* _overlays[2];
	NSMapTable* _overlayToDrawable[2];
	NSMutableArray* _drawables[2];
	NSMutableArray* _vkOverlays[2];
	UIView* _viewContainers[2];
	<MKOverlayContainerViewDelegate>* _delegate;
	float _mapZoomScale;

}

@property (assign,nonatomic) <MKOverlayContainerViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float mapZoomScale;                                       //@synthesize mapZoomScale=_mapZoomScale - In the implementation block
@property (nonatomic,readonly) NSArray * overlays; 
-(void)setLevelCrossFade:(BOOL)arg1 ;
-(void)addAndRemoveOverlayViews;
-(void)setMapZoomScale:(float)arg1 ;
-(void)addOverlay:(id)arg1 level:(int)arg2 ;
-(void)addOverlays:(id)arg1 level:(int)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned)arg2 level:(int)arg3 ;
-(void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2 ;
-(id)drawableForOverlay:(id)arg1 ;
-(id)overlaysInLevel:(int)arg1 ;
-(int)_drawableIndexForDrawable:(id)arg1 level:(int)arg2 ;
-(void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(int)arg3 level:(int)arg4 ;
-(void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(int)arg3 ;
-(SCD_Struct_MK2)_mapRectWithFractionOfVisible:(double)arg1 ;
-(void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(int)arg3 ;
-(id)_considerAddingDrawable:(id)arg1 inAddRect:(SCD_Struct_MK2)arg2 level:(int)arg3 ;
-(int)_levelForOverlay:(id)arg1 exists:(BOOL*)arg2 ;
-(void)_exchangeOverlayAtIndex:(unsigned)arg1 withOverlayAtIndex:(unsigned)arg2 level:(int)arg3 ;
-(void)_updateContentScale:(id)arg1 ;
-(id)_viewContainerForLevel:(int)arg1 ;
-(void)visibleRectChanged;
-(float)mapZoomScale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(id)delegate;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)removeOverlays:(id)arg1 ;
-(void)addOverlays:(id)arg1 ;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned)arg1 withOverlayAtIndex:(unsigned)arg2 ;
@end

