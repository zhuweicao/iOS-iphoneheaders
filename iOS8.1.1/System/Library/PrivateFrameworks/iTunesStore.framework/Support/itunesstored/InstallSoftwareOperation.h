/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SoftwareProperties;

@interface InstallSoftwareOperation : ISOperation {

	SoftwareProperties* _softwareProperties;

}

@property (readonly) SoftwareProperties * softwareProperties; 
-(BOOL)_installPackage:(id*)arg1 ;
-(id)_newInstallationOptions;
-(id)initWithSoftwareProperties:(id)arg1 ;
-(SoftwareProperties *)softwareProperties;
-(void)dealloc;
-(void)run;
@end

