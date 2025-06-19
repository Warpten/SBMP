
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
#include "SlateCore.h"

#pragma pack(push, 0x1)

class APaperCharacter;
class APaperFlipbookActor;
class APaperGroupedSpriteActor;
class APaperSpriteActor;
class APaperTerrainActor;
class APaperTileMapActor;
class UMaterialExpressionSpriteTextureSampler;
class UPaperFlipbook;
class UPaperFlipbookComponent;
class UPaperGroupedSpriteComponent;
class UPaperRuntimeSettings;
class UPaperSprite;
class UPaperSpriteAtlas;
class UPaperSpriteBlueprintLibrary;
class UPaperSpriteComponent;
class UPaperTerrainComponent;
class UPaperTerrainMaterial;
class UPaperTerrainSplineComponent;
class UPaperTileLayer;
class UPaperTileMap;
class UPaperTileMapComponent;
class UPaperTileSet;
class UTileMapBlueprintLibrary;
struct FIntMargin;
struct FPaperFlipbookKeyFrame;
struct FPaperSpriteAtlasSlot;
struct FPaperSpriteSocket;
struct FPaperTerrainMaterialRule;
struct FPaperTileInfo;
struct FPaperTileMetadata;
struct FPaperTileSetTerrain;
struct FSpriteAssetInitParameters;
struct FSpriteDrawCallRecord;
struct FSpriteGeometryCollection;
struct FSpriteGeometryShape;
struct FSpriteInstanceData;

/// Enum /Script/Paper2D.EFlipbookCollisionMode -  1 (1 bytes)
enum class EFlipbookCollisionMode : uint8_t
{
    NoCollision                                                                      = 0,
    FirstFrameCollision                                                              = 1,
    EachFrameCollision                                                               = 2
};

/// Enum /Script/Paper2D.EPaperSpriteAtlasPadding -  1 (1 bytes)
enum class EPaperSpriteAtlasPadding : uint8_t
{
    DilateBorder                                                                     = 0,
    PadWithZero                                                                      = 1
};

/// Enum /Script/Paper2D.ETileMapProjectionMode -  1 (1 bytes)
enum class ETileMapProjectionMode : uint8_t
{
    Orthogonal                                                                       = 0,
    IsometricDiamond                                                                 = 1,
    IsometricStaggered                                                               = 2,
    HexagonalStaggered                                                               = 3
};

/// Enum /Script/Paper2D.ESpritePivotMode -  1 (1 bytes)
enum class ESpritePivotMode : uint8_t
{
    Top_Left                                                                         = 0,
    Top_Center                                                                       = 1,
    Top_Right                                                                        = 2,
    Center_Left                                                                      = 3,
    Center_Center                                                                    = 4,
    Center_Right                                                                     = 5,
    Bottom_Left                                                                      = 6,
    Bottom_Center                                                                    = 7,
    Bottom_Right                                                                     = 8,
    Custom                                                                           = 9
};

/// Enum /Script/Paper2D.ESpritePolygonMode -  1 (1 bytes)
enum class ESpritePolygonMode : uint8_t
{
    SourceBoundingBox                                                                = 0,
    TightBoundingBox                                                                 = 1,
    ShrinkWrapped                                                                    = 2,
    FullyCustom                                                                      = 3,
    Diced                                                                            = 4
};

/// Enum /Script/Paper2D.ESpriteShapeType -  1 (1 bytes)
enum class ESpriteShapeType : uint8_t
{
    Box                                                                              = 0,
    Circle                                                                           = 1,
    Polygon                                                                          = 2
};

/// Enum /Script/Paper2D.ESpriteCollisionMode -  1 (1 bytes)
enum class ESpriteCollisionMode : uint8_t
{
    None                                                                             = 0,
    Use2DPhysics                                                                     = 1,
    Use3DPhysics                                                                     = 2
};

/// Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align n/a MaxSize: 0x00A0
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSampleAdditionalTextures;                                  // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AdditionalSlotIndex;                                        // 0x0084   (0x0004)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FText                                              SlotDisplayName;                                            // 0x0088   (0x0018)
};

/// Class /Script/Paper2D.PaperCharacter
/// Size: 0x0560 (1376 bytes) (0x000558 - 0x000560) align n/a MaxSize: 0x0560
class APaperCharacter : public ACharacter
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperFlipbookComponent*                     Sprite;                                                     // 0x0558   (0x0008)
};

/// Struct /Script/Paper2D.PaperFlipbookKeyFrame
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FPaperFlipbookKeyFrame
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperSprite*                                Sprite;                                                     // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            FrameRun;                                                   // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x000C   (0x0004) MISSED
};

/// Class /Script/Paper2D.PaperFlipbook
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UPaperFlipbook : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              FramesPerSecond;                                            // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FPaperFlipbookKeyFrame>                     KeyFrames;                                                  // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          DefaultMaterial;                                            // 0x0040   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                            // 0x0048   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0049   (0x0007) MISSED

    /// Functions
    // Function /Script/Paper2D.PaperFlipbook.IsValidKeyFrameIndex
    // [0] Index : const int32_t
    constexpr static const FunctionPointer<UPaperFlipbook, bool, const int32_t> IsValidKeyFrameIndex = { 0x1783090, 0 };
    // Function /Script/Paper2D.PaperFlipbook.GetTotalDuration
    constexpr static const FunctionPointer<UPaperFlipbook, float> GetTotalDuration = { 0x17835a0, 1 };
    // Function /Script/Paper2D.PaperFlipbook.GetSpriteAtTime
    // [0] Time : const float
    // [1] bClampToEnds : const bool
    constexpr static const FunctionPointer<UPaperFlipbook, UPaperSprite*, const float, const bool> GetSpriteAtTime = { 0x1783290, 2 };
    // Function /Script/Paper2D.PaperFlipbook.GetSpriteAtFrame
    // [0] FrameIndex : const int32_t
    constexpr static const FunctionPointer<UPaperFlipbook, UPaperSprite*, const int32_t> GetSpriteAtFrame = { 0x1783180, 3 };
    // Function /Script/Paper2D.PaperFlipbook.GetNumKeyFrames
    constexpr static const FunctionPointer<UPaperFlipbook, int32_t> GetNumKeyFrames = { 0x1640a70, 4 };
    // Function /Script/Paper2D.PaperFlipbook.GetNumFrames
    constexpr static const FunctionPointer<UPaperFlipbook, int32_t> GetNumFrames = { 0x1783600, 5 };
    // Function /Script/Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
    // [0] Time : const float
    // [1] bClampToEnds : const bool
    constexpr static const FunctionPointer<UPaperFlipbook, int32_t, const float, const bool> GetKeyFrameIndexAtTime = { 0x1783430, 6 };
};

