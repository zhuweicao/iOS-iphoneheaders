/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <PassKit/PKCaptureDelegate.h>
#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKCodeAcquisitionDelegate;
@class UINavigationBar, PKCaptureSession, PKBoxLayer, NSURLConnection, NSMutableData, UILabel, UIProgressView, NSSet;

@interface PKCodeAcquisitionViewController : UIViewController <PKCaptureDelegate, NSURLConnectionDataDelegate, UIGestureRecognizerDelegate> {

	UINavigationBar* _navBar;
	PKCaptureSession* _captureSession;
	PKBoxLayer* _boxLayer;
	NSURLConnection* _downloadConnection;
	NSMutableData* _downloadData;
	long long _downloadExpectedContentSize;
	UILabel* _captionLabel;
	UIProgressView* _downloadProgressView;
	UILabel* _errorLabel;
	UILabel* _helpLabel;
	NSSet* _supportedBarcodeTypes;
	<PKCodeAcquisitionDelegate>* _delegate;

}

@property (assign,nonatomic) <PKCodeAcquisitionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)captureSession:(id)arg1 isRunning:(BOOL)arg2 ;
-(void)_cleanupDownload;
-(void)_setCaptureUIState:(int)arg1 animated:(BOOL)arg2 ;
-(void)_restartCaptureSession;
-(void)_resetBoxLayer;
-(void)_handleFoundCode:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 ;
-(void)_handleDownloadedPass:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 errorToDisplay:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_handleSingleTap:(id)arg1 ;
@end

