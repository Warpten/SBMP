
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
#include "Chaos.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AChaosSolverActor;
class UChaosDebugDrawComponent;
class UChaosEventListenerComponent;
class UChaosGameplayEventDispatcher;
class UChaosNotifyHandlerInterface;
class UChaosSolver;
class UChaosSolverEngineBlueprintLibrary;
class UChaosSolverSettings;
struct FBreakEventCallbackWrapper;
struct FChaosBreakEvent;
struct FChaosDebugSubstepControl;
struct FChaosHandlerSet;
struct FChaosPhysicsCollisionInfo;

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum -  1 (1 bytes)
enum class EClusterConnectionTypeEnum : uint8_t
{
    Chaos_PointImplicit                                                              = 0,
    Chaos_DelaunayTriangulation                                                      = 1,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation                                 = 2,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay                                  = 3,
    Chaos_None                                                                       = 4,
    Chaos_EClsuterCreationParameters_Max                                             = 5
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UChaosDebugDrawComponent : public UActorComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00C0   (0x0008) MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UChaosEventListenerComponent : public UActorComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00C0   (0x0008) MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FChaosHandlerSet
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<UObject*>                                     ChaosHandlers;                                              // 0x0008   (0x0050)
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FBreakEventCallbackWrapper
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x40];                                      // 0x0000   (0x0040) MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x0280 (640 bytes) (0x0000C8 - 0x000280) align n/a MaxSize: 0x0280
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x110];                                     // 0x00C8   (0x0110) MISSED
    UPROPERTY(ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TMap<class UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;                                // 0x01D8   (0x0050)
    UPROPERTY(ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TMap<class UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;                          // 0x0228   (0x0050)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0278   (0x0008) MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UChaosNotifyHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
    // [0] PhysicsCollision : const FChaosPhysicsCollisionInfo&
    constexpr static const FunctionPointer<UChaosSolverEngineBlueprintLibrary, FHitResult, const FChaosPhysicsCollisionInfo&> ConvertPhysicsCollisionToHitResult = { 0x4c3dc80, 0 };
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UChaosSolver : public UObject
{ 
public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align n/a MaxSize: 0x0003
struct FChaosDebugSubstepControl
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPause;                                                     // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSubstep;                                                   // 0x0001   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStep;                                                      // 0x0002   (0x0001)
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x03C0 (960 bytes) (0x0002C8 - 0x0003C0) align n/a MaxSize: 0x03C0
class AChaosSolverActor : public AActor
{ 
public:
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FChaosSolverConfiguration                          Properties;                                                 // 0x02C8   (0x0068)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeStepMultiplier;                                         // 0x0330   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CollisionIterations;                                        // 0x0334   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PushOutIterations;                                          // 0x0338   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PushOutPairIterations;                                      // 0x033C   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClusterConnectionFactor;                                    // 0x0340   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x0344   (0x0001)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DoGenerateCollisionData;                                    // 0x0345   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x2];                                       // 0x0346   (0x0002) MISSED
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x0348   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DoGenerateBreakingData;                                     // 0x0358   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x0359   (0x0003) MISSED
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x035C   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DoGenerateTrailingData;                                     // 0x036C   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x036D   (0x0003) MISSED
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0370   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MassScale;                                                  // 0x0380   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateContactGraph;                                      // 0x0384   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHasFloor;                                                  // 0x0385   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x2];                                       // 0x0386   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FloorHeight;                                                // 0x0388   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x038C   (0x0003)
    /* public    */ unsigned char                                      UnknownData11_6[0x1];                                       // 0x038F   (0x0001) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBillboardComponent*                         SpriteComponent;                                            // 0x0390   (0x0008)
    /* public    */ unsigned char                                      UnknownData12_6[0x18];                                      // 0x0398   (0x0018) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                           // 0x03B0   (0x0008)
    /* public    */ unsigned char                                      UnknownData13_7[0x8];                                       // 0x03B8   (0x0008) MISSED

    /// Functions
    // Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
    // [0] bActive : const bool
    constexpr static const FunctionPointer<AChaosSolverActor, void, const bool> SetSolverActive = { 0x1232140, 0 };
    // Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
    constexpr static const FunctionPointer<AChaosSolverActor, void> SetAsCurrentWorldSolver = { 0x4c3e7e0, 1 };
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align n/a MaxSize: 0x0058
class UChaosSolverSettings : public UDeveloperSettings
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0040   (0x0018)
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FChaosPhysicsCollisionInfo
{ 
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPrimitiveComponent*                         OtherComponent;                                             // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0010   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Normal;                                                     // 0x001C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AccumulatedImpulse;                                         // 0x0028   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x0034   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OtherVelocity;                                              // 0x0040   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularVelocity;                                            // 0x004C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OtherAngularVelocity;                                       // 0x0058   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x0064   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OtherMass;                                                  // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FChaosBreakEvent
{ 
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0008   (0x000C)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x0014   (0x000C)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularVelocity;                                            // 0x0020   (0x000C)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x002C   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UChaosDebugDrawComponent) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UChaosEventListenerComponent) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(FChaosHandlerSet) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x0280); // 640 bytes (0x0000C8 - 0x000280)
static_assert(sizeof(UChaosNotifyHandlerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FChaosDebugSubstepControl) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(AChaosSolverActor) == 0x03C0); // 960 bytes (0x0002C8 - 0x0003C0)
static_assert(sizeof(UChaosSolverSettings) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FChaosBreakEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 0x01D8);
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 0x0228);
static_assert(offsetof(AChaosSolverActor, Properties) == 0x02C8);
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x0344);
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x0348);
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x035C);
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x0370);
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x038C);
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x0390);
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x03B0);
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x0000);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x0008);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x0010);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x001C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x0028);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x0034);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x004C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x0058);
static_assert(offsetof(FChaosBreakEvent, Component) == 0x0000);
static_assert(offsetof(FChaosBreakEvent, Location) == 0x0008);
static_assert(offsetof(FChaosBreakEvent, Velocity) == 0x0014);
static_assert(offsetof(FChaosBreakEvent, AngularVelocity) == 0x0020);
#endif
