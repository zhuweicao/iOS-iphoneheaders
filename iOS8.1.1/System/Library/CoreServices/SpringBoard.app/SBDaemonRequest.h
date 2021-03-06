/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBDaemonRequest : NSObject {

	/*^block*/id _enabler;
	/*^block*/id _disabler;

}

@property (nonatomic,copy) id enabler;               //@synthesize enabler=_enabler - In the implementation block
@property (nonatomic,copy) id disabler;              //@synthesize disabler=_disabler - In the implementation block
+(id)requestWithEnabler:(/*^block*/id)arg1 disabler:(/*^block*/id)arg2 ;
-(void)setEnabler:(id)arg1 ;
-(void)setDisabler:(id)arg1 ;
-(void)dispatchEnablerOnQueue:(id)arg1 ;
-(void)dispatchDisablerOnQueue:(id)arg1 ;
-(id)enabler;
-(id)disabler;
-(void)dealloc;
@end

