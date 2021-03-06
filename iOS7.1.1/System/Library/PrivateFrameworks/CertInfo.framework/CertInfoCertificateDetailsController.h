/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol CertInfoCertificateDetailsControllerDelegate;
@class NSArray, UIBarButtonItem;

@interface CertInfoCertificateDetailsController : UITableViewController {

	<CertInfoCertificateDetailsControllerDelegate>* _delegate;
	NSArray* _sectionDictionaries;
	UIBarButtonItem* _doneButton;
	unsigned _showsDoneButton : 1;

}

@property (assign,nonatomic) <CertInfoCertificateDetailsControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,@dynamic) bool showsDoneButton; 
-(void)setShowsDoneButton:(bool)arg1 ;
-(bool)showsDoneButton;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)delegate;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 certificateIndex:(long long)arg2 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(id)_sectionsForProperties:(id)arg1 ;
-(id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2 ;
-(id)_propertiesForIndexPath:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
@end

