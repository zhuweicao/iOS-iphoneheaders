/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface MSASPendingChanges : NSObject {

	NSMutableSet* _pendingAlbumGUIDsWithKeyValueChanges;
	NSMutableSet* _pendingAlbumChanges;
	NSMutableSet* _pendingAlbumGUIDsWithSharingInfoChanges;
	NSMutableDictionary* _pendingAlbumGUIDToAssetCollections;

}

@property (nonatomic,retain) NSMutableSet * pendingAlbumGUIDsWithKeyValueChanges;                   //@synthesize pendingAlbumGUIDsWithKeyValueChanges=_pendingAlbumGUIDsWithKeyValueChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAlbumChanges;                                    //@synthesize pendingAlbumChanges=_pendingAlbumChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAlbumGUIDsWithSharingInfoChanges;                //@synthesize pendingAlbumGUIDsWithSharingInfoChanges=_pendingAlbumGUIDsWithSharingInfoChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingAlbumGUIDToAssetCollections;              //@synthesize pendingAlbumGUIDToAssetCollections=_pendingAlbumGUIDToAssetCollections - In the implementation block
-(void).cxx_destruct;
-(id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3 ;
-(void)removePendingKeyValueChangesForAlbumGUID:(id)arg1 ;
-(void)addPendingChangesForAlbumGUID:(id)arg1 ;
-(void)removePendingChangesForAlbumGUID:(id)arg1 ;
-(void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2 ;
-(void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2 ;
-(void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1 ;
-(bool)hasPendingChanges;
-(id)pendingAlbumGUIDsWithKeyValueChanges;
-(void)setPendingAlbumGUIDsWithKeyValueChanges:(id)arg1 ;
-(id)pendingAlbumChanges;
-(void)setPendingAlbumChanges:(id)arg1 ;
-(id)pendingAlbumGUIDsWithSharingInfoChanges;
-(void)setPendingAlbumGUIDsWithSharingInfoChanges:(id)arg1 ;
-(id)pendingAlbumGUIDToAssetCollections;
-(void)setPendingAlbumGUIDToAssetCollections:(id)arg1 ;
@end

