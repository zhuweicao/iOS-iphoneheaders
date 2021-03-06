/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class ABFavoritesListManager;

@interface ABFavoritesList : NSObject {

	ABFavoritesListManager* _favoritesListManager;

}
+(id)sharedInstanceWithAddressBook:(void*)arg1 ;
+(id)sharedInstance;
-(id)initWithAddressBook:(void*)arg1 ;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(void)recacheIdentitiesSoon;
-(id)entriesForPerson:(void*)arg1 ;
-(id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)isFull;
-(void)addEntry:(id)arg1 ;
-(BOOL)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(BOOL)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(void)removeEntryAtIndex:(int)arg1 ;
-(void)moveEntryAtIndex:(int)arg1 toIndex:(int)arg2 ;
-(void)_applicationWillSuspend:(id)arg1 ;
-(void)save;
-(void)dealloc;
-(id)entries;
@end

