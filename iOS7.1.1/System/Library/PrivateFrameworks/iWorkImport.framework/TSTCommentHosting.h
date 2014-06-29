/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAnnotationHosting.h>

@class TSDCommentStorage, TSTTableInfo, TSKAnnotationAuthor, NSDate, NSString;

@interface TSTCommentHosting : NSObject <TSDAnnotationHosting> {

	TSDCommentStorage* mStorage;
	bool _forRollover;
	SCD_Struct_TS267 mCellID;
	TSTTableInfo* mTableInfo;

}

@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) SCD_Struct_TS267 cellID; 
@property (getter=isForRollover,nonatomic,readonly) bool forRollover;              //@synthesize forRollover=_forRollover - In the implementation block
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) <TSKModel> * model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
-(id)storage;
-(void)setStorage:(id)arg1 ;
-(Class)editorClass;
-(void)commitText:(id)arg1 ;
-(id)commandForDeletingComment;
-(int)annotationDisplayStringType;
-(id)tableInfo;
-(id)initWithStorage:(id)arg1 forTableInfo:(id)arg2 cellID:(SCD_Struct_TS267)arg3 ;
-(bool)isForRollover;
-(SCD_Struct_TS267)cellID;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)date;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)model;
-(void)setModel:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(id)author;
-(int)annotationType;
@end
