/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SUScanOptions, SUDescriptor, NSError;

@interface SUScanRequest : NSObject {

	SUScanOptions* _options;
	/*^block*/ id _callback;
	SUDescriptor* _result;
	NSError* _error;

}

@property (nonatomic,retain) SUScanOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id callback;                            //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) SUDescriptor * result;                //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                      //@synthesize error=_error - In the implementation block
-(/*^block*/ id)callback;
-(void)setError:(id)arg1 ;
-(void)setCallback:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(void)setResult:(id)arg1 ;
-(id)result;
-(id)error;
@end

