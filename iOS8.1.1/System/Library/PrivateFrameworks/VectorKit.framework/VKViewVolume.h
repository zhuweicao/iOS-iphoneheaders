/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKViewVolume : NSObject {

	VKPoint _corners[8];

}

@property (nonatomic,readonly) const VKPoint* corners; 
-(const VKPoint*)corners;
-(void)updateWithFrustum:(SCD_Struct_VK7)arg1 matrix:(const SCD_Struct_VK6*)arg2 ;
-(VKPoint)lerpPoint:(float*)arg1 ;
@end

