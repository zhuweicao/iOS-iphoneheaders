/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate {

	ML3Predicate* _predicate;

}

@property (nonatomic,retain) ML3Predicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(id)predicateWithPredicate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPredicate:(id)arg1 ;
-(void).cxx_destruct;
-(id)predicate;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(id)databaseStatementParameters;
-(id)predicateOptimizedForEntityClass:(Class)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
@end

