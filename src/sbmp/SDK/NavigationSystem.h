
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*   Generator modified by Warpten for idaclang support. *
*                                                       *
********************************************************/

/// --- IMPORTANT -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT ---
/// Make sure to define IDACLANG in the command line if running this file through idaclang to
/// generate a type library.
/// --- IMPORTANT -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT ---

#if defined(IDACLANG)
# define UPROPERTY(...)
# define UFUNCTION(...)
#endif

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AAbstractNavData;
class ANavMeshBoundsVolume;
class ANavModifierVolume;
class ANavSystemConfigOverride;
class ANavigationData;
class ANavigationGraph;
class ANavigationGraphNode;
class ANavigationTestingActor;
class ARecastNavMesh;
class UCrowdManagerBase;
class UNavArea;
class UNavAreaMeta;
class UNavAreaMeta_SwitchByAgent;
class UNavArea_Default;
class UNavArea_LowHeight;
class UNavArea_Null;
class UNavArea_Obstacle;
class UNavCollision;
class UNavLinkComponent;
class UNavLinkCustomComponent;
class UNavLinkCustomInterface;
class UNavLinkHostInterface;
class UNavLinkRenderingComponent;
class UNavLinkTrivial;
class UNavMeshRenderingComponent;
class UNavModifierComponent;
class UNavNodeInterface;
class UNavRelevantComponent;
class UNavTestRenderingComponent;
class UNavigationGraphNodeComponent;
class UNavigationInvokerComponent;
class UNavigationPath;
class UNavigationPathGenerator;
class UNavigationQueryFilter;
class UNavigationSystemModuleConfig;
class UNavigationSystemV1;
class URecastFilter_UseDefaultArea;
class URecastNavMeshDataChunk;
struct FNavCollisionBox;
struct FNavCollisionCylinder;
struct FNavGraphEdge;
struct FNavGraphNode;
struct FNavLinkCustomInstanceData;
struct FNavigationFilterArea;
struct FNavigationFilterFlags;
struct FRecastNavMeshGenerationProperties;
struct FSupportedAreaData;

