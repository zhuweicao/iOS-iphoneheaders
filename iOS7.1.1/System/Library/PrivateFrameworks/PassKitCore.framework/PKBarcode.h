/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {

	NSData* _messageData;
	NSDictionary* _options;
	long long _format;
	NSString* _altText;

}

@property (nonatomic,copy) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (assign) long long format;                            //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * altText;                  //@synthesize altText=_altText - In the implementation block
+(bool)supportsSecureCoding;
-(id)_imageFromBarcodeMessage;
-(id)_imageFromTextMessage;
-(id)image;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(id)messageData;
-(id)initWithBarcodeDictionary:(id)arg1 ;
-(id)altText;
-(void)setMessageData:(id)arg1 ;
-(void)setAltText:(id)arg1 ;
-(bool)isTall;
-(long long)format;
-(void)setFormat:(long long)arg1 ;
@end

