/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIItemArtworkContext, SKUIProductPageHeaderViewController, UIImage, SKUIProductPageItem, SSVLoadURLOperation, SKUIIncompatibleAppView, NSOperationQueue, UIScrollView;

@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController> {

	SKUIItemArtworkContext* _artworkContext;
	<SKUIProductPageChildViewControllerDelegate>* _delegate;
	SKUIProductPageHeaderViewController* _headerViewController;
	UIImage* _iconImage;
	SKUIProductPageItem* _incompatibleItem;
	SSVLoadURLOperation* _loadIconOperation;
	SKUIIncompatibleAppView* _incompatibleView;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIProductPageItem * incompatibleItem;                                    //@synthesize incompatibleItem=_incompatibleItem - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) <SKUIProductPageChildViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)scrollView;
-(id)_artworkContext;
-(id)headerViewController;
-(void)setHeaderViewController:(id)arg1 ;
-(void)_setArtworkWithImage:(id)arg1 error:(id)arg2 ;
-(id)initWithIncompatibleItem:(id)arg1 ;
-(void)_learnMoreAboutIPad:(id)arg1 ;
-(void)_learnMoreAboutApp:(id)arg1 ;
-(id)incompatibleItem;
-(void).cxx_destruct;
@end

