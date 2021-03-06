/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVMediaSelectionOption.h>

@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSString* _optionMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	bool _displaysNonForcedSubtitles;

}
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_groupMediaType;
-(id)_groupID;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
-(bool)hasMediaCharacteristic:(id)arg1 ;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)mediaSubTypes;
-(bool)isPlayable;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionary;
-(id)locale;
-(id)group;
-(id)commonMetadata;
-(id)mediaType;
@end

