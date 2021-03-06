/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewAnimationStyle.h>

@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle {

	int _outDirection;

}

@property (assign,nonatomic) int outDirection;              //@synthesize outDirection=_outDirection - In the implementation block
+(id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 outDirection:(int)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(BOOL)canDismissWithScrollView;
-(int)outDirection;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 ;
-(id)endPlacementForInputViewSet:(id)arg1 ;
@end

