/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCInstallerReader.h>
#import <profiled/MCInteractionClientDelegate.h>

@class NSMutableArray, NSDictionary, NSMutableDictionary;

@interface MCInstaller : MCInstallerReader <MCInteractionClientDelegate> {

	NSMutableArray* _queuedProfiles;
	NSMutableArray* _queuedProvisioningProfiles;
	NSDictionary* _currentlyInstallingRestrictions;
	NSMutableDictionary* _setAsideAccountIdentifiersByPayloadClass;

}

@property (nonatomic,retain) NSMutableDictionary * setAsideAccountIdentifiersByPayloadClass;              //@synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass - In the implementation block
+(id)sharedInstaller;
+(id)_installationFailureErrorWithUnderlyingError:(id)arg1 ;
+(void)_setPathsProfileStorageDirectory:(id)arg1 ;
-(void)recomputeProfileRestrictions;
-(id)popProfileDataAtHeadOfInstallationQueue;
-(id)popProvisioningProfileDataAtHeadOfInstallationQueue;
-(id)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(BOOL)queueProvisioningProfileDataForInstallation:(id)arg1 outError:(id*)arg2 ;
-(void)removeAllProfilesFromInstallationQueue;
-(id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(id)_badProvisioningProfileError;
-(BOOL)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned)arg3 outError:(id*)arg4 ;
-(id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1 ;
-(id)pathToInstalledProfileByIdentifier:(id)arg1 ;
-(id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1 ;
-(void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2 ;
-(id)_userCancelledErrorWithFriendlyName:(id)arg1 ;
-(id)_invalidInputError;
-(void)setSetAsideAccountIdentifiersByPayloadClass:(id)arg1 ;
-(id)_installedProfileWithIdentifier:(id)arg1 ;
-(BOOL)_checkForMDMReplacementNewProfile:(id)arg1 options:(id)arg2 outIsMDMReplacement:(BOOL*)arg3 oldProfile:(id)arg4 client:(id)arg5 outError:(id*)arg6 ;
-(BOOL)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(BOOL)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(id)_managingProfileIdentifierForProfileIdentifier:(id)arg1 ;
-(void)_removeOrphanedResources;
-(id)setAsideAccountIdentifiersByPayloadClass;
-(id)_malformedPayloadError;
-(id)_deviceLockedError;
-(id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2 ;
-(id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(id)_profileNotEligibleErrorWithProfile:(id)arg1 ;
-(void)_reallyRemoveProfileWithIdentifier:(id)arg1 ;
-(id)pathToInstalledProfileByUUID:(id)arg1 ;
-(id)init;
-(void)cleanUp;
-(id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 ;
-(void).cxx_destruct;
@end

