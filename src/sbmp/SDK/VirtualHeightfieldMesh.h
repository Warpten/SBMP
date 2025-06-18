
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UHeightfieldMinMaxTexture : public UObject
{ 
public:
    class UTexture2D*                                  Texture;                                                    // 0x0028   (0x0008)
    class UTexture2D*                                  LodBiasTexture;                                             // 0x0030   (0x0008)
    class UTexture2D*                                  LodBiasMinMaxTexture;                                       // 0x0038   (0x0008)
    int32_t                                            MaxCPULevels;                                               // 0x0040   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004) MISSED
    TArray<FVector2D>                                  TextureData;                                                // 0x0048   (0x0010)
    FIntPoint                                          TextureDataSize;                                            // 0x0058   (0x0008)
    TArray<int32_t>                                    TextureDataMips;                                            // 0x0060   (0x0010)
};

/// Class /Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{ 
public:
    class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                              // 0x0040   (0x0008)
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align 8 MaxSize: 0x02D0
class AVirtualHeightfieldMesh : public AActor
{ 
public:
    class UVirtualHeightfieldMeshComponent*            VirtualHeightfieldMeshComponent;                            // 0x02C8   (0x0008)
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
/// Size: 0x05D0 (1488 bytes) (0x000538 - 0x0005D0) align 16 MaxSize: 0x05D0
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{ 
public:
    TWeakObjectPtr<class ARuntimeVirtualTextureVolume*> VirtualTexture;                                            // 0x0538   (0x0008)
    unsigned char                                      UnknownData00_6[0x20];                                      // 0x0540   (0x0020) MISSED
    float                                              RenderBufferInitializeTime;                                 // 0x0560   (0x0004)
    float                                              AccumulateTickTime;                                         // 0x0564   (0x0004)
    bool                                               bNeedRenderBufferInitialize;                                // 0x0568   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x0569   (0x0007) MISSED
    class ARuntimeVirtualTextureVolume*                VirtualTextureRef;                                          // 0x0570   (0x0008)
    class UObject*                                     VirtualTextureThumbnail;                                    // 0x0578   (0x0008)
    bool                                               bCopyBoundsButton;                                          // 0x0580   (0x0001)
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x0581   (0x0007) MISSED
    class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                              // 0x0588   (0x0008)
    int32_t                                            NumMinMaxTextureBuildLevels;                                // 0x0590   (0x0004)
    bool                                               bBuildMinMaxTextureButton;                                  // 0x0594   (0x0001)
    unsigned char                                      UnknownData03_6[0x3];                                       // 0x0595   (0x0003) MISSED
    class UMaterialInterface*                          Material;                                                   // 0x0598   (0x0008)
    float                                              Lod0ScreenSize;                                             // 0x05A0   (0x0004)
    float                                              Lod0Distribution;                                           // 0x05A4   (0x0004)
    float                                              LodDistribution;                                            // 0x05A8   (0x0004)
    float                                              LodBiasScale;                                               // 0x05AC   (0x0004)
    int32_t                                            NumForceLoadLods;                                           // 0x05B0   (0x0004)
    int32_t                                            CullInstanceLevel;                                          // 0x05B4   (0x0004)
    int32_t                                            CullLODLevel;                                               // 0x05B8   (0x0004)
    int32_t                                            NumOcclusionLods;                                           // 0x05BC   (0x0004)
    bool                                               bHiddenInEditor;                                            // 0x05C0   (0x0001)
    unsigned char                                      UnknownData04_7[0xF];                                       // 0x05C1   (0x000F) MISSED

    /// Functions
    // Function /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
    // [0] InOutHidePrimitivesInEditor : const bool&
    // [1] InOutHidePrimitivesInGame : const bool&
    constexpr static const FunctionPointer<UVirtualHeightfieldMeshComponent, void, const bool&, const bool&> GatherHideFlags = { 0x150f160, 0 };
};

#pragma pack(pop)


static_assert(sizeof(UHeightfieldMinMaxTexture) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UMaterialExpressionHeightfieldMinMaxTexture) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(AVirtualHeightfieldMesh) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UVirtualHeightfieldMeshComponent) == 0x05D0); // 1488 bytes (0x000538 - 0x0005D0)
static_assert(offsetof(UHeightfieldMinMaxTexture, Texture) == 0x0028);
static_assert(offsetof(UHeightfieldMinMaxTexture, LodBiasTexture) == 0x0030);
static_assert(offsetof(UHeightfieldMinMaxTexture, LodBiasMinMaxTexture) == 0x0038);
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureData) == 0x0048);
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureDataSize) == 0x0058);
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureDataMips) == 0x0060);
static_assert(offsetof(UMaterialExpressionHeightfieldMinMaxTexture, MinMaxTexture) == 0x0040);
static_assert(offsetof(AVirtualHeightfieldMesh, VirtualHeightfieldMeshComponent) == 0x02C8);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTexture) == 0x0538);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTextureRef) == 0x0570);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTextureThumbnail) == 0x0578);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, MinMaxTexture) == 0x0588);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, Material) == 0x0598);
