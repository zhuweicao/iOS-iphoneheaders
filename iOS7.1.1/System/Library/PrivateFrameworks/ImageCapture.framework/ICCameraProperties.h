/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject {

	NSString* _volumePath;
	bool _ejectable;
	bool _beingEjected;
	bool _locked;
	bool _allowsSyncingClock;
	unsigned long long _contentCatalogPercentCompleted;
	bool _batteryLevelAvailable;
	unsigned long long _batteryLevel;
	NSMutableArray* _contents;
	NSMutableArray* _mediaFiles;
	NSMutableArray* _toBeNotifiedAddedItems;
	int _contentsLock;
	int _mediaFilesLock;
	double _timeOffset;
	unsigned long long _estimatedNumberOfDownloadableItems;
	unsigned long long _numberOfDownloadableItems;
	bool _contentReceived;
	double _downloadCancelTimestamp;
	dispatch_queue_sRef _thumbnailFetchQ;
	dispatch_queue_sRef _metadataFetchQ;
	dispatch_queue_sRef _downloadQ;
	dispatch_queue_sRef _generalQ;
	dispatch_semaphore_sRef _deviceQSemaphore;
	bool _accessRestrictedAppleDevice;

}

@property (retain) NSString * volumePath;                                              //@synthesize volumePath=_volumePath - In the implementation block
@property (assign) bool ejectable;                                                     //@synthesize ejectable=_ejectable - In the implementation block
@property (assign) bool beingEjected;                                                  //@synthesize beingEjected=_beingEjected - In the implementation block
@property (assign) bool locked;                                                        //@synthesize locked=_locked - In the implementation block
@property (assign) bool allowsSyncingClock;                                            //@synthesize allowsSyncingClock=_allowsSyncingClock - In the implementation block
@property (assign) unsigned long long contentCatalogPercentCompleted;                  //@synthesize contentCatalogPercentCompleted=_contentCatalogPercentCompleted - In the implementation block
@property (assign) bool batteryLevelAvailable;                                         //@synthesize batteryLevelAvailable=_batteryLevelAvailable - In the implementation block
@property (assign) unsigned long long batteryLevel;                                    //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (retain) NSMutableArray * contents;                                          //@synthesize contents=_contents - In the implementation block
@property (retain) NSMutableArray * mediaFiles;                                        //@synthesize mediaFiles=_mediaFiles - In the implementation block
@property (retain) NSMutableArray * toBeNotifiedAddedItems;                            //@synthesize toBeNotifiedAddedItems=_toBeNotifiedAddedItems - In the implementation block
@property (assign) int mediaFilesLock;                                                 //@synthesize mediaFilesLock=_mediaFilesLock - In the implementation block
@property (assign) int contentsLock;                                                   //@synthesize contentsLock=_contentsLock - In the implementation block
@property (assign) double timeOffset;                                                  //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign) unsigned long long estimatedNumberOfDownloadableItems;              //@synthesize estimatedNumberOfDownloadableItems=_estimatedNumberOfDownloadableItems - In the implementation block
@property (assign) unsigned long long numberOfDownloadableItems;                       //@synthesize numberOfDownloadableItems=_numberOfDownloadableItems - In the implementation block
@property (assign) bool contentReceived;                                               //@synthesize contentReceived=_contentReceived - In the implementation block
@property (assign) double downloadCancelTimestamp;                                     //@synthesize downloadCancelTimestamp=_downloadCancelTimestamp - In the implementation block
@property (assign) dispatch_queue_sRef thumbnailFetchQ;                                //@synthesize thumbnailFetchQ=_thumbnailFetchQ - In the implementation block
@property (assign) dispatch_queue_sRef metadataFetchQ;                                 //@synthesize metadataFetchQ=_metadataFetchQ - In the implementation block
@property (assign) dispatch_queue_sRef downloadQ;                                      //@synthesize downloadQ=_downloadQ - In the implementation block
@property (assign) dispatch_queue_sRef generalQ;                                       //@synthesize generalQ=_generalQ - In the implementation block
@property (assign) dispatch_semaphore_sRef deviceQSemaphore;                           //@synthesize deviceQSemaphore=_deviceQSemaphore - In the implementation block
@property (assign) bool accessRestrictedAppleDevice;                                   //@synthesize accessRestrictedAppleDevice=_accessRestrictedAppleDevice - In the implementation block
-(void)dealloc;
-(id)contents;
-(double)timeOffset;
-(void)setContents:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setLocked:(bool)arg1 ;
-(unsigned long long)batteryLevel;
-(void)setVolumePath:(id)arg1 ;
-(void)setMediaFiles:(id)arg1 ;
-(void)setToBeNotifiedAddedItems:(id)arg1 ;
-(void)lockMediaFiles;
-(void)unlockMediaFiles;
-(void)lockContents;
-(void)unlockContents;
-(id)volumePath;
-(bool)ejectable;
-(void)setEjectable:(bool)arg1 ;
-(bool)beingEjected;
-(void)setBeingEjected:(bool)arg1 ;
-(bool)allowsSyncingClock;
-(void)setAllowsSyncingClock:(bool)arg1 ;
-(void)setContentCatalogPercentCompleted:(unsigned long long)arg1 ;
-(bool)batteryLevelAvailable;
-(void)setBatteryLevelAvailable:(bool)arg1 ;
-(id)toBeNotifiedAddedItems;
-(int)mediaFilesLock;
-(void)setMediaFilesLock:(int)arg1 ;
-(int)contentsLock;
-(void)setContentsLock:(int)arg1 ;
-(void)setEstimatedNumberOfDownloadableItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDownloadableItems;
-(void)setNumberOfDownloadableItems:(unsigned long long)arg1 ;
-(bool)contentReceived;
-(void)setContentReceived:(bool)arg1 ;
-(double)downloadCancelTimestamp;
-(void)setDownloadCancelTimestamp:(double)arg1 ;
-(dispatch_queue_sRef)thumbnailFetchQ;
-(void)setThumbnailFetchQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_queue_sRef)metadataFetchQ;
-(void)setMetadataFetchQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_queue_sRef)downloadQ;
-(void)setDownloadQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_queue_sRef)generalQ;
-(void)setGeneralQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_semaphore_sRef)deviceQSemaphore;
-(void)setDeviceQSemaphore:(dispatch_semaphore_sRef)arg1 ;
-(bool)accessRestrictedAppleDevice;
-(void)setAccessRestrictedAppleDevice:(bool)arg1 ;
-(bool)locked;
-(unsigned long long)estimatedNumberOfDownloadableItems;
-(unsigned long long)contentCatalogPercentCompleted;
-(id)mediaFiles;
-(void)setBatteryLevel:(unsigned long long)arg1 ;
-(void)finalize;
@end
