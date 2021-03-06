/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSData, NSLock, NSMutableArray, NSNumber, NSArray;

@interface MicroPaymentQueueResponse : NSObject {

	NSData* _appReceipt;
	NSLock* _lock;
	NSMutableArray* _payments;
	NSMutableArray* _rangesToLoad;
	long long _requestType;
	long long _serverPaymentCount;
	BOOL _shouldTriggerQueueCheck;
	NSNumber* _userIdentifier;

}

@property (readonly) long long requestType; 
@property (readonly) NSData * appReceipt; 
@property (copy) NSArray * payments; 
@property (readonly) NSArray * rangesToLoad; 
@property (assign) long long serverPaymentCount; 
@property (assign) BOOL shouldTriggerQueueCheck; 
@property (copy) NSNumber * userIdentifier; 
-(NSArray *)rangesToLoad;
-(NSArray *)payments;
-(BOOL)loadFromPropertyList:(id)arg1 ;
-(NSData *)appReceipt;
-(BOOL)shouldTriggerQueueCheck;
-(BOOL)_ntsLoadFromPropertyList:(id)arg1 ;
-(id)_dsidFromDictionary:(id)arg1 ;
-(id)_copyPaymentsFromDictionary:(id)arg1 ;
-(id)_copyAppReceiptFromDictionary:(id)arg1 ;
-(id)initWithRequestType:(long long)arg1 ;
-(void)appendResponse:(id)arg1 ;
-(long long)serverPaymentCount;
-(void)setServerPaymentCount:(long long)arg1 ;
-(void)setPayments:(NSArray *)arg1 ;
-(void)setRangesToLoad:(NSArray *)arg1 ;
-(void)setShouldTriggerQueueCheck:(BOOL)arg1 ;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)userIdentifier;
-(void)dealloc;
-(long long)requestType;
@end

