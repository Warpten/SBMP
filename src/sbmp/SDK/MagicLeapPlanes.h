
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

class UMagicLeapPlanesComponent;
class UMagicLeapPlanesFunctionLibrary;
struct FMagicLeapPlaneBoundaries;
struct FMagicLeapPlaneBoundary;
struct FMagicLeapPlaneResult;
struct FMagicLeapPlanesQuery;
struct FMagicLeapPolygon;

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryFlags -  1 (1 bytes)
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
    Vertical                                                                         = 0,
    Horizontal                                                                       = 1,
    Arbitrary                                                                        = 2,
    OrientToGravity                                                                  = 3,
    PreferInner                                                                      = 4,
    Ceiling                                                                          = 5,
    Floor                                                                            = 6,
    Wall                                                                             = 7,
    Polygons                                                                         = 8
};

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryType -  1 (1 bytes)
enum class EMagicLeapPlaneQueryType : uint8_t
{
    Bulk                                                                             = 0,
    Delta                                                                            = 1
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesComponent
/// Size: 0x02D0 (720 bytes) (0x000260 - 0x0002D0) align n/a MaxSize: 0x02D0
class UMagicLeapPlanesComponent : public USceneComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<EMagicLeapPlaneQueryFlags>                  QueryFlags;                                                 // 0x0260   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBoxComponent*                               SearchVolume;                                               // 0x0270   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxResults;                                                 // 0x0278   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinHolePerimeter;                                           // 0x027C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinPlaneArea;                                               // 0x0280   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMagicLeapPlaneQueryType                           QueryType;                                                  // 0x0284   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0285   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SimilarityThreshold;                                        // 0x0288   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x028C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
    /* private   */ FMulticastInlineDelegate                           OnPlanesQueryResult;                                        // 0x0290   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
    /* private   */ FMulticastInlineDelegate                           OnPersistentPlanesQueryResult;                              // 0x02A0   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x20];                                      // 0x02B0   (0x0020) MISSED

    /// Functions
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
    constexpr static const FunctionPointer<UMagicLeapPlanesComponent, bool> RequestPlanesAsync = { 0x1909e10, 0 };
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
    // [0] InPriority : const TArray<EMagicLeapPlaneQueryFlags>&
    // [1] InFlagsToReorder : const TArray<EMagicLeapPlaneQueryFlags>&
    // [2] OutReorderedFlags : const TArray<EMagicLeapPlaneQueryFlags>&
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, void, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&> ReorderPlaneFlags = { 0x190a4a0, 0 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
    // [0] Handle : const FGuid
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool, const FGuid> RemovePersistentQuery = { 0x190af80, 1 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
    // [0] InQueryFlags : const TArray<EMagicLeapPlaneQueryFlags>&
    // [1] InResultFlags : const TArray<EMagicLeapPlaneQueryFlags>&
    // [2] OutFlags : const TArray<EMagicLeapPlaneQueryFlags>&
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, void, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&> RemoveFlagsNotInQuery = { 0x190a1d0, 2 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
    // [0] Query : const FMagicLeapPlanesQuery&
    // [1] ResultDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool, const FMagicLeapPlanesQuery&, const FDelegateProperty&> PlanesQueryBeginAsync = { 0x190ad10, 3 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
    // [0] Query : const FMagicLeapPlanesQuery&
    // [1] Handle : const FGuid&
    // [2] ResultDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool, const FMagicLeapPlanesQuery&, const FGuid&, const FDelegateProperty&> PlanesPersistentQueryBeginAsync = { 0x190aa00, 4 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool> IsTrackerValid = { 0x190b170, 5 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
    // [0] ContentActor : const AActor*
    // [1] PlaneResult : const FMagicLeapPlaneResult&
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, FTransform, const AActor*, const FMagicLeapPlaneResult&> GetContentScale = { 0x190a700, 6 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool> DestroyTracker = { 0x190b1b0, 7 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool> CreateTracker = { 0x190b1f0, 8 };
    // Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
    // [0] PersistentQueryType : const EMagicLeapPlaneQueryType
    constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, FGuid, const EMagicLeapPlaneQueryType> AddPersistentQuery = { 0x190b080, 9 };
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPolygon
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapPolygon
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundary
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMagicLeapPlaneBoundary
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMagicLeapPolygon                                  Polygon;                                                    // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMagicLeapPolygon>                          Holes;                                                      // 0x0010   (0x0010)
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundaries
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMagicLeapPlaneBoundaries
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              ID;                                                         // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMagicLeapPlaneBoundary>                    Boundaries;                                                 // 0x0010   (0x0010)
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FMagicLeapPlaneResult
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PlanePosition;                                              // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           PlaneOrientation;                                           // 0x000C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           ContentOrientation;                                         // 0x0018   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          PlaneDimensions;                                            // 0x0024   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<EMagicLeapPlaneQueryFlags>                  PlaneFlags;                                                 // 0x0030   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              ID;                                                         // 0x0040   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              InnerID;                                                    // 0x0050   (0x0010)
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlanesQuery
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FMagicLeapPlanesQuery
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<EMagicLeapPlaneQueryFlags>                  Flags;                                                      // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBoxComponent*                               SearchVolume;                                               // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxResults;                                                 // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinHoleLength;                                              // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinPlaneArea;                                               // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SearchVolumePosition;                                       // 0x0024   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              SearchVolumeOrientation;                                    // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SearchVolumeExtents;                                        // 0x0040   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SimilarityThreshold;                                        // 0x004C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSearchVolumeTrackingSpace;                                 // 0x0050   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bResultTrackingSpace;                                       // 0x0051   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xE];                                       // 0x0052   (0x000E) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMagicLeapPlanesComponent) == 0x02D0); // 720 bytes (0x000260 - 0x0002D0)
static_assert(sizeof(UMagicLeapPlanesFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapPolygon) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMagicLeapPlaneBoundary) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneBoundaries) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneResult) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMagicLeapPlanesQuery) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(UMagicLeapPlanesComponent, QueryFlags) == 0x0260);
static_assert(offsetof(UMagicLeapPlanesComponent, SearchVolume) == 0x0270);
static_assert(offsetof(UMagicLeapPlanesComponent, QueryType) == 0x0284);
static_assert(offsetof(FMagicLeapPolygon, Vertices) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Polygon) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Holes) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneBoundaries, ID) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundaries, Boundaries) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneResult, PlanePosition) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneOrientation) == 0x000C);
static_assert(offsetof(FMagicLeapPlaneResult, ContentOrientation) == 0x0018);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneDimensions) == 0x0024);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneFlags) == 0x0030);
static_assert(offsetof(FMagicLeapPlaneResult, ID) == 0x0040);
static_assert(offsetof(FMagicLeapPlaneResult, InnerID) == 0x0050);
static_assert(offsetof(FMagicLeapPlanesQuery, Flags) == 0x0000);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolume) == 0x0010);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumePosition) == 0x0024);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeOrientation) == 0x0030);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeExtents) == 0x0040);
#endif
