/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <routined/RTNotifier.h>

@class RTTransaction;

@interface RTStarkManager : RTNotifier {

	int _connectionState;
	RTTransaction* _dirty;

}

@property (assign,nonatomic) int connectionState;                //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) RTTransaction * dirty;              //@synthesize dirty=_dirty - In the implementation block
+(id)sharedInstance;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)updateConnectionState;
-(void)postConnectionStateNotification;
-(int)connectionState;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
-(id)dirty;
-(void)setConnectionState:(int)arg1 ;
-(void)setDirty:(id)arg1 ;
@end

