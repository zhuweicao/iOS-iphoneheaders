/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>
#import <Stocks/XMLChartUpdaterDelegate.h>
#import <Stocks/ChartIntervalButtonRowDelegate.h>
#import <Stocks/StockGraphViewContainer.h>

@class LoadingLabel, XMLChartUpdater, ChartIntervalButtonRow, StockGraphView, Stock, NSMutableArray, UIView, DashedLineView, UILabel, ChartTitleLabel, ChartHUDView, StockChartData, NSError;

@interface StockChartView : UIView <XMLChartUpdaterDelegate, ChartIntervalButtonRowDelegate, StockGraphViewContainer> {

	LoadingLabel* _loadingLabel;
	XMLChartUpdater* _chartUpdater;
	ChartIntervalButtonRow* _intervalButtonRow;
	StockGraphView* _graphView;
	Stock* _stock;
	int _selectedInterval;
	BOOL _detailedMode;
	NSMutableArray* _axisViews;
	UIView* _volumeSeparatorAxis;
	NSMutableArray* _xLabelViews;
	NSMutableArray* _yLabelViews;
	DashedLineView* _previousCloseLine;
	UILabel* _previousCloseLabel;
	ChartTitleLabel* _titleView;
	ChartHUDView* _HUDView;
	BOOL _stockHasUpdatedMetadata;
	StockChartData* _chartData;
	NSError* _error;
	int _maxChartInterval;

}

@property (nonatomic,retain) Stock * stock;                           //@synthesize stock=_stock - In the implementation block
@property (nonatomic,retain) StockChartData * chartData;              //@synthesize chartData=_chartData - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL detailedMode;                       //@synthesize detailedMode=_detailedMode - In the implementation block
@property (assign,nonatomic) int selectedInterval; 
@property (assign,nonatomic) int maxChartInterval;                    //@synthesize maxChartInterval=_maxChartInterval - In the implementation block
+(CGGradientRef)LineBackgroundGradient;
+(void)initialize;
-(void)setMaxChartInterval:(int)arg1 ;
-(void)didUpdateStockMetadata:(id)arg1 ;
-(void)_setMonthAndYearLabels;
-(void)_renderGraphData;
-(void)layoutPreviousClose;
-(CGRect)graphViewFrame;
-(void)_layoutTopLabelsAndArrowsHidden:(BOOL)arg1 ;
-(void)hideLabelsAxesAndGraphs;
-(void)_setShowingLoadingStatus:(BOOL)arg1 ;
-(void)_prepareYAxisLabelsAndPositions;
-(void)layoutGraphView;
-(void)_prepareXAxisLabelsAndPositions;
-(void)_layoutIntervalButtonRow;
-(BOOL)shouldShowLoadingStatus;
-(void)_layoutVolumeSeparatorLineForGraphRect:(CGRect)arg1 ;
-(void)_layoutYLabels;
-(void)_layoutAxesAndXLabels;
-(void)updateHUDView;
-(void)renderGraphDataIfNeeded;
-(float)widestYLabelWidthForDetailedMode:(BOOL)arg1 ;
-(int)maxChartInterval;
-(void)setShowingHUD:(BOOL)arg1 ;
-(CGRect)lineGraphFrame;
-(void)_setHourLabels;
-(void)_setDayLabelsWithInterval:(unsigned)arg1 realTimePositions:(BOOL)arg2 ;
-(void)_prepareYAxisLabelsAndPositionsForDetailedMode:(BOOL)arg1 ;
-(void)setSelectedInterval:(int)arg1 ;
-(void)layoutLoadingStatus;
-(int)selectedInterval;
-(id)initWithStock:(id)arg1 detailedMode:(BOOL)arg2 ;
-(BOOL)needsMetadataUpdateForPreviousClose;
-(id)chartUpdater;
-(void)reloadDataIfStale;
-(id)HUDView;
-(id)intervalButtonRow;
-(double)_evennessOfValue:(double)arg1 inRange:(double)arg2 ;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)description;
-(BOOL)isLoading;
-(void).cxx_destruct;
-(id)chartData;
-(void)setChartData:(id)arg1 ;
-(id)error;
-(id)graphView;
-(void)setStock:(id)arg1 ;
-(id)stock;
-(void)xmlChartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2 ;
-(void)xmlChartUpdater:(id)arg1 didFailWithError:(id)arg2 ;
-(void)stockGraphViewReadyForDisplay:(id)arg1 ;
-(void)setDetailedMode:(BOOL)arg1 ;
-(void)willRenderGraph:(id)arg1 withRenderOperation:(id)arg2 ;
-(void)clearData;
-(BOOL)detailedMode;
-(BOOL)hadError;
-(void)resetLocale;
@end
