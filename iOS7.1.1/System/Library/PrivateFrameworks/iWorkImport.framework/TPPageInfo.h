/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDContainerInfo.h>

@protocol TPPageLayoutInfoProvider;
@class TPDocumentRoot, TPBodyInfo, TSDInfoGeometry;

@interface TPPageInfo : NSObject <TSDContainerInfo> {

	TPDocumentRoot* _documentRoot;
	unsigned long long _pageIndex;
	TPBodyInfo* _bodyInfo;
	<TPPageLayoutInfoProvider>* _layoutInfoProvider;

}

@property (nonatomic,readonly) unsigned long long pageIndex;                                            //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,readonly) TPBodyInfo * bodyInfo;                                                   //@synthesize bodyInfo=_bodyInfo - In the implementation block
@property (nonatomic,readonly) TPDocumentRoot * documentRoot;                                           //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,readonly) <TPPageLayoutInfoProvider> * layoutInfoProvider;                         //@synthesize layoutInfoProvider=_layoutInfoProvider - In the implementation block
@property (assign,nonatomic) bool matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject<TSDContainerInfo> * parentInfo; 
@property (assign,nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment; 
@property (nonatomic,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) bool floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) bool anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) bool inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) bool attachedToBodyText; 
-(id)copyWithContext:(id)arg1 ;
-(bool)isThemeContent;
-(id)parentInfo;
-(Class)repClass;
-(id)owningAttachment;
-(id)childInfos;
-(void)setParentInfo:(id)arg1 ;
-(void)setOwningAttachment:(id)arg1 ;
-(id)owningAttachmentNoRecurse;
-(bool)isFloatingAboveText;
-(bool)isAnchoredToText;
-(bool)isInlineWithText;
-(bool)isAttachedToBodyText;
-(id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3 ;
-(id)bodyInfo;
-(id)layoutInfoProvider;
-(void)dealloc;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(unsigned long long)pageIndex;
-(id)documentRoot;
-(Class)layoutClass;
@end
