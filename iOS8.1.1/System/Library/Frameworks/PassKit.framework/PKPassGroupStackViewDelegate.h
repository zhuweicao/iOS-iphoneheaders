/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassGroupStackViewDelegate <NSObject>
@optional
-(BOOL)groupStackViewShouldAllowReordering:(id)arg1;
-(void)groupStackView:(id)arg1 didBeginShowingPassView:(id)arg2;
-(void)groupStackView:(id)arg1 didEndShowingPassView:(id)arg2;
-(void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)groupStackView:(id)arg1 transitioningToState:(long long)arg2 animated:(BOOL)arg3;
-(void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3;
-(void)groupStackViewDidShowHeader:(id)arg1;
-(void)groupStackViewDidHideHeader:(id)arg1;
-(void)flyInAnimationDidEnd;

@required
-(unsigned long long)suppressedContent;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
-(void)groupStackViewDidBeginReordering:(id)arg1;
-(void)groupStackViewDidEndReordering:(id)arg1;
-(BOOL)passesGrowWhenFlipped;

@end