/// Class /Script/Paper2D.PaperFlipbookActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class APaperFlipbookActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperFlipbookComponent*                     RenderComponent;                                            // 0x02C8   (0x0008)
};

/// Class /Script/Paper2D.PaperFlipbookComponent
/// Size: 0x05B0 (1456 bytes) (0x000560 - 0x0005B0) align n/a MaxSize: 0x05B0
class UPaperFlipbookComponent : public UMeshComponent
{ 
public:
    UPROPERTY(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UPaperFlipbook*                              SourceFlipbook;                                             // 0x0560   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          Material;                                                   // 0x0568   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PlayRate;                                                   // 0x0570   (0x0004)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bLooping : 1;                                               // 0x0574:0 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bReversePlayback : 1;                                       // 0x0574:1 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bPlaying : 1;                                               // 0x0574:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0575   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              AccumulatedTime;                                            // 0x0578   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            CachedFrameIndex;                                           // 0x057C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FLinearColor                                       SpriteColor;                                                // 0x0580   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBodySetup*                                  CachedBodySetup;                                            // 0x0590   (0x0008)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnFinishedPlaying;                                          // 0x0598   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x05A8   (0x0008) MISSED

    /// Functions
    // Function /Script/Paper2D.PaperFlipbookComponent.Stop
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void> Stop = { 0x1784760, 0 };
    // Function /Script/Paper2D.PaperFlipbookComponent.SetSpriteColor
    // [0] NewColor : const FLinearColor
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void, const FLinearColor> SetSpriteColor = { 0x1784910, 1 };
    // Function /Script/Paper2D.PaperFlipbookComponent.SetPlayRate
    // [0] NewRate : const float
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void, const float> SetPlayRate = { 0x1784160, 2 };
    // Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
    // [0] NewFramePosition : const int32_t
    // [1] bFireEvents : const bool
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void, const int32_t, const bool> SetPlaybackPositionInFrames = { 0x1784560, 3 };
    // Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPosition
    // [0] NewPosition : const float
    // [1] bFireEvents : const bool
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void, const float, const bool> SetPlaybackPosition = { 0x1784360, 4 };
    // Function /Script/Paper2D.PaperFlipbookComponent.SetNewTime
    // [0] NewTime : const float
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void, const float> SetNewTime = { 0x1784060, 5 };
    // Function /Script/Paper2D.PaperFlipbookComponent.SetLooping
    // [0] bNewLooping : const bool
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void, const bool> SetLooping = { 0x1784260, 6 };
    // Function /Script/Paper2D.PaperFlipbookComponent.SetFlipbook
    // [0] NewFlipbook : const UPaperFlipbook*
    constexpr static const FunctionPointer<UPaperFlipbookComponent, bool, const UPaperFlipbook*> SetFlipbook = { 0x1784ae0, 7 };
    // Function /Script/Paper2D.PaperFlipbookComponent.ReverseFromEnd
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void> ReverseFromEnd = { 0x1784780, 8 };
    // Function /Script/Paper2D.PaperFlipbookComponent.Reverse
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void> Reverse = { 0x1784810, 9 };
    // Function /Script/Paper2D.PaperFlipbookComponent.PlayFromStart
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void> PlayFromStart = { 0x1784850, 10 };
    // Function /Script/Paper2D.PaperFlipbookComponent.Play
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void> Play = { 0x17848c0, 11 };
    // Function /Script/Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
    // [0] OldFlipbook : const UPaperFlipbook*
    constexpr static const FunctionPointer<UPaperFlipbookComponent, void, const UPaperFlipbook*> OnRep_SourceFlipbook = { 0x1783e70, 12 };
    // Function /Script/Paper2D.PaperFlipbookComponent.IsReversing
    constexpr static const FunctionPointer<UPaperFlipbookComponent, bool> IsReversing = { 0x1784700, 13 };
    // Function /Script/Paper2D.PaperFlipbookComponent.IsPlaying
    constexpr static const FunctionPointer<UPaperFlipbookComponent, bool> IsPlaying = { 0x1784730, 14 };
    // Function /Script/Paper2D.PaperFlipbookComponent.IsLooping
    constexpr static const FunctionPointer<UPaperFlipbookComponent, bool> IsLooping = { 0x1784230, 15 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetSpriteColor
    constexpr static const FunctionPointer<UPaperFlipbookComponent, FLinearColor> GetSpriteColor = { 0x1784a80, 16 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetPlayRate
    constexpr static const FunctionPointer<UPaperFlipbookComponent, float> GetPlayRate = { 0x1784140, 17 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
    constexpr static const FunctionPointer<UPaperFlipbookComponent, int32_t> GetPlaybackPositionInFrames = { 0x17844e0, 18 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPosition
    constexpr static const FunctionPointer<UPaperFlipbookComponent, float> GetPlaybackPosition = { 0x1784340, 19 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
    constexpr static const FunctionPointer<UPaperFlipbookComponent, int32_t> GetFlipbookLengthInFrames = { 0x1783fa0, 20 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLength
    constexpr static const FunctionPointer<UPaperFlipbookComponent, float> GetFlipbookLength = { 0x1783ff0, 21 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
    constexpr static const FunctionPointer<UPaperFlipbookComponent, float> GetFlipbookFramerate = { 0x1783f60, 22 };
    // Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbook
    constexpr static const FunctionPointer<UPaperFlipbookComponent, UPaperFlipbook*> GetFlipbook = { 0x1784ab0, 23 };
};

/// Class /Script/Paper2D.PaperGroupedSpriteActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class APaperGroupedSpriteActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperGroupedSpriteComponent*                RenderComponent;                                            // 0x02C8   (0x0008)
};

/// Struct /Script/Paper2D.SpriteInstanceData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FSpriteInstanceData
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMatrix                                            Transform;                                                  // 0x0000   (0x0040)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperSprite*                                SourceSprite;                                               // 0x0040   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             VertexColor;                                                // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaterialIndex;                                              // 0x004C   (0x0004)
};

/// Class /Script/Paper2D.PaperGroupedSpriteComponent
/// Size: 0x0590 (1424 bytes) (0x000560 - 0x000590) align n/a MaxSize: 0x0590
class UPaperGroupedSpriteComponent : public UMeshComponent
{ 
public:
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UMaterialInterface*>                  InstanceMaterials;                                          // 0x0560   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FSpriteInstanceData>                        PerInstanceSpriteData;                                      // 0x0570   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0580   (0x0010) MISSED

    /// Functions
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
    // [0] InstanceIndex : const int32_t
    // [1] NewInstanceTransform : const FTransform&
    // [2] bWorldSpace : const bool
    // [3] bMarkRenderStateDirty : const bool
    // [4] bTeleport : const bool
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, bool, const int32_t, const FTransform&, const bool, const bool, const bool> UpdateInstanceTransform = { 0x1785d20, 0 };
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
    // [0] InstanceIndex : const int32_t
    // [1] NewInstanceColor : const FLinearColor
    // [2] bMarkRenderStateDirty : const bool
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, bool, const int32_t, const FLinearColor, const bool> UpdateInstanceColor = { 0x1785b20, 1 };
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
    // [0] WorldSpaceSortAxis : const FVector
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, void, const FVector> SortInstancesAlongAxis = { 0x1785930, 2 };
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.RemoveInstance
    // [0] InstanceIndex : const int32_t
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, bool, const int32_t> RemoveInstance = { 0x1785a30, 3 };
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
    // [0] InstanceIndex : const int32_t
    // [1] OutInstanceTransform : const FTransform&
    // [2] bWorldSpace : const bool
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, bool, const int32_t, const FTransform&, const bool> GetInstanceTransform = { 0x17860a0, 4 };
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, int32_t> GetInstanceCount = { 0x1784340, 5 };
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.ClearInstances
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, void> ClearInstances = { 0x1785a10, 6 };
    // Function /Script/Paper2D.PaperGroupedSpriteComponent.AddInstance
    // [0] Transform : const FTransform&
    // [1] Sprite : const UPaperSprite*
    // [2] bWorldSpace : const bool
    // [3] Color : const FLinearColor
    constexpr static const FunctionPointer<UPaperGroupedSpriteComponent, int32_t, const FTransform&, const UPaperSprite*, const bool, const FLinearColor> AddInstance = { 0x17862e0, 7 };
};

/// Class /Script/Paper2D.PaperRuntimeSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UPaperRuntimeSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableSpriteAtlasGroups;                                   // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableTerrainSplineEditing;                                // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bResizeSpriteDataToMatchTextures;                           // 0x002A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x002B   (0x0005) MISSED
};

/// Struct /Script/Paper2D.PaperSpriteSocket
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FPaperSpriteSocket
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         LocalTransform;                                             // 0x0000   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SocketName;                                                 // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008) MISSED
};

/// Class /Script/Paper2D.PaperSprite
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align n/a MaxSize: 0x00A8
class UPaperSprite : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x10];                                      // 0x0028   (0x0010) MISSED
    UPROPERTY(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UTexture*>                            AdditionalSourceTextures;                                   // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector2D                                          BakedSourceUV;                                              // 0x0048   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector2D                                          BakedSourceDimension;                                       // 0x0050   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UTexture2D*                                  BakedSourceTexture;                                         // 0x0058   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          DefaultMaterial;                                            // 0x0060   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          AlternateMaterial;                                          // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FPaperSpriteSocket>                         Sockets;                                                    // 0x0070   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PixelsPerUnrealUnit;                                        // 0x0084   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBodySetup*                                  BodySetup;                                                  // 0x0088   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AlternateMaterialSplitIndex;                                // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x0094   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector4>                                   BakedRenderData;                                            // 0x0098   (0x0010)
};

/// Class /Script/Paper2D.PaperSpriteActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class APaperSpriteActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperSpriteComponent*                       RenderComponent;                                            // 0x02C8   (0x0008)
};

/// Class /Script/Paper2D.PaperSpriteAtlas
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UPaperSpriteAtlas : public UObject
{ 
public:
};

/// Class /Script/Paper2D.PaperSpriteBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
    // [0] Sprite : const UPaperSprite*
    // [1] Width : const int32_t
    // [2] Height : const int32_t
    constexpr static const FunctionPointer<UPaperSpriteBlueprintLibrary, FSlateBrush, const UPaperSprite*, const int32_t, const int32_t> MakeBrushFromSprite = { 0x1787ad0, 0 };
};

/// Class /Script/Paper2D.PaperSpriteComponent
/// Size: 0x0580 (1408 bytes) (0x000560 - 0x000580) align n/a MaxSize: 0x0580
class UPaperSpriteComponent : public UMeshComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UPaperSprite*                                SourceSprite;                                               // 0x0560   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          MaterialOverride;                                           // 0x0568   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FLinearColor                                       SpriteColor;                                                // 0x0570   (0x0010)

