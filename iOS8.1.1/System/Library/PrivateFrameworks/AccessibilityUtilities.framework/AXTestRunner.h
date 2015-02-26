/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXTestRunner : NSObject {

	/*^block*/id _preTestAction;
	/*^block*/id _postTestAction;

}

@property (nonatomic,copy) id preTestAction;               //@synthesize preTestAction=_preTestAction - In the implementation block
@property (nonatomic,copy) id postTestAction;              //@synthesize postTestAction=_postTestAction - In the implementation block
-(void)dealloc;
-(void)setPreTestAction:(id)arg1 ;
-(void)setPostTestAction:(id)arg1 ;
-(id)preTestAction;
-(id)postTestAction;
-(void)runTest:(Class)arg1 ;
@end
