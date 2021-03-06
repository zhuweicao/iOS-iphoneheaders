/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebGeolocationProviderInitializationListener.h>

@protocol WebGeolocationProviderInitializationListener <NSObject>
@required
-(void)initializationAllowedWebView:(id)arg1 provider:(id)arg2;
-(void)initializationDeniedWebView:(id)arg1 provider:(id)arg2;
@end


@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener> {

	RefPtr<WebCore::Geolocation>* m_geolocation;

}
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)initWithGeolocation:(Geolocation*)arg1 ;
-(void)initializationAllowedWebView:(id)arg1 provider:(id)arg2 ;
-(void)initializationDeniedWebView:(id)arg1 provider:(id)arg2 ;
@end

