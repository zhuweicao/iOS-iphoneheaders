/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TPPageController.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@class TPTextWrapController;

@interface TPPaginatedPageController : TPPageController <TSKChangeSourceObserver> {

	TPTextWrapController* _wrapController;

}
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id)textWrapper;
-(bool)isPaginated;
-(unsigned long long)pageIndexFromCanvasPoint:(CGPoint)arg1 ;
-(CGRect)pageRectForPageIndex:(unsigned long long)arg1 ;
-(Class)p_pageInfoClass;
-(CGPoint)pageOriginForPageIndex:(unsigned long long)arg1 ;
-(void)p_performWithCachedPageLayouts:(/*^block*/ id)arg1 ;
-(void)p_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(bool)arg3 ;
-(void)processHeaderFooterPropertyChanged:(id)arg1 changeSource:(id)arg2 ;
-(NSRange)p_pageRangeAffectedByInfo:(id)arg1 ;
-(unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1 ;
-(void)d_toggleWrapAnimation;
-(CGSize)canvasSizeToFitAllPages;
-(void)dealloc;
-(CGSize)pageSize;
-(void)teardown;
@end

