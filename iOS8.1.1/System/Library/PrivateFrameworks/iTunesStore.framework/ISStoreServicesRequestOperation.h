/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {

	SSRequest* _request;

}

@property (readonly) SSRequest * request; 
-(void)cancel;
-(void)dealloc;
-(void)run;
-(SSRequest *)request;
-(id)initWithRequest:(id)arg1 ;
@end
