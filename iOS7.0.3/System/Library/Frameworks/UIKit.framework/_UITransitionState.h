/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface _UITransitionState : NSObject {

	int _transitionDirection;
	/*^block*/ id _completion;
	NSDate* _beginDate;

}

@property (nonatomic,readonly) int transitionDirection;                       //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) int effectiveTransitionDirection; 
@property (nonatomic,readonly) NSDate * beginDate;                            //@synthesize beginDate=_beginDate - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(id)initWithTransitionDirection:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(int)transitionDirection;
-(void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2 ;
-(BOOL)isCompatibleWithTransitionInDirection:(int)arg1 ;
-(int)effectiveTransitionDirection;
-(id)beginDate;
-(void)markBeginDate;
@end

