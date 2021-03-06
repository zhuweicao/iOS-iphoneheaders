/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUIHorizontalLockupColumn : NSObject {

	NSMutableArray* _childViewElements;
	long long _identifier;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSArray * childViewElements;              //@synthesize childViewElements=_childViewElements - In the implementation block
@property (assign,nonatomic) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)init;
-(id)description;
-(long long)identifier;
-(void)setSize:(CGSize)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(NSArray *)childViewElements;
-(void)_addChildViewElement:(id)arg1 ;
@end

