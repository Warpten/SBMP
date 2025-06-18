
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosBreakingSortMethod : uint8_t
{
	SortNone                                                                         = 0,
	SortByHighestMass                                                                = 1,
	SortByHighestSpeed                                                               = 2,
	SortByNearestFirst                                                               = 3,
	Count                                                                            = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosCollisionSortMethod : uint8_t
{
	SortNone                                                                         = 0,
	SortByHighestMass                                                                = 1,
	SortByHighestSpeed                                                               = 2,
	SortByHighestImpulse                                                             = 3,
	SortByNearestFirst                                                               = 4,
	Count                                                                            = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosTrailingSortMethod : uint8_t
{
	SortNone                                                                         = 0,
	SortByHighestMass                                                                = 1,
	SortByHighestSpeed                                                               = 2,
	SortByNearestFirst                                                               = 3,
	Count                                                                            = 4
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x01 (1 bytes)
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	HideNone                                                                         = 0,
	HideWithCollision                                                                = 1,
	HideSelected                                                                     = 2,
	HideWholeCollection                                                              = 3,
	HideAll                                                                          = 4
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionGroupEnum : uint8_t
{
	Chaos_Traansform                                                                 = 0,
	Chaos_Max                                                                        = 1
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionAttributeEnum : uint8_t
{
	Chaos_Active                                                                     = 0,
	Chaos_DynamicState                                                               = 1,
	Chaos_CollisionGroup                                                             = 2,
	Chaos_Max                                                                        = 3
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FChaosCollisionEventRequestSettings
{ 
	int32_t                                            MaxNumberResults;                                           // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosCollisionSortMethod                          SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FChaosBreakingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinRadius;                                                  // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinMass;                                                    // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosBreakingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FChaosTrailingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinAngularSpeed;                                            // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosTrailingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x0490 (1168 bytes) (0x000260 - 0x000490) align n/a MaxSize: 0x0490
class UChaosDestructionListener : public USceneComponent
{ 
public:
	bool                                               bIsCollisionEventListeningEnabled : 1;                      // 0x0260:0 (0x0001)  
	bool                                               bIsBreakingEventListeningEnabled : 1;                       // 0x0260:1 (0x0001)  
	bool                                               bIsTrailingEventListeningEnabled : 1;                       // 0x0260:2 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	FChaosCollisionEventRequestSettings                CollisionEventRequestSettings;                              // 0x0264   (0x0018)  
	FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings;                               // 0x027C   (0x0018)  
	FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings;                               // 0x0294   (0x0018)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	TSet<AChaosSolverActor*>                           ChaosSolverActors;                                          // 0x02B0   (0x0050)  
	TSet<AGeometryCollectionActor*>                    GeometryCollectionActors;                                   // 0x0300   (0x0050)  
	FMulticastInlineDelegate                           OnCollisionEvents;                                          // 0x0350   (0x0010)  
	FMulticastInlineDelegate                           OnBreakingEvents;                                           // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           OnTrailingEvents;                                           // 0x0370   (0x0010)  
	unsigned char                                      UnknownData05_7[0x110];                                     // 0x0380   (0x0110)  MISSED

	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const TArray<FChaosTrailingEventData>&, const EChaosTrailingSortMethod> SortTrailingEvents = { 0x4c51570, 0 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const TArray<FChaosCollisionEventData>&, const EChaosCollisionSortMethod> SortCollisionEvents = { 0x4c518f0, 1 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const TArray<FChaosBreakingEventData>&, const EChaosBreakingSortMethod> SortBreakingEvents = { 0x4c51730, 2 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const FChaosTrailingEventRequestSettings&> SetTrailingEventRequestSettings = { 0x4c51db0, 3 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const bool> SetTrailingEventEnabled = { 0x4c51ae0, 4 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const FChaosCollisionEventRequestSettings&> SetCollisionEventRequestSettings = { 0x4c51fb0, 5 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const bool> SetCollisionEventEnabled = { 0x4c51cc0, 6 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const FChaosBreakingEventRequestSettings&> SetBreakingEventRequestSettings = { 0x4c51eb0, 7 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const bool> SetBreakingEventEnabled = { 0x4c51bd0, 8 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const AGeometryCollectionActor*> RemoveGeometryCollectionActor = { 0x4c520b0, 9 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const AChaosSolverActor*> RemoveChaosSolverActor = { 0x17a7aa0, 10 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	constexpr static const FunctionPointer<UChaosDestructionListener, bool> IsEventListening = { 0x4c51ab0, 11 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const AGeometryCollectionActor*> AddGeometryCollectionActor = { 0x4c521a0, 12 }; 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	constexpr static const FunctionPointer<UChaosDestructionListener, void, const AChaosSolverActor*> AddChaosSolverActor = { 0x17a7aa0, 13 }; 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x02D8 (728 bytes) (0x0002C8 - 0x0002D8) align n/a MaxSize: 0x02D8
class AGeometryCollectionActor : public AActor
{ 
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                                // 0x02C8   (0x0008)  
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                       // 0x02D0   (0x0008)  

	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	constexpr static const FunctionPointer<AGeometryCollectionActor, bool, const FVector, const FVector, const FHitResult&> RaycastSingle = { 0x4c53120, 0 }; 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UGeometryCollectionCache : public UObject
{ 
public:
	FRecordedTransformTrack                            RecordedData;                                               // 0x0028   (0x0010)  
	class UGeometryCollection*                         SupportedCollection;                                        // 0x0038   (0x0008)  
	FGuid                                              CompatibleCollectionState;                                  // 0x0040   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FGeomComponentCacheParameters
{ 
	EGeometryCollectionCacheType                       CacheMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UGeometryCollectionCache*                    TargetCache;                                                // 0x0008   (0x0008)  
	float                                              ReverseCacheBeginTime;                                      // 0x0010   (0x0004)  
	bool                                               SaveCollisionData;                                          // 0x0014   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            CollisionDataSizeMax;                                       // 0x0018   (0x0004)  
	bool                                               DoCollisionDataSpatialHash;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              CollisionDataSpatialHashRadius;                             // 0x0020   (0x0004)  
	int32_t                                            MaxCollisionPerCell;                                        // 0x0024   (0x0004)  
	bool                                               SaveBreakingData;                                           // 0x0028   (0x0001)  
	bool                                               DoGenerateBreakingData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData10_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BreakingDataSizeMax;                                        // 0x002C   (0x0004)  
	bool                                               DoBreakingDataSpatialHash;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              BreakingDataSpatialHashRadius;                              // 0x0034   (0x0004)  
	int32_t                                            MaxBreakingPerCell;                                         // 0x0038   (0x0004)  
	bool                                               SaveTrailingData;                                           // 0x003C   (0x0001)  
	bool                                               DoGenerateTrailingData;                                     // 0x003D   (0x0001)  
	unsigned char                                      UnknownData12_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            TrailingDataSizeMax;                                        // 0x0040   (0x0004)  
	float                                              TrailingMinSpeedThreshold;                                  // 0x0044   (0x0004)  
	float                                              TrailingMinVolumeThreshold;                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData13_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FGeometryCollectionRepData
{ 
	unsigned char                                      UnknownData01_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0A40 (2624 bytes) (0x000560 - 0x000A40) align n/a MaxSize: 0x0A40
class UGeometryCollectionComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData13_8[0x8];                                       // 0x0560   (0x0008)  MISSED
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x0568   (0x0008)  
	unsigned char                                      UnknownData14_6[0xE0];                                      // 0x0570   (0x00E0)  MISSED
	class UGeometryCollection*                         RestCollection;                                             // 0x0650   (0x0008)  
	TArray<class AFieldSystemActor*>                   InitializationFields;                                       // 0x0658   (0x0010)  
	bool                                               Simulating;                                                 // 0x0668   (0x0001)  
	unsigned char                                      UnknownData15_6[0x7];                                       // 0x0669   (0x0007)  MISSED
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x0670   (0x0001)  
	bool                                               EnableClustering;                                           // 0x0671   (0x0001)  
	unsigned char                                      UnknownData16_6[0x2];                                       // 0x0672   (0x0002)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x0674   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0678   (0x0004)  
	unsigned char                                      UnknownData17_6[0x4];                                       // 0x067C   (0x0004)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0680   (0x0010)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0690   (0x0001)  
	unsigned char                                      UnknownData18_6[0x3];                                       // 0x0691   (0x0003)  MISSED
	int32_t                                            CollisionGroup;                                             // 0x0694   (0x0004)  
	float                                              CollisionSampleFraction;                                    // 0x0698   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x069C   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x06A0   (0x0004)  
	unsigned char                                      UnknownData19_6[0x4];                                       // 0x06A4   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x06A8   (0x0008)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x06B0   (0x0001)  
	unsigned char                                      UnknownData20_6[0x3];                                       // 0x06B1   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x06B4   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x06C0   (0x000C)  
	unsigned char                                      UnknownData21_6[0x4];                                       // 0x06CC   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                   // 0x06D0   (0x0008)  
	FGeomComponentCacheParameters                      CacheParameters;                                            // 0x06D8   (0x0050)  
	FMulticastInlineDelegate                           NotifyGeometryCollectionPhysicsStateChange;                 // 0x0728   (0x0010)  
	FMulticastInlineDelegate                           NotifyGeometryCollectionPhysicsLoadingStateChange;          // 0x0738   (0x0010)  
	unsigned char                                      UnknownData22_6[0x18];                                      // 0x0748   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnChaosBreakEvent;                                          // 0x0760   (0x0010)  
	float                                              DesiredCacheTime;                                           // 0x0770   (0x0004)  
	bool                                               CachePlayback;                                              // 0x0774   (0x0001)  
	unsigned char                                      UnknownData23_6[0x3];                                       // 0x0775   (0x0003)  MISSED
	FMulticastInlineDelegate                           OnChaosPhysicsCollision;                                    // 0x0778   (0x0010)  
	bool                                               bNotifyBreaks;                                              // 0x0788   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x0789   (0x0001)  
	bool                                               bEnableReplication;                                         // 0x078A   (0x0001)  
	bool                                               bEnableAbandonAfterLevel;                                   // 0x078B   (0x0001)  
	int32_t                                            ReplicationAbandonClusterLevel;                             // 0x078C   (0x0004)  
	FGeometryCollectionRepData                         RepData;                                                    // 0x0790   (0x0018)  
	unsigned char                                      UnknownData24_6[0x268];                                     // 0x07A8   (0x0268)  MISSED
	class UBodySetup*                                  DummyBodySetup;                                             // 0x0A10   (0x0008)  
	unsigned char                                      UnknownData25_7[0x28];                                      // 0x0A18   (0x0028)  MISSED

	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const bool> SetNotifyBreaks = { 0x4c53dd0, 0 }; 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const FChaosPhysicsCollisionInfo&> ReceivePhysicsCollision = { 0x2bbb090, 1 }; 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const FGeometryCollectionRepData&> OnRep_RepData = { 0x4c53ce0, 2 }; 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const UGeometryCollectionComponent*> NotifyGeometryCollectionPhysicsStateChange__DelegateSignature = { 0x2bbb090, 3 }; 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const UGeometryCollectionComponent*> NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature = { 0x2bbb090, 4 }; 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const int32_t> NetAbandonCluster = { 0x4c53c00, 5 }; 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const bool, const EGeometryCollectionPhysicsTypeEnum, const UFieldSystemMetaData*, const UFieldNodeBase*> ApplyPhysicsField = { 0x4c53f00, 6 }; 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	constexpr static const FunctionPointer<UGeometryCollectionComponent, void, const float, const FVector> ApplyKinematicField = { 0x4c54190, 7 }; 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FGeometryCollectionDebugDrawWarningMessage
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AChaosSolverActor*                           Solver;                                                     // 0x0008   (0x0008)  
	class AGeometryCollectionActor*                    GeometryCollection;                                         // 0x0010   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x03B0 (944 bytes) (0x0002C8 - 0x0003B0) align n/a MaxSize: 0x03B0
class AGeometryCollectionDebugDrawActor : public AActor
{ 
public:
	FGeometryCollectionDebugDrawWarningMessage         WarningMessage;                                             // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x02C9   (0x0007)  MISSED
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                          // 0x02D0   (0x0018)  
	bool                                               bDebugDrawWholeCollection;                                  // 0x02E8   (0x0001)  
	bool                                               bDebugDrawHierarchy;                                        // 0x02E9   (0x0001)  
	bool                                               bDebugDrawClustering;                                       // 0x02EA   (0x0001)  
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                               // 0x02EB   (0x0001)  
	bool                                               bShowRigidBodyId;                                           // 0x02EC   (0x0001)  
	bool                                               bShowRigidBodyCollision;                                    // 0x02ED   (0x0001)  
	bool                                               bCollisionAtOrigin;                                         // 0x02EE   (0x0001)  
	bool                                               bShowRigidBodyTransform;                                    // 0x02EF   (0x0001)  
	bool                                               bShowRigidBodyInertia;                                      // 0x02F0   (0x0001)  
	bool                                               bShowRigidBodyVelocity;                                     // 0x02F1   (0x0001)  
	bool                                               bShowRigidBodyForce;                                        // 0x02F2   (0x0001)  
	bool                                               bShowRigidBodyInfos;                                        // 0x02F3   (0x0001)  
	bool                                               bShowTransformIndex;                                        // 0x02F4   (0x0001)  
	bool                                               bShowTransform;                                             // 0x02F5   (0x0001)  
	bool                                               bShowParent;                                                // 0x02F6   (0x0001)  
	bool                                               bShowLevel;                                                 // 0x02F7   (0x0001)  
	bool                                               bShowConnectivityEdges;                                     // 0x02F8   (0x0001)  
	bool                                               bShowGeometryIndex;                                         // 0x02F9   (0x0001)  
	bool                                               bShowGeometryTransform;                                     // 0x02FA   (0x0001)  
	bool                                               bShowBoundingBox;                                           // 0x02FB   (0x0001)  
	bool                                               bShowFaces;                                                 // 0x02FC   (0x0001)  
	bool                                               bShowFaceIndices;                                           // 0x02FD   (0x0001)  
	bool                                               bShowFaceNormals;                                           // 0x02FE   (0x0001)  
	bool                                               bShowSingleFace;                                            // 0x02FF   (0x0001)  
	int32_t                                            SingleFaceIndex;                                            // 0x0300   (0x0004)  
	bool                                               bShowVertices;                                              // 0x0304   (0x0001)  
	bool                                               bShowVertexIndices;                                         // 0x0305   (0x0001)  
	bool                                               bShowVertexNormals;                                         // 0x0306   (0x0001)  
	bool                                               bUseActiveVisualization;                                    // 0x0307   (0x0001)  
	float                                              PointThickness;                                             // 0x0308   (0x0004)  
	float                                              LineThickness;                                              // 0x030C   (0x0004)  
	bool                                               bTextShadow;                                                // 0x0310   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0311   (0x0003)  MISSED
	float                                              TextScale;                                                  // 0x0314   (0x0004)  
	float                                              NormalScale;                                                // 0x0318   (0x0004)  
	float                                              AxisScale;                                                  // 0x031C   (0x0004)  
	float                                              ArrowScale;                                                 // 0x0320   (0x0004)  
	FColor                                             RigidBodyIdColor;                                           // 0x0324   (0x0004)  
	float                                              RigidBodyTransformScale;                                    // 0x0328   (0x0004)  
	FColor                                             RigidBodyCollisionColor;                                    // 0x032C   (0x0004)  
	FColor                                             RigidBodyInertiaColor;                                      // 0x0330   (0x0004)  
	FColor                                             RigidBodyVelocityColor;                                     // 0x0334   (0x0004)  
	FColor                                             RigidBodyForceColor;                                        // 0x0338   (0x0004)  
	FColor                                             RigidBodyInfoColor;                                         // 0x033C   (0x0004)  
	FColor                                             TransformIndexColor;                                        // 0x0340   (0x0004)  
	float                                              TransformScale;                                             // 0x0344   (0x0004)  
	FColor                                             LevelColor;                                                 // 0x0348   (0x0004)  
	FColor                                             ParentColor;                                                // 0x034C   (0x0004)  
	float                                              ConnectivityEdgeThickness;                                  // 0x0350   (0x0004)  
	FColor                                             GeometryIndexColor;                                         // 0x0354   (0x0004)  
	float                                              GeometryTransformScale;                                     // 0x0358   (0x0004)  
	FColor                                             BoundingBoxColor;                                           // 0x035C   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x0360   (0x0004)  
	FColor                                             FaceIndexColor;                                             // 0x0364   (0x0004)  
	FColor                                             FaceNormalColor;                                            // 0x0368   (0x0004)  
	FColor                                             SingleFaceColor;                                            // 0x036C   (0x0004)  
	FColor                                             VertexColor;                                                // 0x0370   (0x0004)  
	FColor                                             VertexIndexColor;                                           // 0x0374   (0x0004)  
	FColor                                             VertexNormalColor;                                          // 0x0378   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x037C   (0x0004)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0380   (0x0008)  
	unsigned char                                      UnknownData07_7[0x28];                                      // 0x0388   (0x0028)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x00D8 (216 bytes) (0x0000C0 - 0x0000D8) align n/a MaxSize: 0x00D8
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                           // 0x00C0   (0x0008)  
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                      // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FGeometryCollectionSource
{ 
	FSoftObjectPath                                    SourceGeometryObject;                                       // 0x0000   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0020   (0x0030)  
	TArray<class UMaterialInterface*>                  SourceMaterial;                                             // 0x0050   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FGeometryCollectionSizeSpecificData
{ 
	float                                              MaxSize;                                                    // 0x0000   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0004   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0005   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x0008   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x000C   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0010   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x0014   (0x0004)  
	int32_t                                            CollisionObjectReductionPercentage;                         // 0x0018   (0x0004)  
	float                                              CollisionParticlesFraction;                                 // 0x001C   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0020   (0x0004)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align n/a MaxSize: 0x00E0
class UGeometryCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData06_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FGeometryCollectionSource>                  GeometrySource;                                             // 0x0030   (0x0010)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0040   (0x0010)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0050   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0051   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0052   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x0054   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0058   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x005C   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x0060   (0x0004)  
	float                                              CollisionObjectReductionPercentage;                         // 0x0064   (0x0004)  
	bool                                               bMassAsDensity;                                             // 0x0068   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x006C   (0x0004)  
	float                                              MinimumMassClamp;                                           // 0x0070   (0x0004)  
	float                                              CollisionParticlesFraction;                                 // 0x0074   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0078   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData;                                           // 0x0080   (0x0010)  
	bool                                               EnableRemovePiecesOnFracture;                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData10_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                  // 0x0098   (0x0010)  
	FGuid                                              PersistentGuid;                                             // 0x00A8   (0x0010)  
	FGuid                                              StateGuid;                                                  // 0x00B8   (0x0010)  
	int32_t                                            BoneSelectedMaterialIndex;                                  // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData11_7[0x14];                                      // 0x00CC   (0x0014)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x0360 (864 bytes) (0x0002C8 - 0x000360) align n/a MaxSize: 0x0360
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                        // 0x02C8   (0x0008)  
	class UMaterial*                                   RayMarchMaterial;                                           // 0x02D0   (0x0008)  
	float                                              SurfaceTolerance;                                           // 0x02D8   (0x0004)  
	float                                              Isovalue;                                                   // 0x02DC   (0x0004)  
	bool                                               Enabled;                                                    // 0x02E0   (0x0001)  
	bool                                               RenderVolumeBoundingBox;                                    // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7E];                                      // 0x02E2   (0x007E)  MISSED
};

/// Class /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent
/// Size: 0x0148 (328 bytes) (0x0000C0 - 0x000148) align n/a MaxSize: 0x0148
class USkeletalMeshSimulationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData05_8[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x00C8   (0x0008)  
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x00D0   (0x0008)  
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00D8   (0x0008)  
	bool                                               bSimulating;                                                // 0x00E0   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x00E1   (0x0001)  
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x00E3   (0x0001)  MISSED
	float                                              Density;                                                    // 0x00E4   (0x0004)  
	float                                              MinMass;                                                    // 0x00E8   (0x0004)  
	float                                              MaxMass;                                                    // 0x00EC   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              ImplicitShapeParticlesPerUnitArea;                          // 0x00F4   (0x0004)  
	int32_t                                            ImplicitShapeMinNumParticles;                               // 0x00F8   (0x0004)  
	int32_t                                            ImplicitShapeMaxNumParticles;                               // 0x00FC   (0x0004)  
	int32_t                                            MinLevelSetResolution;                                      // 0x0100   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0104   (0x0004)  
	int32_t                                            CollisionGroup;                                             // 0x0108   (0x0004)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x010C   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x0110   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x011C   (0x000C)  
	FMulticastInlineDelegate                           OnChaosPhysicsCollision;                                    // 0x0128   (0x0010)  
	unsigned char                                      UnknownData09_7[0x10];                                      // 0x0138   (0x0010)  MISSED

	/// Functions
	// Function /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
	constexpr static const FunctionPointer<USkeletalMeshSimulationComponent, void, const FChaosPhysicsCollisionInfo&> ReceivePhysicsCollision = { 0x2bbb090, 0 }; 
};

/// Class /Script/GeometryCollectionEngine.StaticMeshSimulationComponent
/// Size: 0x0148 (328 bytes) (0x0000C0 - 0x000148) align n/a MaxSize: 0x0148
class UStaticMeshSimulationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData07_8[0x8];                                       // 0x00C0   (0x0008)  MISSED
	bool                                               Simulating;                                                 // 0x00C8   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x00C9   (0x0001)  
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData08_6[0x1];                                       // 0x00CB   (0x0001)  MISSED
	float                                              Mass;                                                       // 0x00CC   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x00D0   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x00D4   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x00D8   (0x0004)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x00E0   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x00EC   (0x000C)  
	float                                              DamageThreshold;                                            // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x0100   (0x0008)  
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x0108   (0x0008)  
	FMulticastInlineDelegate                           OnChaosPhysicsCollision;                                    // 0x0110   (0x0010)  
	unsigned char                                      UnknownData12_6[0x10];                                      // 0x0120   (0x0010)  MISSED
	TArray<class UPrimitiveComponent*>                 SimulatedComponents;                                        // 0x0130   (0x0010)  
	unsigned char                                      UnknownData13_7[0x8];                                       // 0x0140   (0x0008)  MISSED

	/// Functions
	// Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	constexpr static const FunctionPointer<UStaticMeshSimulationComponent, void, const FChaosPhysicsCollisionInfo&> ReceivePhysicsCollision = { 0x2bbb090, 0 }; 
	// Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
	constexpr static const FunctionPointer<UStaticMeshSimulationComponent, void> ForceRecreatePhysicsState = { 0x4c561e0, 1 }; 
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FChaosCollisionEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FVector                                            Velocity1;                                                  // 0x0018   (0x000C)  
	FVector                                            Velocity2;                                                  // 0x0024   (0x000C)  
	float                                              Mass1;                                                      // 0x0030   (0x0004)  
	float                                              Mass2;                                                      // 0x0034   (0x0004)  
	FVector                                            Impulse;                                                    // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x0044   (0x0014)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FChaosBreakingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FChaosTrailingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)  
	float                                              Mass;                                                       // 0x0024   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FChaosCollisionEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FChaosBreakingEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FChaosTrailingEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UChaosDestructionListener) == 0x0490); // 1168 bytes (0x000260 - 0x000490)
static_assert(sizeof(AGeometryCollectionActor) == 0x02D8); // 728 bytes (0x0002C8 - 0x0002D8)
static_assert(sizeof(UGeometryCollectionCache) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FGeomComponentCacheParameters) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGeometryCollectionRepData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGeometryCollectionComponent) == 0x0A40); // 2624 bytes (0x000560 - 0x000A40)
static_assert(sizeof(FGeometryCollectionDebugDrawWarningMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(AGeometryCollectionDebugDrawActor) == 0x03B0); // 944 bytes (0x0002C8 - 0x0003B0)
static_assert(sizeof(UGeometryCollectionDebugDrawComponent) == 0x00D8); // 216 bytes (0x0000C0 - 0x0000D8)
static_assert(sizeof(FGeometryCollectionSource) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FGeometryCollectionSizeSpecificData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UGeometryCollection) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(AGeometryCollectionRenderLevelSetActor) == 0x0360); // 864 bytes (0x0002C8 - 0x000360)
static_assert(sizeof(USkeletalMeshSimulationComponent) == 0x0148); // 328 bytes (0x0000C0 - 0x000148)
static_assert(sizeof(UStaticMeshSimulationComponent) == 0x0148); // 328 bytes (0x0000C0 - 0x000148)
static_assert(sizeof(FChaosCollisionEventData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FChaosBreakingEventData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FChaosTrailingEventData) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(offsetof(FChaosCollisionEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(FChaosBreakingEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(FChaosTrailingEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(UChaosDestructionListener, CollisionEventRequestSettings) == 0x0264);
static_assert(offsetof(UChaosDestructionListener, BreakingEventRequestSettings) == 0x027C);
static_assert(offsetof(UChaosDestructionListener, TrailingEventRequestSettings) == 0x0294);
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionComponent) == 0x02C8);
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent) == 0x02D0);
static_assert(offsetof(UGeometryCollectionCache, RecordedData) == 0x0028);
static_assert(offsetof(UGeometryCollectionCache, SupportedCollection) == 0x0038);
static_assert(offsetof(UGeometryCollectionCache, CompatibleCollectionState) == 0x0040);
static_assert(offsetof(FGeomComponentCacheParameters, CacheMode) == 0x0000);
static_assert(offsetof(FGeomComponentCacheParameters, TargetCache) == 0x0008);
static_assert(offsetof(UGeometryCollectionComponent, ChaosSolverActor) == 0x0568);
static_assert(offsetof(UGeometryCollectionComponent, RestCollection) == 0x0650);
static_assert(offsetof(UGeometryCollectionComponent, InitializationFields) == 0x0658);
static_assert(offsetof(UGeometryCollectionComponent, ObjectType) == 0x0670);
static_assert(offsetof(UGeometryCollectionComponent, DamageThreshold) == 0x0680);
static_assert(offsetof(UGeometryCollectionComponent, ClusterConnectionType) == 0x0690);
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterial) == 0x06A8);
static_assert(offsetof(UGeometryCollectionComponent, InitialVelocityType) == 0x06B0);
static_assert(offsetof(UGeometryCollectionComponent, InitialLinearVelocity) == 0x06B4);
static_assert(offsetof(UGeometryCollectionComponent, InitialAngularVelocity) == 0x06C0);
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterialOverride) == 0x06D0);
static_assert(offsetof(UGeometryCollectionComponent, CacheParameters) == 0x06D8);
static_assert(offsetof(UGeometryCollectionComponent, RepData) == 0x0790);
static_assert(offsetof(UGeometryCollectionComponent, DummyBodySetup) == 0x0A10);
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, Solver) == 0x0008);
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, GeometryCollection) == 0x0010);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, WarningMessage) == 0x02C8);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SelectedRigidBody) == 0x02D0);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, HideGeometry) == 0x02EB);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyIdColor) == 0x0324);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyCollisionColor) == 0x032C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInertiaColor) == 0x0330);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyVelocityColor) == 0x0334);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyForceColor) == 0x0338);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInfoColor) == 0x033C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TransformIndexColor) == 0x0340);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, LevelColor) == 0x0348);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ParentColor) == 0x034C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, GeometryIndexColor) == 0x0354);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, BoundingBoxColor) == 0x035C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceColor) == 0x0360);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceIndexColor) == 0x0364);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceNormalColor) == 0x0368);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SingleFaceColor) == 0x036C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexColor) == 0x0370);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexIndexColor) == 0x0374);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexNormalColor) == 0x0378);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SpriteComponent) == 0x0380);
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor) == 0x00C0);
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor) == 0x00C8);
static_assert(offsetof(FGeometryCollectionSource, SourceGeometryObject) == 0x0000);
static_assert(offsetof(FGeometryCollectionSource, LocalTransform) == 0x0020);
static_assert(offsetof(FGeometryCollectionSource, SourceMaterial) == 0x0050);
static_assert(offsetof(FGeometryCollectionSizeSpecificData, CollisionType) == 0x0004);
static_assert(offsetof(FGeometryCollectionSizeSpecificData, ImplicitType) == 0x0005);
static_assert(offsetof(UGeometryCollection, GeometrySource) == 0x0030);
static_assert(offsetof(UGeometryCollection, Materials) == 0x0040);
static_assert(offsetof(UGeometryCollection, CollisionType) == 0x0050);
static_assert(offsetof(UGeometryCollection, ImplicitType) == 0x0051);
static_assert(offsetof(UGeometryCollection, SizeSpecificData) == 0x0080);
static_assert(offsetof(UGeometryCollection, RemoveOnFractureMaterials) == 0x0098);
static_assert(offsetof(UGeometryCollection, PersistentGuid) == 0x00A8);
static_assert(offsetof(UGeometryCollection, StateGuid) == 0x00B8);
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture) == 0x02C8);
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial) == 0x02D0);
static_assert(offsetof(USkeletalMeshSimulationComponent, PhysicalMaterial) == 0x00C8);
static_assert(offsetof(USkeletalMeshSimulationComponent, ChaosSolverActor) == 0x00D0);
static_assert(offsetof(USkeletalMeshSimulationComponent, OverridePhysicsAsset) == 0x00D8);
static_assert(offsetof(USkeletalMeshSimulationComponent, ObjectType) == 0x00E2);
static_assert(offsetof(USkeletalMeshSimulationComponent, CollisionType) == 0x00F0);
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialVelocityType) == 0x010C);
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialLinearVelocity) == 0x0110);
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialAngularVelocity) == 0x011C);
static_assert(offsetof(UStaticMeshSimulationComponent, ObjectType) == 0x00CA);
static_assert(offsetof(UStaticMeshSimulationComponent, CollisionType) == 0x00D0);
static_assert(offsetof(UStaticMeshSimulationComponent, ImplicitType) == 0x00D1);
static_assert(offsetof(UStaticMeshSimulationComponent, InitialVelocityType) == 0x00DC);
static_assert(offsetof(UStaticMeshSimulationComponent, InitialLinearVelocity) == 0x00E0);
static_assert(offsetof(UStaticMeshSimulationComponent, InitialAngularVelocity) == 0x00EC);
static_assert(offsetof(UStaticMeshSimulationComponent, PhysicalMaterial) == 0x0100);
static_assert(offsetof(UStaticMeshSimulationComponent, ChaosSolverActor) == 0x0108);
static_assert(offsetof(UStaticMeshSimulationComponent, SimulatedComponents) == 0x0130);
static_assert(offsetof(FChaosCollisionEventData, Location) == 0x0000);
static_assert(offsetof(FChaosCollisionEventData, Normal) == 0x000C);
static_assert(offsetof(FChaosCollisionEventData, Velocity1) == 0x0018);
static_assert(offsetof(FChaosCollisionEventData, Velocity2) == 0x0024);
static_assert(offsetof(FChaosCollisionEventData, Impulse) == 0x0038);
static_assert(offsetof(FChaosBreakingEventData, Location) == 0x0000);
static_assert(offsetof(FChaosBreakingEventData, Velocity) == 0x000C);
static_assert(offsetof(FChaosTrailingEventData, Location) == 0x0000);
static_assert(offsetof(FChaosTrailingEventData, Velocity) == 0x000C);
static_assert(offsetof(FChaosTrailingEventData, AngularVelocity) == 0x0018);
