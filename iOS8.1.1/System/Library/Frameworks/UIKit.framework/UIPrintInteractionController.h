/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPrintInteractionControllerDelegate;
#import <UIKit/UIKit-Structs.h>
@class UIPrintInfo, UIPrintPaper, UIPrintPageRenderer, UIPrintFormatter, NSArray, PKPrinter;

@interface UIPrintInteractionController : NSObject {

	BOOL _hidesNumberOfCopies;
	/*^block*/id _completionHandler;
	unsigned long long _backgroundTaskIdentifier;
	id _printState;
	BOOL _showsPageRange;
	BOOL _showsPaperSelectionForLoadedPapers;
	UIPrintInfo* _printInfo;
	id<UIPrintInteractionControllerDelegate> _delegate;
	UIPrintPaper* _printPaper;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	id<UIPrintInteractionControllerDelegate> _printActivityDelegate;

}

@property (nonatomic,retain) UIPrintInfo * printInfo;                                                     //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic) id<UIPrintInteractionControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsPageRange;                                                         //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) BOOL showsNumberOfCopies; 
@property (assign,nonatomic) BOOL showsPaperSelectionForLoadedPapers;                                     //@synthesize showsPaperSelectionForLoadedPapers=_showsPaperSelectionForLoadedPapers - In the implementation block
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                                 //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                                     //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                                           //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                               //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                                       //@synthesize printingItems=_printingItems - In the implementation block
@property (assign,nonatomic) id<UIPrintInteractionControllerDelegate> printActivityDelegate;              //@synthesize printActivityDelegate=_printActivityDelegate - In the implementation block
@property (nonatomic,readonly) long long pageCount; 
@property (assign,nonatomic) NSRange pageRange; 
@property (nonatomic,retain) PKPrinter * printer; 
@property (nonatomic,retain) UIPrintPaper * paper; 
+(BOOL)isPrintingAvailable;
+(id)sharedPrintController;
+(id)printableUTIs;
+(BOOL)canPrintURL:(id)arg1 ;
+(BOOL)canPrintData:(id)arg1 ;
-(void)_enableManualPrintPage:(BOOL)arg1 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
-(void)dealloc;
-(void)setDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(id)init;
-(id<UIPrintInteractionControllerDelegate>)delegate;
-(id)_init;
-(void)dismissAnimated:(BOOL)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(long long)pageCount;
-(UIPrintInfo *)printInfo;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(id)_currentPrintInfo;
-(void)_printPanelDidPresent;
-(void)_printPanelWillDismiss:(BOOL)arg1 ;
-(void)_printPanelDidDismiss;
-(void)_updatePageCount;
-(NSRange)pageRange;
-(void)setPageRange:(NSRange)arg1 ;
-(CGSize)_printItemContentSize;
-(UIPrintPaper *)paper;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(BOOL)_canShowDuplex;
-(BOOL)_canShowPageRange;
-(BOOL)_canShowCopies;
-(BOOL)_canShowPaperList;
-(void)_cleanPrintState;
-(BOOL)_setupPrintPanel:(/*^block*/id)arg1 ;
-(void)_setPrintInfoState:(int)arg1 ;
-(void)_endPrintJob:(BOOL)arg1 error:(id)arg2 ;
-(id)printingItem;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2 ;
-(void)_updatePrintPaper;
-(void)_startPrinting;
-(id)_paperForContentType:(long long)arg1 ;
-(void)_preparePrintInfo;
-(void)_printPage;
-(id)_printPageRenderer:(id)arg1 ;
-(id)_printItem:(id)arg1 ;
-(void)setPrintingItem:(id)arg1 ;
-(BOOL)printToPrinter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(BOOL)arg1 ;
-(void)setPrintInfo:(UIPrintInfo *)arg1 ;
-(BOOL)showsPageRange;
-(void)setShowsPageRange:(BOOL)arg1 ;
-(BOOL)showsPaperSelectionForLoadedPapers;
-(void)setShowsPaperSelectionForLoadedPapers:(BOOL)arg1 ;
-(UIPrintPaper *)printPaper;
-(UIPrintFormatter *)printFormatter;
-(void)setPrintFormatter:(UIPrintFormatter *)arg1 ;
-(NSArray *)printingItems;
-(void)setPrintingItems:(NSArray *)arg1 ;
-(id<UIPrintInteractionControllerDelegate>)printActivityDelegate;
-(void)setPrintActivityDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(oneway void)release;
@end

