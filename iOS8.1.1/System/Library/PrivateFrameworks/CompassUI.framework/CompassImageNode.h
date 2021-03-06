/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class NSString;

@interface CompassImageNode : NSObject {

	CompassImageNode* _leftChild;
	CompassImageNode* _rightChild;
	NSString* _imageKey;
	CGRect _rect;

}

@property (nonatomic,retain) CompassImageNode * leftChild;               //@synthesize leftChild=_leftChild - In the implementation block
@property (nonatomic,retain) CompassImageNode * rightChild;              //@synthesize rightChild=_rightChild - In the implementation block
@property (assign,nonatomic) CGRect rect;                                //@synthesize rect=_rect - In the implementation block
@property (nonatomic,copy) NSString * imageKey;                          //@synthesize imageKey=_imageKey - In the implementation block
-(void)dealloc;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(id)insertImageWithSize:(CGSize)arg1 key:(id)arg2 ;
-(void)setImageKey:(NSString *)arg1 ;
-(CompassImageNode *)leftChild;
-(void)setLeftChild:(CompassImageNode *)arg1 ;
-(CompassImageNode *)rightChild;
-(void)setRightChild:(CompassImageNode *)arg1 ;
-(NSString *)imageKey;
@end

