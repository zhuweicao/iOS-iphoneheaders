/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <EventKitUI/EKCurrentTimeMarkerViewUpdating.h>

@protocol EKDayTimeViewDelegate;
@class UIView, EKCurrentTimeMarkerView, UIColor;

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating> {

	UIView* _topContentView;
	UIView* _bottomContentView;
	unsigned _leftBorder : 1;
	unsigned _rightBorder : 1;
	bool _useLightText;
	double _highlightedHour;
	long long _orientation;
	double _hourSize;
	double _designatorSize;
	EKCurrentTimeMarkerView* _timeMarker;
	UIView* _timeMarkerExtension;
	double _timeWidth;
	bool _showsTimeMarker;
	bool _showsTimeMarkerExtension;
	bool _usesLightText;
	UIColor* _timeColor;
	double _hoursToPad;
	double _hourHeight;
	<EKDayTimeViewDelegate>* _delegate;
	NSRange _hoursToRender;

}

@property (assign,nonatomic) bool showsLeftBorder; 
@property (assign,nonatomic) bool showsRightBorder; 
@property (assign,nonatomic) bool showsTimeMarker;                                   //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (assign,nonatomic) bool showsTimeMarkerExtension;                          //@synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension - In the implementation block
@property (assign,nonatomic) bool usesLightText;                                     //@synthesize usesLightText=_usesLightText - In the implementation block
@property (assign,nonatomic) double highlightedHour; 
@property (assign,nonatomic) double hoursToPad;                                      //@synthesize hoursToPad=_hoursToPad - In the implementation block
@property (nonatomic,retain) UIColor * timeColor;                                    //@synthesize timeColor=_timeColor - In the implementation block
@property (nonatomic,readonly) EKCurrentTimeMarkerView * timeMarker; 
@property (assign,nonatomic) NSRange hoursToRender;                                  //@synthesize hoursToRender=_hoursToRender - In the implementation block
@property (nonatomic,readonly) double hourHeight;                                    //@synthesize hourHeight=_hourHeight - In the implementation block
@property (nonatomic,readonly) double defaultHeight; 
@property (assign,nonatomic,__weak) <EKDayTimeViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(double)timeWidthForOrientation:(long long)arg1 ;
+(double)timeInsetForOrientation:(long long)arg1 ;
+(double)hourHeightForOrientation:(long long)arg1 ;
+(void)setVerticalPadding:(double)arg1 ;
+(double)hourSizeForOrientation:(long long)arg1 ;
+(void)_calculateWidthForOrientation:(long long)arg1 ;
+(double)_hourWidthForOrientation:(long long)arg1 ;
+(void)_invalidateWidth;
+(double)designatorSizeForOrientation:(long long)arg1 ;
+(double)timeVerticalInsetForOrientation:(long long)arg1 ;
+(double)verticalPadding;
-(void)setShowsLeftBorder:(bool)arg1 ;
-(bool)showsLeftBorder;
-(void)_localeChanged;
-(void)setUsesLightText:(bool)arg1 ;
-(void)setShowsTimeMarker:(bool)arg1 ;
-(void)updateMarkerPosition;
-(bool)showsTimeMarker;
-(void)setShowsRightBorder:(bool)arg1 ;
-(double)_positionOfSecond:(int)arg1 ;
-(id)timeColor;
-(NSRange)hoursToRender;
-(void)setHoursToRender:(NSRange)arg1 ;
-(void)setHighlightedHour:(double)arg1 ;
-(double)highlightedHour;
-(void)_invalidateTimeWidth;
-(double)_timeWidth;
-(double)hourHeight;
-(bool)showsRightBorder;
-(void)drawRect:(CGRect)arg1 forContentView:(id)arg2 withHourRange:(NSRange)arg3 ;
-(void)setShowsTimeMarkerExtension:(bool)arg1 ;
-(bool)showsTimeMarkerExtension;
-(bool)usesLightText;
-(double)hoursToPad;
-(void)setHoursToPad:(double)arg1 ;
-(double)topPadding;
-(id)timeMarker;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(bool)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)tintColorDidChange;
-(double)defaultHeight;
-(void)setTimeColor:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void).cxx_destruct;
@end
