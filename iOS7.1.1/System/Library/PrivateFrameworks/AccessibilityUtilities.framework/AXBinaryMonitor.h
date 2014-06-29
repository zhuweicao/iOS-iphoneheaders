/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXBinaryMonitor : NSObject {

	NSMutableDictionary* _bundleHandlerMap;
	NSMutableDictionary* _frameworkHandlerMap;
	NSMutableDictionary* _dylibHandlerMap;

}

@property (nonatomic,retain) NSMutableDictionary * bundleHandlerMap;                 //@synthesize bundleHandlerMap=_bundleHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameworkHandlerMap;              //@synthesize frameworkHandlerMap=_frameworkHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dylibHandlerMap;                  //@synthesize dylibHandlerMap=_dylibHandlerMap - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)setBundleHandlerMap:(id)arg1 ;
-(void)setFrameworkHandlerMap:(id)arg1 ;
-(void)setDylibHandlerMap:(id)arg1 ;
-(void)_addHandler:(/*^block*/ id)arg1 withName:(id)arg2 toMap:(id*)arg3 ;
-(void)_handleLoadedImagePath:(id)arg1 ;
-(bool)_loadImageIsFramework:(id)arg1 ;
-(id)_frameworkNameForImage:(id)arg1 ;
-(id)frameworkHandlerMap;
-(bool)_loadImageIsBundle:(id)arg1 ;
-(id)_bundleNameForImage:(id)arg1 ;
-(id)bundleHandlerMap;
-(bool)_loadImageIsDylib:(id)arg1 ;
-(id)_dylibNameForImage:(id)arg1 ;
-(id)dylibHandlerMap;
-(void)addHandler:(/*^block*/ id)arg1 forBundleID:(id)arg2 ;
-(void)addHandler:(/*^block*/ id)arg1 forBundleName:(id)arg2 ;
-(void)addHandler:(/*^block*/ id)arg1 forFramework:(id)arg2 ;
-(void)addHandler:(/*^block*/ id)arg1 forDylib:(id)arg2 ;
@end
