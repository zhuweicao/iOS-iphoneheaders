/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@protocol CPGraphicUser;
@class CPTextLine, CPParagraph, CPChunk;

@interface CPGraphicObject : CPChunk {

	unsigned clipIndex;
	CGRect renderedBounds;
	BOOL isInZoneBorder;
	int zoneGraphicType;
	CPTextLine* anchoringTextLine;
	CPParagraph* anchoringParagraph;
	CPChunk*<CPGraphicUser> user;

}

@property (assign,nonatomic) unsigned clipIndex; 
@property (nonatomic,retain) CPParagraph * anchoringParagraph; 
-(void)dealloc;
-(id)init;
-(BOOL)isVisible;
-(void)setUser:(id)arg1 ;
-(id)user;
-(void)setClipIndex:(unsigned)arg1 ;
-(CGRect)renderedBounds;
-(unsigned short)unicode;
-(BOOL)isNarrow;
-(BOOL)canBeContainer;
-(BOOL)isIndivisible;
-(BOOL)isInZoneBorder;
-(void)setIsInZoneBorder:(BOOL)arg1 ;
-(int)zoneGraphicType;
-(void)setZoneGraphicType:(int)arg1 ;
-(void)setAnchoringTextLine:(id)arg1 ;
-(id)anchoringTextLine;
-(unsigned)clipIndex;
-(CPParagraph *)anchoringParagraph;
-(void)setAnchoringParagraph:(CPParagraph *)arg1 ;
@end