    /// Functions
    // Function /Script/Paper2D.PaperSpriteComponent.SetSpriteColor
    // [0] NewColor : const FLinearColor
    constexpr static const FunctionPointer<UPaperSpriteComponent, void, const FLinearColor> SetSpriteColor = { 0x1788240, 0 };
    // Function /Script/Paper2D.PaperSpriteComponent.SetSprite
    // [0] NewSprite : const UPaperSprite*
    constexpr static const FunctionPointer<UPaperSpriteComponent, bool, const UPaperSprite*> SetSprite = { 0x1784ae0, 1 };
    // Function /Script/Paper2D.PaperSpriteComponent.GetSprite
    constexpr static const FunctionPointer<UPaperSpriteComponent, UPaperSprite*> GetSprite = { 0x1784ab0, 2 };
};

/// Class /Script/Paper2D.PaperTerrainActor
/// Size: 0x02E0 (736 bytes) (0x0002C8 - 0x0002E0) align n/a MaxSize: 0x02E0
class APaperTerrainActor : public AActor
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             DummyRoot;                                                  // 0x02C8   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperTerrainSplineComponent*                SplineComponent;                                            // 0x02D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperTerrainComponent*                      RenderComponent;                                            // 0x02D8   (0x0008)
};

/// Class /Script/Paper2D.PaperTerrainComponent
/// Size: 0x0590 (1424 bytes) (0x000538 - 0x000590) align n/a MaxSize: 0x0590
class UPaperTerrainComponent : public UPrimitiveComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperTerrainMaterial*                       TerrainMaterial;                                            // 0x0538   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bClosedSpline;                                              // 0x0540   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFilledSpline;                                              // 0x0541   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x6];                                       // 0x0542   (0x0006) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperTerrainSplineComponent*                AssociatedSpline;                                           // 0x0548   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RandomSeed;                                                 // 0x0550   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SegmentOverlapAmount;                                       // 0x0554   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FLinearColor                                       TerrainColor;                                               // 0x0558   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            ReparamStepsPerSegment;                                     // 0x0568   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x056C   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x056D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              CollisionThickness;                                         // 0x0570   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x0574   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBodySetup*                                  CachedBodySetup;                                            // 0x0578   (0x0008)
    /* public    */ unsigned char                                      UnknownData07_7[0x10];                                      // 0x0580   (0x0010) MISSED

    /// Functions
    // Function /Script/Paper2D.PaperTerrainComponent.SetTerrainColor
    // [0] NewColor : const FLinearColor
    constexpr static const FunctionPointer<UPaperTerrainComponent, void, const FLinearColor> SetTerrainColor = { 0x1788ad0, 0 };
};

