/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VKDebugSettings : NSObject {

	bool _paintMapTiles;
	bool _paintRoadBoundaries;
	bool _paintRoadTiles;
	bool _paintPointTiles;
	bool _paintPolygonTiles;
	bool _paintVertices;
	bool _paintJunctions;
	bool _paintCoastlines;
	bool _paintBuildingNormals;
	bool _disableRoute;
	bool _labelHighlighting;
	bool _labelCollisionEnabled;
	bool _paintRouteDebugMarkers;
	bool _dontMatchRouteLine;
	bool _dontMapMatchToSnappedRouteLine;
	bool _highlightUnmatchedRouteLine;
	bool _paintRoadSigns;
	bool _paintLabelBounds;
	bool _paintLabelRoadFeatures;
	bool _paintLabelCounts;
	bool _roadFattening;
	bool _hideDirectionalArrows;
	bool _paintTrafficSkeleton;
	bool _loadGreenTraffic;
	bool _paintRoadsStitchedByName;
	bool _realisticWireframeEnabled;
	bool _altitudePauseLoading;
	bool _altitudeShowTileBounds;
	bool _altitudeHighResSatellite;
	bool _altitudeMipmapSatellite;
	bool _altitudeMipmapFlyover;
	bool _altitudeShowNightLight;
	bool _altitudeNoTiltLimit;
	float _altitudeLodScale;
	float _altitudeAnimationSpinTime;
	float _altitudeTileQualityThreshold;
	float _altitudeForceGridTime;
	bool _altitudeProfilingEnabled;
	unsigned _altitudeProfilingType;
	unsigned _altitudeProfilingZones;
	NSString* _altitudeTelemetryURL;
	bool _dynamicMapModesEnabled;
	bool _isInstalledInLockScreen;
	bool _enableLoggingInLockScreen;
	bool _useBuildingShadowTexture;
	bool _drawContinuously;
	bool _layoutContinuously;
	bool _useOldLabels;
	bool _useTransactionManager;
	float _tourAnimationAltitude;
	float _tourAnimationStepDuration;
	float _tourAnimationCameraOffset;
	float _tourAnimationTilt;
	bool _trackingCameraAutoPitch;
	bool _debugStyleAnimations;
	bool _forceHiResBuildings;
	bool _forceDepthDependentBuildings;
	bool _readLandmarksFromDisk;
	bool _paintPoiTiles;
	bool _useStaticTrafficFeed;
	bool _disableStylesheetAnimations;

}

