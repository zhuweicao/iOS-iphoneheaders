/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class NSMutableArray;

@interface SKSoundSource : NSObject {

	unsigned _sourceId;
	NSMutableArray* _buffers;

}

@property (assign,nonatomic) BOOL shouldLoop; 
@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) int completedBufferCount; 
@property (nonatomic,readonly) int queuedBufferCount; 
+(id)sourceWithBuffer:(id)arg1 ;
+(id)source;
-(void)play;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)queueBuffer:(id)arg1 ;
-(int)completedBufferCount;
-(int)queuedBufferCount;
-(void)purgeCompletedBuffers;
-(BOOL)shouldLoop;
-(void)setShouldLoop:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)stop;
-(void)pause;
-(BOOL)isPlaying;
@end

