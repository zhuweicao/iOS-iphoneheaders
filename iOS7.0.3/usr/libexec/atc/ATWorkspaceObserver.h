/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/atc
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {

	NSObject<LSApplicationWorkspaceObserverProtocol>* _delegate;

}

@property (assign,nonatomic) NSObject<ATWorkspaceObserverDelegate> * delegate; 
-(void)startObserving;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)stopObserving;
@end