/// Enum /Script/NavigationSystem.ERuntimeGenerationType -  1 (1 bytes)
enum class ERuntimeGenerationType : uint8_t
{
    Static                                                                           = 0,
    DynamicModifiersOnly                                                             = 1,
    Dynamic                                                                          = 2,
    LegacyGeneration                                                                 = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay -  1 (1 bytes)
enum class ENavCostDisplay : uint8_t
{
    TotalCost                                                                        = 0,
    HeuristicOnly                                                                    = 1,
    RealCostOnly                                                                     = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy -  1 (1 bytes)
enum class ENavSystemOverridePolicy : uint8_t
{
    Override                                                                         = 0,
    Append                                                                           = 1,
    Skip                                                                             = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning -  1 (1 bytes)
enum class ERecastPartitioning : uint8_t
{
    Monotone                                                                         = 0,
    Watershed                                                                        = 1,
    ChunkyMonotone                                                                   = 2
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSupportedAreaData
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AreaClassName;                                              // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AreaID;                                                     // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x04D0 (1232 bytes) (0x0002C8 - 0x0004D0) align n/a MaxSize: 0x04D0
class ANavigationData : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData05_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPrimitiveComponent*                         RenderingComp;                                              // 0x02D0   (0x0008)
    UPROPERTY(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FNavDataConfig                                     NavDataConfig;                                              // 0x02D8   (0x0078)
    UPROPERTY(Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bEnableDrawing : 1;                                         // 0x0350:0 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bForceRebuildOnLoad : 1;                                    // 0x0350:1 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x0350:2 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bCanBeMainNavData : 1;                                      // 0x0350:3 (0x0001)
    UPROPERTY(Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bCanSpawnOnRebuild : 1;                                     // 0x0350:4 (0x0001)
    UPROPERTY(Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bRebuildAtRuntime : 1;                                      // 0x0350:5 (0x0001)
    /* public    */ unsigned char                                      UnknownData06_5[0x3];                                       // 0x0351   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x0354   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0355   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              ObservedPathsTickInterval;                                  // 0x0358   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ uint32_t                                           DataVersion;                                                // 0x035C   (0x0004)
    /* public    */ unsigned char                                      UnknownData08_6[0x108];                                     // 0x0360   (0x0108) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x0468   (0x0010)
    /* public    */ unsigned char                                      UnknownData09_7[0x58];                                      // 0x0478   (0x0058) MISSED
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
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultCost;                                                // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              FixedAreaEnteringCost;                                      // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             DrawColor;                                                  // 0x0038   (0x0004)
    UPROPERTY(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNavAgentSelector                                  SupportedAgents;                                            // 0x003C   (0x0004)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent0 : 1;                                        // 0x0040:0 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent1 : 1;                                        // 0x0040:1 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent2 : 1;                                        // 0x0040:2 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent3 : 1;                                        // 0x0040:3 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent4 : 1;                                        // 0x0040:4 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent5 : 1;                                        // 0x0040:5 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent6 : 1;                                        // 0x0040:6 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent7 : 1;                                        // 0x0040:7 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent8 : 1;                                        // 0x0041:0 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent9 : 1;                                        // 0x0041:1 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent10 : 1;                                       // 0x0041:2 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent11 : 1;                                       // 0x0041:3 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent12 : 1;                                       // 0x0041:4 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent13 : 1;                                       // 0x0041:5 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent14 : 1;                                       // 0x0041:6 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsAgent15 : 1;                                       // 0x0041:7 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x0042   (0x0006) MISSED
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
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent0Area;                                                 // 0x0048   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent1Area;                                                 // 0x0050   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent2Area;                                                 // 0x0058   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent3Area;                                                 // 0x0060   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent4Area;                                                 // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent5Area;                                                 // 0x0070   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent6Area;                                                 // 0x0078   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent7Area;                                                 // 0x0080   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent8Area;                                                 // 0x0088   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent9Area;                                                 // 0x0090   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent10Area;                                                // 0x0098   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent11Area;                                                // 0x00A0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent12Area;                                                // 0x00A8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent13Area;                                                // 0x00B0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent14Area;                                                // 0x00B8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Agent15Area;                                                // 0x00C0   (0x0008)
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FNavCollisionCylinder
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Offset;                                                     // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Height;                                                     // 0x0010   (0x0004)
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNavCollisionBox
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Offset;                                                     // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Extent;                                                     // 0x000C   (0x000C)
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align n/a MaxSize: 0x00D8
class UNavCollision : public UNavCollisionBase
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x10];                                      // 0x0070   (0x0010) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0080   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0090   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      AreaClass;                                                  // 0x00A0   (0x0008)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGatherConvexGeometry : 1;                                  // 0x00A8:0 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCreateOnClient : 1;                                        // 0x00A8:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x2F];                                      // 0x00A9   (0x002F) MISSED
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
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     Owner;                                                      // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0008   (0x0010) MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align n/a MaxSize: 0x0290
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNavGraphNode                                      Node;                                                       // 0x0260   (0x0018)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x0278   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x0280   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0288   (0x0008) MISSED
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              TileGenerationRadius;                                       // 0x00C0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              TileRemovalRadius;                                          // 0x00C4   (0x0004)
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align n/a MaxSize: 0x0088
class UNavigationPath : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           PathUpdatedNotifier;                                        // 0x0028   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    PathPoints;                                                 // 0x0038   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                  // 0x0048   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3F];                                      // 0x0049   (0x003F) MISSED

    /// Functions
    // Function /Script/NavigationSystem.NavigationPath.IsValid
    constexpr static const FunctionPointer<UNavigationPath, bool> IsValid = { 0x4b12740, 0 };
    // Function /Script/NavigationSystem.NavigationPath.IsStringPulled
    constexpr static const FunctionPointer<UNavigationPath, bool> IsStringPulled = { 0x113df60, 1 };
    // Function /Script/NavigationSystem.NavigationPath.IsPartial
    constexpr static const FunctionPointer<UNavigationPath, bool> IsPartial = { 0x4b12760, 2 };
    // Function /Script/NavigationSystem.NavigationPath.GetPathLength
    constexpr static const FunctionPointer<UNavigationPath, float> GetPathLength = { 0x4b127f0, 3 };
    // Function /Script/NavigationSystem.NavigationPath.GetPathCost
    constexpr static const FunctionPointer<UNavigationPath, float> GetPathCost = { 0x4b127a0, 4 };
    // Function /Script/NavigationSystem.NavigationPath.GetDebugString
    constexpr static const FunctionPointer<UNavigationPath, FString> GetDebugString = { 0x4b12af0, 5 };
    // Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
    // [0] DoRecalculation : const TEnumAsByte<ENavigationOptionFlag>
    constexpr static const FunctionPointer<UNavigationPath, void, const TEnumAsByte<ENavigationOptionFlag>> EnableRecalculationOnInvalidation = { 0x4b12870, 6 };
    // Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
    // [0] bShouldDrawDebugData : const bool
    // [1] PathColor : const FLinearColor
    constexpr static const FunctionPointer<UNavigationPath, void, const bool, const FLinearColor> EnableDebugDrawing = { 0x4b12970, 7 };
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
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TravelCostOverride;                                         // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FNavigationFilterFlags
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x0002   (0x0002) MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UNavigationQueryFilter : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNavigationFilterFlags                             IncludeFlags;                                               // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNavigationFilterFlags                             ExcludeFlags;                                               // 0x003C   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0040   (0x0008) MISSED
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15E0 (5600 bytes) (0x000028 - 0x0015E0) align n/a MaxSize: 0x15E0
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ANavigationData*                             MainNavData;                                                // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ANavigationData*                             AbstractNavData;                                            // 0x0030   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              DefaultAgentName;                                           // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TSoftObjectPtr<class UClass*>                      CrowdManagerClass;                                          // 0x0040   (0x0028)
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAutoCreateNavigationData : 1;                              // 0x0068:0 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0068:1 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAllowClientSideNavigation : 1;                             // 0x0068:2 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0068:3 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bTickWhilePaused : 1;                                       // 0x0068:4 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bSupportRebuilding : 1;                                     // 0x0068:5 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInitialBuildingLocked : 1;                                 // 0x0068:6 (0x0001)
    /* public    */ unsigned char                                      UnknownBit08 : 1;                                           // 0x0068:7 (0x0001) MISSED
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0069:0 (0x0001)
    UPROPERTY(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0069:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_5[0x2];                                       // 0x006A   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              ActiveTilesUpdateInterval;                                  // 0x006C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x0071   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              DirtyAreaWarningSizeThreshold;                              // 0x0074   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0078   (0x0010)
    UPROPERTY(Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x0088   (0x0004)
    /* public    */ unsigned char                                      UnknownData11_6[0x4];                                       // 0x008C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x0090   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x00A0   (0x0010)
    /* public    */ unsigned char                                      UnknownData12_6[0x10];                                      // 0x00B0   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnNavDataRegisteredEvent;                                   // 0x00C0   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnNavigationGenerationFinishedDelegate;                     // 0x00D0   (0x0010)
    /* public    */ unsigned char                                      UnknownData13_6[0xDC];                                      // 0x00E0   (0x00DC) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FNavigationSystemRunMode                           OperationMode;                                              // 0x01BC   (0x0001)
    /* public    */ unsigned char                                      UnknownData14_6[0x13FF];                                    // 0x01BD   (0x13FF) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DirtyAreasUpdateFreq;                                       // 0x15BC   (0x0004)
    /* public    */ unsigned char                                      UnknownData15_7[0x20];                                      // 0x15C0   (0x0020) MISSED

    /// Functions
    // Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
    // [0] Invoker : const AActor*
    constexpr static const FunctionPointer<UNavigationSystemV1, void, const AActor*> UnregisterNavigationInvoker = { 0x4b153b0, 0 };
    // Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
    // [0] Controller : const AController*
    // [1] Goal : const FVector&
    constexpr static const FunctionPointer<UNavigationSystemV1, void, const AController*, const FVector&> SimpleMoveToLocation = { 0x4b13ce0, 1 };
    // Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor
    // [0] Controller : const AController*
    // [1] Goal : const AActor*
    constexpr static const FunctionPointer<UNavigationSystemV1, void, const AController*, const AActor*> SimpleMoveToActor = { 0x268a940, 2 };
    // Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
    // [0] MaxNumberOfJobs : const int32_t
    constexpr static const FunctionPointer<UNavigationSystemV1, void, const int32_t> SetMaxSimultaneousTileGenerationJobsCount = { 0x4b15780, 3 };
    // Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
    // [0] NewMode : const ENavDataGatheringModeConfig
    constexpr static const FunctionPointer<UNavigationSystemV1, void, const ENavDataGatheringModeConfig> SetGeometryGatheringMode = { 0x4b152d0, 4 };
    // Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
    constexpr static const FunctionPointer<UNavigationSystemV1, void> ResetMaxSimultaneousTileGenerationJobsCount = { 0x4b15690, 5 };
    // Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
    // [0] Invoker : const AActor*
    // [1] TileGenerationRadius : const float
    // [2] TileRemovalRadius : const float
    constexpr static const FunctionPointer<UNavigationSystemV1, void, const AActor*, const float, const float> RegisterNavigationInvoker = { 0x4b15490, 6 };
    // Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
    // [0] WorldContextObject : const UObject*
    // [1] Point : const FVector&
    // [2] NavData : const ANavigationData*
    // [3] FilterClass : const UClass*
    // [4] QueryExtent : const FVector
    constexpr static const FunctionPointer<UNavigationSystemV1, FVector, const UObject*, const FVector&, const ANavigationData*, const UClass*, const FVector> ProjectPointToNavigation = { 0x4b14710, 7 };
    // Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
    // [0] NavVolume : const ANavMeshBoundsVolume*
    constexpr static const FunctionPointer<UNavigationSystemV1, void, const ANavMeshBoundsVolume*> OnNavigationBoundsUpdated = { 0x4b14b70, 8 };
    // Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
    // [0] WorldContextObject : const UObject*
    // [1] RayStart : const FVector&
    // [2] RayEnd : const FVector&
    // [3] HitLocation : const FVector&
    // [4] FilterClass : const UClass*
    // [5] Querier : const AController*
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const FVector&, const UClass*, const AController*> NavigationRaycast = { 0x4b158e0, 9 };
    // Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
    // [0] Object : const UObject*
    // [1] OldArea : const UClass*
    // [2] NewArea : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const UClass*, const UClass*> K2_ReplaceAreaInOctreeData = { 0x4b14cf0, 10 };
    // Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
    // [0] WorldContextObject : const UObject*
    // [1] Point : const FVector&
    // [2] ProjectedLocation : const FVector&
    // [3] NavData : const ANavigationData*
    // [4] FilterClass : const UClass*
    // [5] QueryExtent : const FVector
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const ANavigationData*, const UClass*, const FVector> K2_ProjectPointToNavigation = { 0x4b17af0, 11 };
    // Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
    // [0] WorldContextObject : const UObject*
    // [1] Origin : const FVector&
    // [2] RandomLocation : const FVector&
    // [3] Radius : const float
    // [4] NavData : const ANavigationData*
    // [5] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const float, const ANavigationData*, const UClass*> K2_GetRandomReachablePointInRadius = { 0x4b175f0, 12 };
    // Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
    // [0] WorldContextObject : const UObject*
    // [1] Origin : const FVector&
    // [2] RandomLocation : const FVector&
    // [3] Radius : const float
    // [4] NavData : const ANavigationData*
    // [5] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const float, const ANavigationData*, const UClass*> K2_GetRandomPointInNavigableRadius = { 0x4b13930, 13 };
    // Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
    // [0] WorldContextObject : const UObject*
    // [1] Origin : const FVector&
    // [2] RandomLocation : const FVector&
    // [3] Radius : const float
    // [4] NavData : const ANavigationData*
    // [5] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*, const FVector&, const FVector&, const float, const ANavigationData*, const UClass*> K2_GetRandomLocationInNavigableRadius = { 0x4b17240, 14 };
    // Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
    // [0] WorldContextObject : const UObject*
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*> IsNavigationBeingBuiltOrLocked = { 0x4b16640, 15 };
    // Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
    // [0] WorldContextObject : const UObject*
    constexpr static const FunctionPointer<UNavigationSystemV1, bool, const UObject*> IsNavigationBeingBuilt = { 0x4b16760, 16 };
    // Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
    // [0] WorldContextObject : const UObject*
    // [1] Origin : const FVector&
    // [2] Radius : const float
    // [3] NavData : const ANavigationData*
    // [4] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, FVector, const UObject*, const FVector&, const float, const ANavigationData*, const UClass*> GetRandomReachablePointInRadius = { 0x4b142a0, 17 };
    // Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
    // [0] WorldContextObject : const UObject*
    // [1] Origin : const FVector&
    // [2] Radius : const float
    // [3] NavData : const ANavigationData*
    // [4] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, FVector, const UObject*, const FVector&, const float, const ANavigationData*, const UClass*> GetRandomPointInNavigableRadius = { 0x4b13e30, 18 };
    // Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
    // [0] WorldContextObject : const UObject*
    // [1] PathStart : const FVector&
    // [2] PathEnd : const FVector&
    // [3] PathLength : const float&
    // [4] NavData : const ANavigationData*
    // [5] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, TEnumAsByte<ENavigationQueryResult>, const UObject*, const FVector&, const FVector&, const float&, const ANavigationData*, const UClass*> GetPathLength = { 0x4b16880, 19 };
    // Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
    // [0] WorldContextObject : const UObject*
    // [1] PathStart : const FVector&
    // [2] PathEnd : const FVector&
    // [3] PathCost : const float&
    // [4] NavData : const ANavigationData*
    // [5] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, TEnumAsByte<ENavigationQueryResult>, const UObject*, const FVector&, const FVector&, const float&, const ANavigationData*, const UClass*> GetPathCost = { 0x4b16d60, 20 };
    // Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
    // [0] WorldContextObject : const UObject*
    constexpr static const FunctionPointer<UNavigationSystemV1, UNavigationSystemV1*, const UObject*> GetNavigationSystem = { 0x4b17fb0, 21 };
    // Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
    // [0] WorldContextObject : const UObject*
    // [1] PathStart : const FVector&
    // [2] PathEnd : const FVector&
    // [3] PathfindingContext : const AActor*
    // [4] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, UNavigationPath*, const UObject*, const FVector&, const FVector&, const AActor*, const UClass*> FindPathToLocationSynchronously = { 0x4b16310, 22 };
    // Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
    // [0] WorldContextObject : const UObject*
    // [1] PathStart : const FVector&
    // [2] GoalActor : const AActor*
    // [3] TetherDistance : const float
    // [4] PathfindingContext : const AActor*
    // [5] FilterClass : const UClass*
    constexpr static const FunctionPointer<UNavigationSystemV1, UNavigationPath*, const UObject*, const FVector&, const AActor*, const float, const AActor*, const UClass*> FindPathToActorSynchronously = { 0x4b15e30, 23 };
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align n/a MaxSize: 0x0058
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bStrictlyStatic : 1;                                        // 0x0050:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bCreateOnClient : 1;                                        // 0x0050:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0050:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0050:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007) MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x03B8 (952 bytes) (0x0002C8 - 0x0003B8) align n/a MaxSize: 0x03B8
class ANavigationTestingActor : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData08_8[0x10];                                      // 0x02C8   (0x0010) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02D8   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x02E0   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bActAsNavigationInvoker : 1;                                // 0x02E8:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_5[0x7];                                       // 0x02E9   (0x0007) MISSED
    UPROPERTY(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNavAgentProperties                                NavAgentProps;                                              // 0x02F0   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            QueryingExtent;                                             // 0x0320   (0x000C)
    /* public    */ unsigned char                                      UnknownData10_6[0x4];                                       // 0x032C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ANavigationData*                             MyNavData;                                                  // 0x0330   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ProjectedLocation;                                          // 0x0338   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bProjectedLocationValid : 1;                                // 0x0344:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSearchStart : 1;                                           // 0x0344:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData11_5[0x3];                                       // 0x0345   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CostLimitFactor;                                            // 0x0348   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumCostLimit;                                           // 0x034C   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bBacktracking : 1;                                          // 0x0350:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseHierarchicalPathfinding : 1;                            // 0x0350:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGatherDetailedInfo : 1;                                    // 0x0350:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDistanceToWall : 1;                                    // 0x0350:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowNodePool : 1;                                          // 0x0350:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowBestPath : 1;                                          // 0x0350:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowDiffWithPreviousStep : 1;                              // 0x0350:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShouldBeVisibleInGame : 1;                                 // 0x0350:7 (0x0001)
    /* public    */ unsigned char                                      UnknownData12_5[0x3];                                       // 0x0351   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                            // 0x0354   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x3];                                       // 0x0355   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          TextCanvasOffset;                                           // 0x0358   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPathExist : 1;                                             // 0x0360:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPathIsPartial : 1;                                         // 0x0360:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPathSearchOutOfNodes : 1;                                  // 0x0360:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData14_5[0x3];                                       // 0x0361   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PathfindingTime;                                            // 0x0364   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PathCost;                                                   // 0x0368   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PathfindingSteps;                                           // 0x036C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ANavigationTestingActor*                     OtherActor;                                                 // 0x0370   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      FilterClass;                                                // 0x0378   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ShowStepIndex;                                              // 0x0380   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OffsetFromCornersDistance;                                  // 0x0384   (0x0004)
    /* public    */ unsigned char                                      UnknownData15_7[0x30];                                      // 0x0388   (0x0030) MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0550 (1360 bytes) (0x000538 - 0x000550) align n/a MaxSize: 0x0550
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0538   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNavigationLink>                            Links;                                                      // 0x0540   (0x0010)
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x00F0 (240 bytes) (0x0000C0 - 0x0000F0) align n/a MaxSize: 0x00F0
class UNavRelevantComponent : public UActorComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x24];                                      // 0x00C0   (0x0024) MISSED
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAttachToOwnersRoot : 1;                                    // 0x00E4:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_5[0x3];                                       // 0x00E5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UObject*                                     CachedNavParent;                                            // 0x00E8   (0x0008)

    /// Functions
    // Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
    // [0] bRelevant : const bool
    constexpr static const FunctionPointer<UNavRelevantComponent, void, const bool> SetNavigationRelevancy = { 0x4b1bc00, 0 };
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x01A0 (416 bytes) (0x0000F0 - 0x0001A0) align n/a MaxSize: 0x01A0
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData06_8[0x8];                                       // 0x00F0   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ uint32_t                                           NavLinkUserId;                                              // 0x00F8   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_6[0x4];                                       // 0x00FC   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      EnabledAreaClass;                                           // 0x0100   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      DisabledAreaClass;                                          // 0x0108   (0x0008)
    UPROPERTY(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FNavAgentSelector                                  SupportedAgents;                                            // 0x0110   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            LinkRelativeStart;                                          // 0x0114   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            LinkRelativeEnd;                                            // 0x0120   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                              // 0x012C   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x012D   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bLinkEnabled : 1;                                           // 0x0130:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bNotifyWhenEnabled : 1;                                     // 0x0130:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bNotifyWhenDisabled : 1;                                    // 0x0130:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bCreateBoxObstacle : 1;                                     // 0x0130:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_5[0x3];                                       // 0x0131   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            ObstacleOffset;                                             // 0x0134   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            ObstacleExtent;                                             // 0x0140   (0x000C)
    /* public    */ unsigned char                                      UnknownData10_6[0x4];                                       // 0x014C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      ObstacleAreaClass;                                          // 0x0150   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              BroadcastRadius;                                            // 0x0158   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              BroadcastInterval;                                          // 0x015C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                           // 0x0160   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_7[0x3F];                                      // 0x0161   (0x003F) MISSED
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
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0538   (0x0008) MISSED
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
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNavAgentSelector                                  SupportedAgents;                                            // 0x0318   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x031C   (0x0004) MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0550 (1360 bytes) (0x000538 - 0x000550) align n/a MaxSize: 0x0550
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x18];                                      // 0x0538   (0x0018) MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0170 (368 bytes) (0x0000F0 - 0x000170) align n/a MaxSize: 0x0170
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      AreaClass;                                                  // 0x00F0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            FailsafeExtent;                                             // 0x00F8   (0x000C)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeAgentHeight : 1;                                    // 0x0104:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_5[0x3];                                       // 0x0105   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MoveComponentName;                                          // 0x0108   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x50];                                      // 0x0110   (0x0050) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class USceneComponent*                             MoveComponent;                                              // 0x0160   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0168   (0x0008) MISSED

    /// Functions
    // Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
    // [0] NewAreaClass : const UClass*
    constexpr static const FunctionPointer<UNavModifierComponent, void, const UClass*> SetAreaClass = { 0x4b1b0e0, 0 };
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align n/a MaxSize: 0x0330
class ANavModifierVolume : public AVolume
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0318   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      AreaClass;                                                  // 0x0320   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x0328   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0329   (0x0007) MISSED

    /// Functions
    // Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
    // [0] NewAreaClass : const UClass*
    constexpr static const FunctionPointer<ANavModifierVolume, void, const UClass*> SetAreaClass = { 0x4b1b6b0, 0 };
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
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x02C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x02D0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bLoadOnClient : 1;                                          // 0x02D1:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x02D2   (0x0006) MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0540 (1344 bytes) (0x000538 - 0x000540) align n/a MaxSize: 0x0540
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0538   (0x0008) MISSED
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
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawTriangleEdges : 1;                                     // 0x04D0:0 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawPolyEdges : 1;                                         // 0x04D0:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawFilledPolys : 1;                                       // 0x04D0:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawNavMeshEdges : 1;                                      // 0x04D0:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawTileBounds : 1;                                        // 0x04D0:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawPathCollidingGeometry : 1;                             // 0x04D0:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawTileLabels : 1;                                        // 0x04D0:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawPolygonLabels : 1;                                     // 0x04D0:7 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDefaultPolygonCost : 1;                                // 0x04D1:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x04D1:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawNavLinks : 1;                                          // 0x04D1:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawFailedNavLinks : 1;                                    // 0x04D1:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawClusters : 1;                                          // 0x04D1:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawOctree : 1;                                            // 0x04D1:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawOctreeDetails : 1;                                     // 0x04D1:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x04D1:7 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x04D2:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_5[0x1];                                       // 0x04D3   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DrawOffset;                                                 // 0x04D4   (0x0004)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFixedTilePoolSize : 1;                                     // 0x04D8:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData06_5[0x3];                                       // 0x04D9   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TilePoolSize;                                               // 0x04DC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TileSizeUU;                                                 // 0x04E0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CellSize;                                                   // 0x04E4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CellHeight;                                                 // 0x04E8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentRadius;                                                // 0x04EC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentHeight;                                                // 0x04F0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentMaxSlope;                                              // 0x04F4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentMaxStepHeight;                                         // 0x04F8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinRegionArea;                                              // 0x04FC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MergeRegionSize;                                            // 0x0500   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxSimplificationError;                                     // 0x0504   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0508   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TileNumberHardLimit;                                        // 0x050C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PolyRefTileBits;                                            // 0x0510   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PolyRefNavPolyBits;                                         // 0x0514   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PolyRefSaltBits;                                            // 0x0518   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            NavMeshOriginOffset;                                        // 0x051C   (0x000C)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultDrawDistance;                                        // 0x0528   (0x0004)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultMaxSearchNodes;                                      // 0x052C   (0x0004)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0530   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0534   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0535   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x2];                                       // 0x0536   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RegionChunkSplits;                                          // 0x0538   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LayerChunkSplits;                                           // 0x053C   (0x0004)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSortNavigationAreasByCost : 1;                             // 0x0540:0 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPerformVoxelFiltering : 1;                                 // 0x0540:1 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMarkLowHeightAreas : 1;                                    // 0x0540:2 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0540:3 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFilterLowSpanSequences : 1;                                // 0x0540:4 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0540:5 (0x0001)
    UPROPERTY(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0540:6 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0540:7 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0541:0 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseVirtualFilters : 1;                                     // 0x0541:1 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0541:2 (0x0001)
    UPROPERTY(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bUseVoxelCache : 1;                                         // 0x0541:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData08_5[0x2];                                       // 0x0542   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              TileSetUpdateInterval;                                      // 0x0544   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HeuristicScale;                                             // 0x0548   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VerticalDeviationFromGroundCompensation;                    // 0x054C   (0x0004)
    /* public    */ unsigned char                                      UnknownData09_7[0x30];                                      // 0x0550   (0x0030) MISSED

    /// Functions
    // Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
    // [0] Bounds : const FBox
    // [1] OldArea : const UClass*
    // [2] NewArea : const UClass*
    // [3] ReplaceLinks : const bool
    constexpr static const FunctionPointer<ARecastNavMesh, bool, const FBox, const UClass*, const UClass*, const bool> K2_ReplaceAreaInTileBounds = { 0x4b1cd50, 0 };
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align n/a MaxSize: 0x0040
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0030   (0x0010) MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNavGraphEdge
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x18];                                      // 0x0000   (0x0018) MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRecastNavMeshGenerationProperties
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TileSizeUU;                                                 // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CellSize;                                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CellHeight;                                                 // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentRadius;                                                // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentHeight;                                                // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinRegionArea;                                              // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MergeRegionSize;                                            // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0030   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0031   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0032   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x003D   (0x0003) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
