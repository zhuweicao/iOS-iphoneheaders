/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <GeoServices/PBRequesterDelegate.h>

@interface CRLocationCollectionDelegate : NSObject <PBRequesterDelegate> {

	CLCollectionRequester* fRequester;

}
-(id)initWithRequester:(CLCollectionRequester*)arg1 ;
-(void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 ;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
@end

