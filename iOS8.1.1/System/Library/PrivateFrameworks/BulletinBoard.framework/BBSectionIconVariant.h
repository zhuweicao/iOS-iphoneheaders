/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {

	BOOL _precomposed;
	long long _format;
	NSData* _imageData;
	NSString* _imagePath;
	NSString* _imageName;
	NSString* _bundlePath;

}

@property (assign,nonatomic) long long format;                                   //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imagePath;                                 //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                 //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,getter=isPrecomposed,nonatomic) BOOL precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_variantWithFormat:(long long)arg1 ;
+(id)variantWithFormat:(long long)arg1 imageData:(id)arg2 ;
+(id)variantWithFormat:(long long)arg1 imagePath:(id)arg2 ;
+(id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundlePath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPrecomposed;
-(void)setPrecomposed:(BOOL)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(long long)format;
-(void)setFormat:(long long)arg1 ;
-(NSString *)imageName;
-(NSString *)imagePath;
@end
