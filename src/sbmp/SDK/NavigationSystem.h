
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x01 (1 bytes)
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x01 (1 bytes)
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x01 (1 bytes)
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x01 (1 bytes)
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSupportedAreaData
{ 
	FString                                            AreaClassName;                                              // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x04D0 (1232 bytes) (0x0002C8 - 0x0004D0) align n/a MaxSize: 0x04D0
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData05_8[0x8];                                       // 0x02C8   (0x0008)  MISSED
	class UPrimitiveComponent*                         RenderingComp;                                              // 0x02D0   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x02D8   (0x0078)  
	bool                                               bEnableDrawing : 1;                                         // 0x0350:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x0350:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x0350:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x0350:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x0350:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x0350:5 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0351   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x0354   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0355   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x0358   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x035C   (0x0004)  
	unsigned char                                      UnknownData08_6[0x108];                                     // 0x0360   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x0468   (0x0010)  
	unsigned char                                      UnknownData09_7[0x58];                                      // 0x0478   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x04D0 (1232 bytes) (0x0004D0 - 0x0004D0) align n/a MaxSize: 0x04D0
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align n/a MaxSize: 0x0048
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0030   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x0034   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0038   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x003C   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0040:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0040:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0040:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0040:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0040:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0040:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0040:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0040:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0041:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0041:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0041:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0041:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0041:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0041:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0041:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0041:7 (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x00C8 (200 bytes) (0x000048 - 0x0000C8) align n/a MaxSize: 0x00C8
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	class UClass*                                      Agent0Area;                                                 // 0x0048   (0x0008)  
	class UClass*                                      Agent1Area;                                                 // 0x0050   (0x0008)  
	class UClass*                                      Agent2Area;                                                 // 0x0058   (0x0008)  
	class UClass*                                      Agent3Area;                                                 // 0x0060   (0x0008)  
	class UClass*                                      Agent4Area;                                                 // 0x0068   (0x0008)  
	class UClass*                                      Agent5Area;                                                 // 0x0070   (0x0008)  
	class UClass*                                      Agent6Area;                                                 // 0x0078   (0x0008)  
	class UClass*                                      Agent7Area;                                                 // 0x0080   (0x0008)  
	class UClass*                                      Agent8Area;                                                 // 0x0088   (0x0008)  
	class UClass*                                      Agent9Area;                                                 // 0x0090   (0x0008)  
	class UClass*                                      Agent10Area;                                                // 0x0098   (0x0008)  
	class UClass*                                      Agent11Area;                                                // 0x00A0   (0x0008)  
	class UClass*                                      Agent12Area;                                                // 0x00A8   (0x0008)  
	class UClass*                                      Agent13Area;                                                // 0x00B0   (0x0008)  
	class UClass*                                      Agent14Area;                                                // 0x00B8   (0x0008)  
	class UClass*                                      Agent15Area;                                                // 0x00C0   (0x0008)  
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	float                                              Height;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	FVector                                            Extent;                                                     // 0x000C   (0x000C)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align n/a MaxSize: 0x00D8
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData02_8[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0080   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0090   (0x0010)  
	class UClass*                                      AreaClass;                                                  // 0x00A0   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00A8:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData03_7[0x2F];                                      // 0x00A9   (0x002F)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x04D0 (1232 bytes) (0x0004D0 - 0x0004D0) align n/a MaxSize: 0x04D0
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNavGraphNode
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align n/a MaxSize: 0x0290
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x0260   (0x0018)  
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x0278   (0x0008)  
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x0280   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00C0   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00C4   (0x0004)  
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align n/a MaxSize: 0x0088
class UNavigationPath : public UObject
{ 
public:
	FMulticastInlineDelegate                           PathUpdatedNotifier;                                        // 0x0028   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0038   (0x0010)  
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3F];                                      // 0x0049   (0x003F)  MISSED

	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	constexpr static const FunctionPointer<UNavigationPath, bool> IsValid = { 0x4afd3c0, 0 }; 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	constexpr static const FunctionPointer<UNavigationPath, bool> IsStringPulled = { 0x113b860, 1 }; 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	constexpr static const FunctionPointer<UNavigationPath, bool> IsPartial = { 0x4afd3e0, 2 }; 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	constexpr static const FunctionPointer<UNavigationPath, float> GetPathLength = { 0x4afd470, 3 }; 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	constexpr static const FunctionPointer<UNavigationPath, float> GetPathCost = { 0x4afd420, 4 }; 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	constexpr static const FunctionPointer<UNavigationPath, FString> GetDebugString = { 0x4afd770, 5 }; 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	constexpr static const FunctionPointer<UNavigationPath, void, const TEnumAsByte<ENavigationOptionFlag>> EnableRecalculationOnInvalidation = { 0x4afd4f0, 6 }; 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	constexpr static const FunctionPointer<UNavigationPath, void, const bool, const FLinearColor> EnableDebugDrawing = { 0x4afd5f0, 7 }; 
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNavigationFilterArea
{ 
	class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0028   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0038   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x003C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15E0 (5600 bytes) (0x000028 - 0x0015E0) align n/a MaxSize: 0x15E0
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	class ANavigationData*                             MainNavData;                                                // 0x0028   (0x0008)  
	class ANavigationData*                             AbstractNavData;                                            // 0x0030   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0038   (0x0008)  
	TSoftObjectPtr<class UClass*>                      CrowdManagerClass;                                          // 0x0040   (0x0028)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0068:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0068:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0068:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0068:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0068:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0068:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0068:6 (0x0001)  
	unsigned char                                      UnknownBit08 : 1;                                           // 0x0068:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0069:0 (0x0001)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0069:1 (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x006C   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x0074   (0x0004)  
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0078   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x0088   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x0090   (0x0010)  
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData12_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnNavDataRegisteredEvent;                                   // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnNavigationGenerationFinishedDelegate;                     // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData13_6[0xDC];                                      // 0x00E0   (0x00DC)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData14_6[0x13FF];                                    // 0x01BD   (0x13FF)  MISSED
	float                                              DirtyAreasUpdateFreq;                                       // 0x15BC   (0x0004)  
	unsigned char                                      UnknownData15_7[0x20];                                      // 0x15C0   (0x0020)  MISSED

	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	constexpr static const FunctionPointer<UNavigationSystemV1, void, const AActor*> UnregisterNavigationInvoker = { 0x4b00030, 0 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	constexpr static const FunctionPointer<UNavigationSystemV1, void, const AController*, const FVector&> SimpleMoveToLocation = { 0x4afe960, 1 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	constexpr static const FunctionPointer<UNavigationSystemV1, void, const AController*, const AActor*> SimpleMoveToActor = { 0x267feb0, 2 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	constexpr static const FunctionPointer<UNavigationSystemV1, void, const int32_t> SetMaxSimultaneousTileGenerationJobsCount = { 0x4b00400, 3 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	constexpr static const FunctionPointer<UNavigationSystemV1, void, const ENavDataGatheringModeConfig> SetGeometryGatheringMode = { 0x4afff50, 4 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	constexpr static const FunctionPointer<UNavigationSystemV1, void> ResetMaxSimultaneousTileGenerationJobsCount = { 0x4b00310, 5 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	constexpr static const FunctionPointer<UNavigationSystemV1, void, const AActor*, const float, const float> RegisterNavigationInvoker = { 0x4b00110, 6 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	constexpr static const FunctionPointer<UNavigationSystemV1, FVector, const UObject*, const FVector&, const ANavigationData*, const UClass*, const FVector> ProjectPointToNavigation = { 0x4aff390, 7 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	constexpr static const FunctionPointer<UNavigationSystemV1, void, const ANavMeshBoundsVolume*> OnNavigationBoundsUpdated = { 0x4aff7f0, 8 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const FVector&, const UClass*, const AController*> NavigationRaycast = { 0x4b00560, 9 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const UClass*, const UClass*> K2_ReplaceAreaInOctreeData = { 0x4aff970, 10 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const ANavigationData*, const UClass*, const FVector> K2_ProjectPointToNavigation = { 0x4b02770, 11 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const float, const ANavigationData*, const UClass*> K2_GetRandomReachablePointInRadius = { 0x4b02270, 12 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const float, const ANavigationData*, const UClass*> K2_GetRandomPointInNavigableRadius = { 0x4afe5b0, 13 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const float, const ANavigationData*, const UClass*> K2_GetRandomLocationInNavigableRadius = { 0x4b01ec0, 14 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*> IsNavigationBeingBuiltOrLocked = { 0x4b012c0, 15 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*> IsNavigationBeingBuilt = { 0x4b013e0, 16 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	constexpr static const FunctionPointer<UNavigationSystemV1, FVector, const UObject*, const FVector&, const float, const ANavigationData*, const UClass*> GetRandomReachablePointInRadius = { 0x4afef20, 17 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	constexpr static const FunctionPointer<UNavigationSystemV1, FVector, const UObject*, const FVector&, const float, const ANavigationData*, const UClass*> GetRandomPointInNavigableRadius = { 0x4afeab0, 18 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	constexpr static const FunctionPointer<UNavigationSystemV1, TEnumAsByte<ENavigationQueryResult>, const UObject*, const FVector&, const FVector&, const float&, const ANavigationData*, const UClass*> GetPathLength = { 0x4b01500, 19 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	constexpr static const FunctionPointer<UNavigationSystemV1, TEnumAsByte<ENavigationQueryResult>, const UObject*, const FVector&, const FVector&, const float&, const ANavigationData*, const UClass*> GetPathCost = { 0x4b019e0, 20 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	constexpr static const FunctionPointer<UNavigationSystemV1, UNavigationSystemV1*, const UObject*> GetNavigationSystem = { 0x4b02c30, 21 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	constexpr static const FunctionPointer<UNavigationSystemV1, UNavigationPath*, const UObject*, const FVector&, const FVector&, const AActor*, const UClass*> FindPathToLocationSynchronously = { 0x4b00f90, 22 }; 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	constexpr static const FunctionPointer<UNavigationSystemV1, UNavigationPath*, const UObject*, const FVector&, const AActor*, const float, const AActor*, const UClass*> FindPathToActorSynchronously = { 0x4b00ab0, 23 }; 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align n/a MaxSize: 0x0058
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0050:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0050:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0050:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x03B8 (952 bytes) (0x0002C8 - 0x0003B8) align n/a MaxSize: 0x03B8
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData08_8[0x10];                                      // 0x02C8   (0x0010)  MISSED
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02D8   (0x0008)  
	class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x02E0   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x02E8:0 (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x02F0   (0x0030)  
	FVector                                            QueryingExtent;                                             // 0x0320   (0x000C)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x032C   (0x0004)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x0330   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x0338   (0x000C)  
	bool                                               bProjectedLocationValid : 1;                                // 0x0344:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x0344:1 (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0345   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x0348   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x034C   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x0350:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x0350:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x0350:2 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x0350:3 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x0350:4 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x0350:5 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x0350:6 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x0350:7 (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x0351   (0x0003)  MISSED
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                            // 0x0354   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x0355   (0x0003)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x0358   (0x0008)  
	bool                                               bPathExist : 1;                                             // 0x0360:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x0360:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x0360:2 (0x0001)  
	unsigned char                                      UnknownData14_5[0x3];                                       // 0x0361   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x0364   (0x0004)  
	float                                              PathCost;                                                   // 0x0368   (0x0004)  
	int32_t                                            PathfindingSteps;                                           // 0x036C   (0x0004)  
	class ANavigationTestingActor*                     OtherActor;                                                 // 0x0370   (0x0008)  
	class UClass*                                      FilterClass;                                                // 0x0378   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x0380   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x0384   (0x0004)  
	unsigned char                                      UnknownData15_7[0x30];                                      // 0x0388   (0x0030)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0550 (1360 bytes) (0x000538 - 0x000550) align n/a MaxSize: 0x0550
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData01_8[0x8];                                       // 0x0538   (0x0008)  MISSED
	TArray<FNavigationLink>                            Links;                                                      // 0x0540   (0x0010)  
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x00F0 (240 bytes) (0x0000C0 - 0x0000F0) align n/a MaxSize: 0x00F0
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData02_8[0x24];                                      // 0x00C0   (0x0024)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x00E4:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	class UObject*                                     CachedNavParent;                                            // 0x00E8   (0x0008)  

	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	constexpr static const FunctionPointer<UNavRelevantComponent, void, const bool> SetNavigationRelevancy = { 0x4b06880, 0 }; 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x01A0 (416 bytes) (0x0000F0 - 0x0001A0) align n/a MaxSize: 0x01A0
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData06_8[0x8];                                       // 0x00F0   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UClass*                                      EnabledAreaClass;                                           // 0x0100   (0x0008)  
	class UClass*                                      DisabledAreaClass;                                          // 0x0108   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0110   (0x0004)  
	FVector                                            LinkRelativeStart;                                          // 0x0114   (0x000C)  
	FVector                                            LinkRelativeEnd;                                            // 0x0120   (0x000C)  
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                              // 0x012C   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x012D   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x0130:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x0130:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x0130:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x0130:3 (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x0134   (0x000C)  
	FVector                                            ObstacleExtent;                                             // 0x0140   (0x000C)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UClass*                                      ObstacleAreaClass;                                          // 0x0150   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0158   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x015C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                           // 0x0160   (0x0001)  
	unsigned char                                      UnknownData11_7[0x3F];                                      // 0x0161   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0540 (1344 bytes) (0x000538 - 0x000540) align n/a MaxSize: 0x0540
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0538   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align n/a MaxSize: 0x0050
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align n/a MaxSize: 0x0320
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0318   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x031C   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0550 (1360 bytes) (0x000538 - 0x000550) align n/a MaxSize: 0x0550
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData01_1[0x18];                                      // 0x0538   (0x0018)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0170 (368 bytes) (0x0000F0 - 0x000170) align n/a MaxSize: 0x0170
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	class UClass*                                      AreaClass;                                                  // 0x00F0   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x00F8   (0x000C)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x0104:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FName                                              MoveComponentName;                                          // 0x0108   (0x0008)  
	unsigned char                                      UnknownData04_6[0x50];                                      // 0x0110   (0x0050)  MISSED
	class USceneComponent*                             MoveComponent;                                              // 0x0160   (0x0008)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x0168   (0x0008)  MISSED

	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	constexpr static const FunctionPointer<UNavModifierComponent, void, const UClass*> SetAreaClass = { 0x4b05d60, 0 }; 
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align n/a MaxSize: 0x0330
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData02_8[0x8];                                       // 0x0318   (0x0008)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0320   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x0328   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0329   (0x0007)  MISSED

	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	constexpr static const FunctionPointer<ANavModifierVolume, void, const UClass*> SetAreaClass = { 0x4b06330, 0 }; 
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x02D8 (728 bytes) (0x0002C8 - 0x0002D8) align n/a MaxSize: 0x02D8
class ANavSystemConfigOverride : public AActor
{ 
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x02C8   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x02D0   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x02D1:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x02D2   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0540 (1344 bytes) (0x000538 - 0x000540) align n/a MaxSize: 0x0540
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0538   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x0580 (1408 bytes) (0x0004D0 - 0x000580) align n/a MaxSize: 0x0580
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x04D0:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x04D0:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x04D0:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x04D0:3 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x04D0:4 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x04D0:5 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x04D0:6 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x04D0:7 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x04D1:0 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x04D1:1 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x04D1:2 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x04D1:3 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x04D1:4 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x04D1:5 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x04D1:6 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x04D1:7 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x04D2:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x04D3   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x04D4   (0x0004)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x04D8:0 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x04D9   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x04DC   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x04E0   (0x0004)  
	float                                              CellSize;                                                   // 0x04E4   (0x0004)  
	float                                              CellHeight;                                                 // 0x04E8   (0x0004)  
	float                                              AgentRadius;                                                // 0x04EC   (0x0004)  
	float                                              AgentHeight;                                                // 0x04F0   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x04F4   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x04F8   (0x0004)  
	float                                              MinRegionArea;                                              // 0x04FC   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0500   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0504   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0508   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x050C   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x0510   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x0514   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0518   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x051C   (0x000C)  
	float                                              DefaultDrawDistance;                                        // 0x0528   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x052C   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0530   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0534   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0535   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0536   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0538   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x053C   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0540:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0540:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0540:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0540:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0540:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0540:5 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0540:6 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0540:7 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0541:0 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x0541:1 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0541:2 (0x0001)  
	bool                                               bUseVoxelCache : 1;                                         // 0x0541:3 (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x0542   (0x0002)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x0544   (0x0004)  
	float                                              HeuristicScale;                                             // 0x0548   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x054C   (0x0004)  
	unsigned char                                      UnknownData09_7[0x30];                                      // 0x0550   (0x0030)  MISSED

	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	constexpr static const FunctionPointer<ARecastNavMesh, bool, const FBox, const UClass*, const UClass*, const bool> K2_ReplaceAreaInTileBounds = { 0x4b079d0, 0 }; 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align n/a MaxSize: 0x0040
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData01_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData01_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0030   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FSupportedAreaData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ANavigationData) == 0x04D0); // 1232 bytes (0x0002C8 - 0x0004D0)
static_assert(sizeof(AAbstractNavData) == 0x04D0); // 1232 bytes (0x0004D0 - 0x0004D0)
static_assert(sizeof(UCrowdManagerBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavArea) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UNavArea_Default) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_LowHeight) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Null) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Obstacle) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta_SwitchByAgent) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(FNavCollisionCylinder) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNavCollisionBox) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavCollision) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(ANavigationGraph) == 0x04D0); // 1232 bytes (0x0004D0 - 0x0004D0)
static_assert(sizeof(ANavigationGraphNode) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(FNavGraphNode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavigationGraphNodeComponent) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UNavigationInvokerComponent) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UNavigationPath) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UNavigationPathGenerator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNavigationFilterArea) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavigationFilterFlags) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UNavigationQueryFilter) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UNavigationSystemV1) == 0x15E0); // 5600 bytes (0x000028 - 0x0015E0)
static_assert(sizeof(UNavigationSystemModuleConfig) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(ANavigationTestingActor) == 0x03B8); // 952 bytes (0x0002C8 - 0x0003B8)
static_assert(sizeof(UNavLinkComponent) == 0x0550); // 1360 bytes (0x000538 - 0x000550)
static_assert(sizeof(UNavRelevantComponent) == 0x00F0); // 240 bytes (0x0000C0 - 0x0000F0)
static_assert(sizeof(UNavLinkCustomComponent) == 0x01A0); // 416 bytes (0x0000F0 - 0x0001A0)
static_assert(sizeof(UNavLinkCustomInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkHostInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkRenderingComponent) == 0x0540); // 1344 bytes (0x000538 - 0x000540)
static_assert(sizeof(UNavLinkTrivial) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(ANavMeshBoundsVolume) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UNavMeshRenderingComponent) == 0x0550); // 1360 bytes (0x000538 - 0x000550)
static_assert(sizeof(UNavModifierComponent) == 0x0170); // 368 bytes (0x0000F0 - 0x000170)
static_assert(sizeof(ANavModifierVolume) == 0x0330); // 816 bytes (0x000318 - 0x000330)
static_assert(sizeof(UNavNodeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavSystemConfigOverride) == 0x02D8); // 728 bytes (0x0002C8 - 0x0002D8)
static_assert(sizeof(UNavTestRenderingComponent) == 0x0540); // 1344 bytes (0x000538 - 0x000540)
static_assert(sizeof(URecastFilter_UseDefaultArea) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(ARecastNavMesh) == 0x0580); // 1408 bytes (0x0004D0 - 0x000580)
static_assert(sizeof(URecastNavMeshDataChunk) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FNavGraphEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FRecastNavMeshGenerationProperties) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x0000);
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x0018);
static_assert(offsetof(ANavigationData, RenderingComp) == 0x02D0);
static_assert(offsetof(ANavigationData, NavDataConfig) == 0x02D8);
static_assert(offsetof(ANavigationData, RuntimeGeneration) == 0x0354);
static_assert(offsetof(ANavigationData, SupportedAreas) == 0x0468);
static_assert(offsetof(UNavArea, DrawColor) == 0x0038);
static_assert(offsetof(UNavArea, SupportedAgents) == 0x003C);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area) == 0x0048);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area) == 0x0050);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area) == 0x0058);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area) == 0x0060);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area) == 0x0068);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area) == 0x0070);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area) == 0x0078);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area) == 0x0080);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area) == 0x0088);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area) == 0x0090);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area) == 0x0098);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area) == 0x00A0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area) == 0x00A8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area) == 0x00B0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area) == 0x00B8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area) == 0x00C0);
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Extent) == 0x000C);
static_assert(offsetof(UNavCollision, CylinderCollision) == 0x0080);
static_assert(offsetof(UNavCollision, BoxCollision) == 0x0090);
static_assert(offsetof(UNavCollision, AreaClass) == 0x00A0);
static_assert(offsetof(FNavGraphNode, Owner) == 0x0000);
static_assert(offsetof(UNavigationGraphNodeComponent, Node) == 0x0260);
static_assert(offsetof(UNavigationGraphNodeComponent, NextNodeComponent) == 0x0278);
static_assert(offsetof(UNavigationGraphNodeComponent, PrevNodeComponent) == 0x0280);
static_assert(offsetof(UNavigationPath, PathPoints) == 0x0038);
static_assert(offsetof(UNavigationPath, RecalculateOnInvalidation) == 0x0048);
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x0000);
static_assert(offsetof(UNavigationQueryFilter, Areas) == 0x0028);
static_assert(offsetof(UNavigationQueryFilter, IncludeFlags) == 0x0038);
static_assert(offsetof(UNavigationQueryFilter, ExcludeFlags) == 0x003C);
static_assert(offsetof(UNavigationSystemV1, MainNavData) == 0x0028);
static_assert(offsetof(UNavigationSystemV1, AbstractNavData) == 0x0030);
static_assert(offsetof(UNavigationSystemV1, DefaultAgentName) == 0x0038);
static_assert(offsetof(UNavigationSystemV1, CrowdManagerClass) == 0x0040);
static_assert(offsetof(UNavigationSystemV1, DataGatheringMode) == 0x0070);
static_assert(offsetof(UNavigationSystemV1, SupportedAgents) == 0x0078);
static_assert(offsetof(UNavigationSystemV1, SupportedAgentsMask) == 0x0088);
static_assert(offsetof(UNavigationSystemV1, NavDataSet) == 0x0090);
static_assert(offsetof(UNavigationSystemV1, NavDataRegistrationQueue) == 0x00A0);
static_assert(offsetof(UNavigationSystemV1, OperationMode) == 0x01BC);
static_assert(offsetof(ANavigationTestingActor, CapsuleComponent) == 0x02D8);
static_assert(offsetof(ANavigationTestingActor, InvokerComponent) == 0x02E0);
static_assert(offsetof(ANavigationTestingActor, NavAgentProps) == 0x02F0);
static_assert(offsetof(ANavigationTestingActor, QueryingExtent) == 0x0320);
static_assert(offsetof(ANavigationTestingActor, MyNavData) == 0x0330);
static_assert(offsetof(ANavigationTestingActor, ProjectedLocation) == 0x0338);
static_assert(offsetof(ANavigationTestingActor, CostDisplayMode) == 0x0354);
static_assert(offsetof(ANavigationTestingActor, TextCanvasOffset) == 0x0358);
static_assert(offsetof(ANavigationTestingActor, OtherActor) == 0x0370);
static_assert(offsetof(ANavigationTestingActor, FilterClass) == 0x0378);
static_assert(offsetof(UNavLinkComponent, Links) == 0x0540);
static_assert(offsetof(UNavRelevantComponent, CachedNavParent) == 0x00E8);
static_assert(offsetof(UNavLinkCustomComponent, EnabledAreaClass) == 0x0100);
static_assert(offsetof(UNavLinkCustomComponent, DisabledAreaClass) == 0x0108);
static_assert(offsetof(UNavLinkCustomComponent, SupportedAgents) == 0x0110);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeStart) == 0x0114);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeEnd) == 0x0120);
static_assert(offsetof(UNavLinkCustomComponent, LinkDirection) == 0x012C);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleOffset) == 0x0134);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleExtent) == 0x0140);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleAreaClass) == 0x0150);
static_assert(offsetof(UNavLinkCustomComponent, BroadcastChannel) == 0x0160);
static_assert(offsetof(ANavMeshBoundsVolume, SupportedAgents) == 0x0318);
static_assert(offsetof(UNavModifierComponent, AreaClass) == 0x00F0);
static_assert(offsetof(UNavModifierComponent, FailsafeExtent) == 0x00F8);
static_assert(offsetof(UNavModifierComponent, MoveComponentName) == 0x0108);
static_assert(offsetof(UNavModifierComponent, MoveComponent) == 0x0160);
static_assert(offsetof(ANavModifierVolume, AreaClass) == 0x0320);
static_assert(offsetof(ANavSystemConfigOverride, NavigationSystemConfig) == 0x02C8);
static_assert(offsetof(ANavSystemConfigOverride, OverridePolicy) == 0x02D0);
static_assert(offsetof(ARecastNavMesh, NavMeshOriginOffset) == 0x051C);
static_assert(offsetof(ARecastNavMesh, RegionPartitioning) == 0x0534);
static_assert(offsetof(ARecastNavMesh, LayerPartitioning) == 0x0535);
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionPartitioning) == 0x0030);
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerPartitioning) == 0x0031);
