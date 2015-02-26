/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCardMediaObject.h>

@class ABVCardRecord, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {

	ABVCardRecord* _vCard;
	UIImage* _vCardImage;

}

@property (nonatomic,retain) ABVCardRecord * vCard;              //@synthesize vCard=_vCard - In the implementation block
@property (nonatomic,retain) UIImage * vCardImage;               //@synthesize vCardImage=_vCardImage - In the implementation block
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned long long)arg1 ;
-(id)icon;
-(void)dealloc;
-(id)title;
-(id)subtitle;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)bbSize;
-(ABVCardRecord *)vCard;
-(id)vCardImageOfSize:(CGSize)arg1 ;
-(Class)coloredBalloonViewClass;
-(void)setVCard:(ABVCardRecord *)arg1 ;
-(UIImage *)vCardImage;
-(void)setVCardImage:(UIImage *)arg1 ;
-(int)mediaType;
@end
