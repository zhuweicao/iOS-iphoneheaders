/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SLService : NSObject
+(id)allServices;
+(id)serviceForServiceType:(id)arg1 ;
-(void)addExtraParameters:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isFirstClassService;
-(long long)maximumURLCount;
-(long long)maximumImageCount;
-(long long)maximumImageDataSize;
-(long long)maximumVideoCount;
-(long long)maximumVideoDataSize;
-(long long)maximumVideoTimeLimit;
-(BOOL)supportsImageURL:(id)arg1 ;
-(BOOL)supportsVideoURL:(id)arg1 ;
-(id)composeViewController;
-(id)activityTitle;
-(id)activityImage;
-(id)accountType;
-(id)serviceType;
-(BOOL)hasAccounts;
@end
