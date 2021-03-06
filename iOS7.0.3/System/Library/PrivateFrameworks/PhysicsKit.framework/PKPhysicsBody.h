/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@protocol NSObject;
@class PKPhysicsWorld, NSMutableArray, SKNode, NSArray;

@interface PKPhysicsBody : NSObject <NSCopying, NSCoding> {

	<NSObject>* _representedObject;
	unsigned* _bodyDef : 2BodyDef;
	unsigned* _body : 2Body;
	int _dynamicType;
	unsigned* _fixtureDef : 2FixtureDef;
	unsigned* _fixture : 2Fixture;
	PKPhysicsWorld* _world;
	NSMutableArray* _joints;
	BOOL _inUse;
	int _shapeType;
	CGPathRef _path;
	CGPoint _p0;
	CGPoint _p1;
	CGSize _size;
	float _radius;
	CGImageRef _mask;
	/*^block*/ id _postStepBlock;

}

@property (nonatomic,readonly) SKNode * node; 
@property (assign,nonatomic) unsigned* _fixtureDef : 2FixtureDef; 
@property (assign,nonatomic) unsigned* _fixture : 2Fixture; 
@property (assign,nonatomic) unsigned* _bodyDef : 2BodyDef; 
@property (assign,nonatomic) unsigned* _body : 2Body; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) float rotation; 
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic; 
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection; 
@property (assign,nonatomic) BOOL allowsRotation; 
@property (assign,getter=isResting,nonatomic) BOOL resting; 
@property (assign,nonatomic) float friction; 
@property (assign,nonatomic) float restitution; 
@property (assign,nonatomic) float linearDamping; 
@property (assign,nonatomic) float angularDamping; 
@property (assign,nonatomic) float density; 
@property (assign,nonatomic) float mass; 
@property (nonatomic,readonly) float area; 
@property (assign,nonatomic) BOOL affectedByGravity; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic) unsigned collisionBitMask; 
@property (assign,nonatomic) unsigned contactTestBitMask; 
@property (nonatomic,readonly) NSArray * joints; 
@property (assign,nonatomic,__weak) <NSObject> * representedObject; 
@property (nonatomic,copy) id postStepBlock;                                     //@synthesize postStepBlock=_postStepBlock - In the implementation block
@property (assign,nonatomic) CGVector velocity; 
@property (assign,nonatomic) float angularVelocity; 
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithCircleOfRadius:(float)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(id)_descriptionClassName;
-(id)node;
-(BOOL)_inUse;
-(id)_descriptionClassName;
-(void)applyForce:(CGPoint)arg1 ;
-(void)applyForce:(CGPoint)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyTorque:(float)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyAngularImpulse:(float)arg1 ;
-(id)allContactedBodies;
-(unsigned)contactTestBitMask;
-(id)joints;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(id)description;
-(void)setVelocity:(CGVector)arg1 ;
-(void)setMass:(float)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(BOOL)active;
-(void)setResting:(BOOL)arg1 ;
-(id)_world;
-(void)setDynamic:(BOOL)arg1 ;
-(void)setCollisionBitMask:(unsigned)arg1 ;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setRestitution:(float)arg1 ;
-(float)friction;
-(void)setFriction:(float)arg1 ;
-(float)density;
-(void)setLinearDamping:(float)arg1 ;
-(void)setAngularDamping:(float)arg1 ;
-(BOOL)allowsRotation;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(CGVector)velocity;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(float)angularVelocity;
-(void)setAngularVelocity:(float)arg1 ;
-(float)restitution;
-(float)linearDamping;
-(float)angularDamping;
-(float)mass;
-(void)applyImpulse:(CGVector)arg1 ;
-(void)setDensity:(float)arg1 ;
-(id).cxx_construct;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(void)setContactTestBitMask:(unsigned)arg1 ;
-(void)setPostStepBlock:(/*^block*/ id)arg1 ;
-(void)setUsesPreciseCollisionDetection:(BOOL)arg1 ;
-(unsigned)collisionBitMask;
-(unsigned)categoryBitMask;
-(void)applyUnscaledImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledImpulse:(CGVector)arg1 ;
-(void)applyUnscaledForce:(CGVector)arg1 ;
-(id)initWithCircleOfRadius:(float)arg1 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
-(id)initWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(id)initWithPolygonFromPath:(CGPathRef)arg1 ;
-(id)initWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(id)initWithEdgeLoopFromPath:(CGPathRef)arg1 ;
-(void)set_allowSleep:(BOOL)arg1 ;
-(BOOL)isDynamic;
-(BOOL)usesPreciseCollisionDetection;
-(BOOL)isResting;
-(BOOL)affectedByGravity;
-(float)area;
-(id)_descriptionFormat;
-(BOOL)_allowSleep;
-(/*^block*/ id)postStepBlock;
-(unsigned*)_bodyDef;
-(unsigned*)_fixtureDef;
-(unsigned*)_fixture;
-(id)_joints;
-(void)setIsSensor:(BOOL)arg1 ;
-(BOOL)isSensor;
-(void)set_fixture:(unsigned*)arg1 ;
-(void)set_fixtureDef:(unsigned*)arg1 ;
-(void)set_world:(id)arg1 ;
-(void)set_joints:(id)arg1 ;
-(void)set_inUse:(BOOL)arg1 ;
-(void)set_bodyDef:(unsigned*)arg1 ;
-(void)set_body:(unsigned*)arg1 ;
-(unsigned*)_body;
-(void).cxx_destruct;
@end

