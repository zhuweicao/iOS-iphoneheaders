/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest {

	/*^block*/id _notificationMarkedReadProgressBlock;
	NSArray* _notificationIDs;
	NSMutableDictionary* _notificationIDsByRequestID;

}

@property (nonatomic,copy) id notificationMarkedReadProgressBlock;                          //@synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * notificationIDs;                                     //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationIDsByRequestID;              //@synthesize notificationIDsByRequestID=_notificationIDsByRequestID - In the implementation block
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)notificationIDs;
-(id)initWithNotificationIDsToMarkRead:(id)arg1 ;
-(void)setNotificationMarkedReadProgressBlock:(id)arg1 ;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(NSMutableDictionary *)notificationIDsByRequestID;
-(void)setNotificationIDsByRequestID:(NSMutableDictionary *)arg1 ;
-(id)notificationMarkedReadProgressBlock;
-(int)operationType;
@end

