/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXFeatureViewControllerDelegate <NSObject>
@optional
-(id)viewForPresentingOverlayUserInterfaceForFeatureViewController:(id)arg1;
-(void)featureViewController:(id)arg1 touchSystemFeatureDidChange:(BOOL)arg2;
-(void)featureViewController:(id)arg1 willPresentPopoverControllerInOverlayUserInterfaceView:(id)arg2;
-(void)featureViewController:(id)arg1 didDismissPopoverControllerFromOverlayUserInterfaceView:(id)arg2;

@required
-(BOOL)shouldDisplayMiniToolbarForController:(id)arg1;

@end
