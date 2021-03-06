/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument, WDText;

@interface WDSection : NSObject {

	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDDocument* mDocument;
	WDText* mText;
	WDText* mEvenPageHeader;
	WDText* mOddPageHeader;
	WDText* mFirstPageHeader;
	WDText* mEvenPageFooter;
	WDText* mOddPageFooter;
	WDText* mFirstPageFooter;
	SCD_Struct_WD65 mOriginalProperties;
	SCD_Struct_WD65 mTrackedProperties;

}
-(void)dealloc;
-(id)text;
-(void)setRightMargin:(long long)arg1 ;
-(id).cxx_construct;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(long long)rightMargin;
-(unsigned short)columnCount;
-(void)setColumnCount:(unsigned short)arg1 ;
-(long long)leftMargin;
-(long long)topMargin;
-(long long)headerMargin;
-(long long)bottomMargin;
-(bool)isPageWidthOverridden;
-(long long)pageWidth;
-(bool)isPageHeightOverridden;
-(long long)pageHeight;
-(bool)isBreakTypeOverridden;
-(int)breakType;
-(bool)isLeftMarginOverridden;
-(bool)isRightMarginOverridden;
-(bool)isTopMarginOverridden;
-(id)firstPageHeader;
-(id)oddPageHeader;
-(bool)isBottomMarginOverridden;
-(bool)isBottomBorderOverridden;
-(id)bottomBorder;
-(bool)isTitlePageOverridden;
-(bool)titlePage;
-(void)setTopMargin:(long long)arg1 ;
-(void)setLeftMargin:(long long)arg1 ;
-(void)setPageHeight:(long long)arg1 ;
-(id)evenPageHeader;
-(id)firstPageFooter;
-(id)oddPageFooter;
-(id)evenPageFooter;
-(bool)isTopBorderOverridden;
-(bool)isLeftBorderOverridden;
-(bool)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(void)setBottomMargin:(long long)arg1 ;
-(void)setHeaderMargin:(long long)arg1 ;
-(void)setFooterMargin:(long long)arg1 ;
-(long long)footerMargin;
-(void)setTextDirection:(int)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChanged:(bool)arg1 ;
-(int)resolveMode;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(void)setBreakType:(int)arg1 ;
-(void)setPageWidth:(long long)arg1 ;
-(void)setPageOrientation:(int)arg1 ;
-(void)setGutterMargin:(long long)arg1 ;
-(void)setBorderDepth:(int)arg1 ;
-(void)setBorderDisplay:(int)arg1 ;
-(void)setBorderOffset:(int)arg1 ;
-(void)setLineNumberStart:(short)arg1 ;
-(void)setLineNumberIncrement:(unsigned short)arg1 ;
-(void)setLineNumberDistance:(short)arg1 ;
-(void)setLineNumberRestart:(int)arg1 ;
-(void)setPageNumberFormat:(int)arg1 ;
-(void)setPageNumberStart:(unsigned short)arg1 ;
-(void)setPageNumberRestart:(bool)arg1 ;
-(void)setChapterNumberSeparator:(int)arg1 ;
-(void)setColumnsEqualWidth:(bool)arg1 ;
-(bool)isColumnCountOverridden;
-(void)appendColumnWidth:(long long)arg1 ;
-(void)appendColumnSpace:(long long)arg1 ;
-(void)setColumnSpace:(long long)arg1 ;
-(void)setVerticalJustification:(int)arg1 ;
-(void)setTitlePage:(bool)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(bool)isPageOrientationOverridden;
-(int)pageOrientation;
-(bool)isHeaderMarginOverridden;
-(bool)isFooterMarginOverridden;
-(bool)isGutterMarginOverridden;
-(long long)gutterMargin;
-(bool)isBorderDepthOverridden;
-(int)borderDepth;
-(bool)isBorderDisplayOverridden;
-(int)borderDisplay;
-(bool)isBorderOffsetOverridden;
-(int)borderOffset;
-(bool)isLineNumberStartOverridden;
-(short)lineNumberStart;
-(bool)isLineNumberIncrementOverridden;
-(unsigned short)lineNumberIncrement;
-(bool)isLineNumberDistanceOverridden;
-(short)lineNumberDistance;
-(bool)isLineNumberRestartOverridden;
-(int)lineNumberRestart;
-(bool)isPageNumberFormatOverridden;
-(int)pageNumberFormat;
-(bool)isPageNumberStartOverridden;
-(unsigned short)pageNumberStart;
-(bool)isPageNumberRestartOverridden;
-(bool)pageNumberRestart;
-(bool)isChapterNumberSeparatorOverridden;
-(int)chapterNumberSeparator;
-(bool)isColumnsEqualWidthOverridden;
-(bool)columnsEqualWidth;
-(long long)columnWidthAt:(unsigned)arg1 ;
-(long long)columnSpaceAt:(unsigned)arg1 ;
-(bool)isColumnSpaceOverridden;
-(long long)columnSpace;
-(bool)isVerticalJustificationOverridden;
-(int)verticalJustification;
-(bool)isFormattingChangedOverridden;
-(bool)formattingChanged;
-(bool)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(bool)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(bool)isTextDirectionOverridden;
-(int)textDirection;
-(void)setPageScale:(unsigned)arg1 ;
-(unsigned)pageScale;
-(bool)isPageScaleOverridden;
-(bool)isLastColumnWidthDefined;
@end