/// Struct /Script/Paper2D.PaperTerrainMaterialRule
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FPaperTerrainMaterialRule
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperSprite*                                StartCap;                                                   // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UPaperSprite*>                        Body;                                                       // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperSprite*                                EndCap;                                                     // 0x0018   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumAngle;                                               // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumAngle;                                               // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCollision;                                           // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionOffset;                                            // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DrawOrder;                                                  // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

/// Class /Script/Paper2D.PaperTerrainMaterial
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align n/a MaxSize: 0x0048
class UPaperTerrainMaterial : public UDataAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPaperTerrainMaterialRule>                  Rules;                                                      // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperSprite*                                InteriorFill;                                               // 0x0040   (0x0008)
};

/// Class /Script/Paper2D.PaperTerrainSplineComponent
/// Size: 0x0640 (1600 bytes) (0x000630 - 0x000640) align n/a MaxSize: 0x0640
class UPaperTerrainSplineComponent : public USplineComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0630   (0x0010) MISSED
};

/// Struct /Script/Paper2D.PaperTileInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FPaperTileInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperTileSet*                               TileSet;                                                    // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PackedTileIndex;                                            // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x000C   (0x0004) MISSED
};

/// Class /Script/Paper2D.PaperTileLayer
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align n/a MaxSize: 0x0098
class UPaperTileLayer : public UObject
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FText                                              LayerName;                                                  // 0x0028   (0x0018)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            LayerWidth;                                                 // 0x0040   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            LayerHeight;                                                // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bHiddenInGame : 1;                                          // 0x0048:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bLayerCollides : 1;                                         // 0x0048:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bOverrideCollisionThickness : 1;                            // 0x0048:2 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bOverrideCollisionOffset : 1;                               // 0x0048:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              CollisionThicknessOverride;                                 // 0x004C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              CollisionOffsetOverride;                                    // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FLinearColor                                       LayerColor;                                                 // 0x0054   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            AllocatedWidth;                                             // 0x0064   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            AllocatedHeight;                                            // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x006C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FPaperTileInfo>                             AllocatedCells;                                             // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperTileSet*                               TileSet;                                                    // 0x0080   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
    /* private   */ TArray<int32_t>                                    AllocatedGrid;                                              // 0x0088   (0x0010)
};