@property (assign,nonatomic) bool paintMapTiles;                               //@synthesize paintMapTiles=_paintMapTiles - In the implementation block
@property (assign,nonatomic) bool paintRoadBoundaries;                         //@synthesize paintRoadBoundaries=_paintRoadBoundaries - In the implementation block
@property (assign,nonatomic) bool paintRoadTiles;                              //@synthesize paintRoadTiles=_paintRoadTiles - In the implementation block
@property (assign,nonatomic) bool paintPoiTiles;                               //@synthesize paintPoiTiles=_paintPoiTiles - In the implementation block
@property (assign,nonatomic) bool paintPointTiles;                             //@synthesize paintPointTiles=_paintPointTiles - In the implementation block
@property (assign,nonatomic) bool paintPolygonTiles;                           //@synthesize paintPolygonTiles=_paintPolygonTiles - In the implementation block
@property (assign,nonatomic) bool paintVertices;                               //@synthesize paintVertices=_paintVertices - In the implementation block
@property (assign,nonatomic) bool paintJunctions;                              //@synthesize paintJunctions=_paintJunctions - In the implementation block
@property (assign,nonatomic) bool paintCoastlines;                             //@synthesize paintCoastlines=_paintCoastlines - In the implementation block
@property (assign,nonatomic) bool paintBuildingNormals;                        //@synthesize paintBuildingNormals=_paintBuildingNormals - In the implementation block
@property (assign,nonatomic) bool disableRoute;                                //@synthesize disableRoute=_disableRoute - In the implementation block
@property (assign,nonatomic) bool labelHighlighting;                           //@synthesize labelHighlighting=_labelHighlighting - In the implementation block
@property (assign,nonatomic) bool labelCollisionEnabled;                       //@synthesize labelCollisionEnabled=_labelCollisionEnabled - In the implementation block
@property (assign,nonatomic) bool paintRouteDebugMarkers;                      //@synthesize paintRouteDebugMarkers=_paintRouteDebugMarkers - In the implementation block
@property (assign,nonatomic) bool dontMatchRouteLine;                          //@synthesize dontMatchRouteLine=_dontMatchRouteLine - In the implementation block
@property (assign,nonatomic) bool dontMapMatchToSnappedRouteLine;              //@synthesize dontMapMatchToSnappedRouteLine=_dontMapMatchToSnappedRouteLine - In the implementation block
@property (assign,nonatomic) bool highlightUnmatchedRouteLine;                 //@synthesize highlightUnmatchedRouteLine=_highlightUnmatchedRouteLine - In the implementation block
@property (assign,nonatomic) bool paintRoadSigns;                              //@synthesize paintRoadSigns=_paintRoadSigns - In the implementation block
@property (assign,nonatomic) bool paintLabelBounds;                            //@synthesize paintLabelBounds=_paintLabelBounds - In the implementation block
@property (assign,nonatomic) bool paintLabelRoadFeatures;                      //@synthesize paintLabelRoadFeatures=_paintLabelRoadFeatures - In the implementation block
@property (assign,nonatomic) bool paintLabelCounts;                            //@synthesize paintLabelCounts=_paintLabelCounts - In the implementation block
@property (assign,nonatomic) bool roadFattening;                               //@synthesize roadFattening=_roadFattening - In the implementation block
@property (assign,nonatomic) bool hideDirectionalArrows;                       //@synthesize hideDirectionalArrows=_hideDirectionalArrows - In the implementation block
@property (assign,nonatomic) bool paintTrafficSkeleton;                        //@synthesize paintTrafficSkeleton=_paintTrafficSkeleton - In the implementation block
@property (assign,nonatomic) bool loadGreenTraffic;                            //@synthesize loadGreenTraffic=_loadGreenTraffic - In the implementation block
@property (assign,nonatomic) bool useStaticTrafficFeed;                        //@synthesize useStaticTrafficFeed=_useStaticTrafficFeed - In the implementation block
@property (assign,nonatomic) bool paintRoadsStitchedByName;                    //@synthesize paintRoadsStitchedByName=_paintRoadsStitchedByName - In the implementation block
@property (assign,nonatomic) bool realisticWireframeEnabled;                   //@synthesize realisticWireframeEnabled=_realisticWireframeEnabled - In the implementation block
@property (assign,nonatomic) bool altitudePauseLoading;                        //@synthesize altitudePauseLoading=_altitudePauseLoading - In the implementation block
@property (assign,nonatomic) bool altitudeShowTileBounds;                      //@synthesize altitudeShowTileBounds=_altitudeShowTileBounds - In the implementation block
@property (assign,nonatomic) bool altitudeHighResSatellite;                    //@synthesize altitudeHighResSatellite=_altitudeHighResSatellite - In the implementation block
@property (assign,nonatomic) bool altitudeMipmapSatellite;                     //@synthesize altitudeMipmapSatellite=_altitudeMipmapSatellite - In the implementation block
@property (assign,nonatomic) bool altitudeMipmapFlyover;                       //@synthesize altitudeMipmapFlyover=_altitudeMipmapFlyover - In the implementation block
@property (assign,nonatomic) bool altitudeShowNightLight;                      //@synthesize altitudeShowNightLight=_altitudeShowNightLight - In the implementation block
@property (assign,nonatomic) bool altitudeNoTiltLimit;                         //@synthesize altitudeNoTiltLimit=_altitudeNoTiltLimit - In the implementation block
@property (assign,nonatomic) bool altitudeProfilingEnabled;                    //@synthesize altitudeProfilingEnabled=_altitudeProfilingEnabled - In the implementation block
@property (assign,nonatomic) unsigned altitudeProfilingType;                   //@synthesize altitudeProfilingType=_altitudeProfilingType - In the implementation block
@property (assign,nonatomic) unsigned altitudeProfilingZones;                  //@synthesize altitudeProfilingZones=_altitudeProfilingZones - In the implementation block
@property (assign,nonatomic) float altitudeLodScale;                           //@synthesize altitudeLodScale=_altitudeLodScale - In the implementation block
@property (assign,nonatomic) float altitudeAnimationSpinTime;                  //@synthesize altitudeAnimationSpinTime=_altitudeAnimationSpinTime - In the implementation block
@property (assign,nonatomic) float altitudeTileQualityThreshold;               //@synthesize altitudeTileQualityThreshold=_altitudeTileQualityThreshold - In the implementation block
@property (assign,nonatomic) float altitudeForceGridTime;                      //@synthesize altitudeForceGridTime=_altitudeForceGridTime - In the implementation block
@property (nonatomic,retain) NSString * altitudeTelemetryURL;                  //@synthesize altitudeTelemetryURL=_altitudeTelemetryURL - In the implementation block
@property (assign,nonatomic) bool dynamicMapModesEnabled;                      //@synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled - In the implementation block
@property (assign,nonatomic) bool isInstalledInLockScreen;                     //@synthesize isInstalledInLockScreen=_isInstalledInLockScreen - In the implementation block
@property (assign,nonatomic) bool enableLoggingInLockScreen;                   //@synthesize enableLoggingInLockScreen=_enableLoggingInLockScreen - In the implementation block
@property (assign,nonatomic) bool useBuildingShadowTexture;                    //@synthesize useBuildingShadowTexture=_useBuildingShadowTexture - In the implementation block
@property (assign,nonatomic) bool drawContinuously;                            //@synthesize drawContinuously=_drawContinuously - In the implementation block
@property (assign,nonatomic) bool layoutContinuously;                          //@synthesize layoutContinuously=_layoutContinuously - In the implementation block
@property (assign,nonatomic) bool useOldLabels;                                //@synthesize useOldLabels=_useOldLabels - In the implementation block
@property (assign,nonatomic) bool useTransactionManager;                       //@synthesize useTransactionManager=_useTransactionManager - In the implementation block
@property (assign,nonatomic) float tourAnimationAltitude;                      //@synthesize tourAnimationAltitude=_tourAnimationAltitude - In the implementation block
@property (assign,nonatomic) float tourAnimationStepDuration;                  //@synthesize tourAnimationStepDuration=_tourAnimationStepDuration - In the implementation block
@property (assign,nonatomic) float tourAnimationCameraOffset;                  //@synthesize tourAnimationCameraOffset=_tourAnimationCameraOffset - In the implementation block
@property (assign,nonatomic) float tourAnimationTilt;                          //@synthesize tourAnimationTilt=_tourAnimationTilt - In the implementation block
@property (assign,nonatomic) bool trackingCameraAutoPitch;                     //@synthesize trackingCameraAutoPitch=_trackingCameraAutoPitch - In the implementation block
@property (assign,nonatomic) bool debugStyleAnimations;                        //@synthesize debugStyleAnimations=_debugStyleAnimations - In the implementation block
@property (assign,nonatomic) bool disableStylesheetAnimations;                 //@synthesize disableStylesheetAnimations=_disableStylesheetAnimations - In the implementation block
@property (assign,nonatomic) bool forceHiResBuildings;                         //@synthesize forceHiResBuildings=_forceHiResBuildings - In the implementation block
@property (assign,nonatomic) bool forceDepthDependentBuildings;                //@synthesize forceDepthDependentBuildings=_forceDepthDependentBuildings - In the implementation block
@property (assign,nonatomic) bool readLandmarksFromDisk;                       //@synthesize readLandmarksFromDisk=_readLandmarksFromDisk - In the implementation block
+(id)sharedSettings;
-(id)init;
-(bool)drawContinuously;
-(void)setDrawContinuously:(bool)arg1 ;
-(bool)layoutContinuously;
-(void)setLayoutContinuously:(bool)arg1 ;
-(bool)labelHighlighting;
-(bool)dynamicMapModesEnabled;
-(void)setDynamicMapModesEnabled:(bool)arg1 ;
-(bool)disableStylesheetAnimations;
-(bool)shouldDrawDebug;
-(bool)trackingCameraAutoPitch;
-(bool)paintBuildingNormals;
-(bool)forceDepthDependentBuildings;
-(bool)paintCoastlines;
-(bool)forceHiResBuildings;
-(bool)readLandmarksFromDisk;
-(bool)dontMapMatchToSnappedRouteLine;
-(bool)loadGreenTraffic;
-(bool)overlaysShouldDrawDebug;
-(bool)disableRoute;
-(bool)paintRouteDebugMarkers;
-(bool)highlightUnmatchedRouteLine;
-(bool)labelCollisionEnabled;
-(bool)paintLabelRoadFeatures;
-(bool)paintMapTiles;
-(bool)paintLabelCounts;
-(bool)paintTrafficSkeleton;
-(bool)dontMatchRouteLine;
-(void)setAltitudeLodScale:(float)arg1 ;
-(void)setAltitudePauseLoading:(bool)arg1 ;
-(void)setAltitudeShowTileBounds:(bool)arg1 ;
-(void)setAltitudeAnimationSpinTime:(float)arg1 ;
-(void)setAltitudeTileQualityThreshold:(float)arg1 ;
-(void)setAltitudeForceGridTime:(float)arg1 ;
-(void)setTourAnimationAltitude:(float)arg1 ;
-(void)setTourAnimationCameraOffset:(float)arg1 ;
-(void)setTourAnimationStepDuration:(float)arg1 ;
-(void)setTourAnimationTilt:(float)arg1 ;
-(bool)altitudePauseLoading;
-(bool)altitudeShowTileBounds;
-(bool)altitudeHighResSatellite;
-(bool)altitudeMipmapSatellite;
-(bool)altitudeMipmapFlyover;
-(bool)altitudeShowNightLight;
-(float)altitudeLodScale;
-(float)altitudeAnimationSpinTime;
-(bool)useStaticTrafficFeed;
-(float)altitudeTileQualityThreshold;
-(float)altitudeForceGridTime;
-(bool)enableLoggingInLockScreen;
-(bool)isInstalledInLockScreen;
-(void)setHideDirectionalArrows:(bool)arg1 ;
-(void)setIsInstalledInLockScreen:(bool)arg1 ;
-(void)setUseOldLabels:(bool)arg1 ;
-(void)setAltitudeTelemetryURL:(id)arg1 ;
-(void)setAltitudeProfilingEnabled:(bool)arg1 ;
-(void)setHighlightUnmatchedRouteLine:(bool)arg1 ;
-(void)setPaintMapTiles:(bool)arg1 ;
-(bool)paintRoadBoundaries;
-(void)setPaintRoadBoundaries:(bool)arg1 ;
-(bool)paintRoadTiles;
-(void)setPaintRoadTiles:(bool)arg1 ;
-(bool)paintPoiTiles;
-(void)setPaintPoiTiles:(bool)arg1 ;
-(bool)paintPointTiles;
-(void)setPaintPointTiles:(bool)arg1 ;
-(bool)paintPolygonTiles;
-(void)setPaintPolygonTiles:(bool)arg1 ;
-(bool)paintVertices;
-(void)setPaintVertices:(bool)arg1 ;
-(bool)paintJunctions;
-(void)setPaintJunctions:(bool)arg1 ;
-(void)setPaintCoastlines:(bool)arg1 ;
-(void)setPaintBuildingNormals:(bool)arg1 ;
-(void)setDisableRoute:(bool)arg1 ;
-(void)setLabelHighlighting:(bool)arg1 ;
-(void)setLabelCollisionEnabled:(bool)arg1 ;
-(void)setPaintRouteDebugMarkers:(bool)arg1 ;
-(void)setDontMatchRouteLine:(bool)arg1 ;
-(void)setDontMapMatchToSnappedRouteLine:(bool)arg1 ;
-(bool)paintRoadSigns;
-(void)setPaintRoadSigns:(bool)arg1 ;
-(bool)paintLabelBounds;
-(void)setPaintLabelBounds:(bool)arg1 ;
-(void)setPaintLabelRoadFeatures:(bool)arg1 ;
-(void)setPaintLabelCounts:(bool)arg1 ;
-(bool)roadFattening;
-(void)setRoadFattening:(bool)arg1 ;
-(bool)hideDirectionalArrows;
-(void)setPaintTrafficSkeleton:(bool)arg1 ;
-(void)setLoadGreenTraffic:(bool)arg1 ;
-(void)setUseStaticTrafficFeed:(bool)arg1 ;
-(bool)paintRoadsStitchedByName;
-(void)setPaintRoadsStitchedByName:(bool)arg1 ;
-(bool)realisticWireframeEnabled;
-(void)setRealisticWireframeEnabled:(bool)arg1 ;
-(void)setAltitudeMipmapSatellite:(bool)arg1 ;
-(void)setAltitudeMipmapFlyover:(bool)arg1 ;
-(void)setAltitudeShowNightLight:(bool)arg1 ;
-(bool)altitudeNoTiltLimit;
-(void)setAltitudeNoTiltLimit:(bool)arg1 ;
-(void)setAltitudeHighResSatellite:(bool)arg1 ;
-(bool)altitudeProfilingEnabled;
-(unsigned)altitudeProfilingType;
-(void)setAltitudeProfilingType:(unsigned)arg1 ;
-(unsigned)altitudeProfilingZones;
-(void)setAltitudeProfilingZones:(unsigned)arg1 ;
-(id)altitudeTelemetryURL;
-(void)setEnableLoggingInLockScreen:(bool)arg1 ;
-(bool)useBuildingShadowTexture;
-(void)setUseBuildingShadowTexture:(bool)arg1 ;
-(bool)useOldLabels;
-(bool)useTransactionManager;
-(void)setUseTransactionManager:(bool)arg1 ;
-(float)tourAnimationAltitude;
-(float)tourAnimationStepDuration;
-(float)tourAnimationCameraOffset;
-(float)tourAnimationTilt;
-(void)setTrackingCameraAutoPitch:(bool)arg1 ;
-(bool)debugStyleAnimations;
-(void)setDebugStyleAnimations:(bool)arg1 ;
-(void)setDisableStylesheetAnimations:(bool)arg1 ;
-(void)setForceHiResBuildings:(bool)arg1 ;
-(void)setForceDepthDependentBuildings:(bool)arg1 ;
-(void)setReadLandmarksFromDisk:(bool)arg1 ;
@end

