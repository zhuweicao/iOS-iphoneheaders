/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLIndexMappingCache <NSObject>
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
@optional
-(id)currentStateForChange;

@required
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;

@end

