/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegate <NSObject>
@optional
-(void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(long long)arg3;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(BOOL)arg3;
-(void)returnToLibraryForClientInterface:(id)arg1;
-(id)previewOverlayForClientInterface:(id)arg1;
-(id)scriptInterfaceForClientInterface:(id)arg1;
-(id)tabBarControllerForClientInterface:(id)arg1;

@end

