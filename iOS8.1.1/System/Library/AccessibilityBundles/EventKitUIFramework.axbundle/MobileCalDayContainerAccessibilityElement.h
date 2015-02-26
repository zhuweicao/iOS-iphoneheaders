/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUIFramework/EventKitUIFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSDate, UIView;

@interface MobileCalDayContainerAccessibilityElement : UIAccessibilityElement {

	NSMutableArray* _children;
	NSDate* _date;
	long long _indexInArray;
	UIView* _dayGrid;

}

@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long indexInArray;                 //@synthesize indexInArray=_indexInArray - In the implementation block
@property (assign,nonatomic) UIView * dayGrid;                       //@synthesize dayGrid=_dayGrid - In the implementation block
-(void)setIndexInArray:(long long)arg1 ;
-(UIView *)dayGrid;
-(void)setDayGrid:(UIView *)arg1 ;
-(long long)indexInArray;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityContainerElements;
-(void)dealloc;
-(NSDate *)date;
-(id)accessibilityLabel;
-(void)setDate:(NSDate *)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)_accessibilityParentForFindingScrollParent;
-(NSMutableArray *)children;
@end
