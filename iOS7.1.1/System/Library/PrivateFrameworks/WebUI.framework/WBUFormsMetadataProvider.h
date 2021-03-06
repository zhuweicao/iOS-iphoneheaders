/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSFormsMetadataProvider.h>

@class NSArray;

@interface WBUFormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {

	NSArray* _framesForAllForms;
	NSArray* _metadataForAllForms;

}

@property (nonatomic,readonly) unsigned long long formCount; 
+(id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
-(void)dealloc;
-(id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
-(void)enumerateFormsUsingBlock:(/*^block*/ id)arg1 ;
-(unsigned long long)formCount;
@end

