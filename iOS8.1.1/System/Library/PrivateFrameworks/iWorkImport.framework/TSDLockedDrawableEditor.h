/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDDrawableEditor.h>

@class TSDDrawableEditor;

@interface TSDLockedDrawableEditor : TSDDrawableEditor {

	TSDDrawableEditor* mAuxiliaryDrawableEditor;

}

@property (nonatomic,retain) TSDDrawableEditor * auxiliaryDrawableEditor; 
-(void)p_unlock:(id)arg1 ;
-(TSDDrawableEditor *)auxiliaryDrawableEditor;
-(void)setAuxiliaryDrawableEditor:(TSDDrawableEditor *)arg1 ;
-(void)dealloc;
@end

