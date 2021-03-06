/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionView, UIView;

@interface SKUIIPhoneSearchView : UIView {

	UICollectionView* _collectionView;
	UIView* _noResultsView;
	float _relatedAdjustment;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * noResultsView;                         //@synthesize noResultsView=_noResultsView - In the implementation block
@property (assign,nonatomic) float relatedAdjustment;                        //@synthesize relatedAdjustment=_relatedAdjustment - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)collectionView;
-(void)setCollectionView:(id)arg1 ;
-(void)setNoResultsView:(id)arg1 ;
-(id)noResultsView;
-(void)setRelatedAdjustment:(float)arg1 ;
-(float)relatedAdjustment;
-(void).cxx_destruct;
@end

