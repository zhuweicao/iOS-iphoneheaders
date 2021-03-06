/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDArrangeInspectorDelegate.h>

@protocol TSDCanvasEditor;
@class NSObject;

@interface TSDDrawableZOrderArranger : NSObject <TSDArrangeInspectorDelegate> {

	NSObject<TSDCanvasEditor>* mCanvasEditor;
	BOOL mCanCoalesceZOrderCommand;

}
-(id)initWithCanvasEditor:(id)arg1 ;
-(unsigned)p_minIndex;
-(unsigned)p_maxIndex;
-(unsigned)p_zOrderIndex;
-(id)p_zOrderSelection;
-(id)commandToSetZOrderOfInfos:(id)arg1 toIndexes:(id)arg2 coalesceable:(BOOL)arg3 ;
-(unsigned)currentZValueForArrangeInspector;
-(unsigned)minZValueForArrangeInspector;
-(void)arrangeInspectorWillBeginChangingZValue:(unsigned)arg1 ;
-(void)arrangeInspectorDidSetZValue:(unsigned)arg1 ;
-(void)arrangeInspectorDidEndChangingZValue:(unsigned)arg1 ;
-(unsigned)maxZValueForArrangeInspector;
-(id)p_zOrderSiblings;
-(void)moveToBackForArrangeInspector;
-(void)moveBackForArrangeInspector;
-(void)moveFrontForArrangeInspector;
-(void)moveToFrontForArrangeInspector;
-(BOOL)shouldShowWrapOptionsForSelectedDrawables;
@end