/// Class /Script/Paper2D.PaperTileMap
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align n/a MaxSize: 0x00A8
class UPaperTileMap : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MapWidth;                                                   // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MapHeight;                                                  // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TileWidth;                                                  // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TileHeight;                                                 // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PixelsPerUnrealUnit;                                        // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SeparationPerTileX;                                         // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SeparationPerTileY;                                         // 0x0040   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SeparationPerLayer;                                         // 0x0044   (0x0004)
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UPaperTileSet*>               SelectedTileSet;                                            // 0x0048   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x20];                                      // 0x0050   (0x0020) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0070   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UPaperTileLayer*>                     TileLayers;                                                 // 0x0078   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              CollisionThickness;                                         // 0x0088   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x008C   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                             // 0x008D   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x2];                                       // 0x008E   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            HexSideLength;                                              // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x0094   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBodySetup*                                  BodySetup;                                                  // 0x0098   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LayerNameIndex;                                             // 0x00A0   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_7[0x4];                                       // 0x00A4   (0x0004) MISSED
};

/// Class /Script/Paper2D.PaperTileMapActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class APaperTileMapActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperTileMapComponent*                      RenderComponent;                                            // 0x02C8   (0x0008)
};

/// Class /Script/Paper2D.PaperTileMapComponent
/// Size: 0x05B0 (1456 bytes) (0x000560 - 0x0005B0) align n/a MaxSize: 0x05B0
class UPaperTileMapComponent : public UMeshComponent
{ 
public:
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            MapWidth;                                                   // 0x0560   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            MapHeight;                                                  // 0x0564   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            TileWidth;                                                  // 0x0568   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            TileHeight;                                                 // 0x056C   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPaperTileSet*                               DefaultLayerTileSet;                                        // 0x0570   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMaterialInterface*                          Material;                                                   // 0x0578   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UPaperTileLayer*>                     TileLayers;                                                 // 0x0580   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FLinearColor                                       TileMapColor;                                               // 0x0590   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            UseSingleLayerIndex;                                        // 0x05A0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bUseSingleLayer;                                            // 0x05A4   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x05A5   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPaperTileMap*                               TileMap;                                                    // 0x05A8   (0x0008)

    /// Functions
    // Function /Script/Paper2D.PaperTileMapComponent.SetTileMapColor
    // [0] NewColor : const FLinearColor
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const FLinearColor> SetTileMapColor = { 0x178b780, 0 };
    // Function /Script/Paper2D.PaperTileMapComponent.SetTileMap
    // [0] NewTileMap : const UPaperTileMap*
    constexpr static const FunctionPointer<UPaperTileMapComponent, bool, const UPaperTileMap*> SetTileMap = { 0x1784ae0, 1 };
    // Function /Script/Paper2D.PaperTileMapComponent.SetTile
    // [0] X : const int32_t
    // [1] Y : const int32_t
    // [2] Layer : const int32_t
    // [3] NewValue : const FPaperTileInfo
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const int32_t, const int32_t, const int32_t, const FPaperTileInfo> SetTile = { 0x178bad0, 2 };
    // Function /Script/Paper2D.PaperTileMapComponent.SetLayerColor
    // [0] NewColor : const FLinearColor
    // [1] Layer : const int32_t
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const FLinearColor, const int32_t> SetLayerColor = { 0x178b4e0, 3 };
    // Function /Script/Paper2D.PaperTileMapComponent.SetLayerCollision
    // [0] Layer : const int32_t
    // [1] bHasCollision : const bool
    // [2] bOverrideThickness : const bool
    // [3] CustomThickness : const float
    // [4] bOverrideOffset : const bool
    // [5] CustomOffset : const float
    // [6] bRebuildCollision : const bool
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const int32_t, const bool, const bool, const float, const bool, const float, const bool> SetLayerCollision = { 0x178a3e0, 4 };
    // Function /Script/Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
    // [0] Thickness : const float
    // [1] bRebuildCollision : const bool
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const float, const bool> SetDefaultCollisionThickness = { 0x178a840, 5 };
    // Function /Script/Paper2D.PaperTileMapComponent.ResizeMap
    // [0] NewWidthInTiles : const int32_t
    // [1] NewHeightInTiles : const int32_t
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const int32_t, const int32_t> ResizeMap = { 0x178b920, 6 };
    // Function /Script/Paper2D.PaperTileMapComponent.RebuildCollision
    constexpr static const FunctionPointer<UPaperTileMapComponent, void> RebuildCollision = { 0x178a3c0, 7 };
    // Function /Script/Paper2D.PaperTileMapComponent.OwnsTileMap
    constexpr static const FunctionPointer<UPaperTileMapComponent, bool> OwnsTileMap = { 0x178c250, 8 };
    // Function /Script/Paper2D.PaperTileMapComponent.MakeTileMapEditable
    constexpr static const FunctionPointer<UPaperTileMapComponent, void> MakeTileMapEditable = { 0x178b480, 9 };
    // Function /Script/Paper2D.PaperTileMapComponent.GetTilePolygon
    // [0] TileX : const int32_t
    // [1] TileY : const int32_t
    // [2] Points : const TArray<FVector>&
    // [3] LayerIndex : const int32_t
    // [4] bWorldSpace : const bool
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const int32_t, const int32_t, const TArray<FVector>&, const int32_t, const bool> GetTilePolygon = { 0x178aa10, 10 };
    // Function /Script/Paper2D.PaperTileMapComponent.GetTileMapColor
    constexpr static const FunctionPointer<UPaperTileMapComponent, FLinearColor> GetTileMapColor = { 0x178b850, 11 };
    // Function /Script/Paper2D.PaperTileMapComponent.GetTileCornerPosition
    // [0] TileX : const int32_t
    // [1] TileY : const int32_t
    // [2] LayerIndex : const int32_t
    // [3] bWorldSpace : const bool
    constexpr static const FunctionPointer<UPaperTileMapComponent, FVector, const int32_t, const int32_t, const int32_t, const bool> GetTileCornerPosition = { 0x178b0f0, 12 };
    // Function /Script/Paper2D.PaperTileMapComponent.GetTileCenterPosition
    // [0] TileX : const int32_t
    // [1] TileY : const int32_t
    // [2] LayerIndex : const int32_t
    // [3] bWorldSpace : const bool
    constexpr static const FunctionPointer<UPaperTileMapComponent, FVector, const int32_t, const int32_t, const int32_t, const bool> GetTileCenterPosition = { 0x178ad60, 13 };
    // Function /Script/Paper2D.PaperTileMapComponent.GetTile
    // [0] X : const int32_t
    // [1] Y : const int32_t
    // [2] Layer : const int32_t
    constexpr static const FunctionPointer<UPaperTileMapComponent, FPaperTileInfo, const int32_t, const int32_t, const int32_t> GetTile = { 0x178bd90, 14 };
    // Function /Script/Paper2D.PaperTileMapComponent.GetMapSize
    // [0] MapWidth : const int32_t&
    // [1] MapHeight : const int32_t&
    // [2] NumLayers : const int32_t&
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const int32_t&, const int32_t&, const int32_t&> GetMapSize = { 0x178bff0, 15 };
    // Function /Script/Paper2D.PaperTileMapComponent.GetLayerColor
    // [0] Layer : const int32_t
    constexpr static const FunctionPointer<UPaperTileMapComponent, FLinearColor, const int32_t> GetLayerColor = { 0x178b670, 16 };
    // Function /Script/Paper2D.PaperTileMapComponent.CreateNewTileMap
    // [0] MapWidth : const int32_t
    // [1] MapHeight : const int32_t
    // [2] TileWidth : const int32_t
    // [3] TileHeight : const int32_t
    // [4] PixelsPerUnrealUnit : const float
    // [5] bCreateLayer : const bool
    constexpr static const FunctionPointer<UPaperTileMapComponent, void, const int32_t, const int32_t, const int32_t, const int32_t, const float, const bool> CreateNewTileMap = { 0x178c290, 17 };
    // Function /Script/Paper2D.PaperTileMapComponent.AddNewLayer
    constexpr static const FunctionPointer<UPaperTileMapComponent, UPaperTileLayer*> AddNewLayer = { 0x178b880, 18 };
};

