/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CABasicAnimation;

@interface _UIViewKeyValueAnimationFactoryTransition : NSObject {

	CABasicAnimation* _fromAnimation;
	CABasicAnimation* _toAnimation;

}

@property (nonatomic,retain) CABasicAnimation * fromAnimation;              //@synthesize fromAnimation=_fromAnimation - In the implementation block
@property (nonatomic,retain) CABasicAnimation * toAnimation;                //@synthesize toAnimation=_toAnimation - In the implementation block
-(void)dealloc;
-(CABasicAnimation *)fromAnimation;
-(void)setFromAnimation:(CABasicAnimation *)arg1 ;
-(CABasicAnimation *)toAnimation;
-(void)setToAnimation:(CABasicAnimation *)arg1 ;
@end
