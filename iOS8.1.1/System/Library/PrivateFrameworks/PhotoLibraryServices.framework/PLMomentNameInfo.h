/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLRevGeoCompoundNameInfo, NSArray;

@interface PLMomentNameInfo : NSObject {

	BOOL _locationInfoIsValid;
	PLRevGeoCompoundNameInfo* __primaryNameInfo;
	PLRevGeoCompoundNameInfo* __secondaryNameInfo;
	NSArray* __orderedNames;

}

@property (nonatomic,retain) PLRevGeoCompoundNameInfo * _primaryNameInfo;                   //@synthesize _primaryNameInfo=__primaryNameInfo - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * _secondaryNameInfo;                 //@synthesize _secondaryNameInfo=__secondaryNameInfo - In the implementation block
@property (setter=_setOrderedNames:,nonatomic,retain) NSArray * _orderedNames;              //@synthesize _orderedNames=__orderedNames - In the implementation block
+(id)_localizedNameForName:(id)arg1 ;
-(void)dealloc;
-(void)_setOrderedNames:(id)arg1 ;
-(id)componentsForPrimaryTitle;
-(id)initWithMoment:(id)arg1 ;
-(id)initWithMomentList:(id)arg1 ;
-(BOOL)locationInfoIsValid;
-(id)localizedPrimaryTitle;
-(id)componentsForSecondaryTitle;
-(PLRevGeoCompoundNameInfo *)_primaryNameInfo;
-(void)set_primaryNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(PLRevGeoCompoundNameInfo *)_secondaryNameInfo;
-(void)set_secondaryNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(NSArray *)_orderedNames;
@end
