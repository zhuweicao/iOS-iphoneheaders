/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MicroPaymentProduct : NSObject {

	long long _contentSize;
	NSString* _contentVersion;
	BOOL _hosted;
	NSString* _localeIdentifier;
	NSString* _localizedDescription;
	NSString* _localizedTitle;
	NSNumber* _price;
	NSString* _productIdentifier;

}

@property (assign,nonatomic) long long contentSize;                      //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy) NSString * contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                //@synthesize hosted=_hosted - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                  //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSNumber * price;                             //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                 //@synthesize productIdentifier=_productIdentifier - In the implementation block
-(id)copyProduct;
-(void)setContentVersion:(id)arg1 ;
-(void)setLocalizedDescription:(id)arg1 ;
-(BOOL)isHosted;
-(void)setHosted:(BOOL)arg1 ;
-(id)price;
-(id)productIdentifier;
-(id)contentVersion;
-(void)setProductIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(long long)contentSize;
-(void)setContentSize:(long long)arg1 ;
-(id)localeIdentifier;
-(id)localizedDescription;
-(id)localizedTitle;
-(void)setLocalizedTitle:(id)arg1 ;
-(void)setPrice:(id)arg1 ;
-(void)setLocaleIdentifier:(id)arg1 ;
@end

