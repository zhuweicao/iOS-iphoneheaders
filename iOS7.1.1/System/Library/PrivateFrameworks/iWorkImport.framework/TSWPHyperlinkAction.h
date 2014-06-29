/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSWPTwoPartAction.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSWPHyperlinkField, TSDRep;

@interface TSWPHyperlinkAction : TSWPTwoPartAction {

	TSWPHyperlinkField* _hyperlinkField;
	TSDRep<TSWPHyperlinkHostRepProtocol>* _hyperlinkRep;

}
+(id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/ id)arg3 ;
-(id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/ id)arg3 ;
-(void)dealloc;
@end
