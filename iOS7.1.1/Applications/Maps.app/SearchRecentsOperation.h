/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SearchRecentsOperationDelegate;
@class NSString;

@interface SearchRecentsOperation : NSOperation {

	NSString* _query;
	<SearchRecentsOperationDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <SearchRecentsOperationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSearchQuery:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
-(void).cxx_destruct;
@end