/// Struct /Script/Paper2D.IntMargin
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FIntMargin
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Left;                                                       // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Top;                                                        // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Right;                                                      // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Bottom;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/Paper2D.SpriteGeometryShape
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSpriteGeometryShape
{ 
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESpriteShapeType                                   ShapeType;                                                  // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector2D>                                  Vertices;                                                   // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          BoxSize;                                                    // 0x0018   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          BoxPosition;                                                // 0x0020   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Rotation;                                                   // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNegativeWinding;                                           // 0x002C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x002D   (0x0003) MISSED
};

/// Struct /Script/Paper2D.SpriteGeometryCollection
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSpriteGeometryCollection
{ 
    UPROPERTY(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSpriteGeometryShape>                       Shapes;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESpritePolygonMode>                    GeometryType;                                               // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PixelsPerSubdivisionX;                                      // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PixelsPerSubdivisionY;                                      // 0x0018   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAvoidVertexMerging;                                        // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x001D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AlphaThreshold;                                             // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DetailAmount;                                               // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SimplifyEpsilon;                                            // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/Paper2D.PaperTileMetadata
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FPaperTileMetadata
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              UserDataName;                                               // 0x0000   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSpriteGeometryCollection                          CollisionData;                                              // 0x0008   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               TerrainMembership[4];                                       // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/Paper2D.PaperTileSetTerrain
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FPaperTileSetTerrain
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TerrainName;                                                // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CenterTileIndex;                                            // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Class /Script/Paper2D.PaperTileSet
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align n/a MaxSize: 0x00A8
class UPaperTileSet : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FIntPoint                                          TileSize;                                                   // 0x0028   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UTexture2D*                                  TileSheet;                                                  // 0x0030   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UTexture*>                            AdditionalSourceTextures;                                   // 0x0038   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FIntMargin                                         BorderMargin;                                               // 0x0048   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FIntPoint                                          PerTileSpacing;                                             // 0x0058   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FIntPoint                                          DrawingOffset;                                              // 0x0060   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            WidthInTiles;                                               // 0x0068   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            HeightInTiles;                                              // 0x006C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            AllocatedWidth;                                             // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            AllocatedHeight;                                            // 0x0074   (0x0004)
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FPaperTileMetadata>                         PerTileData;                                                // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FPaperTileSetTerrain>                       Terrains;                                                   // 0x0088   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            TileWidth;                                                  // 0x0098   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            TileHeight;                                                 // 0x009C   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            Margin;                                                     // 0x00A0   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            Spacing;                                                    // 0x00A4   (0x0004)
};

/// Class /Script/Paper2D.TileMapBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/Paper2D.TileMapBlueprintLibrary.MakeTile
    // [0] TileIndex : const int32_t
    // [1] TileSet : const UPaperTileSet*
    // [2] bFlipH : const bool
    // [3] bFlipV : const bool
    // [4] bFlipD : const bool
    constexpr static const FunctionPointer<UTileMapBlueprintLibrary, FPaperTileInfo, const int32_t, const UPaperTileSet*, const bool, const bool, const bool> MakeTile = { 0x178da40, 0 };
    // Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileUserData
    // [0] Tile : const FPaperTileInfo
    constexpr static const FunctionPointer<UTileMapBlueprintLibrary, FName, const FPaperTileInfo> GetTileUserData = { 0x178e290, 1 };
    // Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileTransform
    // [0] Tile : const FPaperTileInfo
    constexpr static const FunctionPointer<UTileMapBlueprintLibrary, FTransform, const FPaperTileInfo> GetTileTransform = { 0x178e170, 2 };
    // Function /Script/Paper2D.TileMapBlueprintLibrary.BreakTile
    // [0] Tile : const FPaperTileInfo
    // [1] TileIndex : const int32_t&
    // [2] TileSet : const UPaperTileSet*&
    // [3] bFlipH : const bool&
    // [4] bFlipV : const bool&
    // [5] bFlipD : const bool&
    constexpr static const FunctionPointer<UTileMapBlueprintLibrary, void, const FPaperTileInfo, const int32_t&, const UPaperTileSet*&, const bool&, const bool&, const bool&> BreakTile = { 0x178dd90, 3 };
};

