/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MailCompositionService.app/MailCompositionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMailComposeRemoteService
@required
-(void)setCompositionValues:(id)arg1;
-(void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 identifier:(id)arg4;
-(void)commitCompositionValuesWithReply:(/*^block*/ id)arg1;
-(void)framesForAttachmentsWithIdentifiers:(id)arg1 withReply:(/*^block*/ id)arg2;
-(void)autosaveWithReply:(/*^block*/ id)arg1;
-(void)setUICustomizationData:(id)arg1;
-(void)setContentVisible:(BOOL)arg1;
@end

