/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MFComposeRecipientViewDelegate <NSObject>
@optional
-(void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1;
-(void)recipientViewDidResignFirstResponder:(id)arg1;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
-(void)composeRecipientView:(id)arg1 showPersonCardForRecent:(id)arg2;
-(void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg1;
-(BOOL)presentSearchResultsForComposeRecipientView:(id)arg1;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
-(void)composeRecipientViewReturnPressed:(id)arg1;
@end

