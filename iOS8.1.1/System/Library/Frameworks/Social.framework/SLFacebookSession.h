/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLFacebookRemoteSessionProtocol;
@interface SLFacebookSession : NSObject {

	id<SLFacebookRemoteSessionProtocol> _remoteSession;

}
+(id)_remoteInterface;
+(id)sharedSession;
-(BOOL)uploadPost:(id)arg1 forPID:(int)arg2 ;
-(void)injectCompletedUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)uploadPost:(id)arg1 suppressAlerts:(BOOL)arg2 withPostCompletion:(/*^block*/id)arg3 ;
-(void)uploadsInProgress:(/*^block*/id)arg1 ;
-(void)cancelUploadWithIdentifier:(id)arg1 ;
-(void)revokeAccessTokenForAppWithID:(id)arg1 ;
-(id)tokenSecretForEntitledClientWithError:(id*)arg1 ;
-(void)testCall;
-(BOOL)uploadPost:(id)arg1 ;
-(void)revokeAllAccessTokensForDevice;
-(BOOL)uploadProfilePicture:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)likeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unlikeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

