/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * objects; 
+(id)addResultObjects;
+(id)addResultObjectsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)objects;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setObjects:(NSArray *)arg1 ;
@end

