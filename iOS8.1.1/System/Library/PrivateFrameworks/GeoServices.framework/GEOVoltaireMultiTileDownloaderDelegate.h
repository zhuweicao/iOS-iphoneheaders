/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOVoltaireMultiTileDownloaderDelegate
@required
-(void)tileDownloadFinished:(id)arg1;
-(void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned)arg3 forKey:(GEOTileKey)arg4;
-(void)tileDownload:(id)arg1 didFailWithError:(id)arg2;

@end

