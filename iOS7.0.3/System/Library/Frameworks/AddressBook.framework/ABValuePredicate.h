/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@protocol NSObject;
@class NSArray, NSObject;

@interface ABValuePredicate : ABPredicate {

	int _property;
	long _comparison;
	<NSObject>* _value;
	NSArray* _orderedKeys;
	BOOL _dictionaryValue;

}

@property (assign,nonatomic) int property;                 //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) long comparison;              //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,copy) NSObject * value;               //@synthesize value=_value - In the implementation block
+(id)stringForComparison:(id)arg1 withComparision:(long)arg2 ;
-(id)queryWhereString;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(BOOL)arg1 ;
-(id)querySelectProperties;
-(BOOL)_shouldConsultIndexForKey:(id)arg1 ;
-(BOOL)_supportsFTSSearch;
-(id)_ftsTermStringForString:(id)arg1 ;
-(id)stringForComparison:(id)arg1 ;
-(id)_ftsAllQueryStrings;
-(id)_ftsTokenizedTermStringForString:(id)arg1 ;
-(int)property;
-(id)predicateFormat;
-(void)setProperty:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(void)setValue:(id)arg1 ;
-(id)value;
-(long)comparison;
-(void)setComparison:(long)arg1 ;
@end

