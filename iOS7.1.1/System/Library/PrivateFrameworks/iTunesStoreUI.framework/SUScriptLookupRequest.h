/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSLookupRequest, NSString;

@interface SUScriptLookupRequest : SUScriptObject {

	SSLookupRequest* _request;

}

@property (retain) id authenticatesIfNeeded; 
@property (copy) NSString * keyProfile; 
@property (assign) long long localizationStyle; 
@property (readonly) long long localizationStyleDevice; 
@property (readonly) long long localizationStyleServer; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setKeyProfile:(id)arg1 ;
-(void)setLocalizationStyle:(long long)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)keyProfile;
-(long long)localizationStyle;
-(void)startWithLookupFunction:(id)arg1 ;
-(id)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(id)arg1 ;
-(long long)localizationStyleDevice;
-(long long)localizationStyleServer;
@end