/// Struct /Script/Paper2D.PaperSpriteAtlasSlot
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FPaperSpriteAtlasSlot
{ 
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UPaperSprite*>                SpriteRef;                                                  // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x20];                                      // 0x0008   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AtlasIndex;                                                 // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            X;                                                          // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Y;                                                          // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Width;                                                      // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Height;                                                     // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/Paper2D.SpriteDrawCallRecord
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FSpriteDrawCallRecord
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Destination;                                                // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture*                                    BaseTexture;                                                // 0x0010   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x30];                                      // 0x0018   (0x0030) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             Color;                                                      // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x84];                                      // 0x004C   (0x0084) MISSED
};

/// Struct /Script/Paper2D.SpriteAssetInitParameters
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FSpriteAssetInitParameters
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x40];                                      // 0x0000   (0x0040) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMaterialExpressionSpriteTextureSampler) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(APaperCharacter) == 0x0560); // 1376 bytes (0x000558 - 0x000560)
static_assert(sizeof(FPaperFlipbookKeyFrame) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPaperFlipbook) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(APaperFlipbookActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UPaperFlipbookComponent) == 0x05B0); // 1456 bytes (0x000560 - 0x0005B0)
static_assert(sizeof(APaperGroupedSpriteActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(FSpriteInstanceData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UPaperGroupedSpriteComponent) == 0x0590); // 1424 bytes (0x000560 - 0x000590)
static_assert(sizeof(UPaperRuntimeSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FPaperSpriteSocket) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UPaperSprite) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(APaperSpriteActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UPaperSpriteAtlas) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPaperSpriteBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPaperSpriteComponent) == 0x0580); // 1408 bytes (0x000560 - 0x000580)
static_assert(sizeof(APaperTerrainActor) == 0x02E0); // 736 bytes (0x0002C8 - 0x0002E0)
static_assert(sizeof(UPaperTerrainComponent) == 0x0590); // 1424 bytes (0x000538 - 0x000590)
static_assert(sizeof(FPaperTerrainMaterialRule) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UPaperTerrainMaterial) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UPaperTerrainSplineComponent) == 0x0640); // 1600 bytes (0x000630 - 0x000640)
static_assert(sizeof(FPaperTileInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPaperTileLayer) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UPaperTileMap) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(APaperTileMapActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UPaperTileMapComponent) == 0x05B0); // 1456 bytes (0x000560 - 0x0005B0)
static_assert(sizeof(FIntMargin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSpriteGeometryShape) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSpriteGeometryCollection) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPaperTileMetadata) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPaperTileSetTerrain) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPaperTileSet) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UTileMapBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPaperSpriteAtlasSlot) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSpriteDrawCallRecord) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FSpriteAssetInitParameters) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, SlotDisplayName) == 0x0088);
static_assert(offsetof(APaperCharacter, Sprite) == 0x0558);
static_assert(offsetof(FPaperFlipbookKeyFrame, Sprite) == 0x0000);
static_assert(offsetof(UPaperFlipbook, KeyFrames) == 0x0030);
static_assert(offsetof(UPaperFlipbook, DefaultMaterial) == 0x0040);
static_assert(offsetof(UPaperFlipbook, CollisionSource) == 0x0048);
static_assert(offsetof(APaperFlipbookActor, RenderComponent) == 0x02C8);
static_assert(offsetof(UPaperFlipbookComponent, SourceFlipbook) == 0x0560);
static_assert(offsetof(UPaperFlipbookComponent, Material) == 0x0568);
static_assert(offsetof(UPaperFlipbookComponent, SpriteColor) == 0x0580);
static_assert(offsetof(UPaperFlipbookComponent, CachedBodySetup) == 0x0590);
static_assert(offsetof(APaperGroupedSpriteActor, RenderComponent) == 0x02C8);
static_assert(offsetof(FSpriteInstanceData, Transform) == 0x0000);
static_assert(offsetof(FSpriteInstanceData, SourceSprite) == 0x0040);
static_assert(offsetof(FSpriteInstanceData, VertexColor) == 0x0048);
static_assert(offsetof(UPaperGroupedSpriteComponent, InstanceMaterials) == 0x0560);
static_assert(offsetof(UPaperGroupedSpriteComponent, PerInstanceSpriteData) == 0x0570);
static_assert(offsetof(FPaperSpriteSocket, LocalTransform) == 0x0000);
static_assert(offsetof(FPaperSpriteSocket, SocketName) == 0x0030);
static_assert(offsetof(UPaperSprite, AdditionalSourceTextures) == 0x0038);
static_assert(offsetof(UPaperSprite, BakedSourceUV) == 0x0048);
static_assert(offsetof(UPaperSprite, BakedSourceDimension) == 0x0050);
static_assert(offsetof(UPaperSprite, BakedSourceTexture) == 0x0058);
static_assert(offsetof(UPaperSprite, DefaultMaterial) == 0x0060);
static_assert(offsetof(UPaperSprite, AlternateMaterial) == 0x0068);
static_assert(offsetof(UPaperSprite, Sockets) == 0x0070);
static_assert(offsetof(UPaperSprite, SpriteCollisionDomain) == 0x0080);
static_assert(offsetof(UPaperSprite, BodySetup) == 0x0088);
static_assert(offsetof(UPaperSprite, BakedRenderData) == 0x0098);
static_assert(offsetof(APaperSpriteActor, RenderComponent) == 0x02C8);
static_assert(offsetof(UPaperSpriteComponent, SourceSprite) == 0x0560);
static_assert(offsetof(UPaperSpriteComponent, MaterialOverride) == 0x0568);
static_assert(offsetof(UPaperSpriteComponent, SpriteColor) == 0x0570);
static_assert(offsetof(APaperTerrainActor, DummyRoot) == 0x02C8);
static_assert(offsetof(APaperTerrainActor, SplineComponent) == 0x02D0);
static_assert(offsetof(APaperTerrainActor, RenderComponent) == 0x02D8);
static_assert(offsetof(UPaperTerrainComponent, TerrainMaterial) == 0x0538);
static_assert(offsetof(UPaperTerrainComponent, AssociatedSpline) == 0x0548);
static_assert(offsetof(UPaperTerrainComponent, TerrainColor) == 0x0558);
static_assert(offsetof(UPaperTerrainComponent, SpriteCollisionDomain) == 0x056C);
static_assert(offsetof(UPaperTerrainComponent, CachedBodySetup) == 0x0578);
static_assert(offsetof(FPaperTerrainMaterialRule, StartCap) == 0x0000);
static_assert(offsetof(FPaperTerrainMaterialRule, Body) == 0x0008);
static_assert(offsetof(FPaperTerrainMaterialRule, EndCap) == 0x0018);
static_assert(offsetof(UPaperTerrainMaterial, Rules) == 0x0030);
static_assert(offsetof(UPaperTerrainMaterial, InteriorFill) == 0x0040);
static_assert(offsetof(FPaperTileInfo, TileSet) == 0x0000);
static_assert(offsetof(UPaperTileLayer, LayerName) == 0x0028);
static_assert(offsetof(UPaperTileLayer, LayerColor) == 0x0054);
static_assert(offsetof(UPaperTileLayer, AllocatedCells) == 0x0070);
static_assert(offsetof(UPaperTileLayer, TileSet) == 0x0080);
static_assert(offsetof(UPaperTileLayer, AllocatedGrid) == 0x0088);
static_assert(offsetof(UPaperTileMap, SelectedTileSet) == 0x0048);
static_assert(offsetof(UPaperTileMap, Material) == 0x0070);
static_assert(offsetof(UPaperTileMap, TileLayers) == 0x0078);
static_assert(offsetof(UPaperTileMap, SpriteCollisionDomain) == 0x008C);
static_assert(offsetof(UPaperTileMap, ProjectionMode) == 0x008D);
static_assert(offsetof(UPaperTileMap, BodySetup) == 0x0098);
static_assert(offsetof(APaperTileMapActor, RenderComponent) == 0x02C8);
static_assert(offsetof(UPaperTileMapComponent, DefaultLayerTileSet) == 0x0570);
static_assert(offsetof(UPaperTileMapComponent, Material) == 0x0578);
static_assert(offsetof(UPaperTileMapComponent, TileLayers) == 0x0580);
static_assert(offsetof(UPaperTileMapComponent, TileMapColor) == 0x0590);
static_assert(offsetof(UPaperTileMapComponent, TileMap) == 0x05A8);
static_assert(offsetof(FSpriteGeometryShape, ShapeType) == 0x0000);
static_assert(offsetof(FSpriteGeometryShape, Vertices) == 0x0008);
static_assert(offsetof(FSpriteGeometryShape, BoxSize) == 0x0018);
static_assert(offsetof(FSpriteGeometryShape, BoxPosition) == 0x0020);
static_assert(offsetof(FSpriteGeometryCollection, Shapes) == 0x0000);
static_assert(offsetof(FSpriteGeometryCollection, GeometryType) == 0x0010);
static_assert(offsetof(FPaperTileMetadata, UserDataName) == 0x0000);
static_assert(offsetof(FPaperTileMetadata, CollisionData) == 0x0008);
static_assert(offsetof(FPaperTileSetTerrain, TerrainName) == 0x0000);
static_assert(offsetof(UPaperTileSet, TileSize) == 0x0028);
static_assert(offsetof(UPaperTileSet, TileSheet) == 0x0030);
static_assert(offsetof(UPaperTileSet, AdditionalSourceTextures) == 0x0038);
static_assert(offsetof(UPaperTileSet, BorderMargin) == 0x0048);
static_assert(offsetof(UPaperTileSet, PerTileSpacing) == 0x0058);
static_assert(offsetof(UPaperTileSet, DrawingOffset) == 0x0060);
static_assert(offsetof(UPaperTileSet, PerTileData) == 0x0078);
static_assert(offsetof(UPaperTileSet, Terrains) == 0x0088);
static_assert(offsetof(FPaperSpriteAtlasSlot, SpriteRef) == 0x0000);
static_assert(offsetof(FSpriteDrawCallRecord, Destination) == 0x0000);
static_assert(offsetof(FSpriteDrawCallRecord, BaseTexture) == 0x0010);
static_assert(offsetof(FSpriteDrawCallRecord, Color) == 0x0048);
#endif
