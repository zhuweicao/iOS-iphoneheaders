/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFPStringFormat : NSObject {

	int mAlignment;
	unsigned short mDigitSubstitutionLanguage;
	int mDigitSubstitutionMethod;
	unsigned mFormatFlags;
	int mHotkeyPrefix;
	int mLineAlignment;
	float mFirstTabOffset;
	int mTabStopCount;
	float* mTabStops;
	int mTrimming;

}
-(void)dealloc;
-(id)init;
-(void)setAlignment:(int)arg1 ;
-(int)alignment;
-(int)tabStopCount;
-(const float*)tabStops;
-(void)setFormatFlags:(unsigned)arg1 ;
-(void)setLineAlignment:(int)arg1 ;
-(void)setDigitSubstitutionLanguage:(unsigned short)arg1 ;
-(void)setDigitSubstitutionMethod:(int)arg1 ;
-(void)setFirstTabOffset:(float)arg1 ;
-(void)setHotkeyPrefix:(int)arg1 ;
-(void)setTrimming:(int)arg1 ;
-(void)setTabStops:(const float*)arg1 count:(int)arg2 ;
-(float)firstTabOffset;
-(unsigned)formatFlags;
-(int)lineAlignment;
-(int)trimming;
-(unsigned short)digitSubstitutionLanguage;
-(int)digitSubstitutionMethod;
-(int)hotkeyPrefix;
@end

