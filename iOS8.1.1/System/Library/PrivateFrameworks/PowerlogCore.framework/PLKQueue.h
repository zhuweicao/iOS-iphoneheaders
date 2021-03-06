/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSString, NSObject;

@interface PLKQueue : NSObject {

	BOOL _enabled;
	int _kQueue;
	int _fileDescriptor;
	CFRunLoopSourceRef _kqueueDescriptorSource;
	CFFileDescriptorRef _kqueueDescriptorRef;
	NSString* _path;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _kQueueBlock;

}

@property (assign,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign) int kQueue;                                              //@synthesize kQueue=_kQueue - In the implementation block
@property (assign) int fileDescriptor;                                      //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (assign) CFRunLoopSourceRef kqueueDescriptorSource;               //@synthesize kqueueDescriptorSource=_kqueueDescriptorSource - In the implementation block
@property (assign) CFFileDescriptorRef kqueueDescriptorRef;                 //@synthesize kqueueDescriptorRef=_kqueueDescriptorRef - In the implementation block
@property (copy) NSString * path;                                           //@synthesize path=_path - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id kQueueBlock;                                  //@synthesize kQueueBlock=_kQueueBlock - In the implementation block
-(NSString *)path;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setPath:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFileDescriptor:(int)arg1 ;
-(int)fileDescriptor;
-(id)initWithPath:(id)arg1 withDispatchQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(int)kQueue;
-(void)setKQueue:(int)arg1 ;
-(void)setKqueueDescriptorRef:(CFFileDescriptorRef)arg1 ;
-(CFFileDescriptorRef)kqueueDescriptorRef;
-(void)setKqueueDescriptorSource:(CFRunLoopSourceRef)arg1 ;
-(CFRunLoopSourceRef)kqueueDescriptorSource;
-(id)kQueueBlock;
-(void)setKQueueBlock:(id)arg1 ;
@end

