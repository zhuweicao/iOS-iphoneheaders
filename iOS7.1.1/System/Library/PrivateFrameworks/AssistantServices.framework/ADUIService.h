/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADService.h>

@protocol ADCommandCenterRequestDelegate;
@interface ADUIService : ADService {

	<ADCommandCenterRequestDelegate>* _requestDelegate;

}
-(void)handleCommand:(id)arg1 forDomain:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(id)initWithRequestDelegate:(id)arg1 ;
-(id)commandsForDomain:(id)arg1 ;
-(id)lockRestrictedCommands;
-(BOOL)implementsCommand:(id)arg1 forDomain:(id)arg2 ;
-(void).cxx_destruct;
-(id)handle;
-(id)domains;
@end

