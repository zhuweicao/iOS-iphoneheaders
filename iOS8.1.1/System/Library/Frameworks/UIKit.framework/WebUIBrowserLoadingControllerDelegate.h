/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebUIBrowserLoadingControllerDelegate <NSObject>
@optional
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)browserLoadingControllerDidUpdateURL:(id)arg1;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1;
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
-(void)browserLoadingControllerDidUpdateSecurity:(id)arg1;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
-(void)browserLoadingController:(id)arg1 willLoadRequest:(id)arg2 userDriven:(BOOL)arg3;
-(void)browserLoadingController:(id)arg1 failedToStartLoadingRequest:(id)arg2 error:(id)arg3;
-(BOOL)browserLoadingControllerShouldShowProvisionalURLs:(id)arg1;
-(void)browserLoadingControllerWillStartUserDrivenLoad:(id)arg1;
-(void)browserLoadingControllerDidStartLoading:(id)arg1;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
-(void)browserLoadingControllerDidUpdateLoadingState:(id)arg1;
-(id)browserLoadingController:(id)arg1 userVisibleStringForURL:(id)arg2;
-(BOOL)browserLoadingControllerShouldEvaluateUserEnteredJavaScript:(id)arg1;
-(void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
-(void)webThreadWebView:(id)arg1 didLayout:(unsigned long long)arg2;

@end

