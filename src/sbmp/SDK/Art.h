
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "AnimGraphRuntime.h"
#include "ApexDestruction.h"
#include "ControlRig.h"
#include "CoreUObject.h"
#include "DragonIKPlugin.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "InputCore.h"
#include "KawaiiPhysics.h"
#include "Niagara.h"
#include "PhysicsCore.h"
#include "ProceduralMeshComponent.h"
#include "SB.h"
#include "SBAnimation.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Enum /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BE_SimulationRendering.BE_SimulationRendering
/// Size: 0x01 (1 bytes)
enum class BE_SimulationRendering : uint8_t
{
    NewEnumerator0                                                                   = 0,
    NewEnumerator1                                                                   = 1,
    NewEnumerator4                                                                   = 2
};

/// Enum /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/FluxSurface_GridType.FluxSurface_GridType
/// Size: 0x01 (1 bytes)
enum class FluxSurface_GridType : uint8_t
{
    NewEnumerator5                                                                   = 0,
    NewEnumerator0                                                                   = 1,
    NewEnumerator1                                                                   = 2,
    NewEnumerator2                                                                   = 3,
    NewEnumerator3                                                                   = 4,
    NewEnumerator4                                                                   = 5
};

/// Enum /Game/Art/FX/Enviroment/Water/PlaneWater/WaterFXType.WaterFXType
/// Size: 0x01 (1 bytes)
enum class WaterFXType : uint8_t
{
    NewEnumerator0                                                                   = 0,
    NewEnumerator1                                                                   = 1,
    NewEnumerator2                                                                   = 2
};

/// Enum /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/TargetLocalVector.TargetLocalVector
/// Size: 0x01 (1 bytes)
enum class TargetLocalVector : uint8_t
{
    NewEnumerator0                                                                   = 0,
    NewEnumerator1                                                                   = 1,
    NewEnumerator2                                                                   = 2
};

/// Enum /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BE_SurfaceMesh.BE_SurfaceMesh
/// Size: 0x01 (1 bytes)
enum class BE_SurfaceMesh : uint8_t
{
    NewEnumerator3                                                                   = 0,
    NewEnumerator4                                                                   = 1,
    NewEnumerator2                                                                   = 2,
    NewEnumerator1                                                                   = 3,
    NewEnumerator0                                                                   = 4
};

/// Enum /Game/Art/FX/BP/SliceSize.SliceSize
/// Size: 0x01 (1 bytes)
enum class SliceSize : uint8_t
{
    NewEnumerator0                                                                   = 0,
    NewEnumerator1                                                                   = 1,
    NewEnumerator3                                                                   = 2
};

/// Class /Game/Art/Character/PC/BtoB_CtrlRig.BtoB_CtrlRig_C
/// Size: 0x0668 (1640 bytes) (0x000658 - 0x000668) align 8 MaxSize: 0x0668
class UBtoB_CtrlRig_C : public UControlRig
{ 
public:
    float                                              BtoB_UpperArm;                                              // 0x0658   (0x0004)
    float                                              BtoB_ForeamArm;                                             // 0x065C   (0x0004)
    float                                              BtoB_Hand;                                                  // 0x0660   (0x0004)
    float                                              BtoB_UpperArm_move;                                         // 0x0664   (0x0004)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_09/Blueprints/CH_P_EVE_09_AnimBP.CH_P_EVE_09_AnimBP_C
/// Size: 0x1700 (5888 bytes) (0x0002C8 - 0x001700) align 16 MaxSize: 0x1700
class UCH_P_EVE_09_AnimBP_C : public UAnimInstance
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0030)
    FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0308   (0x0118)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0420   (0x0020)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0440   (0x0020)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics;                                // 0x0460   (0x0790)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x0BF0   (0x0370)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics0;                               // 0x0F60   (0x0790)
    float                                              __CustomProperty_BtoB_UpperArm_move_3C90E9B5437B2BB84FDE42A38E724310; // 0x16F0   (0x0004)
    float                                              __CustomProperty_BtoB_Hand_3C90E9B5437B2BB84FDE42A38E724310; // 0x16F4   (0x0004)
    float                                              __CustomProperty_BtoB_ForeamArm_3C90E9B5437B2BB84FDE42A38E724310; // 0x16F8   (0x0004)
    float                                              __CustomProperty_BtoB_UpperArm_3C90E9B5437B2BB84FDE42A38E724310; // 0x16FC   (0x0004)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_09/Blueprints/CH_P_EVE_09_AnimBP.CH_P_EVE_09_AnimBP_C.AnimGraph
    // [0] InPose : const FPoseLink
    // [1] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_P_EVE_09_AnimBP_C, void, const FPoseLink, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_09/Blueprints/CH_P_EVE_09_AnimBP.CH_P_EVE_09_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_09_AnimBP_AnimGraphNode_KawaiiPhysics_22CDC880405425882DA5DB93D2D5DA79
    constexpr static const FunctionPointer<UCH_P_EVE_09_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_09_AnimBP_AnimGraphNode_KawaiiPhysics_22CDC880405425882DA5DB93D2D5DA79 = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_09/Blueprints/CH_P_EVE_09_AnimBP.CH_P_EVE_09_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_09_AnimBP_AnimGraphNode_KawaiiPhysics_A90FBA8949A05E46E44D65B27FEE9B1C
    constexpr static const FunctionPointer<UCH_P_EVE_09_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_09_AnimBP_AnimGraphNode_KawaiiPhysics_A90FBA8949A05E46E44D65B27FEE9B1C = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_09/Blueprints/CH_P_EVE_09_AnimBP.CH_P_EVE_09_AnimBP_C.ExecuteUbergraph_CH_P_EVE_09_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_P_EVE_09_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_09_AnimBP = { 0x2bc7620, 3 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C
/// Size: 0x3CD8 (15576 bytes) (0x0002C8 - 0x003CD8) align 16 MaxSize: 0x3CD8
class UCH_P_EVE_08_AnimBP_C : public UAnimInstance
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x02D8   (0x0020)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x02F8   (0x0020)
    unsigned char                                      UnknownData01_6[0x8];                                       // 0x0318   (0x0008) MISSED
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics;                                // 0x0320   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics0;                               // 0x0AB0   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics1;                               // 0x1240   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics2;                               // 0x19D0   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics3;                               // 0x2160   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics4;                               // 0x28F0   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics5;                               // 0x3080   (0x0790)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x3810   (0x0370)
    FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x3B80   (0x0118)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x3C98   (0x0030)
    float                                              __CustomProperty_BtoB_UpperArm_move_A5B7286740FFBBF2FEE26B97B02533A3; // 0x3CC8   (0x0004)
    float                                              __CustomProperty_BtoB_Hand_A5B7286740FFBBF2FEE26B97B02533A3; // 0x3CCC   (0x0004)
    float                                              __CustomProperty_BtoB_ForeamArm_A5B7286740FFBBF2FEE26B97B02533A3; // 0x3CD0   (0x0004)
    float                                              __CustomProperty_BtoB_UpperArm_A5B7286740FFBBF2FEE26B97B02533A3; // 0x3CD4   (0x0004)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.AnimGraph
    // [0] InPose : const FPoseLink
    // [1] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void, const FPoseLink, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_26037B034541B83528ADE39551905D43
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_26037B034541B83528ADE39551905D43 = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_7FA2BB934AB013702B8DD890D7EFB33E
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_7FA2BB934AB013702B8DD890D7EFB33E = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_67C9017241A3FA652063B592AF8F4515
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_67C9017241A3FA652063B592AF8F4515 = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_A968CF044EF1E4C03FABB2A1CF7AC123
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_A968CF044EF1E4C03FABB2A1CF7AC123 = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_4722799C4DE16900D235D9832B675816
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_4722799C4DE16900D235D9832B675816 = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_6AD5FC844550641CEAC05D8D18F64025
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_6AD5FC844550641CEAC05D8D18F64025 = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_8F2ECCA04680D0C9F3D35E825B03424A
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_08_AnimBP_AnimGraphNode_KawaiiPhysics_8F2ECCA04680D0C9F3D35E825B03424A = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/PC/CH_P_EVE_08/Blueprints/CH_P_EVE_08_AnimBP.CH_P_EVE_08_AnimBP_C.ExecuteUbergraph_CH_P_EVE_08_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_P_EVE_08_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_08_AnimBP = { 0x2bc7620, 8 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/Interfaces/BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxInteractionRenderer_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/Interfaces/BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.GetSimulationState
    // [0] State : const UPDA_FluxSimulationState_C*&
    constexpr static const FunctionPointer<UBPI_FluxInteractionRenderer_C, void, const UPDA_FluxSimulationState_C*&> GetSimulationState = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/Interfaces/BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.SetInteractionsTexture
    // [0] Texture : const UTextureRenderTarget2D*
    constexpr static const FunctionPointer<UBPI_FluxInteractionRenderer_C, void, const UTextureRenderTarget2D*> SetInteractionsTexture = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/Interfaces/BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.SetInteractionsArea
    // [0] area : const FLinearColor
    constexpr static const FunctionPointer<UBPI_FluxInteractionRenderer_C, void, const FLinearColor> SetInteractionsArea = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/Interfaces/BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.CanRenderInteractions
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<UBPI_FluxInteractionRenderer_C, void, const bool&> CanRenderInteractions = { 0x2bc7620, 3 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C
/// Size: 0x007D (125 bytes) (0x000030 - 0x00007D) align 8 MaxSize: 0x007D
class UPDA_FluxSimulationState_C : public UPrimaryDataAsset
{ 
public:
    bool                                               Static;                                                     // 0x0030   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003) MISSED
    int32_t                                            Iteration;                                                  // 0x0034   (0x0004)
    FIntPoint                                          Resolution;                                                 // 0x0038   (0x0008)
    class UTexture*                                    GroundMap;                                                  // 0x0040   (0x0008)
    class UTexture*                                    VelocityDepthFoamMap;                                       // 0x0048   (0x0008)
    FVector                                            AreaLocation;                                               // 0x0050   (0x000C)
    FVector                                            AreaSize;                                                   // 0x005C   (0x000C)
    class UTexture*                                    HeightWetMap;                                               // 0x0068   (0x0008)
    float                                              EncodeVelocityMax;                                          // 0x0070   (0x0004)
    float                                              EncodeHeightMax;                                            // 0x0074   (0x0004)
    int32_t                                            LevelOfDetail;                                              // 0x0078   (0x0004)
    bool                                               Compression;                                                // 0x007C   (0x0001)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetEncodeVector
    // [0] LinearColor : const FLinearColor&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const FLinearColor&> GetEncodeVector = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetDecodeVector
    // [0] LinearColor : const FLinearColor&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const FLinearColor&> GetDecodeVector = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetLODScale
    // [0] Integer : const int32_t&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const int32_t&> GetLODScale = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.ApplyMaterialData
    // [0] MaterialInstances : const TArray<UMaterialInstanceDynamic*>&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const TArray<UMaterialInstanceDynamic*>&> ApplyMaterialData = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetPathNames
    // [0] Output_Get : const TArray<FString>&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const TArray<FString>&> GetPathNames = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetVolumeTransform
    // [0] ExtraSize : const FVector
    // [1] Scale : const FVector
    // [2] ZOffsetScale : const float
    // [3] NewParam : const FTransform&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const FVector, const FVector, const float, const FTransform&> GetVolumeTransform = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetPixelSize
    // [0] WorldToSimulationUV : const FLinearColor&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const FLinearColor&> GetPixelSize = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetWorldToTextureUV
    // [0] WorldToTextureUV : const FLinearColor&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const FLinearColor&> GetWorldToTextureUV = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.GetTextureSize
    // [0] Resolution : const FIntPoint&
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const FIntPoint&> GetTextureSize = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.ApplyNiagaraData
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] UseGround : const bool
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const UNiagaraComponent*, const bool> ApplyNiagaraData = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.SetSimulationTextures
    // [0] Surface : const UTexture*
    // [1] Ground : const UTexture*
    // [2] Velocity : const UTexture*
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const UTexture*, const UTexture*, const UTexture*> SetSimulationTextures = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.SetSimulationWorld
    // [0] Location : const FVector
    // [1] Size : const FVector
    // [2] Frame : const int32_t
    // [3] Resolution : const FIntPoint
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const FVector, const FVector, const int32_t, const FIntPoint> SetSimulationWorld = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/PDA_FluxSimulationState.PDA_FluxSimulationState_C.SetStateConfing
    // [0] StaticFrame : const bool
    // [1] VelocityNormalization : const float
    // [2] HeightNormalization : const float
    // [3] LevelOfDetail : const int32_t
    // [4] Compression : const bool
    constexpr static const FunctionPointer<UPDA_FluxSimulationState_C, void, const bool, const float, const float, const int32_t, const bool> SetStateConfing = { 0x2bc7620, 12 };
};

/// Class /Game/Art/Character/NPC/CH_NPC_TachyNPC/CH_NPC_TachyNPC_Body_CtrlRig.CH_NPC_TachyNPC_Body_CtrlRig_C
/// Size: 0x06A4 (1700 bytes) (0x000658 - 0x0006A4) align 8 MaxSize: 0x06A4
class UCH_NPC_TachyNPC_Body_CtrlRig_C : public UControlRig
{ 
public:
    float                                              L_Foot_Height;                                              // 0x0658   (0x0004)
    float                                              R_Foot_Height;                                              // 0x065C   (0x0004)
    float                                              Trace_Top;                                                  // 0x0660   (0x0004)
    float                                              Trace_Bottom;                                               // 0x0664   (0x0004)
    float                                              CustomAlpha;                                                // 0x0668   (0x0004)
    float                                              InterpolatedAlpha;                                          // 0x066C   (0x0004)
    float                                              Diff_Actor_Height;                                          // 0x0670   (0x0004)
    FVector                                            ActorLocation;                                              // 0x0674   (0x000C)
    FVector                                            PreviousActorLocation;                                      // 0x0680   (0x000C)
    float                                              Time;                                                       // 0x068C   (0x0004)
    float                                              AttachWeaponAlpha_Right;                                    // 0x0690   (0x0004)
    float                                              AttachWeaponAlpha_Left;                                     // 0x0694   (0x0004)
    float                                              LastGameTime;                                               // 0x0698   (0x0004)
    float                                              GameTime;                                                   // 0x069C   (0x0004)
    float                                              SmoothMoveTime;                                             // 0x06A0   (0x0004)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_Swim_ControlRig.CH_P_EVE_08_Swim_ControlRig_C
/// Size: 0x06C8 (1736 bytes) (0x000658 - 0x0006C8) align 8 MaxSize: 0x06C8
class UCH_P_EVE_08_Swim_ControlRig_C : public UControlRig
{ 
public:
    FVector                                            R_Hand_HitLocation;                                         // 0x0658   (0x000C)
    FVector                                            R_Hand_HitNormal;                                           // 0x0664   (0x000C)
    bool                                               R_Hand_IsHit;                                               // 0x0670   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0671   (0x0003) MISSED
    FVector                                            L_Hand_HitLocation;                                         // 0x0674   (0x000C)
    FVector                                            L_Hand_HitNormal;                                           // 0x0680   (0x000C)
    bool                                               L_Hand_IsHit;                                               // 0x068C   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x068D   (0x0003) MISSED
    float                                              CustomAlpha;                                                // 0x0690   (0x0004)
    float                                              InterpolatedAlpha;                                          // 0x0694   (0x0004)
    FVector                                            R_Hand_InterpolatedLocation;                                // 0x0698   (0x000C)
    FVector                                            L_Hand_InterpolatedLocation;                                // 0x06A4   (0x000C)
    FVector                                            R_Hand_InterpolatedNormal;                                  // 0x06B0   (0x000C)
    FVector                                            L_Hand_InterpolatedNormal;                                  // 0x06BC   (0x000C)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_TPSAim_ControlRig.CH_P_EVE_08_TPSAim_ControlRig_C
/// Size: 0x0699 (1689 bytes) (0x000658 - 0x000699) align 8 MaxSize: 0x0699
class UCH_P_EVE_08_TPSAim_ControlRig_C : public UControlRig
{ 
public:
    FVector                                            AimTarget;                                                  // 0x0658   (0x000C)
    FVector                                            CurrentAimTarget;                                           // 0x0664   (0x000C)
    int32_t                                            TPSModeType;                                                // 0x0670   (0x0004)
    FVector                                            TPSHandSocket;                                              // 0x0674   (0x000C)
    FVector                                            TPSLookAtLocation;                                          // 0x0680   (0x000C)
    bool                                               TPSUseLookAt;                                               // 0x068C   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x068D   (0x0003) MISSED
    FVector2D                                          TPSAimXY;                                                   // 0x0690   (0x0008)
    bool                                               TPSHasWeapon;                                               // 0x0698   (0x0001)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_HitStop_CtrlRig.CH_P_EVE_08_HitStop_CtrlRig_C
/// Size: 0x0790 (1936 bytes) (0x000658 - 0x000790) align 16 MaxSize: 0x0790
class UCH_P_EVE_08_HitStop_CtrlRig_C : public UControlRig
{ 
public:
    bool                                               IsHitStop;                                                  // 0x0658   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0659   (0x0003) MISSED
    FHitResult                                         HitResult;                                                  // 0x065C   (0x008C)
    unsigned char                                      UnknownData01_6[0x8];                                       // 0x06E8   (0x0008) MISSED
    FTransform                                         RecordRootTransform0;                                       // 0x06F0   (0x0030)
    FTransform                                         RecordRootTransform1;                                       // 0x0720   (0x0030)
    float                                              PositionRate;                                               // 0x0750   (0x0004)
    bool                                               IsRightWeapon;                                              // 0x0754   (0x0001)
    bool                                               IsCalculatedResult;                                         // 0x0755   (0x0001)
    unsigned char                                      UnknownData02_6[0xA];                                       // 0x0756   (0x000A) MISSED
    FTransform                                         Previous_R_UpperArm;                                        // 0x0760   (0x0030)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_AttachSocketToSocket_CtrlRig.CH_P_EVE_08_AttachSocketToSocket_CtrlRig_C
/// Size: 0x0680 (1664 bytes) (0x000658 - 0x000680) align 8 MaxSize: 0x0680
class UCH_P_EVE_08_AttachSocketToSocket_CtrlRig_C : public UControlRig
{ 
public:
    FName                                              IKBoneName;                                                 // 0x0658   (0x0008)
    FName                                              MyAttachBoneName;                                           // 0x0660   (0x0008)
    FVector                                            MySocketLocalLocation;                                      // 0x0668   (0x000C)
    FVector                                            TargetSocketLocation;                                       // 0x0674   (0x000C)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_EventMove_CtrlRig_Fix.CH_P_EVE_08_EventMove_CtrlRig_Fix_C
/// Size: 0x06F0 (1776 bytes) (0x000658 - 0x0006F0) align 16 MaxSize: 0x06F0
class UCH_P_EVE_08_EventMove_CtrlRig_Fix_C : public UControlRig
{ 
public:
    bool                                               Enable_L_Hand;                                              // 0x0658   (0x0001)
    bool                                               Enable_R_Hand;                                              // 0x0659   (0x0001)
    bool                                               Enable_KneeIK;                                              // 0x065A   (0x0001)
    unsigned char                                      UnknownData00_6[0x1];                                       // 0x065B   (0x0001) MISSED
    float                                              UpdateTime;                                                 // 0x065C   (0x0004)
    float                                              CustomAlpha;                                                // 0x0660   (0x0004)
    float                                              CustomAlpha_Knee;                                           // 0x0664   (0x0004)
    unsigned char                                      UnknownData01_6[0x8];                                       // 0x0668   (0x0008) MISSED
    FTransform                                         EL;                                                         // 0x0670   (0x0030)
    FTransform                                         ER;                                                         // 0x06A0   (0x0030)
    float                                              KneeRMove;                                                  // 0x06D0   (0x0004)
    float                                              KneeLMove;                                                  // 0x06D4   (0x0004)
    float                                              ToeRMove;                                                   // 0x06D8   (0x0004)
    float                                              ToeLMove;                                                   // 0x06DC   (0x0004)
    float                                              SearchDistance_Forward_R;                                   // 0x06E0   (0x0004)
    float                                              SearchDistance_Backward_R;                                  // 0x06E4   (0x0004)
    float                                              SearchDistance_Forward_L;                                   // 0x06E8   (0x0004)
    float                                              SearchDistance_Backward_L;                                  // 0x06EC   (0x0004)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_CtrlRig_SelfieMode.CH_P_EVE_08_CtrlRig_SelfieMode_C
/// Size: 0x0685 (1669 bytes) (0x000658 - 0x000685) align 8 MaxSize: 0x0685
class UCH_P_EVE_08_CtrlRig_SelfieMode_C : public UControlRig
{ 
public:
    float                                              CustomAlpha;                                                // 0x0658   (0x0004)
    FVector                                            CameraLocation;                                             // 0x065C   (0x000C)
    FRotator                                           CameraRotation;                                             // 0x0668   (0x000C)
    float                                              InterpolatedAlpha;                                          // 0x0674   (0x0004)
    FVector                                            HeadLookAtLocation;                                         // 0x0678   (0x000C)
    bool                                               IsCameraDirectionLeft;                                      // 0x0684   (0x0001)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_CtrlRig_WeaponConstraint_Sub.CH_P_EVE_08_CtrlRig_WeaponConstraint_Sub_C
/// Size: 0x0660 (1632 bytes) (0x000658 - 0x000660) align 8 MaxSize: 0x0660
class UCH_P_EVE_08_CtrlRig_WeaponConstraint_Sub_C : public UControlRig
{ 
public:
    float                                              Prop1_Constraint;                                           // 0x0658   (0x0004)
    float                                              Prop2_Constraint;                                           // 0x065C   (0x0004)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_KnockDown_ControlRig.CH_P_EVE_08_KnockDown_ControlRig_C
/// Size: 0x0684 (1668 bytes) (0x000658 - 0x000684) align 8 MaxSize: 0x0684
class UCH_P_EVE_08_KnockDown_ControlRig_C : public UControlRig
{ 
public:
    float                                              L_Foot_Height;                                              // 0x0658   (0x0004)
    float                                              R_Foot_Height;                                              // 0x065C   (0x0004)
    float                                              L_Hand_Height;                                              // 0x0660   (0x0004)
    float                                              R_Hand_Height;                                              // 0x0664   (0x0004)
    float                                              Head_Height;                                                // 0x0668   (0x0004)
    float                                              Neck_Height;                                                // 0x066C   (0x0004)
    FVector                                            PrevHeadLocation;                                           // 0x0670   (0x000C)
    float                                              CustomAlpha;                                                // 0x067C   (0x0004)
    float                                              InterpolatedAlpha;                                          // 0x0680   (0x0004)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_Grab_ControlRig.CH_P_EVE_08_Grab_ControlRig_C
/// Size: 0x0658 (1624 bytes) (0x000658 - 0x000658) align 8 MaxSize: 0x0658
class UCH_P_EVE_08_Grab_ControlRig_C : public UControlRig
{ 
public:
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_CtrlRig_SwimLeg.CH_P_EVE_08_CtrlRig_SwimLeg_C
/// Size: 0x0670 (1648 bytes) (0x000658 - 0x000670) align 8 MaxSize: 0x0670
class UCH_P_EVE_08_CtrlRig_SwimLeg_C : public UControlRig
{ 
public:
    float                                              CustomAlpha;                                                // 0x0658   (0x0004)
    float                                              InterpolatedAlpha;                                          // 0x065C   (0x0004)
    float                                              L_Foot_Alpha;                                               // 0x0660   (0x0004)
    float                                              R_Foot_Alpha;                                               // 0x0664   (0x0004)
    float                                              L_Foot_Height;                                              // 0x0668   (0x0004)
    float                                              R_Foot_Height;                                              // 0x066C   (0x0004)
};

/// Class /Game/Art/Character/PC/CH_P_EVE_08/CH_P_EVE_08_Stand_ControlRig.CH_P_EVE_08_Stand_ControlRig_C
/// Size: 0x0750 (1872 bytes) (0x000658 - 0x000750) align 8 MaxSize: 0x0750
class UCH_P_EVE_08_Stand_ControlRig_C : public UControlRig
{ 
public:
    bool                                               IsJump;                                                     // 0x0658   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0659   (0x0003) MISSED
    float                                              Speed;                                                      // 0x065C   (0x0004)
    float                                              ActiveHitPointAngle;                                        // 0x0660   (0x0004)
    float                                              L_Foot_Height;                                              // 0x0664   (0x0004)
    float                                              R_Foot_Height;                                              // 0x0668   (0x0004)
    float                                              Trace_Min;                                                  // 0x066C   (0x0004)
    float                                              Trace_Max;                                                  // 0x0670   (0x0004)
    FVector                                            Previous_L_Foot;                                            // 0x0674   (0x000C)
    FVector                                            Previous_R_Foot;                                            // 0x0680   (0x000C)
    float                                              L_Foot_Interpolate;                                         // 0x068C   (0x0004)
    float                                              R_Foot_Interpolate;                                         // 0x0690   (0x0004)
    float                                              Trace_DownHill;                                             // 0x0694   (0x0004)
    float                                              Max_Foot_Height;                                            // 0x0698   (0x0004)
    float                                              L_Foot_Alpha;                                               // 0x069C   (0x0004)
    float                                              R_Foot_Alpha;                                               // 0x06A0   (0x0004)
    float                                              L_Hand_Height;                                              // 0x06A4   (0x0004)
    float                                              R_Hand_Height;                                              // 0x06A8   (0x0004)
    float                                              L_Hand_Alpha;                                               // 0x06AC   (0x0004)
    float                                              R_Hand_Alpha;                                               // 0x06B0   (0x0004)
    float                                              L_Hand_Alpha_Override;                                      // 0x06B4   (0x0004)
    float                                              R_Hand_Alpha_Override;                                      // 0x06B8   (0x0004)
    FVector                                            Previous_L_Foot_Hit;                                        // 0x06BC   (0x000C)
    FVector                                            Previous_R_Foot_Hit;                                        // 0x06C8   (0x000C)
    float                                              CustomAlpha;                                                // 0x06D4   (0x0004)
    float                                              InterpolatedAlpha;                                          // 0x06D8   (0x0004)
    float                                              Diff_Actor_Height;                                          // 0x06DC   (0x0004)
    float                                              Distance;                                                   // 0x06E0   (0x0004)
    FVector                                            ActorLocation;                                              // 0x06E4   (0x000C)
    FVector                                            PreviousActorLocation;                                      // 0x06F0   (0x000C)
    bool                                               IsFirstFrame;                                               // 0x06FC   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x06FD   (0x0003) MISSED
    FVector                                            L_Foot_Location;                                            // 0x0700   (0x000C)
    FVector                                            R_Foot_Location;                                            // 0x070C   (0x000C)
    FVector                                            L_Hand_Location;                                            // 0x0718   (0x000C)
    FVector                                            R_Hand_Location;                                            // 0x0724   (0x000C)
    FVector                                            L_Foot_GroundNormal;                                        // 0x0730   (0x000C)
    FVector                                            R_Foot_GroundNormal;                                        // 0x073C   (0x000C)
    bool                                               IsAttachRightHand;                                          // 0x0748   (0x0001)
    unsigned char                                      UnknownData02_6[0x3];                                       // 0x0749   (0x0003) MISSED
    float                                              Speed2D;                                                    // 0x074C   (0x0004)
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BPI_FluxSurface.BPI_FluxSurface_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxSurface_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BPI_FluxSurface.BPI_FluxSurface_C.SpawnSplashAtLocation
    // [0] Location : const FVector
    // [1] Type : const int32_t
    constexpr static const FunctionPointer<UBPI_FluxSurface_C, void, const FVector, const int32_t> SpawnSplashAtLocation = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BPI_FluxSurface.BPI_FluxSurface_C.SetStateHeightWetMap
    // [0] Texture : const UTexture*
    constexpr static const FunctionPointer<UBPI_FluxSurface_C, void, const UTexture*> SetStateHeightWetMap = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BPI_FluxSurface.BPI_FluxSurface_C.GetVolumeCollision
    // [0] Volume : const UPrimitiveComponent*&
    constexpr static const FunctionPointer<UBPI_FluxSurface_C, void, const UPrimitiveComponent*&> GetVolumeCollision = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BPI_FluxSurface.BPI_FluxSurface_C.Set Surface Niagara Data
    // [0] ParticleSystem : const UNiagaraComponent*
    // [1] RequiredGround : const bool
    // [2] RequiredWave : const bool
    constexpr static const FunctionPointer<UBPI_FluxSurface_C, void, const UNiagaraComponent*, const bool, const bool> SetSurfaceNiagaraData = { 0x2bc7620, 3 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxSimulationEditorCallback_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C.UpdateModifierMaterials
    // [0] Materials : const TArray<UMaterialInstanceDynamic*>&
    // [1] UseVelocityMap : const bool
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorCallback_C, void, const TArray<UMaterialInstanceDynamic*>&, const bool> UpdateModifierMaterials = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C.ToggleUpdateSimulation
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorCallback_C, void> ToggleUpdateSimulation = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C.OnEditorModifierChanged
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorCallback_C, void> OnEditorModifierChanged = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C.OnEditorIterateSimulation
    // [0] Iterations : const int32_t
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorCallback_C, void, const int32_t> OnEditorIterateSimulation = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C.OnEditorRestartSimulation
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorCallback_C, void> OnEditorRestartSimulation = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C.OnEditorStopSimulation
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorCallback_C, void> OnEditorStopSimulation = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BPI_FluxSimulationEditorCallback.BPI_FluxSimulationEditorCallback_C.OnEditorShowSimulation
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorCallback_C, void> OnEditorShowSimulation = { 0x2bc7620, 6 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxWaveRenderer_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.GetWaveTextureMaterials
    // [0] MaterialInstances : const TArray<UMaterialInstanceDynamic*>&
    constexpr static const FunctionPointer<UBPI_FluxWaveRenderer_C, void, const TArray<UMaterialInstanceDynamic*>&> GetWaveTextureMaterials = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.SetWaveTextureAndArea
    // [0] Texture : const UTextureRenderTarget2D*
    // [1] area : const FLinearColor
    constexpr static const FunctionPointer<UBPI_FluxWaveRenderer_C, void, const UTextureRenderTarget2D*, const FLinearColor> SetWaveTextureAndArea = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.CanRenderWave
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<UBPI_FluxWaveRenderer_C, void, const bool&> CanRenderWave = { 0x2bc7620, 2 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C
/// Size: 0x0150 (336 bytes) (0x0000C0 - 0x000150) align 8 MaxSize: 0x0150
class UBP_FluxDataComponent_C : public UActorComponent
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00C0   (0x0008)
    float                                              EventInterval;                                              // 0x00C8   (0x0004)
    bool                                               DrawDebug;                                                  // 0x00CC   (0x0001)
    bool                                               FindWorldSurface;                                           // 0x00CD   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x00CE   (0x0002) MISSED
    FVector                                            FluxSurfaceLocation;                                        // 0x00D0   (0x000C)
    FVector                                            FluxFluidVelocity;                                          // 0x00DC   (0x000C)
    float                                              FluxFluidHeight;                                            // 0x00E8   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x00EC   (0x0004) MISSED
    class UNiagaraSystem*                              CustomDataSystem;                                           // 0x00F0   (0x0008)
    FMulticastInlineDelegate                           OnReceiveParticleData;                                      // 0x00F8   (0x0010)
    bool                                               UseGroundMap;                                               // 0x0108   (0x0001)
    bool                                               UseWave;                                                    // 0x0109   (0x0001)
    unsigned char                                      UnknownData02_6[0x2];                                       // 0x010A   (0x0002) MISSED
    FName                                              OwnerSocketName;                                            // 0x010C   (0x0008)
    FVector                                            FluxFluidNormal;                                            // 0x0114   (0x000C)
    TArray<FVector>                                    SamplePoints;                                               // 0x0120   (0x0010)
    class UNiagaraComponent*                           ExportDataInstance;                                         // 0x0130   (0x0008)
    class AActor*                                      SurfaceActor;                                               // 0x0138   (0x0008)
    TArray<FBasicParticleData>                         ReadbackData;                                               // 0x0140   (0x0010)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.ApplyNiagaraParameters
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void> ApplyNiagaraParameters = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.InitEventListener
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void> InitEventListener = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.RemoveEventListener
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void> RemoveEventListener = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.Get Readback Indexed Position
    // [0] Index : const int32_t
    // [1] Location : const FVector&
    // [2] Velocity : const FVector&
    // [3] Height : const float&
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const int32_t, const FVector&, const FVector&, const float&> GetReadbackIndexedPosition = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.SetRelativeSamplePoints
    // [0] Points : const TArray<FVector>&
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const TArray<FVector>&> SetRelativeSamplePoints = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.SetQuadData
    // [0] ParticleDataStructure : const TArray<FBasicParticleData>&
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const TArray<FBasicParticleData>&> SetQuadData = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.ReadParticleData
    // [0] Data : const TArray<FBasicParticleData>&
    // [1] NiagaraSystem : const UNiagaraSystem*
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const TArray<FBasicParticleData>&, const UNiagaraSystem*> ReadParticleData = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.SetPointData
    // [0] ParticleDataStructure : const FBasicParticleData&
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const FBasicParticleData&> SetPointData = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.GetWorldSurface
    // [0] Output : const AActor*&
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const AActor*&> GetWorldSurface = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.SetSurfaceActor
    // [0] Interface : const AActor*&
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const AActor*&> SetSurfaceActor = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void> ReceiveBeginPlay = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.ReceiveParticleData
    // [0] Data : const TArray<FBasicParticleData>&
    // [1] NiagaraSystem : const UNiagaraSystem*
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const TArray<FBasicParticleData>&, const UNiagaraSystem*> ReceiveParticleData = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.ReceiveEndPlay
    // [0] EndPlayReason : const TEnumAsByte<EEndPlayReason>
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const TEnumAsByte<EEndPlayReason>> ReceiveEndPlay = { 0x2bc7620, 12 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.Activation
    // [0] Component : const UActorComponent*
    // [1] bReset : const bool
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const UActorComponent*, const bool> Activation = { 0x2bc7620, 13 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.Deactivation
    // [0] Component : const UActorComponent*
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const UActorComponent*> Deactivation = { 0x2bc7620, 14 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.ExecuteUbergraph_BP_FluxDataComponent
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const int32_t> ExecuteUbergraph_BP_FluxDataComponent = { 0x2bc7620, 15 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataComponent.BP_FluxDataComponent_C.OnReceiveParticleData__DelegateSignature
    // [0] Data : const TArray<FBasicParticleData>&
    // [1] NiagaraSystem : const UNiagaraSystem*
    constexpr static const FunctionPointer<UBP_FluxDataComponent_C, void, const TArray<FBasicParticleData>&, const UNiagaraSystem*> OnReceiveParticleData__DelegateSignature = { 0x2bc7620, 16 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C
/// Size: 0x0298 (664 bytes) (0x000260 - 0x000298) align 16 MaxSize: 0x0298
class UBP_FluxModifierComponent_C : public USceneComponent
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)
    float                                              Duration;                                                   // 0x0268   (0x0004)
    int32_t                                            Sort_Priority;                                              // 0x026C   (0x0004)
    float                                              ActiveTime;                                                 // 0x0270   (0x0004)
    bool                                               Initialized;                                                // 0x0274   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0275   (0x0003) MISSED
    class AActor*                                      SimulationActor;                                            // 0x0278   (0x0008)
    bool                                               RemoveAfterUpdate;                                          // 0x0280   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x0281   (0x0007) MISSED
    TArray<class UMaterialInstanceDynamic*>            WorldMaterials;                                             // 0x0288   (0x0010)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.MoveOwnerToComponent
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void> MoveOwnerToComponent = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.UpdateModififer
    // [0] SimulationWorld : const AActor*
    // [1] DeltaTime : const float
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const AActor*, const float> UpdateModififer = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.InsertSorted
    // [0] Array : const TArray<UBP_FluxModifierComponent_C*>&
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const TArray<UBP_FluxModifierComponent_C*>&> InsertSorted = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.SetSimulation
    // [0] Simulation : const AActor*
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const AActor*> SetSimulation = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.AddModifier
    // [0] Modifiers : const TArray<UBP_FluxModifierComponent_C*>&
    // [1] Finalized : const bool&
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const TArray<UBP_FluxModifierComponent_C*>&, const bool&> AddModifier = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.RestartSimulation
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void> RestartSimulation = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.MakeDirty
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void> MakeDirty = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.ConstructComponent
    // [0] RestartSimulation : const bool
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const bool> ConstructComponent = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.changeWorld
    // [0] World : const AActor*
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const AActor*> changeWorld = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.RenderModifier
    // [0] Canvas : const UCanvas*
    // [1] Simulation : const AActor*
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const UCanvas*, const AActor*> RenderModifier = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.InitializeModifier
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void> InitializeModifier = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void> ReceiveBeginPlay = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierComponent.BP_FluxModifierComponent_C.ExecuteUbergraph_BP_FluxModifierComponent
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UBP_FluxModifierComponent_C, void, const int32_t> ExecuteUbergraph_BP_FluxModifierComponent = { 0x2bc7620, 12 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxSimulationEditorEvents_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.CleanFluxState
    // [0] State : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void, const UPDA_FluxSimulationState_C*> CleanFluxState = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.Export
    // [0] SourceState : const UPDA_FluxSimulationState_C*
    // [1] TargetAsset : const UPDA_FluxSimulationState_C*
    // [2] Done : const bool&
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void, const UPDA_FluxSimulationState_C*, const UPDA_FluxSimulationState_C*, const bool&> Export = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.MakeDirectory
    // [0] Name : const FString
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void, const FString> MakeDirectory = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.SaveAsset
    // [0] Asset : const FString
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void, const FString> SaveAsset = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.DeleteAsset
    // [0] File : const FString
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void, const FString> DeleteAsset = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.StopSimulation
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void> StopSimulation = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.StartSimulation
    // [0] Delay : const float
    // [1] Iterations : const int32_t
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void, const float, const int32_t> StartSimulation = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPI_FluxSimulationEditorEvents.BPI_FluxSimulationEditorEvents_C.RestartSimulation
    constexpr static const FunctionPointer<UBPI_FluxSimulationEditorEvents_C, void> RestartSimulation = { 0x2bc7620, 7 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_Fusion/CH_P_EVE_Fusion_CtrlRig.CH_P_EVE_Fusion_CtrlRig_C
/// Size: 0x0658 (1624 bytes) (0x000658 - 0x000658) align 8 MaxSize: 0x0658
class UCH_P_EVE_Fusion_CtrlRig_C : public UControlRig
{ 
public:
};

/// Class /Game/Art/Character/PC/CH_P_EVE_05/Blueprints/CH_P_EVE_05_AnimBP.CH_P_EVE_05_AnimBP_C
/// Size: 0x2620 (9760 bytes) (0x0002C8 - 0x002620) align 16 MaxSize: 0x2620
class UCH_P_EVE_05_AnimBP_C : public UAnimInstance
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0030)
    FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0308   (0x0118)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0420   (0x0020)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0440   (0x0020)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics;                                // 0x0460   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics0;                               // 0x0BF0   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics1;                               // 0x1380   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics2;                               // 0x1B10   (0x0790)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x22A0   (0x0370)
    float                                              __CustomProperty_BtoB_UpperArm_move_4542934C43CE25FCB2E5A5A79B0E382A; // 0x2610   (0x0004)
    float                                              __CustomProperty_BtoB_Hand_4542934C43CE25FCB2E5A5A79B0E382A; // 0x2614   (0x0004)
    float                                              __CustomProperty_BtoB_ForeamArm_4542934C43CE25FCB2E5A5A79B0E382A; // 0x2618   (0x0004)
    float                                              __CustomProperty_BtoB_UpperArm_4542934C43CE25FCB2E5A5A79B0E382A; // 0x261C   (0x0004)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_05/Blueprints/CH_P_EVE_05_AnimBP.CH_P_EVE_05_AnimBP_C.AnimGraph
    // [0] InPose : const FPoseLink
    // [1] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_P_EVE_05_AnimBP_C, void, const FPoseLink, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_05/Blueprints/CH_P_EVE_05_AnimBP.CH_P_EVE_05_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_C608A26E4F59587D118798ACCF86523E
    constexpr static const FunctionPointer<UCH_P_EVE_05_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_C608A26E4F59587D118798ACCF86523E = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_05/Blueprints/CH_P_EVE_05_AnimBP.CH_P_EVE_05_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_0D8AA39D4E7B9AEA010D6898775DC921
    constexpr static const FunctionPointer<UCH_P_EVE_05_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_0D8AA39D4E7B9AEA010D6898775DC921 = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_05/Blueprints/CH_P_EVE_05_AnimBP.CH_P_EVE_05_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_E4F5C1C34603430DA9B5268A71B99C33
    constexpr static const FunctionPointer<UCH_P_EVE_05_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_E4F5C1C34603430DA9B5268A71B99C33 = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_05/Blueprints/CH_P_EVE_05_AnimBP.CH_P_EVE_05_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_F1D468E34AFB564FAA1318A9BFEDD5EC
    constexpr static const FunctionPointer<UCH_P_EVE_05_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_05_AnimBP_AnimGraphNode_KawaiiPhysics_F1D468E34AFB564FAA1318A9BFEDD5EC = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_05/Blueprints/CH_P_EVE_05_AnimBP.CH_P_EVE_05_AnimBP_C.ExecuteUbergraph_CH_P_EVE_05_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_P_EVE_05_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_05_AnimBP = { 0x2bc7620, 5 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_06/Blueprints/CH_P_EVE_06_AnimBP.CH_P_EVE_06_AnimBP_C
/// Size: 0x2620 (9760 bytes) (0x0002C8 - 0x002620) align 16 MaxSize: 0x2620
class UCH_P_EVE_06_AnimBP_C : public UAnimInstance
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0030)
    FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0308   (0x0118)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0420   (0x0020)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0440   (0x0020)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics;                                // 0x0460   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics0;                               // 0x0BF0   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics1;                               // 0x1380   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics2;                               // 0x1B10   (0x0790)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x22A0   (0x0370)
    float                                              __CustomProperty_BtoB_UpperArm_move_A302DA1F4C39AABC96C3E4807F705037; // 0x2610   (0x0004)
    float                                              __CustomProperty_BtoB_Hand_A302DA1F4C39AABC96C3E4807F705037; // 0x2614   (0x0004)
    float                                              __CustomProperty_BtoB_ForeamArm_A302DA1F4C39AABC96C3E4807F705037; // 0x2618   (0x0004)
    float                                              __CustomProperty_BtoB_UpperArm_A302DA1F4C39AABC96C3E4807F705037; // 0x261C   (0x0004)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_06/Blueprints/CH_P_EVE_06_AnimBP.CH_P_EVE_06_AnimBP_C.AnimGraph
    // [0] InPose : const FPoseLink
    // [1] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_P_EVE_06_AnimBP_C, void, const FPoseLink, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_06/Blueprints/CH_P_EVE_06_AnimBP.CH_P_EVE_06_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_EF77524A49A0023A8CA373B9AAC4A5E5
    constexpr static const FunctionPointer<UCH_P_EVE_06_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_EF77524A49A0023A8CA373B9AAC4A5E5 = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_06/Blueprints/CH_P_EVE_06_AnimBP.CH_P_EVE_06_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_9994DC414C5E5C17747645A9350F9965
    constexpr static const FunctionPointer<UCH_P_EVE_06_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_9994DC414C5E5C17747645A9350F9965 = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_06/Blueprints/CH_P_EVE_06_AnimBP.CH_P_EVE_06_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_6EDF1B264F9D14B4000206B0F06F5A4C
    constexpr static const FunctionPointer<UCH_P_EVE_06_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_6EDF1B264F9D14B4000206B0F06F5A4C = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_06/Blueprints/CH_P_EVE_06_AnimBP.CH_P_EVE_06_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_156BA0074BF005AC294D39BA71AA0949
    constexpr static const FunctionPointer<UCH_P_EVE_06_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_06_AnimBP_AnimGraphNode_KawaiiPhysics_156BA0074BF005AC294D39BA71AA0949 = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_06/Blueprints/CH_P_EVE_06_AnimBP.CH_P_EVE_06_AnimBP_C.ExecuteUbergraph_CH_P_EVE_06_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_P_EVE_06_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_06_AnimBP = { 0x2bc7620, 5 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BPI_FluxCameraEvents.BPI_FluxCameraEvents_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxCameraEvents_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BPI_FluxCameraEvents.BPI_FluxCameraEvents_C.FluxCameraInFluid
    // [0] Under : const bool
    constexpr static const FunctionPointer<UBPI_FluxCameraEvents_C, void, const bool> FluxCameraInFluid = { 0x2bc7620, 0 };
};

/// Struct /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BS_InteractionSource.BS_InteractionSource
/// Size: 0x0054 (84 bytes) (0x000000 - 0x000054) align 16 MaxSize: 0x0054
struct FBS_InteractionSource
{ 
    float                                              Height_4_8179D0F94D0F78F9CBF2319B99FF303D;                  // 0x0000   (0x0004)
    float                                              Intensity_6_1F690E2D452B4DFFEB9A6499A70819A9;               // 0x0004   (0x0004)
    float                                              Radius_19_50E02F5C4D41C38A6D36C79FDAC1B4F9;                 // 0x0008   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004) MISSED
    FTransform                                         Transform_9_764EEE8F472ED0A7237B7DB6E41F7ACB;               // 0x0010   (0x0030)
    FName                                              Socket_13_D0CBF8A64AB6B4FF601986896C0AD13E;                 // 0x0040   (0x0008)
    int32_t                                            PreviousIteration_27_A32CDAC3469C09BD234ECCA6668B4ECD;      // 0x0048   (0x0004)
    bool                                               NoTransform_29_AF32034D455DF062DE23ADBE3C046F03;            // 0x004C   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003) MISSED
    int32_t                                            SplashType_32_0A01066841C50499A5CEEA9B345262B6;             // 0x0050   (0x0004)
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionComponent.BP_FluxInteractionComponent_C
/// Size: 0x0138 (312 bytes) (0x0000C0 - 0x000138) align 8 MaxSize: 0x0138
class UBP_FluxInteractionComponent_C : public UActorComponent
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00C0   (0x0008)
    float                                              OwnerHeightRange;                                           // 0x00C8   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004) MISSED
    class UBP_FluxDataComponent_C*                     FluxData;                                                   // 0x00D0   (0x0008)
    float                                              OwnerMinSpeed;                                              // 0x00D8   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004) MISSED
    TArray<FBS_InteractionSource>                      Sources;                                                    // 0x00E0   (0x0010)
    float                                              EarlyTestDistance;                                          // 0x00F0   (0x0004)
    float                                              SpeedLimit;                                                 // 0x00F4   (0x0004)
    class USkeletalMeshComponent*                      Mesh;                                                       // 0x00F8   (0x0008)
    TArray<FVector>                                    CurrentLocation;                                            // 0x0100   (0x0010)
    TArray<FVector>                                    PreviousLocations;                                          // 0x0110   (0x0010)
    bool                                               CanInteract;                                                // 0x0120   (0x0001)
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x0121   (0x0007) MISSED
    TArray<bool>                                       SplashState;                                                // 0x0128   (0x0010)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionComponent.BP_FluxInteractionComponent_C.UpdateAttachementsAndSplash
    constexpr static const FunctionPointer<UBP_FluxInteractionComponent_C, void> UpdateAttachementsAndSplash = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionComponent.BP_FluxInteractionComponent_C.GetLocation
    // [0] Source : const FBS_InteractionSource&
    // [1] Location : const FVector&
    constexpr static const FunctionPointer<UBP_FluxInteractionComponent_C, void, const FBS_InteractionSource&, const FVector&> GetLocation = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionComponent.BP_FluxInteractionComponent_C.Calculate Interaction Data
    // [0] TimeRatio : const float
    // [1] Iteration : const int32_t
    // [2] Interactions : const TArray<FBS_FluxInteractionData>&
    constexpr static const FunctionPointer<UBP_FluxInteractionComponent_C, void, const float, const int32_t, const TArray<FBS_FluxInteractionData>&> CalculateInteractionData = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionComponent.BP_FluxInteractionComponent_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<UBP_FluxInteractionComponent_C, void> ReceiveBeginPlay = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionComponent.BP_FluxInteractionComponent_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBP_FluxInteractionComponent_C, void, const float> ReceiveTick = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionComponent.BP_FluxInteractionComponent_C.ExecuteUbergraph_BP_FluxInteractionComponent
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UBP_FluxInteractionComponent_C, void, const int32_t> ExecuteUbergraph_BP_FluxInteractionComponent = { 0x2bc7620, 5 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierForceComponent.BP_FluxModifierForceComponent_C
/// Size: 0x02B8 (696 bytes) (0x000298 - 0x0002B8) align 16 MaxSize: 0x02B8
class UBP_FluxModifierForceComponent_C : public UBP_FluxModifierComponent_C
{ 
public:
    class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x0298   (0x0008)
    float                                              Intensity;                                                  // 0x02A0   (0x0004)
    float                                              Radius;                                                     // 0x02A4   (0x0004)
    float                                              HalfHeight;                                                 // 0x02A8   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x02AC   (0x0004) MISSED
    class UMaterialInterface*                          Material;                                                   // 0x02B0   (0x0008)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierForceComponent.BP_FluxModifierForceComponent_C.changeWorld
    // [0] World : const AActor*
    constexpr static const FunctionPointer<UBP_FluxModifierForceComponent_C, void, const AActor*> changeWorld = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierForceComponent.BP_FluxModifierForceComponent_C.InitializeModifier
    constexpr static const FunctionPointer<UBP_FluxModifierForceComponent_C, void> InitializeModifier = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BP_FluxModifierForceComponent.BP_FluxModifierForceComponent_C.RenderModifier
    // [0] Canvas : const UCanvas*
    // [1] Simulation : const AActor*
    constexpr static const FunctionPointer<UBP_FluxModifierForceComponent_C, void, const UCanvas*, const AActor*> RenderModifier = { 0x2bc7620, 2 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BPI_FluxModifierContainer.BPI_FluxModifierContainer_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxModifierContainer_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Modifiers/Components/BPI_FluxModifierContainer.BPI_FluxModifierContainer_C.AddModifiers
    // [0] Modifiers : const TArray<UBP_FluxModifierComponent_C*>&
    // [1] Remove : const bool&
    constexpr static const FunctionPointer<UBPI_FluxModifierContainer_C, void, const TArray<UBP_FluxModifierComponent_C*>&, const bool&> AddModifiers = { 0x2bc7620, 0 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/Interfaces/BPI_FluxInteraction.BPI_FluxInteraction_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_FluxInteraction_C : public UInterface
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/Interfaces/BPI_FluxInteraction.BPI_FluxInteraction_C.GetInteractions
    // [0] Ratio : const float
    // [1] Iteration : const int32_t
    // [2] Interactions : const TArray<FBS_FluxInteractionData>&
    constexpr static const FunctionPointer<UBPI_FluxInteraction_C, void, const float, const int32_t, const TArray<FBS_FluxInteractionData>&> GetInteractions = { 0x2bc7620, 0 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_10/Blueprints/CH_P_EVE_10_AnimBP.CH_P_EVE_10_AnimBP_C
/// Size: 0x07A0 (1952 bytes) (0x0002C8 - 0x0007A0) align 16 MaxSize: 0x07A0
class UCH_P_EVE_10_AnimBP_C : public UAnimInstance
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x02D8   (0x0370)
    FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0648   (0x0118)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0760   (0x0030)
    float                                              __CustomProperty_BtoB_UpperArm_move_B588BCC54450C994388118A8E9F72A1C; // 0x0790   (0x0004)
    float                                              __CustomProperty_BtoB_Hand_B588BCC54450C994388118A8E9F72A1C; // 0x0794   (0x0004)
    float                                              __CustomProperty_BtoB_ForeamArm_B588BCC54450C994388118A8E9F72A1C; // 0x0798   (0x0004)
    float                                              __CustomProperty_BtoB_UpperArm_B588BCC54450C994388118A8E9F72A1C; // 0x079C   (0x0004)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_10/Blueprints/CH_P_EVE_10_AnimBP.CH_P_EVE_10_AnimBP_C.AnimGraph
    // [0] InPose : const FPoseLink
    // [1] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_P_EVE_10_AnimBP_C, void, const FPoseLink, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_10/Blueprints/CH_P_EVE_10_AnimBP.CH_P_EVE_10_AnimBP_C.ExecuteUbergraph_CH_P_EVE_10_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_P_EVE_10_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_10_AnimBP = { 0x2bc7620, 1 };
};

/// Class /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherActorComponent.DitherActorComponent_C
/// Size: 0x0121 (289 bytes) (0x0000C0 - 0x000121) align 8 MaxSize: 0x0121
class UDitherActorComponent_C : public UActorComponent
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00C0   (0x0008)
    bool                                               EnableDither;                                               // 0x00C8   (0x0001)
    bool                                               EnableNearestDither;                                        // 0x00C9   (0x0001)
    bool                                               UsePreLoadComponents;                                       // 0x00CA   (0x0001)
    unsigned char                                      UnknownData00_6[0x5];                                       // 0x00CB   (0x0005) MISSED
    FDataTableRowHandle                                DataTable;                                                  // 0x00D0   (0x0010)
    bool                                               EnableInComponentNamesOnly;                                 // 0x00E0   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E1   (0x0007) MISSED
    TArray<FString>                                    ComponentNames;                                             // 0x00E8   (0x0010)
    FString                                            TargetComponentClass;                                       // 0x00F8   (0x0010)
    bool                                               Activated;                                                  // 0x0108   (0x0001)
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x0109   (0x0007) MISSED
    TArray<class USceneComponent*>                     Children;                                                   // 0x0110   (0x0010)
    bool                                               debug;                                                      // 0x0120   (0x0001)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherActorComponent.DitherActorComponent_C.ConvertOpaqueToMasked
    constexpr static const FunctionPointer<UDitherActorComponent_C, void> ConvertOpaqueToMasked = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherActorComponent.DitherActorComponent_C.SetPreLoadComponents
    constexpr static const FunctionPointer<UDitherActorComponent_C, void> SetPreLoadComponents = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherActorComponent.DitherActorComponent_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<UDitherActorComponent_C, void> ReceiveBeginPlay = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherActorComponent.DitherActorComponent_C.ExecuteUbergraph_DitherActorComponent
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UDitherActorComponent_C, void, const int32_t> ExecuteUbergraph_DitherActorComponent = { 0x2bc7620, 3 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPL_FluidFlux.BPL_FluidFlux_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPL_FluidFlux_C : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPL_FluidFlux.BPL_FluidFlux_C.GetEngineVersionInt
    // [0] __WorldContext : const UObject*
    // [1] Integer : const int32_t&
    constexpr static const FunctionPointer<UBPL_FluidFlux_C, void, const UObject*, const int32_t&> GetEngineVersionInt = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPL_FluidFlux.BPL_FluidFlux_C.GetBordersVector
    // [0] StateAreaBorders : const int32_t
    // [1] __WorldContext : const UObject*
    // [2] LinearColor : const FLinearColor&
    constexpr static const FunctionPointer<UBPL_FluidFlux_C, void, const int32_t, const UObject*, const FLinearColor&> GetBordersVector = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPL_FluidFlux.BPL_FluidFlux_C.CheckRenderTarget
    // [0] Width : const int32_t
    // [1] Height : const int32_t
    // [2] Format : const TEnumAsByte<ETextureRenderTargetFormat>
    // [3] CurrentRenderTarget : const UTextureRenderTarget2D*
    // [4] __WorldContext : const UObject*
    // [5] TheSame : const bool&
    constexpr static const FunctionPointer<UBPL_FluidFlux_C, void, const int32_t, const int32_t, const TEnumAsByte<ETextureRenderTargetFormat>, const UTextureRenderTarget2D*, const UObject*, const bool&> CheckRenderTarget = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BPL_FluidFlux.BPL_FluidFlux_C.RecreateRenderTarget
    // [0] Width : const int32_t
    // [1] Height : const int32_t
    // [2] Format : const TEnumAsByte<ETextureRenderTargetFormat>
    // [3] ClearColor : const FLinearColor
    // [4] CurrentRenderTarget : const UTextureRenderTarget2D*
    // [5] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UBPL_FluidFlux_C, UTextureRenderTarget2D*, const int32_t, const int32_t, const TEnumAsByte<ETextureRenderTargetFormat>, const FLinearColor, const UTextureRenderTarget2D*, const UObject*> RecreateRenderTarget = { 0x2bc7620, 3 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C
/// Size: 0x56FC (22268 bytes) (0x0002C8 - 0x0056FC) align 16 MaxSize: 0x56FC
class UCH_P_EVE_Fusion_AnimBP_C : public UAnimInstance
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)
    unsigned char                                      UnknownData01_6[0x8];                                       // 0x02D8   (0x0008) MISSED
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics;                                // 0x02E0   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics0;                               // 0x0A70   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics1;                               // 0x1200   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics2;                               // 0x1990   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics3;                               // 0x2120   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics4;                               // 0x28B0   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics5;                               // 0x3040   (0x0790)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x37D0   (0x0370)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics6;                               // 0x3B40   (0x0790)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x42D0   (0x0020)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x42F0   (0x0020)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics7;                               // 0x4310   (0x0790)
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics8;                               // 0x4AA0   (0x0790)
    FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x5230   (0x0118)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig9;                                  // 0x5348   (0x0370)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x56B8   (0x0030)
    float                                              __CustomProperty_BtoB_UpperArm_move_1FA14A4E4976781FFE86E2ABE892E79E; // 0x56E8   (0x0004)
    float                                              __CustomProperty_BtoB_Hand_1FA14A4E4976781FFE86E2ABE892E79E; // 0x56EC   (0x0004)
    float                                              __CustomProperty_BtoB_ForeamArm_1FA14A4E4976781FFE86E2ABE892E79E; // 0x56F0   (0x0004)
    float                                              __CustomProperty_BtoB_UpperArm_1FA14A4E4976781FFE86E2ABE892E79E; // 0x56F4   (0x0004)
    float                                              KawaiiPhysicsAlpha;                                         // 0x56F8   (0x0004)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.AnimGraph
    // [0] InPose : const FPoseLink
    // [1] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void, const FPoseLink, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_B8E1B22044594419026193ACE3FFF0D6
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_B8E1B22044594419026193ACE3FFF0D6 = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_69ED2AD3497B85C0A22D39B359536F73
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_69ED2AD3497B85C0A22D39B359536F73 = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_3D8D998C41D3C8A4F1D606921699FF6A
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_3D8D998C41D3C8A4F1D606921699FF6A = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_D5848B004D3A5A2C7B74C7BDD5C37150
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_D5848B004D3A5A2C7B74C7BDD5C37150 = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_99C59822417F47CF991DFA982883D263
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_99C59822417F47CF991DFA982883D263 = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_8570EF29414793532724318F4913CADD
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_8570EF29414793532724318F4913CADD = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_38F7183F4F329EB2F76B8481AA31B9DC
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_38F7183F4F329EB2F76B8481AA31B9DC = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_C0039D2C4AF1DCF1276E7A915CDB62A8
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_C0039D2C4AF1DCF1276E7A915CDB62A8 = { 0x2bc7620, 8 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_1FFF517E4DD4741027E784893C39E7E7
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_1FFF517E4DD4741027E784893C39E7E7 = { 0x2bc7620, 9 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_237FE9AF4E95C304A71C73A4586A69DA
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP_AnimGraphNode_KawaiiPhysics_237FE9AF4E95C304A71C73A4586A69DA = { 0x2bc7620, 10 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.BlueprintUpdateAnimation
    // [0] DeltaTimeX : const float
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void, const float> BlueprintUpdateAnimation = { 0x2bc7620, 11 };
    // Function /Game/Art/Character/PC/CH_P_EVE_Fusion/Blueprints/CH_P_EVE_Fusion_AnimBP.CH_P_EVE_Fusion_AnimBP_C.ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_P_EVE_Fusion_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_Fusion_AnimBP = { 0x2bc7620, 12 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C
/// Size: 0x0358 (856 bytes) (0x0002C8 - 0x000358) align 8 MaxSize: 0x0358
class ABP_FluxInteractionCapture_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class UMaterialBillboardComponent*                 MaterialBillboard;                                          // 0x02D0   (0x0008)
    class UStaticMeshComponent*                        Preview;                                                    // 0x02D8   (0x0008)
    class UBP_FluxSolverRippleComponent_C*             Ripple;                                                     // 0x02E0   (0x0008)
    class UBoxComponent*                               area;                                                       // 0x02E8   (0x0008)
    class USceneComponent*                             Scene;                                                      // 0x02F0   (0x0008)
    class UMaterialInterface*                          DebugMaterial;                                              // 0x02F8   (0x0008)
    class UMaterialInstanceDynamic*                    WaterPreviewInstance;                                       // 0x0300   (0x0008)
    bool                                               DebugArea;                                                  // 0x0308   (0x0001)
    unsigned char                                      UnknownData00_6[0x7];                                       // 0x0309   (0x0007) MISSED
    class UBP_FluxSolverComponent_C*                   Solver;                                                     // 0x0310   (0x0008)
    class UChildActorComponent*                        Editor;                                                     // 0x0318   (0x0008)
    int32_t                                            AreaResolution;                                             // 0x0320   (0x0004)
    int32_t                                            WorldPixelSize;                                             // 0x0324   (0x0004)
    float                                              AreaSize;                                                   // 0x0328   (0x0004)
    float                                              AreaHeight;                                                 // 0x032C   (0x0004)
    TWeakObjectPtr<class UStaticMesh*>                 DebugMesh;                                                  // 0x0330   (0x0008)
    unsigned char                                      UnknownData01_7[0x20];                                      // 0x0338   (0x0020) MISSED

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.GetSimulationState
    // [0] State : const UPDA_FluxSimulationState_C*&
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const UPDA_FluxSimulationState_C*&> GetSimulationState = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.CanRenderInteractions
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const bool&> CanRenderInteractions = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.InitializeState
    // [0] State : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const UPDA_FluxSimulationState_C*> InitializeState = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.PreviewDebugArea
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void> PreviewDebugArea = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.UserConstructionScript
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void> UserConstructionScript = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void> ReceiveBeginPlay = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.BndEvt__WaterSurface_BP_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] SweepResult : const FHitResult&
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> BndEvt__WaterSurface_BP_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.BndEvt__WaterSurface_BP_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t> BndEvt__WaterSurface_BP_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.SetInteractionsArea
    // [0] area : const FLinearColor
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const FLinearColor> SetInteractionsArea = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.SetInteractionsTexture
    // [0] Texture : const UTextureRenderTarget2D*
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const UTextureRenderTarget2D*> SetInteractionsTexture = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxInteractionCapture.BP_FluxInteractionCapture_C.ExecuteUbergraph_BP_FluxInteractionCapture
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ABP_FluxInteractionCapture_C, void, const int32_t> ExecuteUbergraph_BP_FluxInteractionCapture = { 0x2bc7620, 10 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C
/// Size: 0x018C (396 bytes) (0x000150 - 0x00018C) align 8 MaxSize: 0x018C
class UBP_FluxDataAudioComponent_C : public UBP_FluxDataComponent_C
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0150   (0x0008)
    class UAudioComponent*                             AudioSource;                                                // 0x0158   (0x0008)
    class USoundBase*                                  SoundMixer;                                                 // 0x0160   (0x0008)
    class USoundBase*                                  SoundOver_UE5_Workaround_;                                  // 0x0168   (0x0008)
    class USoundBase*                                  SoundUnder_UE5_Workaround_;                                 // 0x0170   (0x0008)
    class USoundBase*                                  SoundParameter;                                             // 0x0178   (0x0008)
    float                                              SourceLocationChange;                                       // 0x0180   (0x0004)
    float                                              SourceVolumeChange;                                         // 0x0184   (0x0004)
    float                                              SearchAreaWidth;                                            // 0x0188   (0x0004)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ApplyNiagaraParameters
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void> ApplyNiagaraParameters = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.SetFluidDistance
    // [0] CameraNearSurface : const float
    // [1] UseParameters : const bool
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void, const float, const bool> SetFluidDistance = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.DrawDebugSource
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void> DrawDebugSource = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.UpdateSource
    // [0] Location : const FVector
    // [1] Velocity : const float
    // [2] Index : const int32_t
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void, const FVector, const float, const int32_t> UpdateSource = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void> ReceiveBeginPlay = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ReceiveParticleData
    // [0] Data : const TArray<FBasicParticleData>&
    // [1] NiagaraSystem : const UNiagaraSystem*
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void, const TArray<FBasicParticleData>&, const UNiagaraSystem*> ReceiveParticleData = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void, const float> ReceiveTick = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Readback/BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ExecuteUbergraph_BP_FluxDataAudioComponent
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UBP_FluxDataAudioComponent_C, void, const int32_t> ExecuteUbergraph_BP_FluxDataAudioComponent = { 0x2bc7620, 7 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPL_ProceduralMesh_C : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.Pack3Ints
    // [0] Value1 : const int32_t
    // [1] Value2 : const int32_t
    // [2] Value3 : const int32_t
    // [3] __WorldContext : const UObject*
    // [4] Bits : const int32_t&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const int32_t, const int32_t, const int32_t, const UObject*, const int32_t&> Pack3Ints = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildEmpty
    // [0] __WorldContext : const UObject*
    // [1] BS_MeshDefinition : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const UObject*, const FBS_MeshDefinition&> BuildEmpty = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.Pack4Ints
    // [0] Value1 : const int32_t
    // [1] Value2 : const int32_t
    // [2] Value3 : const int32_t
    // [3] Value4 : const int32_t
    // [4] __WorldContext : const UObject*
    // [5] Bits : const int32_t&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const int32_t, const int32_t, const int32_t, const int32_t, const UObject*, const int32_t&> Pack4Ints = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.PackIntToColor
    // [0] Value : const int32_t
    // [1] __WorldContext : const UObject*
    // [2] R : const float&
    // [3] G : const float&
    // [4] B : const float&
    // [5] A : const float&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const int32_t, const UObject*, const float&, const float&, const float&, const float&> PackIntToColor = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.ModColor
    // [0] InMesh : const FBS_MeshDefinition
    // [1] NewColor : const FLinearColor
    // [2] __WorldContext : const UObject*
    // [3] OutMesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const FLinearColor, const UObject*, const FBS_MeshDefinition&> ModColor = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.SplineT
    // [0] A : const FVector
    // [1] AT : const FVector
    // [2] B : const FVector
    // [3] BT : const FVector
    // [4] T : const float
    // [5] __WorldContext : const UObject*
    // [6] R : const FVector&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FVector, const FVector, const FVector, const FVector, const float, const UObject*, const FVector&> SplineT = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.SplineTCoeff
    // [0] T1 : const float
    // [1] __WorldContext : const UObject*
    // [2] WP1 : const float&
    // [3] WT1 : const float&
    // [4] WP2 : const float&
    // [5] WT2 : const float&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const float, const UObject*, const float&, const float&, const float&, const float&> SplineTCoeff = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.Spline
    // [0] A : const FVector
    // [1] AT : const FVector
    // [2] B : const FVector
    // [3] BT : const FVector
    // [4] T : const float
    // [5] __WorldContext : const UObject*
    // [6] R : const FVector&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FVector, const FVector, const FVector, const FVector, const float, const UObject*, const FVector&> Spline = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.SplineCoeff
    // [0] T : const float
    // [1] __WorldContext : const UObject*
    // [2] WP1 : const float&
    // [3] WT1 : const float&
    // [4] WP2 : const float&
    // [5] WT2 : const float&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const float, const UObject*, const float&, const float&, const float&, const float&> SplineCoeff = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.Lerp
    // [0] A : const FVector2D
    // [1] B : const FVector2D
    // [2] T : const float
    // [3] __WorldContext : const UObject*
    // [4] R : const FVector2D&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FVector2D, const FVector2D, const float, const UObject*, const FVector2D&> Lerp = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.ModTransformUV
    // [0] InMesh : const FBS_MeshDefinition
    // [1] Scale : const FVector2D
    // [2] Move : const FVector2D
    // [3] __WorldContext : const UObject*
    // [4] OutMesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const FVector2D, const FVector2D, const UObject*, const FBS_MeshDefinition&> ModTransformUV = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.DrawDebugMesh
    // [0] Mesh : const FBS_MeshDefinition&
    // [1] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition&, const UObject*> DrawDebugMesh = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildSplineBillboard
    // [0] StartPos : const FVector
    // [1] EndPos : const FVector
    // [2] StartTangent : const FVector
    // [3] EndTangent : const FVector
    // [4] StartUV : const FVector2D
    // [5] EndUV : const FVector2D
    // [6] StartColor : const FLinearColor
    // [7] EndColor : const FLinearColor
    // [8] Up : const FVector
    // [9] Triangles : const FBS_MeshDefinition&
    // [10] __WorldContext : const UObject*
    // [11] Mesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FVector, const FVector, const FVector, const FVector, const FVector2D, const FVector2D, const FLinearColor, const FLinearColor, const FVector, const FBS_MeshDefinition&, const UObject*, const FBS_MeshDefinition&> BuildSplineBillboard = { 0x2bc7620, 12 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildRemove
    // [0] Mesh : const FBS_MeshDefinition
    // [1] RemoeIndex : const TArray<bool>&
    // [2] __WorldContext : const UObject*
    // [3] MeshOut : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const TArray<bool>&, const UObject*, const FBS_MeshDefinition&> BuildRemove = { 0x2bc7620, 13 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.ModUVMapPlane
    // [0] InMesh : const FBS_MeshDefinition
    // [1] Transform : const FTransform
    // [2] __WorldContext : const UObject*
    // [3] OutMesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const FTransform, const UObject*, const FBS_MeshDefinition&> ModUVMapPlane = { 0x2bc7620, 14 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.ModExtrudeLine
    // [0] InMesh : const FBS_MeshDefinition
    // [1] Width : const float
    // [2] GenerateUV : const bool
    // [3] Divisons : const int32_t
    // [4] __WorldContext : const UObject*
    // [5] OutMesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const float, const bool, const int32_t, const UObject*, const FBS_MeshDefinition&> ModExtrudeLine = { 0x2bc7620, 15 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildLine
    // [0] Divisions : const int32_t
    // [1] __WorldContext : const UObject*
    // [2] Mesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const int32_t, const UObject*, const FBS_MeshDefinition&> BuildLine = { 0x2bc7620, 16 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildSplit
    // [0] Mesh : const FBS_MeshDefinition
    // [1] LastIndex : const int32_t
    // [2] __WorldContext : const UObject*
    // [3] MeshOut : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const int32_t, const UObject*, const FBS_MeshDefinition&> BuildSplit = { 0x2bc7620, 17 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildCopy
    // [0] Mesh : const FBS_MeshDefinition
    // [1] __WorldContext : const UObject*
    // [2] Copy : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const UObject*, const FBS_MeshDefinition&> BuildCopy = { 0x2bc7620, 18 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.QuadIndices
    // [0] I0 : const int32_t
    // [1] I1 : const int32_t
    // [2] I2 : const int32_t
    // [3] I3 : const int32_t
    // [4] Swap : const bool
    // [5] __WorldContext : const UObject*
    // [6] Array : const TArray<int32_t>&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const int32_t, const int32_t, const int32_t, const int32_t, const bool, const UObject*, const TArray<int32_t>&> QuadIndices = { 0x2bc7620, 19 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.LogStats
    // [0] Mesh : const FBS_MeshDefinition&
    // [1] PrintTriangles : const bool
    // [2] PrintLocations : const bool
    // [3] PrintColors : const bool
    // [4] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition&, const bool, const bool, const bool, const UObject*> LogStats = { 0x2bc7620, 20 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.ModAppend
    // [0] InMeshA : const FBS_MeshDefinition
    // [1] InMeshB : const FBS_MeshDefinition&
    // [2] __WorldContext : const UObject*
    // [3] OutMesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const FBS_MeshDefinition&, const UObject*, const FBS_MeshDefinition&> ModAppend = { 0x2bc7620, 21 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildPlane
    // [0] Size : const FVector2D
    // [1] Width : const int32_t
    // [2] Height : const int32_t
    // [3] Normal : const FVector
    // [4] Offset : const FVector2D
    // [5] SwapMode : const int32_t
    // [6] __WorldContext : const UObject*
    // [7] Mesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FVector2D, const int32_t, const int32_t, const FVector, const FVector2D, const int32_t, const UObject*, const FBS_MeshDefinition&> BuildPlane = { 0x2bc7620, 22 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.CreateMeshSection
    // [0] Target : const UProceduralMeshComponent*
    // [1] MeshDefinition : const FBS_MeshDefinition
    // [2] SectionIndex : const int32_t
    // [3] bCreateCollision : const bool
    // [4] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const UProceduralMeshComponent*, const FBS_MeshDefinition, const int32_t, const bool, const UObject*> CreateMeshSection = { 0x2bc7620, 23 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.ModTransform
    // [0] InMesh : const FBS_MeshDefinition
    // [1] Transform : const FTransform
    // [2] __WorldContext : const UObject*
    // [3] OutMesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FBS_MeshDefinition, const FTransform, const UObject*, const FBS_MeshDefinition&> ModTransform = { 0x2bc7620, 24 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BPL_ProceduralMesh.BPL_ProceduralMesh_C.BuildQuad
    // [0] v1 : const FVector
    // [1] v2 : const FVector
    // [2] V3 : const FVector
    // [3] V4 : const FVector
    // [4] __WorldContext : const UObject*
    // [5] Mesh : const FBS_MeshDefinition&
    constexpr static const FunctionPointer<UBPL_ProceduralMesh_C, void, const FVector, const FVector, const FVector, const FVector, const UObject*, const FBS_MeshDefinition&> BuildQuad = { 0x2bc7620, 25 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C
/// Size: 0x033A (826 bytes) (0x0002C8 - 0x00033A) align 8 MaxSize: 0x033A
class ABP_FluxNiagaraActor_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class UMaterialBillboardComponent*                 MaterialBillboard;                                          // 0x02D0   (0x0008)
    class UBoxComponent*                               Volume;                                                     // 0x02D8   (0x0008)
    class UNiagaraComponent*                           Niagara;                                                    // 0x02E0   (0x0008)
    class USceneComponent*                             Scene;                                                      // 0x02E8   (0x0008)
    FVector                                            VolumeSize;                                                 // 0x02F0   (0x000C)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x02FC   (0x0004) MISSED
    FMulticastInlineDelegate                           OnWaterEvent;                                               // 0x0300   (0x0010)
    class UNiagaraSystem*                              NiagaraSystem;                                              // 0x0310   (0x0008)
    float                                              ReceiveEventFrequency;                                      // 0x0318   (0x0004)
    float                                              DelayedInitialization;                                      // 0x031C   (0x0004)
    bool                                               UseGroundMap;                                               // 0x0320   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x0321   (0x0007) MISSED
    class UClass*                                      InteractionClass;                                           // 0x0328   (0x0008)
    class AActor*                                      InteractionActor;                                           // 0x0330   (0x0008)
    bool                                               UseInteraction;                                             // 0x0338   (0x0001)
    bool                                               UseWaveMap;                                                 // 0x0339   (0x0001)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.OverlapingInteraction
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> OverlapingInteraction = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.RestartNiagara
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> RestartNiagara = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.StartReadback
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> StartReadback = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.ApplyNiagaraData
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> ApplyNiagaraData = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.InitializeCollisions
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> InitializeCollisions = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.GetWorldSurface
    // [0] SurfaceAbstract : const AActor*&
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const AActor*&> GetWorldSurface = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.AdjustSize
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> AdjustSize = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.InitializeNiagara
    // [0] SurfaceAbstract : const AActor*
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const AActor*> InitializeNiagara = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.UserConstructionScript
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> UserConstructionScript = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void> ReceiveBeginPlay = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.ReceiveParticleData
    // [0] Data : const TArray<FBasicParticleData>&
    // [1] NiagaraSystem : const UNiagaraSystem*
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const TArray<FBasicParticleData>&, const UNiagaraSystem*> ReceiveParticleData = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.BndEvt__BP_FluxNiagara_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] SweepResult : const FHitResult&
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> BndEvt__BP_FluxNiagara_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.BndEvt__BP_FluxNiagara_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t> BndEvt__BP_FluxNiagara_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature = { 0x2bc7620, 12 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const float> ReceiveTick = { 0x2bc7620, 13 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.ExecuteUbergraph_BP_FluxNiagaraActor
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const int32_t> ExecuteUbergraph_BP_FluxNiagaraActor = { 0x2bc7620, 14 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Environment/Niagara/BP_FluxNiagaraActor.BP_FluxNiagaraActor_C.OnWaterEvent__DelegateSignature
    // [0] position : const FVector
    // [1] Water : const float
    // [2] Velocity : const FVector
    constexpr static const FunctionPointer<ABP_FluxNiagaraActor_C, void, const FVector, const float, const FVector> OnWaterEvent__DelegateSignature = { 0x2bc7620, 15 };
};

/// Class /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C
/// Size: 0x1FE4 (8164 bytes) (0x000520 - 0x001FE4) align 16 MaxSize: 0x1FE4
class UCH_NPC_TachyNPC_AnimBP_C : public USBAnimInstance
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0520   (0x0008)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0528   (0x0030)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0558   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0580   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x05A8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x05D0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x05F8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0620   (0x0028)
    FSBAnimNode_SBSequencePlayer                       SBAnimGraphNode_SBSequencePlayer;                           // 0x0648   (0x00C0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0708   (0x0030)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer;                           // 0x0738   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0890   (0x0030)
    FSBAnimNode_SBSequencePlayer                       SBAnimGraphNode_SBSequencePlayer6;                          // 0x08C0   (0x00C0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x0980   (0x0030)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer8;                          // 0x09B0   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult9;                                 // 0x0B08   (0x0030)
    FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0B38   (0x00B0)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x0BE8   (0x00C8)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend10;                                // 0x0CB0   (0x00C8)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x0D78   (0x00C8)
    FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0E40   (0x0158)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer;                      // 0x0F98   (0x00A8)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer11;                    // 0x1040   (0x00A8)
    FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x10E8   (0x0028)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1110   (0x0020)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1130   (0x0020)
    FSBAnimNode_HitBones                               SBAnimGraphNode_HitBones;                                   // 0x1150   (0x0258)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer12;                    // 0x13A8   (0x00A8)
    FSBAnimNode_LookAtIK                               SBAnimGraphNode_LookAtIK;                                   // 0x1450   (0x01A0)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer13;                    // 0x15F0   (0x00A8)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1698   (0x00E0)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend14;                           // 0x1778   (0x00E0)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend15;                           // 0x1858   (0x00E0)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer16;                    // 0x1938   (0x00A8)
    FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt;                               // 0x19E0   (0x00A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1A80   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x1B08   (0x0088)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x1B90   (0x0370)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer18;                             // 0x1F00   (0x0088)
    float                                              __CustomProperty_GameTime_8AD4B49D45DAD560210EA3A423F4A7FD; // 0x1F88   (0x0004)
    float                                              __CustomProperty_AttachWeaponAlpha_Left_8AD4B49D45DAD560210EA3A423F4A7FD; // 0x1F8C   (0x0004)
    float                                              __CustomProperty_AttachWeaponAlpha_Right_8AD4B49D45DAD560210EA3A423F4A7FD; // 0x1F90   (0x0004)
    FVector                                            __CustomProperty_ActorLocation_8AD4B49D45DAD560210EA3A423F4A7FD; // 0x1F94   (0x000C)
    float                                              __CustomProperty_CustomAlpha_8AD4B49D45DAD560210EA3A423F4A7FD; // 0x1FA0   (0x0004)
    float                                              SBVelocityX;                                                // 0x1FA4   (0x0004)
    float                                              SBVelocityY;                                                // 0x1FA8   (0x0004)
    float                                              Speed;                                                      // 0x1FAC   (0x0004)
    float                                              CustomAnimAdditiveAlpha;                                    // 0x1FB0   (0x0004)
    float                                              CustomAnimAlpha;                                            // 0x1FB4   (0x0004)
    float                                              CustomAnimAlpha2;                                           // 0x1FB8   (0x0004)
    bool                                               IsSprint;                                                   // 0x1FBC   (0x0001)
    bool                                               IsMoving;                                                   // 0x1FBD   (0x0001)
    bool                                               IsLockOn;                                                   // 0x1FBE   (0x0001)
    bool                                               IsInAir;                                                    // 0x1FBF   (0x0001)
    int32_t                                            JALIFacialIdleAnimIndex_;                                   // 0x1FC0   (0x0004)
    float                                              CustomAnimAlpha3;                                           // 0x1FC4   (0x0004)
    float                                              CustomAnimByMeshSlotBodyAlpha;                              // 0x1FC8   (0x0004)
    bool                                               bIsAttachedToLevelSequence;                                 // 0x1FCC   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x1FCD   (0x0003) MISSED
    float                                              FootIKAlpha;                                                // 0x1FD0   (0x0004)
    bool                                               IsBattle;                                                   // 0x1FD4   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x1FD5   (0x0003) MISSED
    int32_t                                            StanceFacialAnimIndex;                                      // 0x1FD8   (0x0004)
    float                                              AttachWeaponAlpha_Right;                                    // 0x1FDC   (0x0004)
    float                                              AttachWeaponAlpha_Left;                                     // 0x1FE0   (0x0004)

    /// Functions
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.AnimGraph
    // [0] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP_AnimGraphNode_ControlRig_8AD4B49D45DAD560210EA3A423F4A7FD
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP_AnimGraphNode_ControlRig_8AD4B49D45DAD560210EA3A423F4A7FD = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP_AnimGraphNode_BlendListByInt_8B0AD8914F67CA50F9AF6685D5EE349A
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP_AnimGraphNode_BlendListByInt_8B0AD8914F67CA50F9AF6685D5EE349A = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP_AnimGraphNode_LayeredBoneBlend_E01C256548565821014790914F822F2D
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP_AnimGraphNode_LayeredBoneBlend_E01C256548565821014790914F822F2D = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.BlueprintUpdateAnimation
    // [0] DeltaTimeX : const float
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void, const float> BlueprintUpdateAnimation = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.AnimNotify_EndGroggyState
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void> AnimNotify_EndGroggyState = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.AnimNotify_StartGroggyState
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void> AnimNotify_StartGroggyState = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.AnimNotify_Sitting
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void> AnimNotify_Sitting = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.AnimNotify_WakeUp
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void> AnimNotify_WakeUp = { 0x2bc7620, 8 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_AnimBP.CH_NPC_TachyNPC_AnimBP_C.ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_NPC_TachyNPC_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_NPC_TachyNPC_AnimBP = { 0x2bc7620, 9 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BP_FluxMeshGenerator.BP_FluxMeshGenerator_C
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UBP_FluxMeshGenerator_C : public UActorComponent
{ 
public:
    class UTextureRenderTarget2D*                      HeightBuffer;                                               // 0x00C0   (0x0008)
    class UTextureRenderTarget2D*                      VelocityBuffer;                                             // 0x00C8   (0x0008)
    class UMaterialInterface*                          ReadHeightMaterial;                                         // 0x00D0   (0x0008)
    class UMaterialInterface*                          ReadVelocityMaterial;                                       // 0x00D8   (0x0008)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.GenerateBuffer
    // [0] Multiplication : const FLinearColor
    // [1] Addition : const FLinearColor
    // [2] Resolution : const FIntPoint
    // [3] Texture : const UTexture*
    // [4] Material : const UMaterialInstanceDynamic*
    // [5] Output : const UTextureRenderTarget2D*
    // [6] Result : const UTextureRenderTarget2D*&
    constexpr static const FunctionPointer<UBP_FluxMeshGenerator_C, void, const FLinearColor, const FLinearColor, const FIntPoint, const UTexture*, const UMaterialInstanceDynamic*, const UTextureRenderTarget2D*, const UTextureRenderTarget2D*&> GenerateBuffer = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.GetTriangle
    // [0] Array : const TArray<int32_t>&
    // [1] Index : const int32_t
    // [2] 1 : const int32_t&
    // [3] 2 : const int32_t&
    // [4] 3 : const int32_t&
    constexpr static const FunctionPointer<UBP_FluxMeshGenerator_C, void, const TArray<int32_t>&, const int32_t, const int32_t&, const int32_t&, const int32_t&> GetTriangle = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.GenerateMesh
    // [0] InitMesh : const UProceduralMeshComponent*
    // [1] InitState : const UPDA_FluxSimulationState_C*
    // [2] LOD : const int32_t
    // [3] Material : const UMaterialInterface*
    // [4] Padding : const char
    // [5] Vetticles : const int32_t&
    // [6] Polygons : const int32_t&
    constexpr static const FunctionPointer<UBP_FluxMeshGenerator_C, void, const UProceduralMeshComponent*, const UPDA_FluxSimulationState_C*, const int32_t, const UMaterialInterface*, const char, const int32_t&, const int32_t&> GenerateMesh = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.ReadWater
    // [0] uv : const FVector2D
    // [1] Velocity : const FVector2D&
    // [2] Water : const float&
    // [3] Foam : const float&
    constexpr static const FunctionPointer<UBP_FluxMeshGenerator_C, void, const FVector2D, const FVector2D&, const float&, const float&> ReadWater = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.ReadHeight
    // [0] uv : const FVector2D&
    // [1] Height : const float&
    constexpr static const FunctionPointer<UBP_FluxMeshGenerator_C, void, const FVector2D&, const float&> ReadHeight = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/Blueprints/BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.InitializeBuffers
    // [0] State : const UPDA_FluxSimulationState_C*
    // [1] EdgePadding : const char
    // [2] FoamScale : const float
    constexpr static const FunctionPointer<UBP_FluxMeshGenerator_C, void, const UPDA_FluxSimulationState_C*, const char, const float> InitializeBuffers = { 0x2bc7620, 5 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C
/// Size: 0x0388 (904 bytes) (0x0002C8 - 0x000388) align 8 MaxSize: 0x0388
class ABP_FluxOceanWave_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class UMaterialBillboardComponent*                 MaterialBillboard;                                          // 0x02D0   (0x0008)
    class UBoxComponent*                               Box;                                                        // 0x02D8   (0x0008)
    class UStaticMeshComponent*                        DebugPlane;                                                 // 0x02E0   (0x0008)
    class USceneComponent*                             DefaultSceneRoot;                                           // 0x02E8   (0x0008)
    class UMaterialInterface*                          GeneratorMaterial;                                          // 0x02F0   (0x0008)
    class UMaterialInstanceDynamic*                    GeneratorInstance;                                          // 0x02F8   (0x0008)
    class UTextureRenderTarget2D*                      TexturePreview;                                             // 0x0300   (0x0008)
    int32_t                                            TextureResolution;                                          // 0x0308   (0x0004)
    TEnumAsByte<ETextureRenderTargetFormat>            TextureFormat;                                              // 0x030C   (0x0001)
    bool                                               RenderDebugPreview;                                         // 0x030D   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x030E   (0x0002) MISSED
    class UMaterialInterface*                          PreviewMaterial;                                            // 0x0310   (0x0008)
    float                                              AreaSize;                                                   // 0x0318   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x031C   (0x0004) MISSED
    class UMaterialInstanceDynamic*                    PreviewInstance;                                            // 0x0320   (0x0008)
    float                                              WaveStepness;                                               // 0x0328   (0x0004)
    float                                              WaveHeight;                                                 // 0x032C   (0x0004)
    float                                              AnimationSpeed;                                             // 0x0330   (0x0004)
    float                                              UpdateFramerate;                                            // 0x0334   (0x0004)
    FVector2D                                          WindDirection;                                              // 0x0338   (0x0008)
    FLinearColor                                       TextureTransform;                                           // 0x0340   (0x0010)
    float                                              WaveOffsetZ;                                                // 0x0350   (0x0004)
    FVector2D                                          WindOffset;                                                 // 0x0354   (0x0008)
    unsigned char                                      UnknownData02_6[0x4];                                       // 0x035C   (0x0004) MISSED
    TWeakObjectPtr<class UStaticMesh*>                 DebugMesh;                                                  // 0x0360   (0x0008)
    unsigned char                                      UnknownData03_7[0x20];                                      // 0x0368   (0x0020) MISSED

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.CanRenderWave
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void, const bool&> CanRenderWave = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.GetWaveTextureMaterials
    // [0] MaterialInstances : const TArray<UMaterialInstanceDynamic*>&
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void, const TArray<UMaterialInstanceDynamic*>&> GetWaveTextureMaterials = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.ExportWaveTexture
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> ExportWaveTexture = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.InitializeGenerator
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> InitializeGenerator = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.SetNiagaraData
    // [0] System : const UNiagaraComponent*
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void, const UNiagaraComponent*> SetNiagaraData = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.SetMaterialData
    // [0] Materials : const TArray<UMaterialInstanceDynamic*>&
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void, const TArray<UMaterialInstanceDynamic*>&> SetMaterialData = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.RegenerateWaveTexture
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> RegenerateWaveTexture = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.InitializeMaterials
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> InitializeMaterials = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.InitializeRenderTargets
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> InitializeRenderTargets = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.UserConstructionScript
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> UserConstructionScript = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.SetWaveTextureAndArea
    // [0] Texture : const UTextureRenderTarget2D*
    // [1] area : const FLinearColor
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void, const UTextureRenderTarget2D*, const FLinearColor> SetWaveTextureAndArea = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void, const float> ReceiveTick = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.Generate Texture
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> GenerateTexture = { 0x2bc7620, 12 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void> ReceiveBeginPlay = { 0x2bc7620, 13 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Waves/Blueprints/BP_FluxOceanWave.BP_FluxOceanWave_C.ExecuteUbergraph_BP_FluxOceanWave
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ABP_FluxOceanWave_C, void, const int32_t> ExecuteUbergraph_BP_FluxOceanWave = { 0x2bc7620, 14 };
};

/// Struct /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BS_FluxSplashData.BS_FluxSplashData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBS_FluxSplashData
{ 
    class UNiagaraSystem*                              VisualEffect_9_72FD08AB47A15EC87C5F8C9C52E833C9;            // 0x0000   (0x0008)
    class USoundCue*                                   AudioEffect_10_249DEA304B20F5D999A818968AFF37EB;            // 0x0008   (0x0008)
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C
/// Size: 0x0580 (1408 bytes) (0x0002C8 - 0x000580) align 16 MaxSize: 0x0580
class ABP_FluxSurface_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class UBP_FluxDataAudioComponent_C*                BP_FluxAudioComponent;                                      // 0x02D0   (0x0008)
    class UDecalComponent*                             DecalCausticsWet;                                           // 0x02D8   (0x0008)
    class UProceduralMeshComponent*                    SurfaceProceduralMesh;                                      // 0x02E0   (0x0008)
    class UStaticMeshComponent*                        SurfaceOverMesh;                                            // 0x02E8   (0x0008)
    class UStaticMeshComponent*                        SurfaceUnderMesh;                                           // 0x02F0   (0x0008)
    class UStaticMeshComponent*                        VolumeAbsorbtion;                                           // 0x02F8   (0x0008)
    class UStaticMeshComponent*                        VolumeScattering;                                           // 0x0300   (0x0008)
    class UBP_FluxDataComponent_C*                     BP_FluxDataComponent;                                       // 0x0308   (0x0008)
    class UAudioComponent*                             VolumeAudio;                                                // 0x0310   (0x0008)
    class UPostProcessComponent*                       VolumePostProcess;                                          // 0x0318   (0x0008)
    class UBoxComponent*                               VolumeCollision;                                            // 0x0320   (0x0008)
    class UBP_FluxMeshGenerator_C*                     BP_TextureReader;                                           // 0x0328   (0x0008)
    class USceneComponent*                             DefaultSceneRoot;                                           // 0x0330   (0x0008)
    TEnumAsByte<BE_SurfaceMesh>                        SurfaceMeshMode;                                            // 0x0338   (0x0001)
    unsigned char                                      UnknownData00_6[0x7];                                       // 0x0339   (0x0007) MISSED
    FTransform                                         SurfaceMeshTransform;                                       // 0x0340   (0x0030)
    FVector                                            ExtendVolumeSize;                                           // 0x0370   (0x000C)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x037C   (0x0004) MISSED
    class UPDA_FluxSimulationState_C*                  SimulationState;                                            // 0x0380   (0x0008)
    class UMaterialInterface*                          SurfaceOverMaterial;                                        // 0x0388   (0x0008)
    class UMaterialInterface*                          SurfaceUnderMaterial;                                       // 0x0390   (0x0008)
    class UMaterialInterface*                          SurfaceDistantMaterial;                                     // 0x0398   (0x0008)
    class UMaterialInterface*                          CausticsWetMaterial;                                        // 0x03A0   (0x0008)
    class UMaterialInterface*                          PostprocessMaterial;                                        // 0x03A8   (0x0008)
    class UMaterialInterface*                          VolumeAbsorptionMaterial;                                   // 0x03B0   (0x0008)
    class UMaterialInterface*                          VolumeScatteringMaterial;                                   // 0x03B8   (0x0008)
    TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                          // 0x03C0   (0x0010)
    TArray<class UMaterialInstanceDynamic*>            InteractionInstances;                                       // 0x03D0   (0x0010)
    class UMaterialInstanceDynamic*                    SurfaceOverInstance;                                        // 0x03E0   (0x0008)
    class UMaterialInstanceDynamic*                    SurfaceUnderInstance;                                       // 0x03E8   (0x0008)
    class UMaterialInstanceDynamic*                    CausticsInstance;                                           // 0x03F0   (0x0008)
    class UMaterialInstanceDynamic*                    PostprocessInstance;                                        // 0x03F8   (0x0008)
    class UMaterialInstanceDynamic*                    VolumeAbsorptionInstance;                                   // 0x0400   (0x0008)
    class ABP_FluxOceanWave_C*                         WaveTextureActor;                                           // 0x0408   (0x0008)
    int32_t                                            WaveTextureStateAreaBorders;                                // 0x0410   (0x0004)
    float                                              WaveTextureStateAreaBlend;                                  // 0x0414   (0x0004)
    class AActor*                                      WaterBody;                                                  // 0x0418   (0x0008)
    bool                                               GenerateProceduralMeshView;                                 // 0x0420   (0x0001)
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x0421   (0x0007) MISSED
    class UMaterialInterface*                          GeneratedSurfaceOverMaterial;                               // 0x0428   (0x0008)
    char                                               GenerateEdgePadding;                                        // 0x0430   (0x0001)
    unsigned char                                      UnknownData03_6[0x3];                                       // 0x0431   (0x0003) MISSED
    int32_t                                            GenerateLOD;                                                // 0x0434   (0x0004)
    bool                                               UseAmbientAudio;                                            // 0x0438   (0x0001)
    unsigned char                                      UnknownData04_6[0x3];                                       // 0x0439   (0x0003) MISSED
    float                                              AudiFalloffDistance;                                        // 0x043C   (0x0004)
    FVector                                            AudioExtendDistance;                                        // 0x0440   (0x000C)
    unsigned char                                      UnknownData05_6[0x4];                                       // 0x044C   (0x0004) MISSED
    class USoundBase*                                  AudioAmbient;                                               // 0x0450   (0x0008)
    class UMaterialInstanceDynamic*                    VolumeScatteringInstance;                                   // 0x0458   (0x0008)
    TArray<class USceneComponent*>                     UnderSurfaceComponents;                                     // 0x0460   (0x0010)
    class UMaterialInstanceDynamic*                    SurfaceDistantInstance;                                     // 0x0470   (0x0008)
    float                                              CurrentCameraBlur;                                          // 0x0478   (0x0004)
    bool                                               IsCameraVolumeRendered;                                     // 0x047C   (0x0001)
    bool                                               InitVolumeRendered;                                         // 0x047D   (0x0001)
    unsigned char                                      UnknownData06_6[0x2];                                       // 0x047E   (0x0002) MISSED
    TArray<class AStaticMeshActor*>                    DistantMeshes;                                              // 0x0480   (0x0010)
    TMap<int32_t, FBS_FluxSplashData>                  InteractionSplashes;                                        // 0x0490   (0x0050)
    class USoundBase*                                  AudioAmbientOver__UE5_Workaround_;                          // 0x04E0   (0x0008)
    class USoundBase*                                  AudioAmbientUnder__UE5_Workaround_;                         // 0x04E8   (0x0008)
    bool                                               UseAudioParameters;                                         // 0x04F0   (0x0001)
    unsigned char                                      UnknownData07_6[0x7];                                       // 0x04F1   (0x0007) MISSED
    class USceneComponent*                             CameraComponent;                                            // 0x04F8   (0x0008)
    TMap<TEnumAsByte<BE_SurfaceMesh>, TWeakObjectPtr<UStaticMesh*>> Meshes;                                        // 0x0500   (0x0050)
    FString                                            GeneratedMeshStats;                                         // 0x0550   (0x0010)
    TEnumAsByte<FluxSurface_GridType>                  GridType;                                                   // 0x0560   (0x0001)
    unsigned char                                      UnknownData08_6[0x7];                                       // 0x0561   (0x0007) MISSED
    TArray<class UStaticMeshComponent*>                SurfaceOverMeshList;                                        // 0x0568   (0x0010)
    class USBPhysicalMaterial*                         SurfaceOverMesh_PhysMaterialOverride;                       // 0x0578   (0x0008)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.GetVolumeCollision
    // [0] Volume : const UPrimitiveComponent*&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPrimitiveComponent*&> GetVolumeCollision = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.GetWaveTextureMaterials
    // [0] MaterialInstances : const TArray<UMaterialInstanceDynamic*>&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const TArray<UMaterialInstanceDynamic*>&> GetWaveTextureMaterials = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.CanRenderWave
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const bool&> CanRenderWave = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.GetSimulationState
    // [0] State : const UPDA_FluxSimulationState_C*&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*&> GetSimulationState = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.CanRenderInteractions
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const bool&> CanRenderInteractions = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.LoadMesh
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> LoadMesh = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.DetecCurrentCamera
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> DetecCurrentCamera = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.CreateDynamicWaterBodyMaterial
    // [0] WaterBodyActor : const AActor*
    // [1] Material : const UMaterialInstanceDynamic*&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const AActor*, const UMaterialInstanceDynamic*&> CreateDynamicWaterBodyMaterial = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.ApplySurfaceBoundsZ
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> ApplySurfaceBoundsZ = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.AddToUnderSurfaceList
    // [0] Item : const USceneComponent*&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const USceneComponent*&> AddToUnderSurfaceList = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SwitchUnderFluidVisibility
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> SwitchUnderFluidVisibility = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SetNiagaraData
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] RequiredGround : const bool
    // [2] RequiredWave : const bool
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UNiagaraComponent*, const bool, const bool> SetNiagaraData = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SpawnSplash
    // [0] Location : const FVector
    // [1] BS_FluxSplashData : const FBS_FluxSplashData&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const FVector, const FBS_FluxSplashData&> SpawnSplash = { 0x2bc7620, 12 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.UpdateCamera
    // [0] DeltaTime : const float
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const float> UpdateCamera = { 0x2bc7620, 13 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.InitializeOverlaping
    // [0] SourceState : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*> InitializeOverlaping = { 0x2bc7620, 14 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.GenerateMeshFromSimulationState
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> GenerateMeshFromSimulationState = { 0x2bc7620, 15 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.GenerateMesh
    // [0] State : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*> GenerateMesh = { 0x2bc7620, 16 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.RemovePostprocess
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> RemovePostprocess = { 0x2bc7620, 17 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.InitMaterialParameters
    // [0] SourceData : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*> InitMaterialParameters = { 0x2bc7620, 18 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.UpdateHeightMap
    // [0] Value : const UTexture*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UTexture*> UpdateHeightMap = { 0x2bc7620, 19 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.CreateMaterials
    // [0] Caustics : const UMaterialInterface*
    // [1] SurfaceOver : const UMaterialInterface*
    // [2] SurfaceUnder : const UMaterialInterface*
    // [3] UNDERWATER : const UMaterialInterface*
    // [4] AbsorptionVolume : const UMaterialInterface*
    // [5] FogVolume : const UMaterialInterface*
    // [6] SurfaceDistant : const UMaterialInterface*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UMaterialInterface*, const UMaterialInterface*, const UMaterialInterface*, const UMaterialInterface*, const UMaterialInterface*, const UMaterialInterface*, const UMaterialInterface*> CreateMaterials = { 0x2bc7620, 20 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.InitializeVolumes
    // [0] SourceData : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*> InitializeVolumes = { 0x2bc7620, 21 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.InitializeSurfaces
    // [0] SourceData : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*> InitializeSurfaces = { 0x2bc7620, 22 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.InitializeState
    // [0] SourceData : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*> InitializeState = { 0x2bc7620, 23 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.UserConstructionScript
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> UserConstructionScript = { 0x2bc7620, 24 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SetWaveTextureAndArea
    // [0] Texture : const UTextureRenderTarget2D*
    // [1] area : const FLinearColor
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UTextureRenderTarget2D*, const FLinearColor> SetWaveTextureAndArea = { 0x2bc7620, 25 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.Generate
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> Generate = { 0x2bc7620, 26 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SetInteractionsTexture
    // [0] Texture : const UTextureRenderTarget2D*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UTextureRenderTarget2D*> SetInteractionsTexture = { 0x2bc7620, 27 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SetInteractionsArea
    // [0] area : const FLinearColor
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const FLinearColor> SetInteractionsArea = { 0x2bc7620, 28 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void> ReceiveBeginPlay = { 0x2bc7620, 29 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.BndEvt__BP_FluxSurface_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] SweepResult : const FHitResult&
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> BndEvt__BP_FluxSurface_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature = { 0x2bc7620, 30 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.InitializeOvelapingEvent
    // [0] SourceState : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UPDA_FluxSimulationState_C*> InitializeOvelapingEvent = { 0x2bc7620, 31 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const float> ReceiveTick = { 0x2bc7620, 32 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.Set Surface Niagara Data
    // [0] ParticleSystem : const UNiagaraComponent*
    // [1] RequiredGround : const bool
    // [2] RequiredWave : const bool
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UNiagaraComponent*, const bool, const bool> SetSurfaceNiagaraData = { 0x2bc7620, 33 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SetStateHeightWetMap
    // [0] Texture : const UTexture*
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const UTexture*> SetStateHeightWetMap = { 0x2bc7620, 34 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.SpawnSplashAtLocation
    // [0] Location : const FVector
    // [1] Type : const int32_t
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const FVector, const int32_t> SpawnSplashAtLocation = { 0x2bc7620, 35 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Blueprints/BP_FluxSurface.BP_FluxSurface_C.ExecuteUbergraph_BP_FluxSurface
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ABP_FluxSurface_C, void, const int32_t> ExecuteUbergraph_BP_FluxSurface = { 0x2bc7620, 36 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C
/// Size: 0x01C0 (448 bytes) (0x0000C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UBP_FluxSolverComponent_C : public UActorComponent
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00C0   (0x0008)
    float                                              UpdateRate;                                                 // 0x00C8   (0x0004)
    int32_t                                            CurrentFrame;                                               // 0x00CC   (0x0004)
    class UMaterialInstanceDynamic*                    SimulationInstance;                                         // 0x00D0   (0x0008)
    class UMaterialInstanceDynamic*                    NormalInstance;                                             // 0x00D8   (0x0008)
    class UMaterialInstanceDynamic*                    InteractionInstance;                                        // 0x00E0   (0x0008)
    int32_t                                            MaxIterationsPerFrame;                                      // 0x00E8   (0x0004)
    float                                              TimeAccumulator;                                            // 0x00EC   (0x0004)
    TArray<class AActor*>                              ActiveInteractions;                                         // 0x00F0   (0x0010)
    int32_t                                            SimulationResolution;                                       // 0x0100   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004) MISSED
    class UTextureRenderTarget2D*                      NormalTexture;                                              // 0x0108   (0x0008)
    class UTextureRenderTarget2D*                      Heightmap0;                                                 // 0x0110   (0x0008)
    class UTextureRenderTarget2D*                      Heightmap1;                                                 // 0x0118   (0x0008)
    class UTextureRenderTarget2D*                      Heightmap2;                                                 // 0x0120   (0x0008)
    TEnumAsByte<ETextureRenderTargetFormat>            SimulationFormat;                                           // 0x0128   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x0129   (0x0003) MISSED
    int32_t                                            WorldPixelSize;                                             // 0x012C   (0x0004)
    int32_t                                            WorldAreaSize;                                              // 0x0130   (0x0004)
    TEnumAsByte<ETextureRenderTargetFormat>            NormalFormat;                                               // 0x0134   (0x0001)
    unsigned char                                      UnknownData02_6[0x3];                                       // 0x0135   (0x0003) MISSED
    float                                              FrameDelta;                                                 // 0x0138   (0x0004)
    bool                                               UseWorldPositionOffset;                                     // 0x013C   (0x0001)
    unsigned char                                      UnknownData03_6[0x3];                                       // 0x013D   (0x0003) MISSED
    class AActor*                                      CapturedFocusActor;                                         // 0x0140   (0x0008)
    float                                              World_Position_Offset_Range;                                // 0x0148   (0x0004)
    float                                              WorldPositionOffsetFrequency;                               // 0x014C   (0x0004)
    FVector                                            CaptureFocusLocation;                                       // 0x0150   (0x000C)
    float                                              CaptureCameraHeight;                                        // 0x015C   (0x0004)
    FVector2D                                          WorldOffset;                                                // 0x0160   (0x0008)
    FVector2D                                          WorldOffsetPrev;                                            // 0x0168   (0x0008)
    int32_t                                            NormalLod;                                                  // 0x0170   (0x0004)
    float                                              WorldAreaSizeInv;                                           // 0x0174   (0x0004)
    bool                                               CleanOffset;                                                // 0x0178   (0x0001)
    unsigned char                                      UnknownData04_6[0x3];                                       // 0x0179   (0x0003) MISSED
    FLinearColor                                       WorldToInteractionUV;                                       // 0x017C   (0x0010)
    unsigned char                                      UnknownData05_6[0x4];                                       // 0x018C   (0x0004) MISSED
    TArray<class AActor*>                              InteractionRenderers;                                       // 0x0190   (0x0010)
    bool                                               OutputNormalAlpha;                                          // 0x01A0   (0x0001)
    unsigned char                                      UnknownData06_6[0x7];                                       // 0x01A1   (0x0007) MISSED
    class UPDA_FluxSimulationState_C*                  State;                                                      // 0x01A8   (0x0008)
    float                                              WaveDamping;                                                // 0x01B0   (0x0004)
    float                                              WaveTravelSpeed;                                            // 0x01B4   (0x0004)
    float                                              BorderFalloff;                                              // 0x01B8   (0x0004)
    int32_t                                            Iteration;                                                  // 0x01BC   (0x0004)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.CanRenderInteractions
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const bool&> CanRenderInteractions = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.RemoveOverlaping
    // [0] OverlapingActor : const AActor*&
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const AActor*&> RemoveOverlaping = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.AddOverlaping
    // [0] OverlapingActor : const AActor*&
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const AActor*&> AddOverlaping = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.ApplySimulationOffset
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void> ApplySimulationOffset = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.UpdateFocusLocation
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void> UpdateFocusLocation = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.RoundToPixel
    // [0] Location : const FVector2D&
    // [1] PixelSize : const int32_t
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, FVector2D, const FVector2D&, const int32_t> RoundToPixel = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.UpdateWorldPosition
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void> UpdateWorldPosition = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.InitializeRenderTarget
    // [0] TextureRenderTarget : const UTextureRenderTarget2D*
    // [1] Repeat : const TEnumAsByte<TextureAddress>
    // [2] Filter : const TEnumAsByte<TextureFilter>
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const UTextureRenderTarget2D*, const TEnumAsByte<TextureAddress>, const TEnumAsByte<TextureFilter>> InitializeRenderTarget = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.UpdateInteractions
    // [0] Canvas : const UCanvas*
    // [1] ScreenSize : const FVector2D
    // [2] Fraction : const float
    // [3] Part : const int32_t
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const UCanvas*, const FVector2D, const float, const int32_t> UpdateInteractions = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.UpdateNormalMap
    // [0] Heightmap : const UTexture*
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const UTexture*> UpdateNormalMap = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.UpdateSimulation
    // [0] DeltTime : const float
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const float> UpdateSimulation = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.JumpToNextFrame
    // [0] PrevFrame : const UTextureRenderTarget2D*&
    // [1] CurrentFrame : const UTextureRenderTarget2D*&
    // [2] NextFrame : const UTextureRenderTarget2D*&
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const UTextureRenderTarget2D*&, const UTextureRenderTarget2D*&, const UTextureRenderTarget2D*&> JumpToNextFrame = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.InitializeSimulation
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void> InitializeSimulation = { 0x2bc7620, 12 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void> ReceiveBeginPlay = { 0x2bc7620, 13 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const float> ReceiveTick = { 0x2bc7620, 14 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverComponent.BP_FluxSolverComponent_C.ExecuteUbergraph_BP_FluxSolverComponent
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UBP_FluxSolverComponent_C, void, const int32_t> ExecuteUbergraph_BP_FluxSolverComponent = { 0x2bc7620, 15 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C
/// Size: 0x1140 (4416 bytes) (0x000520 - 0x001140) align 16 MaxSize: 0x1140
class UDron_AnimBP_C : public USBAnimInstance
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0520   (0x0008)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0528   (0x0030)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0558   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0580   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x05A8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x05D0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x05F8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0620   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0648   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0670   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0698   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x06C0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x06E8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x0710   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x0738   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x0760   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x0788   (0x0028)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x07B0   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0838   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer14;                             // 0x0868   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult15;                                // 0x08F0   (0x0030)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0920   (0x00F0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult16;                                // 0x0A10   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x0A40   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x0AC8   (0x0030)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer19;                           // 0x0AF8   (0x00F0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x0BE8   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x0C18   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult22;                                // 0x0CA0   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer23;                             // 0x0CD0   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult24;                                // 0x0D58   (0x0030)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer25;                           // 0x0D88   (0x00F0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult26;                                // 0x0E78   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer27;                             // 0x0EA8   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult28;                                // 0x0F30   (0x0030)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer29;                           // 0x0F60   (0x00F0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult30;                                // 0x1050   (0x0030)
    FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1080   (0x00B0)
    float                                              Speed;                                                      // 0x1130   (0x0004)
    bool                                               isFlashLight;                                               // 0x1134   (0x0001)
    bool                                               IsSprint;                                                   // 0x1135   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x1136   (0x0002) MISSED
    float                                              SBVelocityX;                                                // 0x1138   (0x0004)
    float                                              SBVelocityY;                                                // 0x113C   (0x0004)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.AnimGraph
    // [0] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UDron_AnimBP_C, void, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.InverseSBVelocityVal
    // [0] SBVelocity : const float
    // [1] IsLockOn : const bool
    // [2] OutSBVelocity : const float&
    constexpr static const FunctionPointer<UDron_AnimBP_C, void, const float, const bool, const float&> InverseSBVelocityVal = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_B0C6465742F8DE817743E7BA7EB996CA
    constexpr static const FunctionPointer<UDron_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_B0C6465742F8DE817743E7BA7EB996CA = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_D81DE635458C538E9BB72591ABF45205
    constexpr static const FunctionPointer<UDron_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_D81DE635458C538E9BB72591ABF45205 = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_3E8BE0F040DF4EB5B283A6ACE24C0689
    constexpr static const FunctionPointer<UDron_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_3E8BE0F040DF4EB5B283A6ACE24C0689 = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_EC283B71425DB5D0006C9D926B3A1466
    constexpr static const FunctionPointer<UDron_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_EC283B71425DB5D0006C9D926B3A1466 = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_C87DCC6F4B94F5C9D2A8C2B373B7CCDC
    constexpr static const FunctionPointer<UDron_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_C87DCC6F4B94F5C9D2A8C2B373B7CCDC = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_F1B5F7CA4CA3B5BF5912BFB02435D39B
    constexpr static const FunctionPointer<UDron_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_F1B5F7CA4CA3B5BF5912BFB02435D39B = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_D60123BE4BB15921CD034DA4E9E212BA
    constexpr static const FunctionPointer<UDron_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_Dron_AnimBP_AnimGraphNode_TransitionResult_D60123BE4BB15921CD034DA4E9E212BA = { 0x2bc7620, 8 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.BlueprintUpdateAnimation
    // [0] DeltaTimeX : const float
    constexpr static const FunctionPointer<UDron_AnimBP_C, void, const float> BlueprintUpdateAnimation = { 0x2bc7620, 9 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/Dron_AnimBP.Dron_AnimBP_C.ExecuteUbergraph_Dron_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UDron_AnimBP_C, void, const int32_t> ExecuteUbergraph_Dron_AnimBP = { 0x2bc7620, 10 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_01/Dron/BP_Dron.BP_Dron_C
/// Size: 0x02FD (765 bytes) (0x0002C8 - 0x0002FD) align 8 MaxSize: 0x02FD
class ABP_Dron_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class USBSkeletalMeshComponent*                    SBSkeletalMesh;                                             // 0x02D0   (0x0008)
    class USpotLightComponent*                         SpotLight;                                                  // 0x02D8   (0x0008)
    class UStaticMeshComponent*                        cube;                                                       // 0x02E0   (0x0008)
    class USceneComponent*                             DefaultSceneRoot;                                           // 0x02E8   (0x0008)
    float                                              DronHeight;                                                 // 0x02F0   (0x0004)
    float                                              LightAngle;                                                 // 0x02F4   (0x0004)
    float                                              DeltaTime;                                                  // 0x02F8   (0x0004)
    bool                                               bRand;                                                      // 0x02FC   (0x0001)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/BP_Dron.BP_Dron_C.makeSelfLocation
    // [0] Owner : const AActor*
    // [1] LightOffLocation : const FVector&
    // [2] LightOffRotation : const FRotator&
    // [3] LightOnLocation : const FVector&
    // [4] LightOnRotation : const FRotator&
    constexpr static const FunctionPointer<ABP_Dron_C, void, const AActor*, const FVector&, const FRotator&, const FVector&, const FRotator&> makeSelfLocation = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/BP_Dron.BP_Dron_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ABP_Dron_C, void, const float> ReceiveTick = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/BP_Dron.BP_Dron_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ABP_Dron_C, void> ReceiveBeginPlay = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Dron/BP_Dron.BP_Dron_C.ExecuteUbergraph_BP_Dron
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ABP_Dron_C, void, const int32_t> ExecuteUbergraph_BP_Dron = { 0x2bc7620, 3 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C
/// Size: 0x11EDE (73438 bytes) (0x000520 - 0x011EDE) align 16 MaxSize: 0x11EDE
class UCH_P_EVE_01_AnimBP_New_C : public USBAnimInstance
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0520   (0x0008)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone;                                   // 0x0528   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone0;                                  // 0x0680   (0x0158)
    unsigned char                                      UnknownData00_6[0x8];                                       // 0x07D8   (0x0008) MISSED
    FAnimNode_KawaiiPhysics                            AnimGraphNode_KawaiiPhysics;                                // 0x07E0   (0x0790)
    FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0F70   (0x0108)
    FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone1;                                  // 0x1078   (0x0108)
    FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone2;                                  // 0x1180   (0x0108)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1288   (0x00C8)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1350   (0x0088)
    FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x13D8   (0x0078)
    FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt;                               // 0x1450   (0x00A0)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig;                                   // 0x14F0   (0x0370)
    FSBAnimNode_LookAtIK                               SBAnimGraphNode_LookAtIK;                                   // 0x1860   (0x01A0)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig3;                                  // 0x1A00   (0x0370)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer4;                              // 0x1D70   (0x0088)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x1DF8   (0x00C8)
    FAnimNode_PoseSnapshot                             AnimGraphNode_PoseSnapshot;                                 // 0x1EC0   (0x00B0)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive5;                               // 0x1F70   (0x00C8)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer6;                              // 0x2038   (0x0088)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone7;                                  // 0x20C0   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone8;                                  // 0x2218   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone9;                                  // 0x2370   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone10;                                 // 0x24C8   (0x0158)
    FSBAnimNode_LookAtIK                               SBAnimGraphNode_LookAtIK11;                                 // 0x2620   (0x01A0)
    FSBAnimNode_LookAtIK                               SBAnimGraphNode_LookAtIK12;                                 // 0x27C0   (0x01A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x2960   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer14;                             // 0x29E8   (0x0088)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2A70   (0x00E0)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig15;                                 // 0x2B50   (0x0370)
    FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt16;                             // 0x2EC0   (0x00A0)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend17;                           // 0x2F60   (0x00E0)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer;                      // 0x3040   (0x00A8)
    unsigned char                                      UnknownData01_6[0x8];                                       // 0x30E8   (0x0008) MISSED
    FSBAnimNode_LookAtIK                               SBAnimGraphNode_LookAtIK18;                                 // 0x30F0   (0x01A0)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive19;                              // 0x3290   (0x00C8)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer;                           // 0x3358   (0x0158)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig20;                                 // 0x34B0   (0x0370)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x3820   (0x0088)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig22;                                 // 0x38A8   (0x0370)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone23;                                 // 0x3C18   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone24;                                 // 0x3D70   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone25;                                 // 0x3EC8   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone26;                                 // 0x4020   (0x0158)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x4178   (0x0020)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x4198   (0x0020)
    FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone27;                                 // 0x41B8   (0x0108)
    FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x42C0   (0x0028)
    FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose28;                              // 0x42E8   (0x0028)
    FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x4310   (0x0158)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend29;                           // 0x4468   (0x00E0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer30;                         // 0x4548   (0x0158)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer31;                         // 0x46A0   (0x0158)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig32;                                 // 0x47F8   (0x0370)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig33;                                 // 0x4B68   (0x0370)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig34;                                 // 0x4ED8   (0x0370)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend35;                                // 0x5248   (0x00C8)
    FSBAnimNode_HitBones                               SBAnimGraphNode_HitBones;                                   // 0x5310   (0x0258)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend36;                           // 0x5568   (0x00E0)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig37;                                 // 0x5648   (0x0370)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace38;                      // 0x59B8   (0x0020)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace39;                      // 0x59D8   (0x0020)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig40;                                 // 0x59F8   (0x0370)
    unsigned char                                      UnknownData02_6[0x8];                                       // 0x5D68   (0x0008) MISSED
    FSBAnimNode_EventMoveTwoBoneIK                     SBAnimGraphNode_EventMoveTwoBoneIK;                         // 0x5D70   (0x0620)
    FSBAnimNode_EventMoveTwoBoneIK                     SBAnimGraphNode_EventMoveTwoBoneIK41;                       // 0x6390   (0x0620)
    FSBAnimNode_EventMoveTwoBoneIK                     SBAnimGraphNode_EventMoveTwoBoneIK42;                       // 0x69B0   (0x0620)
    FSBAnimNode_EventMoveTwoBoneIK                     SBAnimGraphNode_EventMoveTwoBoneIK43;                       // 0x6FD0   (0x0620)
    FSBAnimNode_EventMoveIK                            SBAnimGraphNode_EventMoveIK;                                // 0x75F0   (0x04E0)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer44;                    // 0x7AD0   (0x00A8)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend45;                                // 0x7B78   (0x00C8)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive46;                              // 0x7C40   (0x00C8)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive47;                              // 0x7D08   (0x00C8)
    FAnimNode_Constraint                               AnimGraphNode_Constraint;                                   // 0x7DD0   (0x0108)
    FAnimNode_Constraint                               AnimGraphNode_Constraint48;                                 // 0x7ED8   (0x0108)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone49;                                 // 0x7FE0   (0x0158)
    FAnimNode_PoseSnapshot                             AnimGraphNode_PoseSnapshot50;                               // 0x8138   (0x00B0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer51;                             // 0x81E8   (0x0088)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone52;                                 // 0x8270   (0x0158)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer53;                             // 0x83C8   (0x0088)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive54;                              // 0x8450   (0x00C8)
    FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone55;                                 // 0x8518   (0x0108)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone56;                                 // 0x8620   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone57;                                 // 0x8778   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone58;                                 // 0x88D0   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone59;                                 // 0x8A28   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone60;                                 // 0x8B80   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone61;                                 // 0x8CD8   (0x0158)
    FSBAnimNode_LookAtIK                               SBAnimGraphNode_LookAtIK62;                                 // 0x8E30   (0x01A0)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone63;                                 // 0x8FD0   (0x0158)
    unsigned char                                      UnknownData03_6[0x8];                                       // 0x9128   (0x0008) MISSED
    FSBAnimNode_LookAtIK                               SBAnimGraphNode_LookAtIK64;                                 // 0x9130   (0x01A0)
    FAnimNode_Constraint                               AnimGraphNode_Constraint65;                                 // 0x92D0   (0x0108)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend66;                           // 0x93D8   (0x00E0)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer67;                    // 0x94B8   (0x00A8)
    FSBAnimNode_SBCustomBlendSpacePlayer               SBAnimGraphNode_CustomBlendSpacePlayer;                     // 0x9560   (0x0100)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend68;                                // 0x9660   (0x00C8)
    FAnimNode_ControlRig                               AnimGraphNode_ControlRig69;                                 // 0x9728   (0x0370)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend70;                           // 0x9A98   (0x00E0)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x9B78   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult71;                           // 0x9BA0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult72;                           // 0x9BC8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult73;                           // 0x9BF0   (0x0028)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer74;                             // 0x9C18   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x9CA0   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer75;                             // 0x9CD0   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult76;                                // 0x9D58   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer77;                             // 0x9D88   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult78;                                // 0x9E10   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer79;                             // 0x9E40   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult80;                                // 0x9EC8   (0x0030)
    FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x9EF8   (0x00B0)
    FAnimNode_Constraint                               AnimGraphNode_Constraint81;                                 // 0x9FA8   (0x0108)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone82;                                 // 0xA0B0   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone83;                                 // 0xA208   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone84;                                 // 0xA360   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone85;                                 // 0xA4B8   (0x0158)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer86;                    // 0xA610   (0x00A8)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer87;                    // 0xA6B8   (0x00A8)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive88;                              // 0xA760   (0x00C8)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer89;                    // 0xA828   (0x00A8)
    FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose90;                             // 0xA8D0   (0x0158)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult91;                           // 0xAA28   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult92;                           // 0xAA50   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult93;                           // 0xAA78   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult94;                           // 0xAAA0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult95;                           // 0xAAC8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult96;                           // 0xAAF0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult97;                           // 0xAB18   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult98;                           // 0xAB40   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult99;                           // 0xAB68   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult100;                          // 0xAB90   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult101;                          // 0xABB8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult102;                          // 0xABE0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult103;                          // 0xAC08   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult104;                          // 0xAC30   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult105;                          // 0xAC58   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult106;                          // 0xAC80   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult107;                          // 0xACA8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult108;                          // 0xACD0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult109;                          // 0xACF8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult110;                          // 0xAD20   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult111;                          // 0xAD48   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult112;                          // 0xAD70   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult113;                          // 0xAD98   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult114;                          // 0xADC0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult115;                          // 0xADE8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult116;                          // 0xAE10   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult117;                          // 0xAE38   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult118;                          // 0xAE60   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult119;                          // 0xAE88   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult120;                          // 0xAEB0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult121;                          // 0xAED8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult122;                          // 0xAF00   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult123;                          // 0xAF28   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult124;                          // 0xAF50   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult125;                          // 0xAF78   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult126;                          // 0xAFA0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult127;                          // 0xAFC8   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult128;                          // 0xAFF0   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult129;                          // 0xB018   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult130;                          // 0xB040   (0x0028)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer131;                        // 0xB068   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult132;                               // 0xB1C0   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer133;                            // 0xB1F0   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer134;                            // 0xB278   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0xB300   (0x00A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer135;                            // 0xB3A0   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer136;                            // 0xB428   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool137;                           // 0xB4B0   (0x00A0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool138;                           // 0xB550   (0x00A0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer139;                        // 0xB5F0   (0x0158)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer140;                            // 0xB748   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer141;                            // 0xB7D0   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool142;                           // 0xB858   (0x00A0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer143;                        // 0xB8F8   (0x0158)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer144;                            // 0xBA50   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool145;                           // 0xBAD8   (0x00A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer146;                            // 0xBB78   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer147;                            // 0xBC00   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer148;                            // 0xBC88   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool149;                           // 0xBD10   (0x00A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer150;                            // 0xBDB0   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer151;                            // 0xBE38   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer152;                            // 0xBEC0   (0x0088)
    FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0xBF48   (0x00B0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer153;                            // 0xBFF8   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult154;                               // 0xC080   (0x0030)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer155;                        // 0xC0B0   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult156;                               // 0xC208   (0x0030)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer157;                        // 0xC238   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult158;                               // 0xC390   (0x0030)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0xC3C0   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool159;                           // 0xC4B0   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer160;                          // 0xC550   (0x00F0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer161;                          // 0xC640   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool162;                           // 0xC730   (0x00A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer163;                            // 0xC7D0   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer164;                            // 0xC858   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool165;                           // 0xC8E0   (0x00A0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool166;                           // 0xC980   (0x00A0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool167;                           // 0xCA20   (0x00A0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool168;                           // 0xCAC0   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer169;                          // 0xCB60   (0x00F0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer170;                          // 0xCC50   (0x00F0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult171;                               // 0xCD40   (0x0030)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer172;                          // 0xCD70   (0x00F0)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive173;                             // 0xCE60   (0x00C8)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool174;                           // 0xCF28   (0x00A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer175;                            // 0xCFC8   (0x0088)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer176;                            // 0xD050   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool177;                           // 0xD0D8   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer178;                          // 0xD178   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool179;                           // 0xD268   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer180;                          // 0xD308   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool181;                           // 0xD3F8   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer182;                          // 0xD498   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool183;                           // 0xD588   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer184;                          // 0xD628   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool185;                           // 0xD718   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer186;                          // 0xD7B8   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool187;                           // 0xD8A8   (0x00A0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer188;                        // 0xD948   (0x0158)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool189;                           // 0xDAA0   (0x00A0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer190;                        // 0xDB40   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult191;                               // 0xDC98   (0x0030)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer192;                        // 0xDCC8   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult193;                               // 0xDE20   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer194;                            // 0xDE50   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool195;                           // 0xDED8   (0x00A0)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer196;                            // 0xDF78   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult197;                               // 0xE000   (0x0030)
    FSBAnimNode_SBSequencePlayer                       SBAnimGraphNode_SBSequencePlayer;                           // 0xE030   (0x00C0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult198;                               // 0xE0F0   (0x0030)
    FSBAnimNode_SBOverriddenBlendSpacePlayer           SBAnimGraphNode_OverriddenBlendSpacePlayer;                 // 0xE120   (0x00F8)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend199;                          // 0xE218   (0x00E0)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend200;                          // 0xE2F8   (0x00E0)
    FSBAnimNode_SBOverriddenBlendSpacePlayer           SBAnimGraphNode_OverriddenBlendSpacePlayer201;              // 0xE3D8   (0x00F8)
    FSBAnimNode_SBOverriddenBlendSpacePlayer           SBAnimGraphNode_OverriddenBlendSpacePlayer202;              // 0xE4D0   (0x00F8)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend203;                          // 0xE5C8   (0x00E0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool204;                           // 0xE6A8   (0x00A0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer205;                        // 0xE748   (0x0158)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer206;                        // 0xE8A0   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult207;                               // 0xE9F8   (0x0030)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer208;                        // 0xEA28   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult209;                               // 0xEB80   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer210;                            // 0xEBB0   (0x0088)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool211;                           // 0xEC38   (0x00A0)
    FSBAnimNode_SBSequencePlayer                       SBAnimGraphNode_SBSequencePlayer212;                        // 0xECD8   (0x00C0)
    FAnimNode_StateResult                              AnimGraphNode_StateResult213;                               // 0xED98   (0x0030)
    FSBAnimNode_SBOverriddenBlendSpacePlayer           SBAnimGraphNode_OverriddenBlendSpacePlayer214;              // 0xEDC8   (0x00F8)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend215;                          // 0xEEC0   (0x00E0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool216;                           // 0xEFA0   (0x00A0)
    FSBAnimNode_SBOverriddenBlendSpacePlayer           SBAnimGraphNode_OverriddenBlendSpacePlayer217;              // 0xF040   (0x00F8)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer218;                          // 0xF138   (0x00F0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer219;                        // 0xF228   (0x0158)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool220;                           // 0xF380   (0x00A0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer221;                        // 0xF420   (0x0158)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool222;                           // 0xF578   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer223;                          // 0xF618   (0x00F0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool224;                           // 0xF708   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer225;                          // 0xF7A8   (0x00F0)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend226;                          // 0xF898   (0x00E0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool227;                           // 0xF978   (0x00A0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer228;                          // 0xFA18   (0x00F0)
    FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer229;                          // 0xFB08   (0x00F0)
    FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt230;                            // 0xFBF8   (0x00A0)
    FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool231;                           // 0xFC98   (0x00A0)
    unsigned char                                      UnknownData04_6[0x8];                                       // 0xFD38   (0x0008) MISSED
    FSBAnimNode_SBSMotionPlayer                        SBAnimGraphNode_SBMotionPlayer;                             // 0xFD40   (0x01E0)
    FSBAnimNode_SBBlendSpacePlayer                     SBAnimGraphNode_BlendSpacePlayer232;                        // 0xFF20   (0x0158)
    FAnimNode_StateResult                              AnimGraphNode_StateResult233;                               // 0x10078   (0x0030)
    FAnimNode_StateMachine                             AnimGraphNode_StateMachine234;                              // 0x100A8   (0x00B0)
    FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend235;                          // 0x10158   (0x00E0)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive236;                             // 0x10238   (0x00C8)
    FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone237;                                // 0x10300   (0x0108)
    FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone238;                                // 0x10408   (0x0108)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer239;                            // 0x10510   (0x0088)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone240;                                // 0x10598   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone241;                                // 0x106F0   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone242;                                // 0x10848   (0x0158)
    FAnimNode_SpringBone                               AnimGraphNode_SpringBone243;                                // 0x109A0   (0x0158)
    FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace244;                     // 0x10AF8   (0x0020)
    FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace245;                     // 0x10B18   (0x0020)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend246;                               // 0x10B38   (0x00C8)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer247;                   // 0x10C00   (0x00A8)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend248;                               // 0x10CA8   (0x00C8)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer249;                   // 0x10D70   (0x00A8)
    FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive250;                             // 0x10E18   (0x00C8)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer251;                   // 0x10EE0   (0x00A8)
    FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose252;                             // 0x10F88   (0x0028)
    FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose253;                            // 0x10FB0   (0x0158)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x11108   (0x0030)
    float                                              __CustomProperty_Prop2_Constraint_046FEA6A4292977EB782039E32569CB2; // 0x11138   (0x0004)
    float                                              __CustomProperty_Prop1_Constraint_046FEA6A4292977EB782039E32569CB2; // 0x1113C   (0x0004)
    bool                                               __CustomProperty_IsCameraDirectionLeft_38B751CB4C9EBF7614C7BB87FF34604C; // 0x11140   (0x0001)
    unsigned char                                      UnknownData05_6[0x3];                                       // 0x11141   (0x0003) MISSED
    FVector                                            __CustomProperty_HeadLookAtLocation_38B751CB4C9EBF7614C7BB87FF34604C; // 0x11144   (0x000C)
    FRotator                                           __CustomProperty_CameraRotation_38B751CB4C9EBF7614C7BB87FF34604C; // 0x11150   (0x000C)
    FVector                                            __CustomProperty_CameraLocation_38B751CB4C9EBF7614C7BB87FF34604C; // 0x1115C   (0x000C)
    float                                              __CustomProperty_CustomAlpha_38B751CB4C9EBF7614C7BB87FF34604C; // 0x11168   (0x0004)
    float                                              __CustomProperty_SearchDistance_Backward_L_0418F73143E14FC1A8F832B99275BF70; // 0x1116C   (0x0004)
    float                                              __CustomProperty_SearchDistance_Forward_L_0418F73143E14FC1A8F832B99275BF70; // 0x11170   (0x0004)
    float                                              __CustomProperty_SearchDistance_Backward_R_0418F73143E14FC1A8F832B99275BF70; // 0x11174   (0x0004)
    float                                              __CustomProperty_SearchDistance_Forward_R_0418F73143E14FC1A8F832B99275BF70; // 0x11178   (0x0004)
    float                                              __CustomProperty_ToeLMove_0418F73143E14FC1A8F832B99275BF70; // 0x1117C   (0x0004)
    float                                              __CustomProperty_ToeRMove_0418F73143E14FC1A8F832B99275BF70; // 0x11180   (0x0004)
    float                                              __CustomProperty_KneeLMove_0418F73143E14FC1A8F832B99275BF70; // 0x11184   (0x0004)
    float                                              __CustomProperty_KneeRMove_0418F73143E14FC1A8F832B99275BF70; // 0x11188   (0x0004)
    float                                              __CustomProperty_UpdateTime_0418F73143E14FC1A8F832B99275BF70; // 0x1118C   (0x0004)
    bool                                               __CustomProperty_Enable_KneeIK_0418F73143E14FC1A8F832B99275BF70; // 0x11190   (0x0001)
    bool                                               __CustomProperty_Enable_R_Hand_0418F73143E14FC1A8F832B99275BF70; // 0x11191   (0x0001)
    bool                                               __CustomProperty_Enable_L_Hand_0418F73143E14FC1A8F832B99275BF70; // 0x11192   (0x0001)
    unsigned char                                      UnknownData06_6[0x1];                                       // 0x11193   (0x0001) MISSED
    float                                              __CustomProperty_CustomAlpha_AD992E7245C51D2B70F960BCC3FAA227; // 0x11194   (0x0004)
    FVector                                            __CustomProperty_TargetSocketLocation_D9D0063B41A17BB2DC253AB7CAC5DB8E; // 0x11198   (0x000C)
    FVector                                            __CustomProperty_MySocketLocalLocation_D9D0063B41A17BB2DC253AB7CAC5DB8E; // 0x111A4   (0x000C)
    FName                                              __CustomProperty_MyAttachBoneName_D9D0063B41A17BB2DC253AB7CAC5DB8E; // 0x111B0   (0x0008)
    FName                                              __CustomProperty_IKBoneName_D9D0063B41A17BB2DC253AB7CAC5DB8E; // 0x111B8   (0x0008)
    float                                              __CustomProperty_CustomAlpha_E513C38E4FD1C2AC3C3AFF9005D1E231; // 0x111C0   (0x0004)
    bool                                               __CustomProperty_IsRightWeapon_8E6956CF4B3EA5A1198A1D9AD55D2EE1; // 0x111C4   (0x0001)
    unsigned char                                      UnknownData07_6[0x3];                                       // 0x111C5   (0x0003) MISSED
    float                                              __CustomProperty_PositionRate_8E6956CF4B3EA5A1198A1D9AD55D2EE1; // 0x111C8   (0x0004)
    unsigned char                                      UnknownData08_6[0x4];                                       // 0x111CC   (0x0004) MISSED
    FTransform                                         __CustomProperty_RecordRootTransform1_8E6956CF4B3EA5A1198A1D9AD55D2EE1; // 0x111D0   (0x0030)
    FTransform                                         __CustomProperty_RecordRootTransform0_8E6956CF4B3EA5A1198A1D9AD55D2EE1; // 0x11200   (0x0030)
    FHitResult                                         __CustomProperty_HitResult_8E6956CF4B3EA5A1198A1D9AD55D2EE1; // 0x11230   (0x008C)
    bool                                               __CustomProperty_IsHitStop_8E6956CF4B3EA5A1198A1D9AD55D2EE1; // 0x112BC   (0x0001)
    bool                                               __CustomProperty_TPSHasWeapon_7D7F223946B6C7A4AED82F893FEC7C16; // 0x112BD   (0x0001)
    unsigned char                                      UnknownData09_6[0x2];                                       // 0x112BE   (0x0002) MISSED
    FVector2D                                          __CustomProperty_TPSAimXY_7D7F223946B6C7A4AED82F893FEC7C16; // 0x112C0   (0x0008)
    bool                                               __CustomProperty_TPSUseLookAt_7D7F223946B6C7A4AED82F893FEC7C16; // 0x112C8   (0x0001)
    unsigned char                                      UnknownData10_6[0x3];                                       // 0x112C9   (0x0003) MISSED
    FVector                                            __CustomProperty_TPSLookAtLocation_7D7F223946B6C7A4AED82F893FEC7C16; // 0x112CC   (0x000C)
    FVector                                            __CustomProperty_TPSHandSocket_7D7F223946B6C7A4AED82F893FEC7C16; // 0x112D8   (0x000C)
    int32_t                                            __CustomProperty_TPSModeType_7D7F223946B6C7A4AED82F893FEC7C16; // 0x112E4   (0x0004)
    FVector                                            __CustomProperty_AimTarget_7D7F223946B6C7A4AED82F893FEC7C16; // 0x112E8   (0x000C)
    bool                                               __CustomProperty_IsAttachRightHand_66DE1D55432220E8F6D6EBA1E9531850; // 0x112F4   (0x0001)
    unsigned char                                      UnknownData11_6[0x3];                                       // 0x112F5   (0x0003) MISSED
    FVector                                            __CustomProperty_ActorLocation_66DE1D55432220E8F6D6EBA1E9531850; // 0x112F8   (0x000C)
    float                                              __CustomProperty_CustomAlpha_66DE1D55432220E8F6D6EBA1E9531850; // 0x11304   (0x0004)
    float                                              __CustomProperty_R_Hand_Alpha_Override_66DE1D55432220E8F6D6EBA1E9531850; // 0x11308   (0x0004)
    float                                              __CustomProperty_L_Hand_Alpha_Override_66DE1D55432220E8F6D6EBA1E9531850; // 0x1130C   (0x0004)
    float                                              __CustomProperty_ActiveHitPointAngle_66DE1D55432220E8F6D6EBA1E9531850; // 0x11310   (0x0004)
    float                                              __CustomProperty_Speed_66DE1D55432220E8F6D6EBA1E9531850;    // 0x11314   (0x0004)
    bool                                               __CustomProperty_IsJump_66DE1D55432220E8F6D6EBA1E9531850;   // 0x11318   (0x0001)
    unsigned char                                      UnknownData12_6[0x3];                                       // 0x11319   (0x0003) MISSED
    float                                              __CustomProperty_CustomAlpha_4219CC664EC3FE2D2FB2C59C6C64DDAD; // 0x1131C   (0x0004)
    float                                              Speed;                                                      // 0x11320   (0x0004)
    float                                              SBVelocityX;                                                // 0x11324   (0x0004)
    float                                              SBVelocityY;                                                // 0x11328   (0x0004)
    bool                                               IsInAir;                                                    // 0x1132C   (0x0001)
    unsigned char                                      UnknownData13_6[0x3];                                       // 0x1132D   (0x0003) MISSED
    float                                              CustomAnimAlpha;                                            // 0x11330   (0x0004)
    TEnumAsByte<ESBCharacterMoveAnimBlendMode>         RunBlendMode;                                               // 0x11334   (0x0001)
    unsigned char                                      UnknownData14_6[0x3];                                       // 0x11335   (0x0003) MISSED
    float                                              CustomAnimAlpha2;                                           // 0x11338   (0x0004)
    float                                              CustomAnimAdditiveAlpha;                                    // 0x1133C   (0x0004)
    bool                                               IsDoubleJump;                                               // 0x11340   (0x0001)
    bool                                               IsSprint;                                                   // 0x11341   (0x0001)
    unsigned char                                      UnknownData15_6[0x2];                                       // 0x11342   (0x0002) MISSED
    float                                              RunAnimPlayRate;                                            // 0x11344   (0x0004)
    float                                              ClimbAnimPlayRate;                                          // 0x11348   (0x0004)
    bool                                               IsGlide;                                                    // 0x1134C   (0x0001)
    bool                                               IsClimbing;                                                 // 0x1134D   (0x0001)
    unsigned char                                      UnknownData16_6[0x2];                                       // 0x1134E   (0x0002) MISSED
    float                                              ClimbUpDown;                                                // 0x11350   (0x0004)
    float                                              ClimbLeftRight;                                             // 0x11354   (0x0004)
    bool                                               IsWireMoving;                                               // 0x11358   (0x0001)
    bool                                               IsMoving;                                                   // 0x11359   (0x0001)
    bool                                               IsLockOn;                                                   // 0x1135A   (0x0001)
    bool                                               IsMoveInAir;                                                // 0x1135B   (0x0001)
    bool                                               IsFlyingAction;                                             // 0x1135C   (0x0001)
    unsigned char                                      UnknownData17_6[0x3];                                       // 0x1135D   (0x0003) MISSED
    FVector                                            Acceleration;                                               // 0x11360   (0x000C)
    bool                                               isTurn;                                                     // 0x1136C   (0x0001)
    unsigned char                                      UnknownData18_6[0x3];                                       // 0x1136D   (0x0003) MISSED
    float                                              CustomAnimAlpha2_Upper;                                     // 0x11370   (0x0004)
    float                                              CustomAnimAdditiveAlpha_Upper;                              // 0x11374   (0x0004)
    float                                              CustomAnimAlpha_Upper;                                      // 0x11378   (0x0004)
    float                                              spring_stiffness;                                           // 0x1137C   (0x0004)
    TEnumAsByte<ESBCharacterFootPlacement>             MoveToIdleFootPlacement;                                    // 0x11380   (0x0001)
    TEnumAsByte<ESBCharacterMoveType>                  LastMoveType;                                               // 0x11381   (0x0001)
    bool                                               IsWallJump;                                                 // 0x11382   (0x0001)
    unsigned char                                      UnknownData19_6[0x1];                                       // 0x11383   (0x0001) MISSED
    float                                              RotationPower;                                              // 0x11384   (0x0004)
    bool                                               IsWallRun;                                                  // 0x11388   (0x0001)
    unsigned char                                      UnknownData20_6[0x3];                                       // 0x11389   (0x0003) MISSED
    float                                              Time;                                                       // 0x1138C   (0x0004)
    FVector                                            RightFootNormal;                                            // 0x11390   (0x000C)
    FVector                                            LeftFootNormal;                                             // 0x1139C   (0x000C)
    float                                              IKAlphaLeft;                                                // 0x113A8   (0x0004)
    float                                              IKAlphaRight;                                               // 0x113AC   (0x0004)
    float                                              HipDisplacement;                                            // 0x113B0   (0x0004)
    bool                                               IsRotateR;                                                  // 0x113B4   (0x0001)
    bool                                               IsRotateL;                                                  // 0x113B5   (0x0001)
    unsigned char                                      UnknownData21_6[0x2];                                       // 0x113B6   (0x0002) MISSED
    float                                              RotationVal;                                                // 0x113B8   (0x0004)
    bool                                               IsBlockingMode;                                             // 0x113BC   (0x0001)
    unsigned char                                      UnknownData22_6[0x3];                                       // 0x113BD   (0x0003) MISSED
    float                                              LookAtRadius;                                               // 0x113C0   (0x0004)
    FRotator                                           Rotator;                                                    // 0x113C4   (0x000C)
    float                                              LookRAD;                                                    // 0x113D0   (0x0004)
    bool                                               isUsingSkill;                                               // 0x113D4   (0x0001)
    bool                                               IKSwitch;                                                   // 0x113D5   (0x0001)
    bool                                               isConstrainWeapon;                                          // 0x113D6   (0x0001)
    bool                                               isInclineMoving;                                            // 0x113D7   (0x0001)
    bool                                               isMann;                                                     // 0x113D8   (0x0001)
    bool                                               IsEventMoving;                                              // 0x113D9   (0x0001)
    bool                                               IsEventSliding;                                             // 0x113DA   (0x0001)
    unsigned char                                      UnknownData23_6[0x1];                                       // 0x113DB   (0x0001) MISSED
    FVector                                            VLadderOffset;                                              // 0x113DC   (0x000C)
    bool                                               isBetaStance;                                               // 0x113E8   (0x0001)
    bool                                               isSlowMode;                                                 // 0x113E9   (0x0001)
    bool                                               IsMotionMoving;                                             // 0x113EA   (0x0001)
    bool                                               ManualIKSwitch;                                             // 0x113EB   (0x0001)
    bool                                               SpawnCAN;                                                   // 0x113EC   (0x0001)
    bool                                               FacialOn;                                                   // 0x113ED   (0x0001)
    bool                                               isButtonPressed;                                            // 0x113EE   (0x0001)
    unsigned char                                      UnknownData24_6[0x1];                                       // 0x113EF   (0x0001) MISSED
    float                                              FootStepL;                                                  // 0x113F0   (0x0004)
    float                                              FootStepR;                                                  // 0x113F4   (0x0004)
    bool                                               BurstFootStepParticleR;                                     // 0x113F8   (0x0001)
    bool                                               BurstFootStepParticleL;                                     // 0x113F9   (0x0001)
    unsigned char                                      UnknownData25_6[0x2];                                       // 0x113FA   (0x0002) MISSED
    FVector                                            RightHitLoc;                                                // 0x113FC   (0x000C)
    FVector                                            LeftHitLoc;                                                 // 0x11408   (0x000C)
    float                                              WallSlideValue;                                             // 0x11414   (0x0004)
    bool                                               isBody05;                                                   // 0x11418   (0x0001)
    TEnumAsByte<EPhysicalSurface>                      phymatR;                                                    // 0x11419   (0x0001)
    TEnumAsByte<EPhysicalSurface>                      physmatL;                                                   // 0x1141A   (0x0001)
    unsigned char                                      UnknownData26_6[0x1];                                       // 0x1141B   (0x0001) MISSED
    FVector                                            LookAtLocation;                                             // 0x1141C   (0x000C)
    TArray<FDragonData_FootData>                       DragonIKInput;                                              // 0x11428   (0x0010)
    bool                                               IsSlopeMoving;                                              // 0x11438   (0x0001)
    unsigned char                                      UnknownData27_6[0x3];                                       // 0x11439   (0x0003) MISSED
    float                                              DragonIKWeightAlpha;                                        // 0x1143C   (0x0004)
    TEnumAsByte<ESBEventMoveType>                      EventMoveType;                                              // 0x11440   (0x0001)
    bool                                               IsEnableSwim;                                               // 0x11441   (0x0001)
    bool                                               IsUnderWater;                                               // 0x11442   (0x0001)
    unsigned char                                      UnknownData28_6[0x1];                                       // 0x11443   (0x0001) MISSED
    float                                              FacialPlayRate;                                             // 0x11444   (0x0004)
    float                                              FacialPlayPosition;                                         // 0x11448   (0x0004)
    bool                                               IsSwimUp;                                                   // 0x1144C   (0x0001)
    bool                                               IsSwimDown;                                                 // 0x1144D   (0x0001)
    unsigned char                                      UnknownData29_6[0x2];                                       // 0x1144E   (0x0002) MISSED
    FSBEventMoveIKData                                 EventMoveIK_Hand_L;                                         // 0x11450   (0x0190)
    FSBEventMoveIKData                                 EventMoveIK_Hand_R;                                         // 0x115E0   (0x0190)
    FSBEventMoveIKData                                 EventMoveIK_Foot_L;                                         // 0x11770   (0x0190)
    FSBEventMoveIKData                                 EventMoveIK_Foot_R;                                         // 0x11900   (0x0190)
    FSBEventMoveIKData                                 EventMoveIK_Root;                                           // 0x11A90   (0x0190)
    float                                              EventMoveIKAlpha;                                           // 0x11C20   (0x0004)
    bool                                               IsWalkSliding;                                              // 0x11C24   (0x0001)
    bool                                               IsWalkSlidingSlip;                                          // 0x11C25   (0x0001)
    unsigned char                                      UnknownData30_6[0x2];                                       // 0x11C26   (0x0002) MISSED
    int32_t                                            WalkSlidingValue;                                           // 0x11C28   (0x0004)
    bool                                               IsSequenceAnim;                                             // 0x11C2C   (0x0001)
    unsigned char                                      UnknownData31_6[0x3];                                       // 0x11C2D   (0x0003) MISSED
    float                                              SideRodDegree;                                              // 0x11C30   (0x0004)
    bool                                               IsStretchSideRodSearch;                                     // 0x11C34   (0x0001)
    bool                                               IsSideRodWallless;                                          // 0x11C35   (0x0001)
    unsigned char                                      UnknownData32_6[0x2];                                       // 0x11C36   (0x0002) MISSED
    FVector                                            CustomBlendSpaceInputParam;                                 // 0x11C38   (0x000C)
    bool                                               IsAttachedLevelSequence;                                    // 0x11C44   (0x0001)
    unsigned char                                      UnknownData33_6[0x3];                                       // 0x11C45   (0x0003) MISSED
    float                                              CustomAnimByMeshSlotBodyAlpha;                              // 0x11C48   (0x0004)
    float                                              ActorForwardVeloctiy;                                       // 0x11C4C   (0x0004)
    float                                              ActorRightVelocity;                                         // 0x11C50   (0x0004)
    bool                                               IsLastMoveInput;                                            // 0x11C54   (0x0001)
    unsigned char                                      UnknownData34_6[0xB];                                       // 0x11C55   (0x000B) MISSED
    FTransform                                         WeaponTransform;                                            // 0x11C60   (0x0030)
    int32_t                                            EventMoveSideValue;                                         // 0x11C90   (0x0004)
    bool                                               isEditingShow;                                              // 0x11C94   (0x0001)
    bool                                               IsBattle;                                                   // 0x11C95   (0x0001)
    bool                                               isWeaponAttachLeft;                                         // 0x11C96   (0x0001)
    unsigned char                                      UnknownData35_6[0x1];                                       // 0x11C97   (0x0001) MISSED
    float                                              weaponAnim;                                                 // 0x11C98   (0x0004)
    bool                                               isBoneBlend;                                                // 0x11C9C   (0x0001)
    bool                                               BP_AttachLeft;                                              // 0x11C9D   (0x0001)
    bool                                               IsSlopeJumping;                                             // 0x11C9E   (0x0001)
    unsigned char                                      UnknownData36_6[0x1];                                       // 0x11C9F   (0x0001) MISSED
    FVector                                            AnimAccelation;                                             // 0x11CA0   (0x000C)
    bool                                               isSpawnAmpoule;                                             // 0x11CAC   (0x0001)
    unsigned char                                      UnknownData37_6[0x3];                                       // 0x11CAD   (0x0003) MISSED
    class ACH_P_EVE_01_Blueprint_C*                    OwnerBP;                                                    // 0x11CB0   (0x0008)
    float                                              EventMoveIKAlpha_Hand_L;                                    // 0x11CB8   (0x0004)
    float                                              EventMoveIKAlpha_Hand_R;                                    // 0x11CBC   (0x0004)
    float                                              EventMoveIKAlpha_Foot_L;                                    // 0x11CC0   (0x0004)
    float                                              EventMoveIKAlpha_Foot_R;                                    // 0x11CC4   (0x0004)
    bool                                               isOverriedBSU;                                              // 0x11CC8   (0x0001)
    unsigned char                                      UnknownData38_6[0x3];                                       // 0x11CC9   (0x0003) MISSED
    float                                              UpperStateAlpha;                                            // 0x11CCC   (0x0004)
    bool                                               EvntBattle;                                                 // 0x11CD0   (0x0001)
    bool                                               Interaction;                                                // 0x11CD1   (0x0001)
    bool                                               IsActiveOverlapMove;                                        // 0x11CD2   (0x0001)
    bool                                               UseLookAtIK;                                                // 0x11CD3   (0x0001)
    bool                                               isTPS;                                                      // 0x11CD4   (0x0001)
    bool                                               FreezeProp;                                                 // 0x11CD5   (0x0001)
    unsigned char                                      UnknownData39_6[0xA];                                       // 0x11CD6   (0x000A) MISSED
    FTransform                                         PropTM;                                                     // 0x11CE0   (0x0030)
    bool                                               CIN_isConstraintOff;                                        // 0x11D10   (0x0001)
    bool                                               isEnableGrab;                                               // 0x11D11   (0x0001)
    unsigned char                                      UnknownData40_6[0x2];                                       // 0x11D12   (0x0002) MISSED
    FVector                                            WallRunNormal;                                              // 0x11D14   (0x000C)
    FVector                                            SBActorRightVector;                                         // 0x11D20   (0x000C)
    float                                              CustomAnimLowerAlpha;                                       // 0x11D2C   (0x0004)
    FVector2D                                          AimXY;                                                      // 0x11D30   (0x0008)
    float                                              KnockDown_FullBodyIK_Alpha;                                 // 0x11D38   (0x0004)
    bool                                               IsMoveBlockHitWall;                                         // 0x11D3C   (0x0001)
    bool                                               IsJump;                                                     // 0x11D3D   (0x0001)
    bool                                               IsActiveFullBodyIK;                                         // 0x11D3E   (0x0001)
    unsigned char                                      UnknownData41_6[0x1];                                       // 0x11D3F   (0x0001) MISSED
    float                                              FullBodyIK_ActiveHitPointAngle;                             // 0x11D40   (0x0004)
    float                                              SpringAlpha;                                                // 0x11D44   (0x0004)
    float                                              FullBodyIK_L_Hand_Alpha;                                    // 0x11D48   (0x0004)
    float                                              FullBodyIK_R_Hand_Alpha;                                    // 0x11D4C   (0x0004)
    FVector                                            CurrentSprintVelocityDir;                                   // 0x11D50   (0x000C)
    float                                              GrabIKAlpha;                                                // 0x11D5C   (0x0004)
    FVector                                            TPSAimControlRig_TargetLocation;                            // 0x11D60   (0x000C)
    float                                              TPSAimIKAlpha;                                              // 0x11D6C   (0x0004)
    bool                                               IsActiveFullBodyIK_HitStop;                                 // 0x11D70   (0x0001)
    unsigned char                                      UnknownData42_6[0x3];                                       // 0x11D71   (0x0003) MISSED
    FVector                                            LastMoveInput;                                              // 0x11D74   (0x000C)
    bool                                               IsPlayJumpTransit;                                          // 0x11D80   (0x0001)
    bool                                               IsTPSAimOffset;                                             // 0x11D81   (0x0001)
    bool                                               IsRopeSwing;                                                // 0x11D82   (0x0001)
    unsigned char                                      UnknownData43_6[0x1];                                       // 0x11D83   (0x0001) MISSED
    float                                              RopeSwingLeftRightAddValue;                                 // 0x11D84   (0x0004)
    float                                              AC3Alpha;                                                   // 0x11D88   (0x0004)
    bool                                               IsHoldSwim;                                                 // 0x11D8C   (0x0001)
    TEnumAsByte<ESBFishingModeType>                    FishingMode;                                                // 0x11D8D   (0x0001)
    unsigned char                                      UnknownData44_6[0x2];                                       // 0x11D8E   (0x0002) MISSED
    float                                              FishingRodDirection;                                        // 0x11D90   (0x0004)
    bool                                               IsFishingReel;                                              // 0x11D94   (0x0001)
    bool                                               IsWallslide;                                                // 0x11D95   (0x0001)
    unsigned char                                      UnknownData45_6[0x2];                                       // 0x11D96   (0x0002) MISSED
    float                                              MoveInputDirectionAngle;                                    // 0x11D98   (0x0004)
    float                                              MoveInputDirectionAngleTarget;                              // 0x11D9C   (0x0004)
    float                                              RunInputDuration;                                           // 0x11DA0   (0x0004)
    float                                              STS_IKAlpha;                                                // 0x11DA4   (0x0004)
    FName                                              STS_IKBoneName;                                             // 0x11DA8   (0x0008)
    FName                                              STS_MyAttachBoneName;                                       // 0x11DB0   (0x0008)
    FVector                                            STS_MySocketLocalLocation;                                  // 0x11DB8   (0x000C)
    FVector                                            STS_TargetSocketLocation;                                   // 0x11DC4   (0x000C)
    float                                              FishingAimX;                                                // 0x11DD0   (0x0004)
    float                                              CustomAnimAlpha3;                                           // 0x11DD4   (0x0004)
    bool                                               ConvertFaceToJALI;                                          // 0x11DD8   (0x0001)
    unsigned char                                      UnknownData46_6[0x7];                                       // 0x11DD9   (0x0007) MISSED
    class ACH_P_EVE_01_Sequncer_BP_C*                  SeqBP;                                                      // 0x11DE0   (0x0008)
    int32_t                                            JALIFacialIdleAnimIndex_;                                   // 0x11DE8   (0x0004)
    bool                                               UseJALI;                                                    // 0x11DEC   (0x0001)
    unsigned char                                      UnknownData47_6[0x3];                                       // 0x11DED   (0x0003) MISSED
    float                                              MovingGroundStruggleAlpha;                                  // 0x11DF0   (0x0004)
    bool                                               IsMovingGroundStruggleAnim;                                 // 0x11DF4   (0x0001)
    bool                                               IsDisableFootIKWhenRideOnVehicle;                           // 0x11DF5   (0x0001)
    unsigned char                                      UnknownData48_6[0x2];                                       // 0x11DF6   (0x0002) MISSED
    float                                              OverriddenBSPlayerFullBlendWeight;                          // 0x11DF8   (0x0004)
    float                                              OverriddenBSPlayerPartialBlendWeight;                       // 0x11DFC   (0x0004)
    bool                                               IsOverridenBlendSpacePlayerActive;                          // 0x11E00   (0x0001)
    bool                                               IsMovingBySpeed;                                            // 0x11E01   (0x0001)
    bool                                               UseNewJaliFace;                                             // 0x11E02   (0x0001)
    unsigned char                                      UnknownData49_6[0x1];                                       // 0x11E03   (0x0001) MISSED
    float                                              FullBodyIKFactor;                                           // 0x11E04   (0x0004)
    int32_t                                            StanceFacialAnimIndex;                                      // 0x11E08   (0x0004)
    bool                                               IsSwimming;                                                 // 0x11E0C   (0x0001)
    unsigned char                                      UnknownData50_6[0x3];                                       // 0x11E0D   (0x0003) MISSED
    float                                              IdleAdditiveAnimAlpha1;                                     // 0x11E10   (0x0004)
    float                                              IdleAdditiveAnimAlpha2;                                     // 0x11E14   (0x0004)
    float                                              IdleAdditiveAnimAlpha3;                                     // 0x11E18   (0x0004)
    float                                              KawaiiPhysicsAlpha;                                         // 0x11E1C   (0x0004)
    float                                              EventMoveActivateTime;                                      // 0x11E20   (0x0004)
    bool                                               IsEnableKneeIK;                                             // 0x11E24   (0x0001)
    unsigned char                                      UnknownData51_6[0x3];                                       // 0x11E25   (0x0003) MISSED
    float                                              KneeIK_R;                                                   // 0x11E28   (0x0004)
    float                                              KneeIK_L;                                                   // 0x11E2C   (0x0004)
    float                                              KneeIK_R_Toe;                                               // 0x11E30   (0x0004)
    float                                              KneeIK_L_Toe;                                               // 0x11E34   (0x0004)
    float                                              KneeIK_Search_Forward_R;                                    // 0x11E38   (0x0004)
    float                                              KneeIK_Search_Backward_R;                                   // 0x11E3C   (0x0004)
    float                                              KneeIK_Search_Forward_L;                                    // 0x11E40   (0x0004)
    float                                              KneeIK_Search_Backward_L;                                   // 0x11E44   (0x0004)
    bool                                               bShortPonyTail;                                             // 0x11E48   (0x0001)
    bool                                               bFIshingRodLeftOn;                                          // 0x11E49   (0x0001)
    unsigned char                                      UnknownData52_6[0x2];                                       // 0x11E4A   (0x0002) MISSED
    FVector                                            WeaponConstraint_L_Location;                                // 0x11E4C   (0x000C)
    bool                                               bEyeTrackingToCam;                                          // 0x11E58   (0x0001)
    unsigned char                                      UnknownData53_6[0x3];                                       // 0x11E59   (0x0003) MISSED
    int32_t                                            FacialAnimType_PhotoMode;                                   // 0x11E5C   (0x0004)
    float                                              FacialAnimPosition_PhotoMode;                               // 0x11E60   (0x0004)
    FName                                              PoseName_PhotoMode;                                         // 0x11E64   (0x0008)
    bool                                               IsPhotoModeFacialAnimationEnabled;                          // 0x11E6C   (0x0001)
    unsigned char                                      UnknownData54_6[0x3];                                       // 0x11E6D   (0x0003) MISSED
    class UAnimSequence*                               PhotoModeFacialAnimation;                                   // 0x11E70   (0x0008)
    bool                                               IsSelfieMode;                                               // 0x11E78   (0x0001)
    unsigned char                                      UnknownData55_6[0x3];                                       // 0x11E79   (0x0003) MISSED
    FVector                                            SelfieCameraLocation;                                       // 0x11E7C   (0x000C)
    FRotator                                           SelfieCameraRotation;                                       // 0x11E88   (0x000C)
    float                                              SelfieAnimBS_X;                                             // 0x11E94   (0x0004)
    FVector                                            SelfieHeadLookAtTarget;                                     // 0x11E98   (0x000C)
    bool                                               IsSelfieModeCameraDirectionLeft;                            // 0x11EA4   (0x0001)
    unsigned char                                      UnknownData56_6[0x3];                                       // 0x11EA5   (0x0003) MISSED
    float                                              ShowFootIKAlpha;                                            // 0x11EA8   (0x0004)
    bool                                               bPhotoModeDefaultSnapshot;                                  // 0x11EAC   (0x0001)
    TEnumAsByte<ESBTPSModeType>                        TPSModeType;                                                // 0x11EAD   (0x0001)
    unsigned char                                      UnknownData57_6[0x2];                                       // 0x11EAE   (0x0002) MISSED
    FVector                                            TPSHandSocket;                                              // 0x11EB0   (0x000C)
    FVector                                            TPSLookAtLocation;                                          // 0x11EBC   (0x000C)
    bool                                               TPSUseLookAt;                                               // 0x11EC8   (0x0001)
    unsigned char                                      UnknownData58_6[0x3];                                       // 0x11EC9   (0x0003) MISSED
    float                                              FootIKForceActivateAlpha;                                   // 0x11ECC   (0x0004)
    bool                                               TPSHasWeapon;                                               // 0x11ED0   (0x0001)
    unsigned char                                      UnknownData59_6[0x3];                                       // 0x11ED1   (0x0003) MISSED
    float                                              Prop1_ConstraintSub;                                        // 0x11ED4   (0x0004)
    float                                              Prop2_ConstraintSub;                                        // 0x11ED8   (0x0004)
    bool                                               CheckMoveRightSmoothValue;                                  // 0x11EDC   (0x0001)
    bool                                               IsValidMoveRightSmoothValue;                                // 0x11EDD   (0x0001)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimGraph
    // [0] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.ReinitActor
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> ReinitActor = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.getBodyNumber
    // [0] isBody05 : const bool&
    // [1] isBody06 : const bool&
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void, const bool&, const bool&> getBodyNumber = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.isSlomode
    // [0] Time : const float&
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, bool, const float&> isSlomode = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.LadderAction
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> LadderAction = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.IKSelector
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> IKSelector = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.getLookAtRadius
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> getLookAtRadius = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.TraceGround
    // [0] InputPin : const FVector
    // [1] OutHit ImpactNormal : const FVector&
    // [2] Out Hit Impact Point : const FVector&
    // [3] OutIsHit : const bool&
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void, const FVector, const FVector&, const FVector&, const bool&> TraceGround = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.FootIK
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> FootIK = { 0x2bc7620, 8 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_67BB68154A807EF7E5EB999E37225C6F
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_67BB68154A807EF7E5EB999E37225C6F = { 0x2bc7620, 9 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_02E2BE4749628F3E6DEAF3A7EE01639A
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_02E2BE4749628F3E6DEAF3A7EE01639A = { 0x2bc7620, 10 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_8A526B53431B6DC301E8EF9D050A65B4
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_8A526B53431B6DC301E8EF9D050A65B4 = { 0x2bc7620, 11 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_7F3FDD2E4CC7BB14478DF7B0D5FE349B
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_7F3FDD2E4CC7BB14478DF7B0D5FE349B = { 0x2bc7620, 12 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_63B44DB746D182BB7BD20ABEBB927BC4
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_63B44DB746D182BB7BD20ABEBB927BC4 = { 0x2bc7620, 13 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_29F418674F1F9FB6114498ABD3E35A61
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_29F418674F1F9FB6114498ABD3E35A61 = { 0x2bc7620, 14 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_BE923FD5418025F7CB23C3861AE3AFA9
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_BE923FD5418025F7CB23C3861AE3AFA9 = { 0x2bc7620, 15 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_LayeredBoneBlend_7232A6944255B5267D63A1A64E2DB843
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_LayeredBoneBlend_7232A6944255B5267D63A1A64E2DB843 = { 0x2bc7620, 16 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TwoWayBlend_C993F7F34232C8D9A521EBB50C62539B
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TwoWayBlend_C993F7F34232C8D9A521EBB50C62539B = { 0x2bc7620, 17 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_KawaiiPhysics_344192864D507AE5F1ACECA9F6BF8FC2
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_KawaiiPhysics_344192864D507AE5F1ACECA9F6BF8FC2 = { 0x2bc7620, 18 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_09A5B87045BC7119317DD38198057830
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_09A5B87045BC7119317DD38198057830 = { 0x2bc7620, 19 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByInt_A633FFC840A31670C74E10A39A4DCBA4
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByInt_A633FFC840A31670C74E10A39A4DCBA4 = { 0x2bc7620, 20 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_0418F73143E14FC1A8F832B99275BF70
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_0418F73143E14FC1A8F832B99275BF70 = { 0x2bc7620, 21 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_AD992E7245C51D2B70F960BCC3FAA227
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_AD992E7245C51D2B70F960BCC3FAA227 = { 0x2bc7620, 22 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TwoWayBlend_A00DE81C42BC73C3997F6D964608D207
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TwoWayBlend_A00DE81C42BC73C3997F6D964608D207 = { 0x2bc7620, 23 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_LookAtIK_23D4E0E543C2A871BB6F0A9502F23E12
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_LookAtIK_23D4E0E543C2A871BB6F0A9502F23E12 = { 0x2bc7620, 24 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_LayeredBoneBlend_BCB32DC74FE1BC1FB40E228CC00AC9B6
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_LayeredBoneBlend_BCB32DC74FE1BC1FB40E228CC00AC9B6 = { 0x2bc7620, 25 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_38B751CB4C9EBF7614C7BB87FF34604C
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_38B751CB4C9EBF7614C7BB87FF34604C = { 0x2bc7620, 26 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByInt_4FC91F8A4742D929ADEDBE86480C9A4A
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByInt_4FC91F8A4742D929ADEDBE86480C9A4A = { 0x2bc7620, 27 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_LookAtIK_5FBAC9FB482FEDD1488CB9A02E9D5D43
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_LookAtIK_5FBAC9FB482FEDD1488CB9A02E9D5D43 = { 0x2bc7620, 28 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_FD11A7D548E8AC7809101F82796A735D
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_FD11A7D548E8AC7809101F82796A735D = { 0x2bc7620, 29 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_E513C38E4FD1C2AC3C3AFF9005D1E231
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_E513C38E4FD1C2AC3C3AFF9005D1E231 = { 0x2bc7620, 30 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_8E6956CF4B3EA5A1198A1D9AD55D2EE1
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_8E6956CF4B3EA5A1198A1D9AD55D2EE1 = { 0x2bc7620, 31 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_7D7F223946B6C7A4AED82F893FEC7C16
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_7D7F223946B6C7A4AED82F893FEC7C16 = { 0x2bc7620, 32 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_66DE1D55432220E8F6D6EBA1E9531850
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ControlRig_66DE1D55432220E8F6D6EBA1E9531850 = { 0x2bc7620, 33 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_AA19F08B48A83F96692710BE1CD4482B
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_AA19F08B48A83F96692710BE1CD4482B = { 0x2bc7620, 34 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_E70F121A4183471479C6F4ACBF0D3F0D
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_E70F121A4183471479C6F4ACBF0D3F0D = { 0x2bc7620, 35 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_1E3BF1B049834C9E0E32B2A6B44923E9
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_1E3BF1B049834C9E0E32B2A6B44923E9 = { 0x2bc7620, 36 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_15886A8D4DB68B234FDDBA8098BE4F15
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveTwoBoneIK_15886A8D4DB68B234FDDBA8098BE4F15 = { 0x2bc7620, 37 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveIK_43611FB54546A5FD087C62A47ACCB200
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_EventMoveIK_43611FB54546A5FD087C62A47ACCB200 = { 0x2bc7620, 38 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TwoWayBlend_0CC9972C4EB84A84BDE1BA981955A69F
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TwoWayBlend_0CC9972C4EB84A84BDE1BA981955A69F = { 0x2bc7620, 39 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_8A6A85324C2AFE2998CF0D9115E07437
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_8A6A85324C2AFE2998CF0D9115E07437 = { 0x2bc7620, 40 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_71F39B3E4DD2BF8786D83CA5D52C0C84
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_71F39B3E4DD2BF8786D83CA5D52C0C84 = { 0x2bc7620, 41 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_419CC17E4CF723257157F8AB0DAC2F3C
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_419CC17E4CF723257157F8AB0DAC2F3C = { 0x2bc7620, 42 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_FBE929DA48210E0F1B64D496A11FA764
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_FBE929DA48210E0F1B64D496A11FA764 = { 0x2bc7620, 43 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_0ED1347641F569FFB0E2EEB341192AA3
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_0ED1347641F569FFB0E2EEB341192AA3 = { 0x2bc7620, 44 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_91BFE06F4D29DFA5C371BEB14274F8F0
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_91BFE06F4D29DFA5C371BEB14274F8F0 = { 0x2bc7620, 45 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_9E2AFCC740FEFA659FF9CEBE052FD210
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_9E2AFCC740FEFA659FF9CEBE052FD210 = { 0x2bc7620, 46 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_LookAtIK_E55B80714706E454E0CADFB46A5A17C0
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_LookAtIK_E55B80714706E454E0CADFB46A5A17C0 = { 0x2bc7620, 47 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_Constraint_A08FE15940A7D1D6DDF73895A32D0661
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_Constraint_A08FE15940A7D1D6DDF73895A32D0661 = { 0x2bc7620, 48 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_17843E024292BB89BF69229B3BAC64DC
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_17843E024292BB89BF69229B3BAC64DC = { 0x2bc7620, 49 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_33505E2A43CE2AC4C7B8558E94097444
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_33505E2A43CE2AC4C7B8558E94097444 = { 0x2bc7620, 50 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_LayeredBoneBlend_ACBDAAC94166284292EE71AF7E80DBA4
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_LayeredBoneBlend_ACBDAAC94166284292EE71AF7E80DBA4 = { 0x2bc7620, 51 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_80559C5E40DF1BF265D7C6A81EFCF44B
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_80559C5E40DF1BF265D7C6A81EFCF44B = { 0x2bc7620, 52 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_6902E88A4124547DA9727E99978AAAA7
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ModifyBone_6902E88A4124547DA9727E99978AAAA7 = { 0x2bc7620, 53 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_B16CA653431652C62BEE0FBC4D7ED570
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_B16CA653431652C62BEE0FBC4D7ED570 = { 0x2bc7620, 54 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_AA30F301429352DF33523998BC6E549A
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_SpringBone_AA30F301429352DF33523998BC6E549A = { 0x2bc7620, 55 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_OverriddenBlendSpacePlayer_3E6940704B278EA5244B8EB7E0FA5F89
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_OverriddenBlendSpacePlayer_3E6940704B278EA5244B8EB7E0FA5F89 = { 0x2bc7620, 56 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_OverriddenBlendSpacePlayer_89926C4B41BE52247EEE6195CCE797B6
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_OverriddenBlendSpacePlayer_89926C4B41BE52247EEE6195CCE797B6 = { 0x2bc7620, 57 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_BlendSpacePlayer_A61B91C44C5819FD28CA4090AE3890C3
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_BlendSpacePlayer_A61B91C44C5819FD28CA4090AE3890C3 = { 0x2bc7620, 58 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_BlendSpacePlayer_504658834F02EED87D6DFCABBED5D7F0
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_BlendSpacePlayer_504658834F02EED87D6DFCABBED5D7F0 = { 0x2bc7620, 59 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_SBSequencePlayer_611763154A9E893600AE089A11BE6560
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_SBSequencePlayer_611763154A9E893600AE089A11BE6560 = { 0x2bc7620, 60 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_961A47BB498B076762789AB551B515DD
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_961A47BB498B076762789AB551B515DD = { 0x2bc7620, 61 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_AAAA887946EED662C22C0E96AF144C42
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_ApplyAdditive_AAAA887946EED662C22C0E96AF144C42 = { 0x2bc7620, 62 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_F36A5CEC49F0C39EF9A611B08FD82242
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_F36A5CEC49F0C39EF9A611B08FD82242 = { 0x2bc7620, 63 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_DE1EEEBE4233CB77911845AC9D2BA678
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_DE1EEEBE4233CB77911845AC9D2BA678 = { 0x2bc7620, 64 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_B3E3DFCD4DDB91CB3F8A37995D54E67F
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_B3E3DFCD4DDB91CB3F8A37995D54E67F = { 0x2bc7620, 65 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_5DE541B04886D8FBD2C43FAC9C239AF0
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_5DE541B04886D8FBD2C43FAC9C239AF0 = { 0x2bc7620, 66 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_353B6522445FB5F298FB8D9F9BBEF7C2
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_353B6522445FB5F298FB8D9F9BBEF7C2 = { 0x2bc7620, 67 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_0E1DA0CC4B02A530A5A201B218E48F27
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_0E1DA0CC4B02A530A5A201B218E48F27 = { 0x2bc7620, 68 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_744AD4664B07B3CFBFEE6799B77C92DD
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendSpacePlayer_744AD4664B07B3CFBFEE6799B77C92DD = { 0x2bc7620, 69 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_3259E3454B51CFE421BBB28D75114C0B
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_3259E3454B51CFE421BBB28D75114C0B = { 0x2bc7620, 70 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_BA755F1B49101BCC7B4910A2185C8074
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_BA755F1B49101BCC7B4910A2185C8074 = { 0x2bc7620, 71 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_A09E47D84AEB6958FA026D836287C50A
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_A09E47D84AEB6958FA026D836287C50A = { 0x2bc7620, 72 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_EEFFFBEC40B756FEF74AF9B18225068E
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_EEFFFBEC40B756FEF74AF9B18225068E = { 0x2bc7620, 73 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_B96AF26B445EDE6E37A8FDB3FB3B3FD3
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_B96AF26B445EDE6E37A8FDB3FB3B3FD3 = { 0x2bc7620, 74 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_3CBBBFEE49D988562EC280939409AA6D
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_3CBBBFEE49D988562EC280939409AA6D = { 0x2bc7620, 75 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_BlendSpacePlayer_6A017D9149927D9405BCBCB91CBF3697
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_SBAnimGraphNode_BlendSpacePlayer_6A017D9149927D9405BCBCB91CBF3697 = { 0x2bc7620, 76 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.BlueprintUpdateAnimation
    // [0] DeltaTimeX : const float
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void, const float> BlueprintUpdateAnimation = { 0x2bc7620, 77 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_32198A5748131A4FF3C95591B5075253
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_32198A5748131A4FF3C95591B5075253 = { 0x2bc7620, 78 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_WeaponConstraintOff
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_WeaponConstraintOff = { 0x2bc7620, 79 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_WeaponConstraintOn
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_WeaponConstraintOn = { 0x2bc7620, 80 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_IKOFF
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_IKOFF = { 0x2bc7620, 81 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_IKON
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_IKON = { 0x2bc7620, 82 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_SpawnCAN
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_SpawnCAN = { 0x2bc7620, 83 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_DeSpawnCAN
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_DeSpawnCAN = { 0x2bc7620, 84 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_CF7859F545CB27936833BC9260FAE575
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_BlendListByBool_CF7859F545CB27936833BC9260FAE575 = { 0x2bc7620, 85 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_3BB846424F025C5B057890854985EFA4
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_3BB846424F025C5B057890854985EFA4 = { 0x2bc7620, 86 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_F7A49A86496B5ABE4A0AD292714D94EA
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_F7A49A86496B5ABE4A0AD292714D94EA = { 0x2bc7620, 87 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_PressButton
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_PressButton = { 0x2bc7620, 88 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_PressButtonEnd
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_PressButtonEnd = { 0x2bc7620, 89 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_557EF5284723297941B452A3815D25B6
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_557EF5284723297941B452A3815D25B6 = { 0x2bc7620, 90 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.Event_EventMove
    // [0] PinActor : const USBSkeletalMeshComponent*
    // [1] bInEnable : const bool
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void, const USBSkeletalMeshComponent*, const bool> Event_EventMove = { 0x2bc7620, 91 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_AttachIED
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_AttachIED = { 0x2bc7620, 92 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_6F39ABC940CE20BC67CE51A44E42D951
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_6F39ABC940CE20BC67CE51A44E42D951 = { 0x2bc7620, 93 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_WPConstraint
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_WPConstraint = { 0x2bc7620, 94 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_SpawnAmpoule
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_SpawnAmpoule = { 0x2bc7620, 95 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_6FCA07F0406483F37D7F22BE2AA256A1
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_6FCA07F0406483F37D7F22BE2AA256A1 = { 0x2bc7620, 96 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_03592AE3464094875E8967803DFF8357
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_03592AE3464094875E8967803DFF8357 = { 0x2bc7620, 97 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_Interaction
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_Interaction = { 0x2bc7620, 98 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_Feeze Prop TM
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_FeezePropTM = { 0x2bc7620, 99 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_LWeaponConstraintOn
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_LWeaponConstraintOn = { 0x2bc7620, 100 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.AnimNotify_LWeaponConstraintOff
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> AnimNotify_LWeaponConstraintOff = { 0x2bc7620, 101 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_EA66641B4786639609FFF4986AB001F2
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_EA66641B4786639609FFF4986AB001F2 = { 0x2bc7620, 102 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_FB6550BA4929606B3AD2778F6E3B7291
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_FB6550BA4929606B3AD2778F6E3B7291 = { 0x2bc7620, 103 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_D5BA8349490E630F76641AAFE1BC1884
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_D5BA8349490E630F76641AAFE1BC1884 = { 0x2bc7620, 104 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.UpdateEyePos
    // [0] Owner : const ASBCharacter*
    // [1] Reset : const bool
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void, const ASBCharacter*, const bool> UpdateEyePos = { 0x2bc7620, 105 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_64A198C247BD775A77B530B5A5DFF871
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_P_EVE_01_AnimBP_New_AnimGraphNode_TransitionResult_64A198C247BD775A77B530B5A5DFF871 = { 0x2bc7620, 106 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_AnimBP_New.CH_P_EVE_01_AnimBP_New_C.ExecuteUbergraph_CH_P_EVE_01_AnimBP_New
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_P_EVE_01_AnimBP_New_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_01_AnimBP_New = { 0x2bc7620, 107 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BP_FluxSolverRippleComponent.BP_FluxSolverRippleComponent_C
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UBP_FluxSolverRippleComponent_C : public UBP_FluxSolverComponent_C
{ 
public:
};

/// Class /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C
/// Size: 0x39CD (14797 bytes) (0x003880 - 0x0039CD) align 16 MaxSize: 0x39CD
class ACH_P_EVE_01_Sequncer_BP_C : public ASBCharacter
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x3880   (0x0008)
    class USBSkeletalMeshComponent*                    SBHair;                                                     // 0x3888   (0x0008)
    class USBSkeletalMeshComponent*                    SBPonytailShort;                                            // 0x3890   (0x0008)
    class USBSkeletalMeshComponent*                    SBAccSlot3;                                                 // 0x3898   (0x0008)
    class UArrowComponent*                             WindOriginArrow;                                            // 0x38A0   (0x0008)
    class USBSkeletalMeshComponent*                    SBPonytail;                                                 // 0x38A8   (0x0008)
    class USBSkeletalMeshComponent*                    Mesh_Face;                                                  // 0x38B0   (0x0008)
    class USBSkeletalMeshComponent*                    SBSkeletalMesh;                                             // 0x38B8   (0x0008)
    class UBoxComponent*                               CameraOverlap;                                              // 0x38C0   (0x0008)
    class USkeletalMeshComponent*                      ACC_HairPin;                                                // 0x38C8   (0x0008)
    class UBoxComponent*                               Hidden_DestructiveCollision;                                // 0x38D0   (0x0008)
    class USkeletalMeshComponent*                      ACCSlot;                                                    // 0x38D8   (0x0008)
    class USBSceneCaptureComponent2D*                  SBSceneCaptureComponent2D;                                  // 0x38E0   (0x0008)
    float                                              CharacterVelocity;                                          // 0x38E8   (0x0004)
    bool                                               ShootRayToVisibility;                                       // 0x38EC   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x38ED   (0x0003) MISSED
    class AActor*                                      HitActor;                                                   // 0x38F0   (0x0008)
    class ABP_Dron_C*                                  Dron;                                                       // 0x38F8   (0x0008)
    bool                                               isFlashLight;                                               // 0x3900   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x3901   (0x0007) MISSED
    class UParticleSystemComponent*                    NewVar;                                                     // 0x3908   (0x0008)
    class UStaticMeshComponent*                        WaterPlane;                                                 // 0x3910   (0x0008)
    class UBoxComponent*                               OverlappingWaterBody;                                       // 0x3918   (0x0008)
    class UBoxComponent*                               OverlappingGravityBox;                                      // 0x3920   (0x0008)
    TArray<class AWaterBody_BP0_C*>                    ValidWaterBodies;                                           // 0x3928   (0x0010)
    bool                                               isIKOff;                                                    // 0x3938   (0x0001)
    unsigned char                                      UnknownData02_6[0x3];                                       // 0x3939   (0x0003) MISSED
    float                                              FOV;                                                        // 0x393C   (0x0004)
    int32_t                                            headType;                                                   // 0x3940   (0x0004)
    float                                              LegRSocketVel;                                              // 0x3944   (0x0004)
    FVector                                            LegRSocketLastLoc;                                          // 0x3948   (0x000C)
    float                                              WaterDepth;                                                 // 0x3954   (0x0004)
    float                                              LegLSocketVel;                                              // 0x3958   (0x0004)
    FVector                                            LegLSocketLastLoc;                                          // 0x395C   (0x000C)
    float                                              PlayPosition;                                               // 0x3968   (0x0004)
    FName                                              EventTagName;                                               // 0x396C   (0x0008)
    float                                              PlayRate;                                                   // 0x3974   (0x0004)
    bool                                               isDronHide;                                                 // 0x3978   (0x0001)
    bool                                               StopPhysicsForSequencer;                                    // 0x3979   (0x0001)
    unsigned char                                      UnknownData03_6[0x2];                                       // 0x397A   (0x0002) MISSED
    float                                              PhysicsStabilize;                                           // 0x397C   (0x0004)
    bool                                               isWeaponHide;                                               // 0x3980   (0x0001)
    bool                                               StopFootStepSound;                                          // 0x3981   (0x0001)
    unsigned char                                      UnknownData04_6[0x2];                                       // 0x3982   (0x0002) MISSED
    float                                              HairMassKgMultiplier;                                       // 0x3984   (0x0004)
    bool                                               isHairSpray;                                                // 0x3988   (0x0001)
    unsigned char                                      UnknownData05_6[0x3];                                       // 0x3989   (0x0003) MISSED
    float                                              HairSprayPower;                                             // 0x398C   (0x0004)
    float                                              HairSprayRotation;                                          // 0x3990   (0x0004)
    bool                                               CIN_isConstraintOff;                                        // 0x3994   (0x0001)
    bool                                               isWingHide;                                                 // 0x3995   (0x0001)
    unsigned char                                      UnknownData06_6[0x2];                                       // 0x3996   (0x0002) MISSED
    int32_t                                            ForcedLOD;                                                  // 0x3998   (0x0004)
    bool                                               GravityController;                                          // 0x399C   (0x0001)
    unsigned char                                      UnknownData07_6[0x3];                                       // 0x399D   (0x0003) MISSED
    float                                              HairGravity;                                                // 0x39A0   (0x0004)
    bool                                               HairStabiliser;                                             // 0x39A4   (0x0001)
    unsigned char                                      UnknownData08_6[0x3];                                       // 0x39A5   (0x0003) MISSED
    float                                              SpringAlpha;                                                // 0x39A8   (0x0004)
    bool                                               ForceDOFEnable;                                             // 0x39AC   (0x0001)
    bool                                               ConvertFaceToJALI;                                          // 0x39AD   (0x0001)
    unsigned char                                      UnknownData09_6[0x2];                                       // 0x39AE   (0x0002) MISSED
    float                                              eyeUD;                                                      // 0x39B0   (0x0004)
    float                                              eyeRL;                                                      // 0x39B4   (0x0004)
    int32_t                                            JALIFacialIdleAnimIndex_;                                   // 0x39B8   (0x0004)
    bool                                               UseNewJaliFace;                                             // 0x39BC   (0x0001)
    TEnumAsByte<TargetLocalVector>                     HairWindRootTarget;                                         // 0x39BD   (0x0001)
    unsigned char                                      UnknownData10_6[0x2];                                       // 0x39BE   (0x0002) MISSED
    FVector                                            HairWindVector;                                             // 0x39C0   (0x000C)
    bool                                               is2ndWeaponHide;                                            // 0x39CC   (0x0001)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.CinematicFunctions
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void> CinematicFunctions = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.UserConstructionScript
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void> UserConstructionScript = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.InpActEvt_PageUp_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FKey> InpActEvt_PageUp_K2Node_InputKeyEvent = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.InpActEvt_Z_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FKey> InpActEvt_Z_K2Node_InputKeyEvent = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.InpActEvt_X_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FKey> InpActEvt_X_K2Node_InputKeyEvent = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.InpActEvt_Insert_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FKey> InpActEvt_Insert_K2Node_InputKeyEvent = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FKey> InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.InpActEvt_Home_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FKey> InpActEvt_Home_K2Node_InputKeyEvent = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.OnNotifyEnd_2DDBEC07478BBF4D34F87CB572FFB720
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FName> OnNotifyEnd_2DDBEC07478BBF4D34F87CB572FFB720 = { 0x2bc7620, 8 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.OnNotifyBegin_2DDBEC07478BBF4D34F87CB572FFB720
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FName> OnNotifyBegin_2DDBEC07478BBF4D34F87CB572FFB720 = { 0x2bc7620, 9 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.OnInterrupted_2DDBEC07478BBF4D34F87CB572FFB720
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FName> OnInterrupted_2DDBEC07478BBF4D34F87CB572FFB720 = { 0x2bc7620, 10 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.OnBlendOut_2DDBEC07478BBF4D34F87CB572FFB720
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FName> OnBlendOut_2DDBEC07478BBF4D34F87CB572FFB720 = { 0x2bc7620, 11 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.OnCompleted_2DDBEC07478BBF4D34F87CB572FFB720
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FName> OnCompleted_2DDBEC07478BBF4D34F87CB572FFB720 = { 0x2bc7620, 12 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.ReceiveDestroyed
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void> ReceiveDestroyed = { 0x2bc7620, 13 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const float> ReceiveTick = { 0x2bc7620, 14 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.ApplyMeshInfo
    // [0] PinActor : const USBSkeletalMeshComponent*
    // [1] inMeshInfoSlot : const TEnumAsByte<ESBSkelMeshSlot>
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const USBSkeletalMeshComponent*, const TEnumAsByte<ESBSkelMeshSlot>> ApplyMeshInfo = { 0x2bc7620, 15 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.ReceivePossessed
    // [0] NewController : const AController*
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const AController*> ReceivePossessed = { 0x2bc7620, 16 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.EventImmidateTickForEditor
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void> EventImmidateTickForEditor = { 0x2bc7620, 17 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.AddBlood
    // [0] Blood : const float
    // [1] Dirt : const float
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const float, const float> AddBlood = { 0x2bc7620, 18 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.WeaponGravity
    // [0] NewParam : const FVector
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const FVector> WeaponGravity = { 0x2bc7620, 19 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.PlayWingAnim
    // [0] Anim : const UAnimMontage*
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const UAnimMontage*> PlayWingAnim = { 0x2bc7620, 20 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.ToggleHairDecalReceive
    // [0] ReceiveDecal : const bool
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const bool> ToggleHairDecalReceive = { 0x2bc7620, 21 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Sequncer_BP.CH_P_EVE_01_Sequncer_BP_C.ExecuteUbergraph_CH_P_EVE_01_Sequncer_BP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ACH_P_EVE_01_Sequncer_BP_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_01_Sequncer_BP = { 0x2bc7620, 22 };
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Templates/Water/BP_FluxSurface_Water.BP_FluxSurface_Water_C
/// Size: 0x0580 (1408 bytes) (0x000580 - 0x000580) align 16 MaxSize: 0x0580
class ABP_FluxSurface_Water_C : public ABP_FluxSurface_C
{ 
public:
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Surface/Templates/Ocean/BP_FluxSurface_Ocean.BP_FluxSurface_Ocean_C
/// Size: 0x0580 (1408 bytes) (0x000580 - 0x000580) align 16 MaxSize: 0x0580
class ABP_FluxSurface_Ocean_C : public ABP_FluxSurface_C
{ 
public:
};

/// Class /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C
/// Size: 0x0544 (1348 bytes) (0x0002C8 - 0x000544) align 8 MaxSize: 0x0544
class ABP_FluxSimulation_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class UStaticMeshComponent*                        DebugCage;                                                  // 0x02D0   (0x0008)
    class USceneComponent*                             Scene;                                                      // 0x02D8   (0x0008)
    class UMaterialBillboardComponent*                 MaterialBillboard;                                          // 0x02E0   (0x0008)
    class UStaticMeshComponent*                        HeightmapPreview;                                           // 0x02E8   (0x0008)
    class UBoxComponent*                               VolumeBox;                                                  // 0x02F0   (0x0008)
    class USceneCaptureComponent2D*                    CaptureHeightMap;                                           // 0x02F8   (0x0008)
    float                                              HeightmapReoslutionScale;                                   // 0x0300   (0x0004)
    float                                              CaptureDelay;                                               // 0x0304   (0x0004)
    TArray<class AActor*>                              HiddenActors;                                               // 0x0308   (0x0010)
    TArray<class UClass*>                              HiddenClass;                                                // 0x0318   (0x0010)
    TArray<class AActor*>                              ShowOnlyActors;                                             // 0x0328   (0x0010)
    TArray<class UClass*>                              ShowOnlyClass;                                              // 0x0338   (0x0010)
    ESceneCapturePrimitiveRenderMode                   PrimitiveRender;                                            // 0x0348   (0x0001)
    bool                                               DebugPreview;                                               // 0x0349   (0x0001)
    bool                                               DebugHiddenInGame;                                          // 0x034A   (0x0001)
    unsigned char                                      UnknownData00_6[0x5];                                       // 0x034B   (0x0005) MISSED
    class UChildActorComponent*                        Editor;                                                     // 0x0350   (0x0008)
    class UPDA_FluxSimulationState_C*                  InitialState;                                               // 0x0358   (0x0008)
    class UPDA_FluxSimulationState_C*                  CurrentState;                                               // 0x0360   (0x0008)
    float                                              Iterate_Preview_Seconds;                                    // 0x0368   (0x0004)
    float                                              Iterate_Preview_Delays;                                     // 0x036C   (0x0004)
    bool                                               UpdateSimulation;                                           // 0x0370   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x0371   (0x0003) MISSED
    int32_t                                            IterationsPerSecond;                                        // 0x0374   (0x0004)
    int32_t                                            IterationsPerFrameMax;                                      // 0x0378   (0x0004)
    int32_t                                            IterationsRememberedMax;                                    // 0x037C   (0x0004)
    float                                              SimulationDeltaTime;                                        // 0x0380   (0x0004)
    bool                                               HeightWetFloatPrecision;                                    // 0x0384   (0x0001)
    bool                                               IntegrationFloatPrecision;                                  // 0x0385   (0x0001)
    unsigned char                                      UnknownData02_6[0x2];                                       // 0x0386   (0x0002) MISSED
    FIntPoint                                          AreaResolution;                                             // 0x0388   (0x0008)
    FVector2D                                          AreaWorldSize;                                              // 0x0390   (0x0008)
    FVector2D                                          AreaWorldSize_m_;                                           // 0x0398   (0x0008)
    FLinearColor                                       WorldToSimulationUV;                                        // 0x03A0   (0x0010)
    float                                              AreaWorldPixelSize;                                         // 0x03B0   (0x0004)
    float                                              AreaWorldHeight;                                            // 0x03B4   (0x0004)
    float                                              ModifiersVelocityScale;                                     // 0x03B8   (0x0004)
    float                                              Gravity;                                                    // 0x03BC   (0x0004)
    float                                              Damping;                                                    // 0x03C0   (0x0004)
    float                                              Friction;                                                   // 0x03C4   (0x0004)
    float                                              FoamFadeSpeed;                                              // 0x03C8   (0x0004)
    float                                              FoamShallowDepth;                                           // 0x03CC   (0x0004)
    float                                              FoamShallowGenerate;                                        // 0x03D0   (0x0004)
    float                                              FoamWaveGenerate;                                           // 0x03D4   (0x0004)
    float                                              WetmapDryingSpeed;                                          // 0x03D8   (0x0004)
    float                                              WetmapDryingDelay;                                          // 0x03DC   (0x0004)
    float                                              SlopeScale;                                                 // 0x03E0   (0x0004)
    float                                              SlopeClamp;                                                 // 0x03E4   (0x0004)
    float                                              VelocityClamp;                                              // 0x03E8   (0x0004)
    unsigned char                                      UnknownData03_6[0x4];                                       // 0x03EC   (0x0004) MISSED
    class UTextureRenderTarget2D*                      IntegrateHeightTarget;                                      // 0x03F0   (0x0008)
    class UTextureRenderTarget2D*                      IntegrateVelocityTarget;                                    // 0x03F8   (0x0008)
    class UTextureRenderTarget2D*                      NormalHeightPing;                                           // 0x0400   (0x0008)
    class UTextureRenderTarget2D*                      NormalHeightPong;                                           // 0x0408   (0x0008)
    class UMaterialInterface*                          IntegrateHeight;                                            // 0x0410   (0x0008)
    class UMaterialInterface*                          IntegrateVelocity;                                          // 0x0418   (0x0008)
    class UMaterialInterface*                          WaterNormalHeight;                                          // 0x0420   (0x0008)
    TArray<class AActor*>                              ModifierActors;                                             // 0x0428   (0x0010)
    class UMaterialInstanceDynamic*                    IntegrateHeightInstance;                                    // 0x0438   (0x0008)
    class UMaterialInstanceDynamic*                    IntegrateVelocityInstance;                                  // 0x0440   (0x0008)
    class UMaterialInstanceDynamic*                    WaterNormalHeightInstance;                                  // 0x0448   (0x0008)
    TArray<class UMaterialInstanceDynamic*>            BasicInstances;                                             // 0x0450   (0x0010)
    bool                                               PingPong;                                                   // 0x0460   (0x0001)
    bool                                               CapHolesInGround;                                           // 0x0461   (0x0001)
    unsigned char                                      UnknownData04_6[0x2];                                       // 0x0462   (0x0002) MISSED
    int32_t                                            MaxTileSize_m_;                                             // 0x0464   (0x0004)
    class UTextureRenderTarget2D*                      HeightmapTexture;                                           // 0x0468   (0x0008)
    class UMaterialInstanceDynamic*                    HeightmapPreviewInstance;                                   // 0x0470   (0x0008)
    class UMaterialInstanceDynamic*                    LoadHeightInstance;                                         // 0x0478   (0x0008)
    class UMaterialInstanceDynamic*                    LoadVelocityInstance;                                       // 0x0480   (0x0008)
    class UMaterialInterface*                          HeightmapMaterial;                                          // 0x0488   (0x0008)
    class ABP_FluxSurface_C*                           PreviewSurfaceActor;                                        // 0x0490   (0x0008)
    class ABP_FluxSurface_C*                           RenderActor;                                                // 0x0498   (0x0008)
    class UChildActorComponent*                        PreviewSurface;                                             // 0x04A0   (0x0008)
    TEnumAsByte<BE_SimulationRendering>                SurfaceRenderMode;                                          // 0x04A8   (0x0001)
    unsigned char                                      UnknownData05_6[0x7];                                       // 0x04A9   (0x0007) MISSED
    class ABP_FluxSurface_C*                           SurfaceActorReference;                                      // 0x04B0   (0x0008)
    class UMaterialInstanceDynamic*                    ClearWetInstance;                                           // 0x04B8   (0x0008)
    float                                              CurrentAccumulatedFrame;                                    // 0x04C0   (0x0004)
    int32_t                                            CurrentPreviewFrame;                                        // 0x04C4   (0x0004)
    float                                              CurrentPreviewTime;                                         // 0x04C8   (0x0004)
    unsigned char                                      UnknownData06_6[0x4];                                       // 0x04CC   (0x0004) MISSED
    class ABP_FluxSurface_C*                           SurfaceActorRenderer;                                       // 0x04D0   (0x0008)
    bool                                               TreatAsIsEditorOnly;                                        // 0x04D8   (0x0001)
    unsigned char                                      UnknownData07_6[0x7];                                       // 0x04D9   (0x0007) MISSED
    class UMaterialInstanceDynamic*                    BoundsPreviewInstance;                                      // 0x04E0   (0x0008)
    class UMaterialInstanceDynamic*                    HeightmapUpdateInstance;                                    // 0x04E8   (0x0008)
    class UTextureRenderTarget2D*                      HeightmapUpdateTexture;                                     // 0x04F0   (0x0008)
    float                                              EvaporationDepth;                                           // 0x04F8   (0x0004)
    float                                              FluidTransportMax;                                          // 0x04FC   (0x0004)
    TWeakObjectPtr<class UStaticMesh*>                 DebugMesh;                                                  // 0x0500   (0x0008)
    unsigned char                                      UnknownData08_6[0x20];                                      // 0x0508   (0x0020) MISSED
    class UMaterialInstanceDynamic*                    HeightmapPostprocessInstance;                               // 0x0528   (0x0008)
    int32_t                                            IntergrateRenterStep;                                       // 0x0530   (0x0004)
    bool                                               ActiveSimulateFluid;                                        // 0x0534   (0x0001)
    unsigned char                                      UnknownData09_6[0x3];                                       // 0x0535   (0x0003) MISSED
    class UPDA_FluxSimulationState_C*                  DisableSimulationState;                                     // 0x0538   (0x0008)
    int32_t                                            IgnoreFluidFluxQualityFrameCount;                           // 0x0540   (0x0004)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.UpdateModifierMaterials
    // [0] Materials : const TArray<UMaterialInstanceDynamic*>&
    // [1] UseVelocityMap : const bool
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const TArray<UMaterialInstanceDynamic*>&, const bool> UpdateModifierMaterials = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.DebugMessages
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> DebugMessages = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.ApplyFoamParameters
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> ApplyFoamParameters = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitlializeDebug
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitlializeDebug = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeCurrentState
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeCurrentState = { 0x2bc7620, 4 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.IsEditorOnly
    // [0] EditorOnly : const bool&
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const bool&> IsEditorOnly = { 0x2bc7620, 5 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.Get Current Height Wet Texture
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, UTextureRenderTarget2D*> GetCurrentHeightWetTexture = { 0x2bc7620, 6 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.UpdateVisibleActors
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> UpdateVisibleActors = { 0x2bc7620, 7 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.DeltaTimeAccumulation
    // [0] DeltaTime : const float
    // [1] Iterations : const int32_t&
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const float, const int32_t&> DeltaTimeAccumulation = { 0x2bc7620, 8 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.PingPongCombine
    // [0] UpdatedRT : const UTextureRenderTarget2D*
    // [1] PreviousRT : const UTexture*
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const UTextureRenderTarget2D*, const UTexture*> PingPongCombine = { 0x2bc7620, 9 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.RestartSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> RestartSimulation = { 0x2bc7620, 10 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.BeginPlayDelayedSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> BeginPlayDelayedSimulation = { 0x2bc7620, 11 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.UpdateHeightWet
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> UpdateHeightWet = { 0x2bc7620, 12 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeRenderSurfaceData
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeRenderSurfaceData = { 0x2bc7620, 13 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.LoadBakedState
    // [0] State : const UPDA_FluxSimulationState_C*
    // [1] bClear : const bool
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const UPDA_FluxSimulationState_C*, const bool> LoadBakedState = { 0x2bc7620, 14 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.UpdateDrying
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> UpdateDrying = { 0x2bc7620, 15 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.UpdateGroundMap
    // [0] position : const FVector2D
    // [1] Size : const FVector2D
    // [2] debug : const bool
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const FVector2D, const FVector2D, const bool> UpdateGroundMap = { 0x2bc7620, 16 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.ResetRenderTargets
    // [0] bClear : const bool
    // [1] BakedState : const UPDA_FluxSimulationState_C*
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const bool, const UPDA_FluxSimulationState_C*> ResetRenderTargets = { 0x2bc7620, 17 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeMaterials
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeMaterials = { 0x2bc7620, 18 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeSimulationArea
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeSimulationArea = { 0x2bc7620, 19 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeRenderTargets
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeRenderTargets = { 0x2bc7620, 20 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.FindWorldModifiers
    // [0] MakeDirty : const bool
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const bool> FindWorldModifiers = { 0x2bc7620, 21 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.StopSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> StopSimulation = { 0x2bc7620, 22 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.StartSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> StartSimulation = { 0x2bc7620, 23 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeDrying
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeDrying = { 0x2bc7620, 24 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeEditor
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeEditor = { 0x2bc7620, 25 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.CaptureGroundHeightmap
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> CaptureGroundHeightmap = { 0x2bc7620, 26 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.UpdateTime
    // [0] RealDeltaTime : const float
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const float> UpdateTime = { 0x2bc7620, 27 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeEditorPreview
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeEditorPreview = { 0x2bc7620, 28 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.InitializeParameters
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> InitializeParameters = { 0x2bc7620, 29 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.UserConstructionScript
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> UserConstructionScript = { 0x2bc7620, 30 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.OnEditorIterateSimulation
    // [0] Iterations : const int32_t
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const int32_t> OnEditorIterateSimulation = { 0x2bc7620, 31 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.OnEditorShowSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> OnEditorShowSimulation = { 0x2bc7620, 32 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.Event BeginPlay Simulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> EventBeginPlaySimulation = { 0x2bc7620, 33 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.BndEvt__BP_FluxSimulation_VolumeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] SweepResult : const FHitResult&
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> BndEvt__BP_FluxSimulation_VolumeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature = { 0x2bc7620, 34 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.BndEvt__BP_FluxSimulation_VolumeBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t> BndEvt__BP_FluxSimulation_VolumeBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature = { 0x2bc7620, 35 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.ToggleUpdateSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> ToggleUpdateSimulation = { 0x2bc7620, 36 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.OnEditorModifierChanged
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> OnEditorModifierChanged = { 0x2bc7620, 37 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const float> ReceiveTick = { 0x2bc7620, 38 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> ReceiveBeginPlay = { 0x2bc7620, 39 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.OnEditorRestartSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> OnEditorRestartSimulation = { 0x2bc7620, 40 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.OnEditorStopSimulation
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void> OnEditorStopSimulation = { 0x2bc7620, 41 };
    // Function /Game/Art/BG/Actor/Blueprints/FluidFlux/Simulation/Blueprints/BP_FluxSimulation.BP_FluxSimulation_C.ExecuteUbergraph_BP_FluxSimulation
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ABP_FluxSimulation_C, void, const int32_t> ExecuteUbergraph_BP_FluxSimulation = { 0x2bc7620, 42 };
};

/// Class /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFXFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.MonsterWaterImpact
    // [0] HitPos : const FVector
    // [1] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const FVector, const UObject*> MonsterWaterImpact = { 0x2bc7620, 0 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.Slice FX
    // [0] Bone1 : const FName
    // [1] Bone2 : const FName
    // [2] Offset1 : const FVector
    // [3] Offset2 : const FVector
    // [4] Target : const USceneComponent*
    // [5] Size : const TEnumAsByte<SliceSize>
    // [6] IgnoreBoneScale : const bool
    // [7] CustomFXScale : const float
    // [8] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const FName, const FName, const FVector, const FVector, const USceneComponent*, const TEnumAsByte<SliceSize>, const bool, const float, const UObject*> SliceFX = { 0x2bc7620, 1 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.PlayFootStepSet
    // [0] PMatSet : const USBPMaterialParticleSet*
    // [1] Surface : const TEnumAsByte<EPhysicalSurface>
    // [2] Transform : const FTransform
    // [3] CastShadow : const bool
    // [4] DecalRot : const FRotator
    // [5] Owner : const AActor*
    // [6] DisableParticle : const bool
    // [7] DisableDecal : const bool
    // [8] DisableSound : const bool
    // [9] TargetObjType : const TEnumAsByte<ECollisionChannel>
    // [10] TargetComp : const UPrimitiveComponent*
    // [11] FootStepPos : const FVector
    // [12] Volume : const float
    // [13] debug : const bool
    // [14] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const USBPMaterialParticleSet*, const TEnumAsByte<EPhysicalSurface>, const FTransform, const bool, const FRotator, const AActor*, const bool, const bool, const bool, const TEnumAsByte<ECollisionChannel>, const UPrimitiveComponent*, const FVector, const float, const bool, const UObject*> PlayFootStepSet = { 0x2bc7620, 2 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.Phy Obj Collision
    // [0] OtherComp : const UPrimitiveComponent*
    // [1] HitLocation : const FVector
    // [2] ImpactThreshold : const float
    // [3] ImpactFX : const UNiagaraSystem*
    // [4] ImpactSound : const USoundCue*
    // [5] HapticSound : const USoundCue*
    // [6] ImpactNormal : const FVector
    // [7] Owner : const AActor*
    // [8] isEnable : const bool
    // [9] isWake : const bool
    // [10] Phys Mat : const UPhysicalMaterial*
    // [11] VibrationComponent : const USBVibrationComponent*
    // [12] Special : const bool
    // [13] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const UPrimitiveComponent*, const FVector, const float, const UNiagaraSystem*, const USoundCue*, const USoundCue*, const FVector, const AActor*, const bool, const bool, const UPhysicalMaterial*, const USBVibrationComponent*, const bool, const UObject*> PhyObjCollision = { 0x2bc7620, 3 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.PlayPMaterialSet
    // [0] PMatSet : const USBPMaterialParticleSet*
    // [1] Surface : const TEnumAsByte<EPhysicalSurface>
    // [2] Transform : const FTransform
    // [3] CastShadow : const bool
    // [4] DecalRot : const FRotator
    // [5] Owner : const AActor*
    // [6] DisableParticle : const bool
    // [7] DisableDecal : const bool
    // [8] DisableSound : const bool
    // [9] TargetObjType : const TEnumAsByte<ECollisionChannel>
    // [10] TargetComp : const UPrimitiveComponent*
    // [11] TargetActor : const AActor*
    // [12] __WorldContext : const UObject*
    // [13] isDynamicObjHit : const bool&
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const USBPMaterialParticleSet*, const TEnumAsByte<EPhysicalSurface>, const FTransform, const bool, const FRotator, const AActor*, const bool, const bool, const bool, const TEnumAsByte<ECollisionChannel>, const UPrimitiveComponent*, const AActor*, const UObject*, const bool&> PlayPMaterialSet = { 0x2bc7620, 4 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.PlayParticle,Sound
    // [0] particle : const UNiagaraSystem*
    // [1] Sound : const USoundCue*
    // [2] Owner : const AActor*
    // [3] Transform : const FTransform
    // [4] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const UNiagaraSystem*, const USoundCue*, const AActor*, const FTransform, const UObject*> PlayParticle_Sound = { 0x2bc7620, 5 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.Physic Impact
    // [0] NormalImpulse : const FVector
    // [1] ImpactThreshold : const float
    // [2] ImpactFX : const UNiagaraSystem*
    // [3] ImpactSound : const USoundCue*
    // [4] HapticSound : const USoundCue*
    // [5] Owner : const AActor*
    // [6] ImpactLocation : const FVector
    // [7] VibrationComponent : const USBVibrationComponent*
    // [8] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const FVector, const float, const UNiagaraSystem*, const USoundCue*, const USoundCue*, const AActor*, const FVector, const USBVibrationComponent*, const UObject*> PhysicImpact = { 0x2bc7620, 6 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.VehicleHit
    // [0] HitLocation : const FVector
    // [1] HitDirection : const FVector
    // [2] Impulse : const float
    // [3] TargetMesh : const UStaticMeshComponent*
    // [4] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const FVector, const FVector, const float, const UStaticMeshComponent*, const UObject*> VehicleHit = { 0x2bc7620, 7 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.ChunkCollisionChannelSet
    // [0] SBDestructible : const USBDestructibleComponent*
    // [1] isBlockOnPawn : const bool
    // [2] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const USBDestructibleComponent*, const bool, const UObject*> ChunkCollisionChannelSet = { 0x2bc7620, 8 };
    // Function /Game/Art/FX/BP/FXFunctionLibrary.FXFunctionLibrary_C.SetSBDestructible
    // [0] SBDestructible : const USBDestructibleComponent*
    // [1] UseHardSleeping : const bool
    // [2] CollisionType : const TEnumAsByte<ECollisionChannel>
    // [3] DissolveFadeBeginTime : const float
    // [4] DissolveFadeDuration : const float
    // [5] DissolveParameter : const FName
    // [6] DestroyAfterDissolve : const bool
    // [7] ChunkAttachedParticle : const UNiagaraSystem*
    // [8] ChunkAttachedParticleDestroyTime : const float
    // [9] ComponentTag : const TArray<FName>&
    // [10] DestructibleMesh : const UDestructibleMesh*
    // [11] Materials : const TArray<UMaterialInterface*>&
    // [12] EnableCollisionWhenDestroy : const bool
    // [13] __WorldContext : const UObject*
    constexpr static const FunctionPointer<UFXFunctionLibrary_C, void, const USBDestructibleComponent*, const bool, const TEnumAsByte<ECollisionChannel>, const float, const float, const FName, const bool, const UNiagaraSystem*, const float, const TArray<FName>&, const UDestructibleMesh*, const TArray<UMaterialInterface*>&, const bool, const UObject*> SetSBDestructible = { 0x2bc7620, 9 };
};

/// Class /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C
/// Size: 0x38E4 (14564 bytes) (0x003880 - 0x0038E4) align 16 MaxSize: 0x38E4
class ACH_NPC_TachyNPC_Blueprint_C : public ASBCharacter
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x3880   (0x0008)
    class UBP_FluxDataComponent_C*                     BP_FluxDataComponent;                                       // 0x3888   (0x0008)
    class UBP_FluxModifierForceComponent_C*            BP_FluxModifierForceComponent;                              // 0x3890   (0x0008)
    class UBP_FluxInteractionComponent_C*              BP_FluxInteractionComponent;                                // 0x3898   (0x0008)
    class USBSkeletalMeshComponent*                    Mesh_Face;                                                  // 0x38A0   (0x0008)
    class UCapsuleComponent*                           BodyCollision;                                              // 0x38A8   (0x0008)
    class USceneComponent*                             SBEnvOrigin;                                                // 0x38B0   (0x0008)
    bool                                               VisibilityWeapon;                                           // 0x38B8   (0x0001)
    unsigned char                                      UnknownData00_6[0x7];                                       // 0x38B9   (0x0007) MISSED
    class USBSkeletalMeshComponent*                    weapon;                                                     // 0x38C0   (0x0008)
    FMulticastInlineDelegate                           Interact;                                                   // 0x38C8   (0x0010)
    bool                                               ConvertToDamagedBody;                                       // 0x38D8   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x38D9   (0x0003) MISSED
    int32_t                                            JALIFacialIdleAnimIndex_;                                   // 0x38DC   (0x0004)
    float                                              PhysicsBlendWeight;                                         // 0x38E0   (0x0004)

    /// Functions
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.AddModifiers
    // [0] Modifiers : const TArray<UBP_FluxModifierComponent_C*>&
    // [1] Remove : const bool&
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void, const TArray<UBP_FluxModifierComponent_C*>&, const bool&> AddModifiers = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.GetInteractions
    // [0] Ratio : const float
    // [1] Iteration : const int32_t
    // [2] Interactions : const TArray<FBS_FluxInteractionData>&
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void, const float, const int32_t, const TArray<FBS_FluxInteractionData>&> GetInteractions = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.CanRenderInteractions
    // [0] CanRender : const bool&
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void, const bool&> CanRenderInteractions = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.GetSimulationState
    // [0] State : const UPDA_FluxSimulationState_C*&
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void, const UPDA_FluxSimulationState_C*&> GetSimulationState = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.UserConstructionScript
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void> UserConstructionScript = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void, const float> ReceiveTick = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.NotifyBP_InitActor
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void> NotifyBP_InitActor = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.NotifyShowEvent
    // [0] EventTagName : const FName
    // [1] CustomNameValue : const FName
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void, const FName, const FName> NotifyShowEvent = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.ExecuteUbergraph_CH_NPC_TachyNPC_Blueprint
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void, const int32_t> ExecuteUbergraph_CH_NPC_TachyNPC_Blueprint = { 0x2bc7620, 8 };
    // Function /Game/Art/Character/NPC/CH_NPC_TachyNPC/Blueprints/CH_NPC_TachyNPC_Blueprint.CH_NPC_TachyNPC_Blueprint_C.Interact__DelegateSignature
    constexpr static const FunctionPointer<ACH_NPC_TachyNPC_Blueprint_C, void> Interact__DelegateSignature = { 0x2bc7620, 9 };
};

/// Class /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C
/// Size: 0x3B91 (15249 bytes) (0x003880 - 0x003B91) align 16 MaxSize: 0x3B91
class ACH_P_EVE_01_Blueprint_C : public ASBCharacter
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x3880   (0x0008)
    class UAudioComponent*                             AMB_FusionMode;                                             // 0x3888   (0x0008)
    class UAudioComponent*                             BGM_FusionMode;                                             // 0x3890   (0x0008)
    class USBSkeletalMeshComponent*                    SBPonytailShort;                                            // 0x3898   (0x0008)
    class UAudioComponent*                             AMB_TachyMode;                                              // 0x38A0   (0x0008)
    class UAudioComponent*                             BGM_TachyMode;                                              // 0x38A8   (0x0008)
    class USBVibrationComponent*                       TachyModeVBComp;                                            // 0x38B0   (0x0008)
    class USBVibrationComponent*                       RainHaptic;                                                 // 0x38B8   (0x0008)
    class USBSkeletalMeshComponent*                    SBAccSlot3;                                                 // 0x38C0   (0x0008)
    class UArrowComponent*                             WindOriginArrow;                                            // 0x38C8   (0x0008)
    class USBSkeletalMeshComponent*                    SBAccSlot1;                                                 // 0x38D0   (0x0008)
    class UBP_FluxModifierForceComponent_C*            BP_FluxModifierForceComponent;                              // 0x38D8   (0x0008)
    class UBP_FluxDataComponent_C*                     BP_FluxDataComponent;                                       // 0x38E0   (0x0008)
    class UBP_FluxInteractionComponent_C*              BP_FluxInteractionComponent;                                // 0x38E8   (0x0008)
    class UBoxComponent*                               WeaponPhysicsCollision;                                     // 0x38F0   (0x0008)
    class UStaticMeshComponent*                        AssistanceSlot;                                             // 0x38F8   (0x0008)
    class UCapsuleComponent*                           BodyCollision;                                              // 0x3900   (0x0008)
    class USBSkeletalMeshComponent*                    SBPonytail;                                                 // 0x3908   (0x0008)
    class USBSkeletalMeshComponent*                    Mesh_Face;                                                  // 0x3910   (0x0008)
    class USBSkeletalMeshComponent*                    SBHair;                                                     // 0x3918   (0x0008)
    class UBoxComponent*                               CameraOverlap;                                              // 0x3920   (0x0008)
    class USkeletalMeshComponent*                      ACC_HairPin;                                                // 0x3928   (0x0008)
    class USBSceneCaptureComponent2D*                  SBSceneCaptureComponent2D;                                  // 0x3930   (0x0008)
    float                                              CharacterVelocity;                                          // 0x3938   (0x0004)
    bool                                               ShootRayToVisibility;                                       // 0x393C   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x393D   (0x0003) MISSED
    class ABP_Dron_C*                                  Dron;                                                       // 0x3940   (0x0008)
    bool                                               isFlashLight;                                               // 0x3948   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x3949   (0x0007) MISSED
    class UStaticMeshComponent*                        WaterPlane;                                                 // 0x3950   (0x0008)
    class UBoxComponent*                               OverlappingWaterBody;                                       // 0x3958   (0x0008)
    class UBoxComponent*                               OverlappingGravityBox;                                      // 0x3960   (0x0008)
    bool                                               isIKOff;                                                    // 0x3968   (0x0001)
    unsigned char                                      UnknownData02_6[0x3];                                       // 0x3969   (0x0003) MISSED
    float                                              FOV;                                                        // 0x396C   (0x0004)
    int32_t                                            headType;                                                   // 0x3970   (0x0004)
    float                                              LegRSocketVel;                                              // 0x3974   (0x0004)
    FVector                                            LegRSocketLastLoc;                                          // 0x3978   (0x000C)
    float                                              WaterDepth;                                                 // 0x3984   (0x0004)
    float                                              LegLSocketVel;                                              // 0x3988   (0x0004)
    FVector                                            LegLSocketLastLoc;                                          // 0x398C   (0x000C)
    float                                              PlayPosition;                                               // 0x3998   (0x0004)
    FName                                              EventTagName;                                               // 0x399C   (0x0008)
    float                                              PlayRate;                                                   // 0x39A4   (0x0004)
    bool                                               isDronHide;                                                 // 0x39A8   (0x0001)
    bool                                               StopPhysicsForSequencer;                                    // 0x39A9   (0x0001)
    unsigned char                                      UnknownData03_6[0x2];                                       // 0x39AA   (0x0002) MISSED
    float                                              PhysicsStabilize;                                           // 0x39AC   (0x0004)
    bool                                               Swim;                                                       // 0x39B0   (0x0001)
    bool                                               edt_ShowHolder;                                             // 0x39B1   (0x0001)
    bool                                               AttachLeft;                                                 // 0x39B2   (0x0001)
    bool                                               isWeaponHide;                                               // 0x39B3   (0x0001)
    bool                                               is2ndWeaponHide;                                            // 0x39B4   (0x0001)
    bool                                               isPrevWeaponHide;                                           // 0x39B5   (0x0001)
    bool                                               StopFootStepSound;                                          // 0x39B6   (0x0001)
    bool                                               BurstFootStepParticleL;                                     // 0x39B7   (0x0001)
    bool                                               BurstFootStepParticleR;                                     // 0x39B8   (0x0001)
    bool                                               EvntBattle;                                                 // 0x39B9   (0x0001)
    unsigned char                                      UnknownData04_6[0x6];                                       // 0x39BA   (0x0006) MISSED
    TArray<FName>                                      HairBonesCentre;                                            // 0x39C0   (0x0010)
    TArray<FName>                                      HairBonesRight;                                             // 0x39D0   (0x0010)
    TArray<FName>                                      HairBonesLeft;                                              // 0x39E0   (0x0010)
    float                                              HairMassKgMultiplier;                                       // 0x39F0   (0x0004)
    float                                              eyeRL;                                                      // 0x39F4   (0x0004)
    float                                              eyeUD;                                                      // 0x39F8   (0x0004)
    bool                                               isHairSpray;                                                // 0x39FC   (0x0001)
    unsigned char                                      UnknownData05_6[0x3];                                       // 0x39FD   (0x0003) MISSED
    float                                              HairSprayPower;                                             // 0x3A00   (0x0004)
    float                                              HairSprayRotation;                                          // 0x3A04   (0x0004)
    class AWindDirectionalSource*                      HairSprayComp;                                              // 0x3A08   (0x0008)
    class USBPMaterialParticleSet*                     PPS_Footstep_auto;                                          // 0x3A10   (0x0008)
    bool                                               ClothCreaseVal;                                             // 0x3A18   (0x0001)
    unsigned char                                      UnknownData06_6[0x3];                                       // 0x3A19   (0x0003) MISSED
    FVector                                            In_Vector;                                                  // 0x3A1C   (0x000C)
    bool                                               CIN_isConstraintOff;                                        // 0x3A28   (0x0001)
    bool                                               GravityController;                                          // 0x3A29   (0x0001)
    unsigned char                                      UnknownData07_6[0x2];                                       // 0x3A2A   (0x0002) MISSED
    float                                              HairGravity;                                                // 0x3A2C   (0x0004)
    bool                                               HairStabiliser;                                             // 0x3A30   (0x0001)
    unsigned char                                      UnknownData08_6[0x3];                                       // 0x3A31   (0x0003) MISSED
    float                                              SpringAlpha;                                                // 0x3A34   (0x0004)
    bool                                               TPSMode;                                                    // 0x3A38   (0x0001)
    unsigned char                                      UnknownData09_6[0x3];                                       // 0x3A39   (0x0003) MISSED
    float                                              WeaponScale;                                                // 0x3A3C   (0x0004)
    bool                                               RadialForceSwitch;                                          // 0x3A40   (0x0001)
    unsigned char                                      UnknownData10_6[0x7];                                       // 0x3A41   (0x0007) MISSED
    class USBSkeletalMeshComponent*                    WeaponComponent;                                            // 0x3A48   (0x0008)
    float                                              RadialForceRadius;                                          // 0x3A50   (0x0004)
    float                                              RadialForceStrength;                                        // 0x3A54   (0x0004)
    FVector                                            RadialForceLocation;                                        // 0x3A58   (0x000C)
    bool                                               WindTriggerVolumeEntered;                                   // 0x3A64   (0x0001)
    bool                                               isCampActivated;                                            // 0x3A65   (0x0001)
    unsigned char                                      UnknownData11_6[0x2];                                       // 0x3A66   (0x0002) MISSED
    float                                              DirtValue;                                                  // 0x3A68   (0x0004)
    float                                              BloodValue;                                                 // 0x3A6C   (0x0004)
    bool                                               FootstepDebug;                                              // 0x3A70   (0x0001)
    bool                                               Constraint;                                                 // 0x3A71   (0x0001)
    bool                                               ForceDOFEnable;                                             // 0x3A72   (0x0001)
    unsigned char                                      UnknownData12_6[0x5];                                       // 0x3A73   (0x0005) MISSED
    TArray<class UMaterialInterface*>                  WeaponMaterials;                                            // 0x3A78   (0x0010)
    class USkeletalMesh*                               preSkeletalMesh;                                            // 0x3A88   (0x0008)
    TArray<class UMaterialInterface*>                  preMaterials;                                               // 0x3A90   (0x0010)
    class USBSkeletalMeshComponent*                    FishingRod;                                                 // 0x3AA0   (0x0008)
    bool                                               FishingRodLeftOn;                                           // 0x3AA8   (0x0001)
    bool                                               TachyWingNoSpring;                                          // 0x3AA9   (0x0001)
    bool                                               ConvertFaceToJALI;                                          // 0x3AAA   (0x0001)
    unsigned char                                      UnknownData13_6[0x5];                                       // 0x3AAB   (0x0005) MISSED
    class USoundBase*                                  TachyModeBGM;                                               // 0x3AB0   (0x0008)
    class USoundBase*                                  TachyModeAMB;                                               // 0x3AB8   (0x0008)
    float                                              TachyWingNoSpringBlendTime;                                 // 0x3AC0   (0x0004)
    unsigned char                                      UnknownData14_6[0x4];                                       // 0x3AC4   (0x0004) MISSED
    FMulticastInlineDelegate                           Interact;                                                   // 0x3AC8   (0x0010)
    int32_t                                            JALIFacialIdleAnimIndex_;                                   // 0x3AD8   (0x0004)
    bool                                               IsInsideRainVol;                                            // 0x3ADC   (0x0001)
    unsigned char                                      UnknownData15_6[0x3];                                       // 0x3ADD   (0x0003) MISSED
    class UNiagaraComponent*                           BodyRainSplashFX;                                           // 0x3AE0   (0x0008)
    float                                              SwordTemp;                                                  // 0x3AE8   (0x0004)
    unsigned char                                      UnknownData16_6[0x4];                                       // 0x3AEC   (0x0004) MISSED
    class ABP_FluxSurface_Ocean_C*                     BP_FluxSurface_Ocean;                                       // 0x3AF0   (0x0008)
    TArray<FTextureParameterValue>                     Texture_Parameter_Values;                                   // 0x3AF8   (0x0010)
    class ABP_FluxOceanWave_C*                         BP_FluxOcean_Wave;                                          // 0x3B08   (0x0008)
    class ABP_FluxSimulation_C*                        BP_FluxSimulation;                                          // 0x3B10   (0x0008)
    float                                              WaveHeight;                                                 // 0x3B18   (0x0004)
    float                                              FormHeight;                                                 // 0x3B1C   (0x0004)
    float                                              FluxHeight;                                                 // 0x3B20   (0x0004)
    bool                                               isAttachLevelSeq;                                           // 0x3B24   (0x0001)
    bool                                               UseNewJaliFace;                                             // 0x3B25   (0x0001)
    unsigned char                                      UnknownData17_6[0x2];                                       // 0x3B26   (0x0002) MISSED
    class UAudioComponent*                             TachyModeMusic;                                             // 0x3B28   (0x0008)
    bool                                               tachyModeSound;                                             // 0x3B30   (0x0001)
    TEnumAsByte<TargetLocalVector>                     HairWindRootTarget;                                         // 0x3B31   (0x0001)
    unsigned char                                      UnknownData18_6[0x2];                                       // 0x3B32   (0x0002) MISSED
    FVector                                            HairWindVector;                                             // 0x3B34   (0x000C)
    bool                                               bUseHipSpring;                                              // 0x3B40   (0x0001)
    bool                                               bUseThighSpring;                                            // 0x3B41   (0x0001)
    bool                                               isWingHide;                                                 // 0x3B42   (0x0001)
    unsigned char                                      UnknownData19_6[0x1];                                       // 0x3B43   (0x0001) MISSED
    FName                                              SkeletalMeshName;                                           // 0x3B44   (0x0008)
    FName                                              EventCustomNameValue;                                       // 0x3B4C   (0x0008)
    unsigned char                                      UnknownData20_6[0x4];                                       // 0x3B54   (0x0004) MISSED
    class UNiagaraComponent*                           UnderWaterSwimFX;                                           // 0x3B58   (0x0008)
    class UNiagaraComponent*                           UnderWaterSwimMouthFX;                                      // 0x3B60   (0x0008)
    bool                                               IsnearOceanSurface;                                         // 0x3B68   (0x0001)
    bool                                               IsCurrentlyHairSpraying;                                    // 0x3B69   (0x0001)
    unsigned char                                      UnknownData21_6[0x6];                                       // 0x3B6A   (0x0006) MISSED
    class USkeletalMesh*                               TachyModeSkeletalMesh;                                      // 0x3B70   (0x0008)
    class USkeletalMesh*                               TachyFusionModeSkeletalMesh;                                // 0x3B78   (0x0008)
    bool                                               isFusionTachyMode;                                          // 0x3B80   (0x0001)
    unsigned char                                      UnknownData22_6[0x7];                                       // 0x3B81   (0x0007) MISSED
    class USkeletalMesh*                               TachyFusionNoAccSkeletalMesh;                               // 0x3B88   (0x0008)
    bool                                               PreHideHairMesh;                                            // 0x3B90   (0x0001)

    /// Functions
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.AddModifiers
    // [0] Modifiers : const TArray<UBP_FluxModifierComponent_C*>&
    // [1] Remove : const bool&
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const TArray<UBP_FluxModifierComponent_C*>&, const bool&> AddModifiers = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.GetInteractions
    // [0] Ratio : const float
    // [1] Iteration : const int32_t
    // [2] Interactions : const TArray<FBS_FluxInteractionData>&
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const float, const int32_t, const TArray<FBS_FluxInteractionData>&> GetInteractions = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.FluidFluxHeightInitialize
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> FluidFluxHeightInitialize = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.FluidFluxHeightEvent
    // [0] DeltaSecond : const float
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const float> FluidFluxHeightEvent = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.FluidFluxHeightConstruction
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> FluidFluxHeightConstruction = { 0x2bc7620, 4 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.JaliFaceNormal
    // [0] Enable : const bool
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const bool> JaliFaceNormal = { 0x2bc7620, 5 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.getThighAngles
    // [0] Enable : const bool
    // [1] RightValue : const float&
    // [2] leftValue : const float&
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const bool, const float&, const float&> getThighAngles = { 0x2bc7620, 6 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.AnimAO
    // [0] isJALI : const bool
    // [1] animAOValue : const float&
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const bool, const float&> AnimAO = { 0x2bc7620, 7 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.UserConstructionScript
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> UserConstructionScript = { 0x2bc7620, 8 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.InpActEvt_Z_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FKey> InpActEvt_Z_K2Node_InputKeyEvent = { 0x2bc7620, 9 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.InpActEvt_Insert_K2Node_InputKeyEvent
    // [0] Key : const FKey
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FKey> InpActEvt_Insert_K2Node_InputKeyEvent = { 0x2bc7620, 10 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.OnNotifyEnd_B0D12BE24661E8CE0FC496A1F5737A2A
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FName> OnNotifyEnd_B0D12BE24661E8CE0FC496A1F5737A2A = { 0x2bc7620, 11 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.OnNotifyBegin_B0D12BE24661E8CE0FC496A1F5737A2A
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FName> OnNotifyBegin_B0D12BE24661E8CE0FC496A1F5737A2A = { 0x2bc7620, 12 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.OnInterrupted_B0D12BE24661E8CE0FC496A1F5737A2A
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FName> OnInterrupted_B0D12BE24661E8CE0FC496A1F5737A2A = { 0x2bc7620, 13 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.OnBlendOut_B0D12BE24661E8CE0FC496A1F5737A2A
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FName> OnBlendOut_B0D12BE24661E8CE0FC496A1F5737A2A = { 0x2bc7620, 14 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.OnCompleted_B0D12BE24661E8CE0FC496A1F5737A2A
    // [0] NotifyName : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FName> OnCompleted_B0D12BE24661E8CE0FC496A1F5737A2A = { 0x2bc7620, 15 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const float> ReceiveTick = { 0x2bc7620, 16 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> ReceiveBeginPlay = { 0x2bc7620, 17 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.CheckWaterInteract
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> CheckWaterInteract = { 0x2bc7620, 18 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.CheckWaterDepth
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> CheckWaterDepth = { 0x2bc7620, 19 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.NotifyShowEvent
    // [0] EventTagName : const FName
    // [1] CustomNameValue : const FName
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FName, const FName> NotifyShowEvent = { 0x2bc7620, 20 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.ApplyMeshInfo
    // [0] PinActor : const USBSkeletalMeshComponent*
    // [1] inMeshInfoSlot : const TEnumAsByte<ESBSkelMeshSlot>
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const USBSkeletalMeshComponent*, const TEnumAsByte<ESBSkelMeshSlot>> ApplyMeshInfo = { 0x2bc7620, 21 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.Event_ChangeBattleState
    // [0] bIsBattle : const bool
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const bool> Event_ChangeBattleState = { 0x2bc7620, 22 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.FootStepR
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> FootStepR = { 0x2bc7620, 23 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.FootStepL
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> FootStepL = { 0x2bc7620, 24 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.FootStepR_Reset
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> FootStepR_Reset = { 0x2bc7620, 25 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.FootStepL_Reset
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> FootStepL_Reset = { 0x2bc7620, 26 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.ReceiveEndPlay
    // [0] EndPlayReason : const TEnumAsByte<EEndPlayReason>
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const TEnumAsByte<EEndPlayReason>> ReceiveEndPlay = { 0x2bc7620, 27 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.AddBlood
    // [0] Blood : const float
    // [1] Dirt : const float
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const float, const float> AddBlood = { 0x2bc7620, 28 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.DOF On/Off
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> DOFOn_Off = { 0x2bc7620, 29 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.NotifyBP_InitActor
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> NotifyBP_InitActor = { 0x2bc7620, 30 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.WeaponGravity
    // [0] NewParam : const FVector
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const FVector> WeaponGravity = { 0x2bc7620, 31 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.NotifyBP_ReInitActor
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> NotifyBP_ReInitActor = { 0x2bc7620, 32 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.EventChangedWorldLevel
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> EventChangedWorldLevel = { 0x2bc7620, 33 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.PlayWingAnim
    // [0] Anim : const UAnimMontage*
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const UAnimMontage*> PlayWingAnim = { 0x2bc7620, 34 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.NotifyBP_SetMesh
    // [0] inMeshSlot : const TEnumAsByte<ESBSkelMeshSlot>
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const TEnumAsByte<ESBSkelMeshSlot>> NotifyBP_SetMesh = { 0x2bc7620, 35 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.ToggleHairDecalReceive
    // [0] ReceiveDecal : const bool
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const bool> ToggleHairDecalReceive = { 0x2bc7620, 36 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.DebugEnv
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> DebugEnv = { 0x2bc7620, 37 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.CheckPhyMat
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> CheckPhyMat = { 0x2bc7620, 38 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.ExecuteUbergraph_CH_P_EVE_01_Blueprint
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void, const int32_t> ExecuteUbergraph_CH_P_EVE_01_Blueprint = { 0x2bc7620, 39 };
    // Function /Game/Art/Character/PC/CH_P_EVE_01/Blueprints/CH_P_EVE_01_Blueprint.CH_P_EVE_01_Blueprint_C.Interact__DelegateSignature
    constexpr static const FunctionPointer<ACH_P_EVE_01_Blueprint_C, void> Interact__DelegateSignature = { 0x2bc7620, 40 };
};

/// Class /Game/Art/Character/Weapon/Sword/CH_W_Sword_03/Blueprints/CH_W_Sword_03_AnimBP.CH_W_Sword_03_AnimBP_C
/// Size: 0x0754 (1876 bytes) (0x000520 - 0x000754) align 16 MaxSize: 0x0754
class UCH_W_Sword_03_AnimBP_C : public USBAnimInstance
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0520   (0x0008)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0528   (0x0030)
    FSBAnimNode_SequenceBlendedPlayer                  SBAnimGraphNode_SequenceBlendedPlayer;                      // 0x0558   (0x00A8)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x0600   (0x00C8)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x06C8   (0x0088)
    float                                              CustomAnimWeight;                                           // 0x0750   (0x0004)

    /// Functions
    // Function /Game/Art/Character/Weapon/Sword/CH_W_Sword_03/Blueprints/CH_W_Sword_03_AnimBP.CH_W_Sword_03_AnimBP_C.AnimGraph
    // [0] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_W_Sword_03_AnimBP_C, void, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/Weapon/Sword/CH_W_Sword_03/Blueprints/CH_W_Sword_03_AnimBP.CH_W_Sword_03_AnimBP_C.BlueprintUpdateAnimation
    // [0] DeltaTimeX : const float
    constexpr static const FunctionPointer<UCH_W_Sword_03_AnimBP_C, void, const float> BlueprintUpdateAnimation = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/Weapon/Sword/CH_W_Sword_03/Blueprints/CH_W_Sword_03_AnimBP.CH_W_Sword_03_AnimBP_C.ExecuteUbergraph_CH_W_Sword_03_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_W_Sword_03_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_W_Sword_03_AnimBP = { 0x2bc7620, 2 };
};

/// Class /Game/Art/Character/Weapon/Sword/CH_ACC_HairPin/Blueprints/CH_ACC_HairPin_AnimBP.CH_ACC_HairPin_AnimBP_C
/// Size: 0x0923 (2339 bytes) (0x000520 - 0x000923) align 16 MaxSize: 0x0923
class UCH_ACC_HairPin_AnimBP_C : public USBAnimInstance
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0520   (0x0008)
    FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0528   (0x0030)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0558   (0x0028)
    FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0580   (0x0028)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x05A8   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0630   (0x0030)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer1;                              // 0x0660   (0x0088)
    FAnimNode_StateResult                              AnimGraphNode_StateResult2;                                 // 0x06E8   (0x0030)
    FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0718   (0x00B0)
    FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x07C8   (0x00C8)
    FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer3;                              // 0x0890   (0x0088)
    FName                                              Swording;                                                   // 0x0918   (0x0008)
    bool                                               isDrawed;                                                   // 0x0920   (0x0001)
    bool                                               isSworded;                                                  // 0x0921   (0x0001)
    bool                                               isWeaponHide;                                               // 0x0922   (0x0001)

    /// Functions
    // Function /Game/Art/Character/Weapon/Sword/CH_ACC_HairPin/Blueprints/CH_ACC_HairPin_AnimBP.CH_ACC_HairPin_AnimBP_C.AnimGraph
    // [0] AnimGraph : const FPoseLink&
    constexpr static const FunctionPointer<UCH_ACC_HairPin_AnimBP_C, void, const FPoseLink&> AnimGraph = { 0x2bc7620, 0 };
    // Function /Game/Art/Character/Weapon/Sword/CH_ACC_HairPin/Blueprints/CH_ACC_HairPin_AnimBP.CH_ACC_HairPin_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_ACC_HairPin_AnimBP_AnimGraphNode_TransitionResult_BF84EC6C4B38D61A3E43E0AE5CC809DA
    constexpr static const FunctionPointer<UCH_ACC_HairPin_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_ACC_HairPin_AnimBP_AnimGraphNode_TransitionResult_BF84EC6C4B38D61A3E43E0AE5CC809DA = { 0x2bc7620, 1 };
    // Function /Game/Art/Character/Weapon/Sword/CH_ACC_HairPin/Blueprints/CH_ACC_HairPin_AnimBP.CH_ACC_HairPin_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_ACC_HairPin_AnimBP_AnimGraphNode_TransitionResult_7F51E4134F1CF470363362BC559347CB
    constexpr static const FunctionPointer<UCH_ACC_HairPin_AnimBP_C, void> EvaluateGraphExposedInputs_ExecuteUbergraph_CH_ACC_HairPin_AnimBP_AnimGraphNode_TransitionResult_7F51E4134F1CF470363362BC559347CB = { 0x2bc7620, 2 };
    // Function /Game/Art/Character/Weapon/Sword/CH_ACC_HairPin/Blueprints/CH_ACC_HairPin_AnimBP.CH_ACC_HairPin_AnimBP_C.BlueprintUpdateAnimation
    // [0] DeltaTimeX : const float
    constexpr static const FunctionPointer<UCH_ACC_HairPin_AnimBP_C, void, const float> BlueprintUpdateAnimation = { 0x2bc7620, 3 };
    // Function /Game/Art/Character/Weapon/Sword/CH_ACC_HairPin/Blueprints/CH_ACC_HairPin_AnimBP.CH_ACC_HairPin_AnimBP_C.ExecuteUbergraph_CH_ACC_HairPin_AnimBP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UCH_ACC_HairPin_AnimBP_C, void, const int32_t> ExecuteUbergraph_CH_ACC_HairPin_AnimBP = { 0x2bc7620, 4 };
};

/// Class /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherStaticMeshActor.DitherStaticMeshActor_C
/// Size: 0x030C (780 bytes) (0x0002D8 - 0x00030C) align 8 MaxSize: 0x030C
class ADitherStaticMeshActor_C : public AStaticMeshActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D8   (0x0008)
    class UBoxComponent*                               Box;                                                        // 0x02E0   (0x0008)
    class UDitherActorComponent_C*                     DitherActorComponent;                                       // 0x02E8   (0x0008)
    bool                                               DisableDither;                                              // 0x02F0   (0x0001)
    bool                                               DisableNearestDither;                                       // 0x02F1   (0x0001)
    bool                                               IsEnteringObject;                                           // 0x02F2   (0x0001)
    unsigned char                                      UnknownData00_6[0x1];                                       // 0x02F3   (0x0001) MISSED
    float                                              DitherBound_X;                                              // 0x02F4   (0x0004)
    float                                              PDO;                                                        // 0x02F8   (0x0004)
    float                                              MaskBlendHeight;                                            // 0x02FC   (0x0004)
    float                                              MaskFalloff;                                                // 0x0300   (0x0004)
    float                                              MaskContrast;                                               // 0x0304   (0x0004)
    float                                              BorderDistance;                                             // 0x0308   (0x0004)

    /// Functions
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherStaticMeshActor.DitherStaticMeshActor_C.UserConstructionScript
    constexpr static const FunctionPointer<ADitherStaticMeshActor_C, void> UserConstructionScript = { 0x2bc7620, 0 };
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherStaticMeshActor.DitherStaticMeshActor_C.BndEvt__DitherStaticMeshActor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    constexpr static const FunctionPointer<ADitherStaticMeshActor_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t> BndEvt__DitherStaticMeshActor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature = { 0x2bc7620, 1 };
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherStaticMeshActor.DitherStaticMeshActor_C.BndEvt__DitherStaticMeshActor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] SweepResult : const FHitResult&
    constexpr static const FunctionPointer<ADitherStaticMeshActor_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> BndEvt__DitherStaticMeshActor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature = { 0x2bc7620, 2 };
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherStaticMeshActor.DitherStaticMeshActor_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ADitherStaticMeshActor_C, void> ReceiveBeginPlay = { 0x2bc7620, 3 };
    // Function /Game/Art/BG/Actor/Blueprints/DitherActorComponent/DitherStaticMeshActor.DitherStaticMeshActor_C.ExecuteUbergraph_DitherStaticMeshActor
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ADitherStaticMeshActor_C, void, const int32_t> ExecuteUbergraph_DitherStaticMeshActor = { 0x2bc7620, 4 };
};

/// Class /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C
/// Size: 0x03F0 (1008 bytes) (0x0002C8 - 0x0003F0) align 8 MaxSize: 0x03F0
class AWaterSimUpdater_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class UBillboardComponent*                         Billboard;                                                  // 0x02D0   (0x0008)
    class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                    // 0x02D8   (0x0008)
    class USceneComponent*                             DefaultSceneRoot;                                           // 0x02E0   (0x0008)
    int32_t                                            RenderTargetResolution;                                     // 0x02E8   (0x0004)
    TEnumAsByte<WaterFXType>                           WaterFXType;                                                // 0x02EC   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x02ED   (0x0003) MISSED
    float                                              UnderWaterPrecision;                                        // 0x02F0   (0x0004)
    float                                              SceneCaptureResolution;                                     // 0x02F4   (0x0004)
    float                                              Simulation_Distance;                                        // 0x02F8   (0x0004)
    float                                              ActivationScaleOffsetX_Y;                                   // 0x02FC   (0x0004)
    float                                              ActivationScaleOffsetZ;                                     // 0x0300   (0x0004)
    float                                              ActivationBoxZ_Offset;                                      // 0x0304   (0x0004)
    class UMaterialInstanceDynamic*                    ForceSplat_mat_dyn;                                         // 0x0308   (0x0008)
    class UMaterialInstanceDynamic*                    ComputeNormal_mat_dyn;                                      // 0x0310   (0x0008)
    class UMaterialInstanceDynamic*                    HeightSim_mat_dyn;                                          // 0x0318   (0x0008)
    class UMaterialInstanceDynamic*                    DepthCapture_dyn;                                           // 0x0320   (0x0008)
    class UTextureRenderTarget2D*                      SceneCaptureTarget;                                         // 0x0328   (0x0008)
    class UTextureRenderTarget2D*                      HeightfieldNormal;                                          // 0x0330   (0x0008)
    class UTextureRenderTarget2D*                      Height0;                                                    // 0x0338   (0x0008)
    class UTextureRenderTarget2D*                      Height1;                                                    // 0x0340   (0x0008)
    class UTextureRenderTarget2D*                      Height2;                                                    // 0x0348   (0x0008)
    int32_t                                            HeightState;                                                // 0x0350   (0x0004)
    float                                              CharacterSpeed;                                             // 0x0354   (0x0004)
    float                                              TimeAccumulator;                                            // 0x0358   (0x0004)
    FLinearColor                                       RenderTargetClearColor;                                     // 0x035C   (0x0010)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x036C   (0x0004) MISSED
    class UPrimitiveComponent*                         ActivePrimitiveComponents;                                  // 0x0370   (0x0008)
    bool                                               SetActive;                                                  // 0x0378   (0x0001)
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x0379   (0x0007) MISSED
    class UParticleSystemComponent*                    AciveParticleComponents;                                    // 0x0380   (0x0008)
    class USkeletalMeshComponent*                      ActiveSkeletalMeshComponents;                               // 0x0388   (0x0008)
    class USkeletalMeshComponent*                      LocalActiveSkelMesh;                                        // 0x0390   (0x0008)
    class UPrimitiveComponent*                         LocalActivePrimitiveComponent;                              // 0x0398   (0x0008)
    class UPostProcessComponent*                       WaterOutPP;                                                 // 0x03A0   (0x0008)
    float                                              WaterOutPPWeight;                                           // 0x03A8   (0x0004)
    unsigned char                                      UnknownData03_6[0x4];                                       // 0x03AC   (0x0004) MISSED
    class UParticleSystemComponent*                    bubbleFX;                                                   // 0x03B0   (0x0008)
    float                                              WaterHeight;                                                // 0x03B8   (0x0004)
    unsigned char                                      UnknownData04_6[0x4];                                       // 0x03BC   (0x0004) MISSED
    TArray<class AActor*>                              ActivatedWaterBodies;                                       // 0x03C0   (0x0010)
    bool                                               IsOcean;                                                    // 0x03D0   (0x0001)
    unsigned char                                      UnknownData05_6[0x7];                                       // 0x03D1   (0x0007) MISSED
    FTimerHandle                                       CalcSimTimer;                                               // 0x03D8   (0x0008)
    bool                                               LastWaterSimUpdateQuality;                                  // 0x03E0   (0x0001)
    unsigned char                                      UnknownData06_6[0x7];                                       // 0x03E1   (0x0007) MISSED
    class ACH_P_EVE_01_Blueprint_C*                    Player;                                                     // 0x03E8   (0x0008)

    /// Functions
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.Get Activated Water Body
    // [0] Bodies : const TArray<AActor*>&
    // [1] Result : const bool&
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const TArray<AActor*>&, const bool&> GetActivatedWaterBody = { 0x2bc7620, 0 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.GetLastHeight
    // [0] CurrentHeightIndex : const int32_t
    // [1] NumFramesOld : const int32_t
    // [2] HeightRT : const UTextureRenderTarget2D*&
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const int32_t, const int32_t, const UTextureRenderTarget2D*&> GetLastHeight = { 0x2bc7620, 1 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.GetHeightRT
    // [0] Index : const int32_t
    // [1] HeightRT : const UTextureRenderTarget2D*&
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const int32_t, const UTextureRenderTarget2D*&> GetHeightRT = { 0x2bc7620, 2 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.UserConstructionScript
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void> UserConstructionScript = { 0x2bc7620, 3 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.ClearAllRenderTargets
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void> ClearAllRenderTargets = { 0x2bc7620, 4 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.Simulate1Frame
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void> Simulate1Frame = { 0x2bc7620, 5 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.UpdateCharMeshRemove
    // [0] RemoveCharMesh : const UPrimitiveComponent*
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const UPrimitiveComponent*> UpdateCharMeshRemove = { 0x2bc7620, 6 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.UpdateCharMeshAdd
    // [0] AddCharMesh : const UPrimitiveComponent*
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const UPrimitiveComponent*> UpdateCharMeshAdd = { 0x2bc7620, 7 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.ClearShowOnlyComp
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void> ClearShowOnlyComp = { 0x2bc7620, 8 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.UpdateSkelMeshRemove
    // [0] RemoveSkelMesh : const UPrimitiveComponent*
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const UPrimitiveComponent*> UpdateSkelMeshRemove = { 0x2bc7620, 9 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.UpdateSkelMeshAdd
    // [0] AddSkelMesh : const UPrimitiveComponent*
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const UPrimitiveComponent*> UpdateSkelMeshAdd = { 0x2bc7620, 10 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const float> ReceiveTick = { 0x2bc7620, 11 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.UpdatePrimitveAdd
    // [0] AddPrimitive : const UPrimitiveComponent*
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const UPrimitiveComponent*> UpdatePrimitveAdd = { 0x2bc7620, 12 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.UpdatePrimitiveRemove
    // [0] RemovePrimitive : const UPrimitiveComponent*
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const UPrimitiveComponent*> UpdatePrimitiveRemove = { 0x2bc7620, 13 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void> ReceiveBeginPlay = { 0x2bc7620, 14 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.CalcSim
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void> CalcSim = { 0x2bc7620, 15 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterSimUpdater.WaterSimUpdater_C.ExecuteUbergraph_WaterSimUpdater
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<AWaterSimUpdater_C, void, const int32_t> ExecuteUbergraph_WaterSimUpdater = { 0x2bc7620, 16 };
};

/// Class /Game/Art/FX/Enviroment/Water/PlaneWater/BP/GlobalUpdater_BP.GlobalUpdater_BP_C
/// Size: 0x0311 (785 bytes) (0x0002C8 - 0x000311) align 8 MaxSize: 0x0311
class AGlobalUpdater_BP_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class USceneComponent*                             DefaultSceneRoot;                                           // 0x02D0   (0x0008)
    float                                              ObjectIdleSpeed;                                            // 0x02D8   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x02DC   (0x0004) MISSED
    class UPrimitiveComponent*                         PrimitiveComponentToAdd;                                    // 0x02E0   (0x0008)
    class USkeletalMeshComponent*                      SkeletalMeshComponentToAdd;                                 // 0x02E8   (0x0008)
    float                                              CharacterSpeed;                                             // 0x02F0   (0x0004)
    bool                                               IsNOTIdle;                                                  // 0x02F4   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x02F5   (0x0003) MISSED
    class USkeletalMeshComponent*                      CharacterMeshToAdd;                                         // 0x02F8   (0x0008)
    float                                              CharMaxWalkSpeed;                                           // 0x0300   (0x0004)
    unsigned char                                      UnknownData02_6[0x4];                                       // 0x0304   (0x0004) MISSED
    class AWaterSimUpdater_C*                          WaterSimUpdater;                                            // 0x0308   (0x0008)
    bool                                               isDesertSim;                                                // 0x0310   (0x0001)

    /// Functions
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/GlobalUpdater_BP.GlobalUpdater_BP_C.DeactiveWaterBody
    // [0] BP_WaterBody : const AWaterBody_BP0_C*
    constexpr static const FunctionPointer<AGlobalUpdater_BP_C, void, const AWaterBody_BP0_C*> DeactiveWaterBody = { 0x2bc7620, 0 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/GlobalUpdater_BP.GlobalUpdater_BP_C.ActiveWaterBody
    // [0] BP_WaterBody : const AWaterBody_BP0_C*
    constexpr static const FunctionPointer<AGlobalUpdater_BP_C, void, const AWaterBody_BP0_C*> ActiveWaterBody = { 0x2bc7620, 1 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/GlobalUpdater_BP.GlobalUpdater_BP_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<AGlobalUpdater_BP_C, void, const float> ReceiveTick = { 0x2bc7620, 2 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/GlobalUpdater_BP.GlobalUpdater_BP_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<AGlobalUpdater_BP_C, void> ReceiveBeginPlay = { 0x2bc7620, 3 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/GlobalUpdater_BP.GlobalUpdater_BP_C.ExecuteUbergraph_GlobalUpdater_BP
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<AGlobalUpdater_BP_C, void, const int32_t> ExecuteUbergraph_GlobalUpdater_BP = { 0x2bc7620, 4 };
};

/// Class /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C
/// Size: 0x0396 (918 bytes) (0x0002C8 - 0x000396) align 8 MaxSize: 0x0396
class AWaterBody_BP0_C : public AActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)
    class UStaticMeshComponent*                        HeightMapCaptureMesh;                                       // 0x02D0   (0x0008)
    class UPostProcessComponent*                       PostProcess;                                                // 0x02D8   (0x0008)
    class UBoxComponent*                               OverlapBox;                                                 // 0x02E0   (0x0008)
    class UBoxComponent*                               ActivationBox;                                              // 0x02E8   (0x0008)
    class UStaticMeshComponent*                        WaterPlaneMesh;                                             // 0x02F0   (0x0008)
    class UStaticMeshComponent*                        PlaneCollider;                                              // 0x02F8   (0x0008)
    class USceneComponent*                             DefaultSceneRoot;                                           // 0x0300   (0x0008)
    class UStaticMesh*                                 WaterMeshAsset;                                             // 0x0308   (0x0008)
    int32_t                                            TranslucencySortPriority;                                   // 0x0310   (0x0004)
    FVector                                            EndPoint;                                                   // 0x0314   (0x000C)
    class UMaterialInterface*                          WaterMaterial;                                              // 0x0320   (0x0008)
    TEnumAsByte<WaterFXType>                           WaterFXType;                                                // 0x0328   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0329   (0x0003) MISSED
    float                                              ActivationScaleOffsetX_Y;                                   // 0x032C   (0x0004)
    float                                              ActivationScaleOffsetZ;                                     // 0x0330   (0x0004)
    float                                              TileScaleX;                                                 // 0x0334   (0x0004)
    float                                              TileScaleY;                                                 // 0x0338   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x033C   (0x0004) MISSED
    class UPrimitiveComponent*                         ActivePrimitiveComponents;                                  // 0x0340   (0x0008)
    bool                                               firstLoadedWaterBody;                                       // 0x0348   (0x0001)
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x0349   (0x0007) MISSED
    class USkeletalMeshComponent*                      ActiveSkeletalMeshComponents;                               // 0x0350   (0x0008)
    class USkeletalMeshComponent*                      LocalActiveSkelMesh;                                        // 0x0358   (0x0008)
    class UPrimitiveComponent*                         LocalActivePrimitiveComponent;                              // 0x0360   (0x0008)
    class UPostProcessComponent*                       WaterOutPP;                                                 // 0x0368   (0x0008)
    float                                              WaterOutPPWeight;                                           // 0x0370   (0x0004)
    unsigned char                                      UnknownData03_6[0x4];                                       // 0x0374   (0x0004) MISSED
    class UNiagaraComponent*                           bubbleNiaFX;                                                // 0x0378   (0x0008)
    class AGlobalUpdater_BP_C*                         BP_GlobalUpdater;                                           // 0x0380   (0x0008)
    FVector                                            WaterPlaneMeshSize;                                         // 0x0388   (0x000C)
    bool                                               isActiveBody;                                               // 0x0394   (0x0001)
    bool                                               isWaterMeshDisable;                                         // 0x0395   (0x0001)

    /// Functions
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.UserConstructionScript
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void> UserConstructionScript = { 0x2bc7620, 0 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.BndEvt__WaterBody_BP0_ActivationBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] SweepResult : const FHitResult&
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> BndEvt__WaterBody_BP0_ActivationBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature = { 0x2bc7620, 1 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.BndEvt__WaterBody_BP0_ActivationBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t> BndEvt__WaterBody_BP0_ActivationBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature = { 0x2bc7620, 2 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void, const float> ReceiveTick = { 0x2bc7620, 3 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.BndEvt__OverlapBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] SweepResult : const FHitResult&
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> BndEvt__OverlapBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature = { 0x2bc7620, 4 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.BndEvt__OverlapBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
    // [0] OverlappedComponent : const UPrimitiveComponent*
    // [1] OtherActor : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t> BndEvt__OverlapBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature = { 0x2bc7620, 5 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void> ReceiveBeginPlay = { 0x2bc7620, 6 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.ReceiveEndPlay
    // [0] EndPlayReason : const TEnumAsByte<EEndPlayReason>
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void, const TEnumAsByte<EEndPlayReason>> ReceiveEndPlay = { 0x2bc7620, 7 };
    // Function /Game/Art/FX/Enviroment/Water/PlaneWater/BP/WaterBody_BP0.WaterBody_BP0_C.ExecuteUbergraph_WaterBody_BP0
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<AWaterBody_BP0_C, void, const int32_t> ExecuteUbergraph_WaterBody_BP0 = { 0x2bc7620, 8 };
};

/// Class /Game/Art/UI/Widget/Lobby/WB_Lobby_Background.WB_Lobby_Background_C
/// Size: 0x0680 (1664 bytes) (0x000680 - 0x000680) align 8 MaxSize: 0x0680
class UWB_Lobby_Background_C : public USBUserWidget
{ 
public:
};

/// Class /Game/Art/UI/Widget/Splash/WB_ShiftUp_Splash.WB_ShiftUp_Splash_C
/// Size: 0x0680 (1664 bytes) (0x000680 - 0x000680) align 8 MaxSize: 0x0680
class UWB_ShiftUp_Splash_C : public USBUserWidget
{ 
public:
};

/// Class /Game/Art/UI/Widget/Splash/WB_Sony_Splash.WB_Sony_Splash_C
/// Size: 0x0680 (1664 bytes) (0x000680 - 0x000680) align 8 MaxSize: 0x0680
class UWB_Sony_Splash_C : public USBUserWidget
{ 
public:
};

/// Class /Game/Art/UI/Widget/Splash/WB_Unreal_Splash.WB_Unreal_Splash_C
/// Size: 0x0680 (1664 bytes) (0x000680 - 0x000680) align 8 MaxSize: 0x0680
class UWB_Unreal_Splash_C : public USBUserWidget
{ 
public:
};

/// Struct /Game/Art/UI/Widget/Splash/SplashFadeWidgetInfo.SplashFadeWidgetInfo
/// Size: 0x0015 (21 bytes) (0x000000 - 0x000015) align 8 MaxSize: 0x0015
struct FSplashFadeWidgetInfo
{ 
    float                                              FadeDuration_11_EAB87600472EF251496BFEA42A9B226D;           // 0x0000   (0x0004)
    float                                              DisplayDuration_12_ADCA0CDB46878120057D9AA7B11F9472;        // 0x0004   (0x0004)
    class UWidget*                                     TargetWidget_5_5FB3407E48B9FE5562191A918EAE3A55;            // 0x0008   (0x0008)
    float                                              SplashMinimumTime_15_F9C6A1EE4D34AC0B6C157CAA57E613A2;      // 0x0010   (0x0004)
    bool                                               bThrobber_7_4EB997754B67B7358AC5A7BB328F7C07;               // 0x0014   (0x0001)
};

/// Class /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C
/// Size: 0x073C (1852 bytes) (0x000680 - 0x00073C) align 8 MaxSize: 0x073C
class UWB_Splash_Set_C : public USBUserWidget
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0680   (0x0008)
    class UWidgetAnimation*                            SplashOutAni;                                               // 0x0688   (0x0008)
    class UWidgetAnimation*                            SplashInAni;                                                // 0x0690   (0x0008)
    class UWidgetAnimation*                            LoadingAni;                                                 // 0x0698   (0x0008)
    class UButton*                                     Button_Action;                                              // 0x06A0   (0x0008)
    class UCircularThrobber*                           Throbber;                                                   // 0x06A8   (0x0008)
    class UWB_ShiftUp_Splash_C*                        WB_ShiftUp_Splash;                                          // 0x06B0   (0x0008)
    class UWB_Sony_Splash_C*                           WB_Sony_Splash;                                             // 0x06B8   (0x0008)
    class UWB_Unreal_Splash_C*                         WB_Unreal_Splash;                                           // 0x06C0   (0x0008)
    bool                                               AutoPlayLoadingAni;                                         // 0x06C8   (0x0001)
    bool                                               bPlaying;                                                   // 0x06C9   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x06CA   (0x0002) MISSED
    float                                              ShiftupSplashStartTime;                                     // 0x06CC   (0x0004)
    float                                              ShiftupSplashFinishTime;                                    // 0x06D0   (0x0004)
    float                                              ShiftupSplashFadeTime;                                      // 0x06D4   (0x0004)
    float                                              SonySplashStartTime;                                        // 0x06D8   (0x0004)
    float                                              SonySplashFinishTime;                                       // 0x06DC   (0x0004)
    float                                              SonySplashFadeTime;                                         // 0x06E0   (0x0004)
    float                                              ThrobberStartTime;                                          // 0x06E4   (0x0004)
    float                                              ThrobberFadeTime;                                           // 0x06E8   (0x0004)
    float                                              CurrentTime;                                                // 0x06EC   (0x0004)
    float                                              ThrobberFromAlpha;                                          // 0x06F0   (0x0004)
    float                                              ThrobberEndAlpha;                                           // 0x06F4   (0x0004)
    bool                                               bFadeThrobber;                                              // 0x06F8   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x06F9   (0x0007) MISSED
    TArray<FSplashFadeWidgetInfo>                      SplashInfoArray;                                            // 0x0700   (0x0010)
    FMulticastInlineDelegate                           OnFinishSplash;                                             // 0x0710   (0x0010)
    float                                              FadeDuration;                                               // 0x0720   (0x0004)
    float                                              DisplayDuration;                                            // 0x0724   (0x0004)
    float                                              SplashMinimumTime;                                          // 0x0728   (0x0004)
    unsigned char                                      UnknownData02_6[0x4];                                       // 0x072C   (0x0004) MISSED
    class UWidget*                                     Target_Widget;                                              // 0x0730   (0x0008)
    bool                                               bThrobber;                                                  // 0x0738   (0x0001)
    bool                                               bRequestFadeOut;                                            // 0x0739   (0x0001)
    bool                                               bCanSkip;                                                   // 0x073A   (0x0001)
    bool                                               bAsyncLoadingScreen;                                        // 0x073B   (0x0001)

    /// Functions
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.Stop Splash
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void> StopSplash = { 0x2bc7620, 0 };
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.Start Splash
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void> StartSplash = { 0x2bc7620, 1 };
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.Update Throbber
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void> UpdateThrobber = { 0x2bc7620, 2 };
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.EventNotification
    // [0] inEvent : const FString
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void, const FString> EventNotification = { 0x2bc7620, 3 };
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.Construct
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void> Construct = { 0x2bc7620, 4 };
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.Tick
    // [0] MyGeometry : const FGeometry
    // [1] InDeltaTime : const float
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void, const FGeometry, const float> Tick = { 0x2bc7620, 5 };
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.ExecuteUbergraph_WB_Splash_Set
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void, const int32_t> ExecuteUbergraph_WB_Splash_Set = { 0x2bc7620, 6 };
    // Function /Game/Art/UI/Widget/Splash/WB_Splash_Set.WB_Splash_Set_C.OnFinishSplash__DelegateSignature
    constexpr static const FunctionPointer<UWB_Splash_Set_C, void> OnFinishSplash__DelegateSignature = { 0x2bc7620, 7 };
};

/// Class /Game/Art/UI/TextStyleSet/Bp_RichTextImageDecorator.Bp_RichTextImageDecorator_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UBp_RichTextImageDecorator_C : public URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C
/// Size: 0x07A0 (1952 bytes) (0x000750 - 0x0007A0) align 8 MaxSize: 0x07A0
class UWB_Loading_Basic_C : public USBLoadingScreenWidget
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0750   (0x0008)
    class UTextBlock*                                  TextBlock;                                                  // 0x0758   (0x0008)
    class UThrobber*                                   Throbber;                                                   // 0x0760   (0x0008)
    float                                              Duration;                                                   // 0x0768   (0x0004)
    float                                              FromAlpha;                                                  // 0x076C   (0x0004)
    float                                              EndAlpha;                                                   // 0x0770   (0x0004)
    float                                              CurrentAlpha;                                               // 0x0774   (0x0004)
    float                                              CurrentDuration;                                            // 0x0778   (0x0004)
    float                                              DelayTime;                                                  // 0x077C   (0x0004)
    bool                                               bPlaying;                                                   // 0x0780   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0781   (0x0003) MISSED
    float                                              ThrobberStartTime;                                          // 0x0784   (0x0004)
    float                                              ThrobberFadeDuration;                                       // 0x0788   (0x0004)
    float                                              ThrobberFromAlpha;                                          // 0x078C   (0x0004)
    float                                              ThrobberEndAlpha;                                           // 0x0790   (0x0004)
    float                                              ThrobberCurrentAlpha;                                       // 0x0794   (0x0004)
    bool                                               bFadeThrobber;                                              // 0x0798   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x0799   (0x0003) MISSED
    int32_t                                            FrameCounter;                                               // 0x079C   (0x0004)

    /// Functions
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.Update Throbber
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void> UpdateThrobber = { 0x2bc7620, 0 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.StartFadeInternal
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void> StartFadeInternal = { 0x2bc7620, 1 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.UpdateFade
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void> UpdateFade = { 0x2bc7620, 2 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.ResetToDefault
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void> ResetToDefault = { 0x2bc7620, 3 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.StartFade
    // [0] InDuration : const float
    // [1] InFromAlpha : const float
    // [2] InEndAlpha : const float
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void, const float, const float, const float> StartFade = { 0x2bc7620, 4 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.PreConstruct
    // [0] IsDesignTime : const bool
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void, const bool> PreConstruct = { 0x2bc7620, 5 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.Tick
    // [0] MyGeometry : const FGeometry
    // [1] InDeltaTime : const float
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void, const FGeometry, const float> Tick = { 0x2bc7620, 6 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.EventNotification
    // [0] inEvent : const FString
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void, const FString> EventNotification = { 0x2bc7620, 7 };
    // Function /Game/Art/UI/Widget/Loading/WB_Loading_Basic.WB_Loading_Basic_C.ExecuteUbergraph_WB_Loading_Basic
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UWB_Loading_Basic_C, void, const int32_t> ExecuteUbergraph_WB_Loading_Basic = { 0x2bc7620, 8 };
};

/// Struct /Game/Art/BG/Actor/Blueprints/FluidFlux/Interaction/Blueprints/BS_FluxInteractionData.BS_FluxInteractionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FBS_FluxInteractionData
{ 
    FVector2D                                          Location_10_0342F4634FB7916C0DE9CBAB9C88A476;               // 0x0000   (0x0008)
    float                                              Radius_9_EC5FD1B14AF3F247D25442B53A6EC366;                  // 0x0008   (0x0004)
    float                                              Force_8_20A6B7304C8BF8E070FC6BAF4DE3DF6F;                   // 0x000C   (0x0004)
};

/// Struct /Game/Art/BG/Actor/Blueprints/DitherActorComponent/ST_DitherParams.ST_DitherParams
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FST_DitherParams
{ 
    int32_t                                            Radius_2_75ADB0634054FBB0CCEC9CA9539C9340;                  // 0x0000   (0x0004)
    float                                              Falloff_5_5B9B3D3C448C8138A6FF108233B085BB;                 // 0x0004   (0x0004)
    int32_t                                            FoliageRadius_8_F22503AA4B40EDA74689B7965E3FD73C;           // 0x0008   (0x0004)
    float                                              FoliageFalloff_11_3E9E7C06481FD1555145958654FCCE6E;         // 0x000C   (0x0004)
};

/// Struct /Game/Art/BG/Actor/Blueprints/FluidFlux/Editor/ProceduralMesh/BS_MeshDefinition.BS_MeshDefinition
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FBS_MeshDefinition
{ 
    TArray<int32_t>                                    Triangles_14_6262AA3F4E1CE218A85115AA4BE96C1C;              // 0x0000   (0x0010)
    TArray<FVector>                                    Vertices_15_E8AFE418453520476FA3CBA576C886DE;               // 0x0010   (0x0010)
    TArray<FVector2D>                                  TexCoords_16_4C629A5E484407F609EAB4932C6E33F0;              // 0x0020   (0x0010)
    TArray<FVector>                                    Normals_17_80A7A73240297AC2D8766FB9FC89FE85;                // 0x0030   (0x0010)
    TArray<FLinearColor>                               Colors_19_5726C34D4367889BC6A2DFB5779F300E;                 // 0x0040   (0x0010)
    TArray<FProcMeshTangent>                           Tangents_23_DF4C41A04FE61FAEA5266EBD5BFCFDA3;               // 0x0050   (0x0010)
};

#pragma pack(pop)


static_assert(sizeof(UBtoB_CtrlRig_C) == 0x0668); // 1640 bytes (0x000658 - 0x000668)
static_assert(sizeof(UCH_P_EVE_09_AnimBP_C) == 0x1700); // 5888 bytes (0x0002C8 - 0x001700)
static_assert(sizeof(UCH_P_EVE_08_AnimBP_C) == 0x3CD8); // 15576 bytes (0x0002C8 - 0x003CD8)
static_assert(sizeof(UBPI_FluxInteractionRenderer_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPDA_FluxSimulationState_C) == 0x007D); // 125 bytes (0x000030 - 0x00007D)
static_assert(sizeof(UCH_NPC_TachyNPC_Body_CtrlRig_C) == 0x06A4); // 1700 bytes (0x000658 - 0x0006A4)
static_assert(sizeof(UCH_P_EVE_08_Swim_ControlRig_C) == 0x06C8); // 1736 bytes (0x000658 - 0x0006C8)
static_assert(sizeof(UCH_P_EVE_08_TPSAim_ControlRig_C) == 0x0699); // 1689 bytes (0x000658 - 0x000699)
static_assert(sizeof(UCH_P_EVE_08_HitStop_CtrlRig_C) == 0x0790); // 1936 bytes (0x000658 - 0x000790)
static_assert(sizeof(UCH_P_EVE_08_AttachSocketToSocket_CtrlRig_C) == 0x0680); // 1664 bytes (0x000658 - 0x000680)
static_assert(sizeof(UCH_P_EVE_08_EventMove_CtrlRig_Fix_C) == 0x06F0); // 1776 bytes (0x000658 - 0x0006F0)
static_assert(sizeof(UCH_P_EVE_08_CtrlRig_SelfieMode_C) == 0x0685); // 1669 bytes (0x000658 - 0x000685)
static_assert(sizeof(UCH_P_EVE_08_CtrlRig_WeaponConstraint_Sub_C) == 0x0660); // 1632 bytes (0x000658 - 0x000660)
static_assert(sizeof(UCH_P_EVE_08_KnockDown_ControlRig_C) == 0x0684); // 1668 bytes (0x000658 - 0x000684)
static_assert(sizeof(UCH_P_EVE_08_Grab_ControlRig_C) == 0x0658); // 1624 bytes (0x000658 - 0x000658)
static_assert(sizeof(UCH_P_EVE_08_CtrlRig_SwimLeg_C) == 0x0670); // 1648 bytes (0x000658 - 0x000670)
static_assert(sizeof(UCH_P_EVE_08_Stand_ControlRig_C) == 0x0750); // 1872 bytes (0x000658 - 0x000750)
static_assert(sizeof(UBPI_FluxSurface_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_FluxSimulationEditorCallback_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_FluxWaveRenderer_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBP_FluxDataComponent_C) == 0x0150); // 336 bytes (0x0000C0 - 0x000150)
static_assert(sizeof(UBP_FluxModifierComponent_C) == 0x0298); // 664 bytes (0x000260 - 0x000298)
static_assert(sizeof(UBPI_FluxSimulationEditorEvents_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCH_P_EVE_Fusion_CtrlRig_C) == 0x0658); // 1624 bytes (0x000658 - 0x000658)
static_assert(sizeof(UCH_P_EVE_05_AnimBP_C) == 0x2620); // 9760 bytes (0x0002C8 - 0x002620)
static_assert(sizeof(UCH_P_EVE_06_AnimBP_C) == 0x2620); // 9760 bytes (0x0002C8 - 0x002620)
static_assert(sizeof(UBPI_FluxCameraEvents_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBS_InteractionSource) == 0x0054); // 84 bytes (0x000000 - 0x000054)
static_assert(sizeof(UBP_FluxInteractionComponent_C) == 0x0138); // 312 bytes (0x0000C0 - 0x000138)
static_assert(sizeof(UBP_FluxModifierForceComponent_C) == 0x02B8); // 696 bytes (0x000298 - 0x0002B8)
static_assert(sizeof(UBPI_FluxModifierContainer_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_FluxInteraction_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCH_P_EVE_10_AnimBP_C) == 0x07A0); // 1952 bytes (0x0002C8 - 0x0007A0)
static_assert(sizeof(UDitherActorComponent_C) == 0x0121); // 289 bytes (0x0000C0 - 0x000121)
static_assert(sizeof(UBPL_FluidFlux_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCH_P_EVE_Fusion_AnimBP_C) == 0x56FC); // 22268 bytes (0x0002C8 - 0x0056FC)
static_assert(sizeof(ABP_FluxInteractionCapture_C) == 0x0358); // 856 bytes (0x0002C8 - 0x000358)
static_assert(sizeof(UBP_FluxDataAudioComponent_C) == 0x018C); // 396 bytes (0x000150 - 0x00018C)
static_assert(sizeof(UBPL_ProceduralMesh_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ABP_FluxNiagaraActor_C) == 0x033A); // 826 bytes (0x0002C8 - 0x00033A)
static_assert(sizeof(UCH_NPC_TachyNPC_AnimBP_C) == 0x1FE4); // 8164 bytes (0x000520 - 0x001FE4)
static_assert(sizeof(UBP_FluxMeshGenerator_C) == 0x00E0); // 224 bytes (0x0000C0 - 0x0000E0)
static_assert(sizeof(ABP_FluxOceanWave_C) == 0x0388); // 904 bytes (0x0002C8 - 0x000388)
static_assert(sizeof(FBS_FluxSplashData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ABP_FluxSurface_C) == 0x0580); // 1408 bytes (0x0002C8 - 0x000580)
static_assert(sizeof(UBP_FluxSolverComponent_C) == 0x01C0); // 448 bytes (0x0000C0 - 0x0001C0)
static_assert(sizeof(UDron_AnimBP_C) == 0x1140); // 4416 bytes (0x000520 - 0x001140)
static_assert(sizeof(ABP_Dron_C) == 0x02FD); // 765 bytes (0x0002C8 - 0x0002FD)
static_assert(sizeof(UCH_P_EVE_01_AnimBP_New_C) == 0x11EDE); // 73438 bytes (0x000520 - 0x011EDE)
static_assert(sizeof(UBP_FluxSolverRippleComponent_C) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(ACH_P_EVE_01_Sequncer_BP_C) == 0x39CD); // 14797 bytes (0x003880 - 0x0039CD)
static_assert(sizeof(ABP_FluxSurface_Water_C) == 0x0580); // 1408 bytes (0x000580 - 0x000580)
static_assert(sizeof(ABP_FluxSurface_Ocean_C) == 0x0580); // 1408 bytes (0x000580 - 0x000580)
static_assert(sizeof(ABP_FluxSimulation_C) == 0x0544); // 1348 bytes (0x0002C8 - 0x000544)
static_assert(sizeof(UFXFunctionLibrary_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ACH_NPC_TachyNPC_Blueprint_C) == 0x38E4); // 14564 bytes (0x003880 - 0x0038E4)
static_assert(sizeof(ACH_P_EVE_01_Blueprint_C) == 0x3B91); // 15249 bytes (0x003880 - 0x003B91)
static_assert(sizeof(UCH_W_Sword_03_AnimBP_C) == 0x0754); // 1876 bytes (0x000520 - 0x000754)
static_assert(sizeof(UCH_ACC_HairPin_AnimBP_C) == 0x0923); // 2339 bytes (0x000520 - 0x000923)
static_assert(sizeof(ADitherStaticMeshActor_C) == 0x030C); // 780 bytes (0x0002D8 - 0x00030C)
static_assert(sizeof(AWaterSimUpdater_C) == 0x03F0); // 1008 bytes (0x0002C8 - 0x0003F0)
static_assert(sizeof(AGlobalUpdater_BP_C) == 0x0311); // 785 bytes (0x0002C8 - 0x000311)
static_assert(sizeof(AWaterBody_BP0_C) == 0x0396); // 918 bytes (0x0002C8 - 0x000396)
static_assert(sizeof(UWB_Lobby_Background_C) == 0x0680); // 1664 bytes (0x000680 - 0x000680)
static_assert(sizeof(UWB_ShiftUp_Splash_C) == 0x0680); // 1664 bytes (0x000680 - 0x000680)
static_assert(sizeof(UWB_Sony_Splash_C) == 0x0680); // 1664 bytes (0x000680 - 0x000680)
static_assert(sizeof(UWB_Unreal_Splash_C) == 0x0680); // 1664 bytes (0x000680 - 0x000680)
static_assert(sizeof(FSplashFadeWidgetInfo) == 0x0015); // 21 bytes (0x000000 - 0x000015)
static_assert(sizeof(UWB_Splash_Set_C) == 0x073C); // 1852 bytes (0x000680 - 0x00073C)
static_assert(sizeof(UBp_RichTextImageDecorator_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWB_Loading_Basic_C) == 0x07A0); // 1952 bytes (0x000750 - 0x0007A0)
static_assert(sizeof(FBS_FluxInteractionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FST_DitherParams) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBS_MeshDefinition) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, AnimGraphNode_Root) == 0x02D8);
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x0308);
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0420);
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0440);
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, AnimGraphNode_KawaiiPhysics) == 0x0460);
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, AnimGraphNode_ControlRig) == 0x0BF0);
static_assert(offsetof(UCH_P_EVE_09_AnimBP_C, AnimGraphNode_KawaiiPhysics0) == 0x0F60);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x02D8);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x02F8);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_KawaiiPhysics) == 0x0320);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_KawaiiPhysics0) == 0x0AB0);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_KawaiiPhysics1) == 0x1240);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_KawaiiPhysics2) == 0x19D0);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_KawaiiPhysics3) == 0x2160);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_KawaiiPhysics4) == 0x28F0);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_KawaiiPhysics5) == 0x3080);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_ControlRig) == 0x3810);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x3B80);
static_assert(offsetof(UCH_P_EVE_08_AnimBP_C, AnimGraphNode_Root) == 0x3C98);
static_assert(offsetof(UPDA_FluxSimulationState_C, Resolution) == 0x0038);
static_assert(offsetof(UPDA_FluxSimulationState_C, GroundMap) == 0x0040);
static_assert(offsetof(UPDA_FluxSimulationState_C, VelocityDepthFoamMap) == 0x0048);
static_assert(offsetof(UPDA_FluxSimulationState_C, AreaLocation) == 0x0050);
static_assert(offsetof(UPDA_FluxSimulationState_C, AreaSize) == 0x005C);
static_assert(offsetof(UPDA_FluxSimulationState_C, HeightWetMap) == 0x0068);
static_assert(offsetof(UCH_NPC_TachyNPC_Body_CtrlRig_C, ActorLocation) == 0x0674);
static_assert(offsetof(UCH_NPC_TachyNPC_Body_CtrlRig_C, PreviousActorLocation) == 0x0680);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, R_Hand_HitLocation) == 0x0658);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, R_Hand_HitNormal) == 0x0664);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, L_Hand_HitLocation) == 0x0674);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, L_Hand_HitNormal) == 0x0680);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, R_Hand_InterpolatedLocation) == 0x0698);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, L_Hand_InterpolatedLocation) == 0x06A4);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, R_Hand_InterpolatedNormal) == 0x06B0);
static_assert(offsetof(UCH_P_EVE_08_Swim_ControlRig_C, L_Hand_InterpolatedNormal) == 0x06BC);
static_assert(offsetof(UCH_P_EVE_08_TPSAim_ControlRig_C, AimTarget) == 0x0658);
static_assert(offsetof(UCH_P_EVE_08_TPSAim_ControlRig_C, CurrentAimTarget) == 0x0664);
static_assert(offsetof(UCH_P_EVE_08_TPSAim_ControlRig_C, TPSHandSocket) == 0x0674);
static_assert(offsetof(UCH_P_EVE_08_TPSAim_ControlRig_C, TPSLookAtLocation) == 0x0680);
static_assert(offsetof(UCH_P_EVE_08_TPSAim_ControlRig_C, TPSAimXY) == 0x0690);
static_assert(offsetof(UCH_P_EVE_08_HitStop_CtrlRig_C, HitResult) == 0x065C);
static_assert(offsetof(UCH_P_EVE_08_HitStop_CtrlRig_C, RecordRootTransform0) == 0x06F0);
static_assert(offsetof(UCH_P_EVE_08_HitStop_CtrlRig_C, RecordRootTransform1) == 0x0720);
static_assert(offsetof(UCH_P_EVE_08_HitStop_CtrlRig_C, Previous_R_UpperArm) == 0x0760);
static_assert(offsetof(UCH_P_EVE_08_AttachSocketToSocket_CtrlRig_C, IKBoneName) == 0x0658);
static_assert(offsetof(UCH_P_EVE_08_AttachSocketToSocket_CtrlRig_C, MyAttachBoneName) == 0x0660);
static_assert(offsetof(UCH_P_EVE_08_AttachSocketToSocket_CtrlRig_C, MySocketLocalLocation) == 0x0668);
static_assert(offsetof(UCH_P_EVE_08_AttachSocketToSocket_CtrlRig_C, TargetSocketLocation) == 0x0674);
static_assert(offsetof(UCH_P_EVE_08_EventMove_CtrlRig_Fix_C, EL) == 0x0670);
static_assert(offsetof(UCH_P_EVE_08_EventMove_CtrlRig_Fix_C, ER) == 0x06A0);
static_assert(offsetof(UCH_P_EVE_08_CtrlRig_SelfieMode_C, CameraLocation) == 0x065C);
static_assert(offsetof(UCH_P_EVE_08_CtrlRig_SelfieMode_C, CameraRotation) == 0x0668);
static_assert(offsetof(UCH_P_EVE_08_CtrlRig_SelfieMode_C, HeadLookAtLocation) == 0x0678);
static_assert(offsetof(UCH_P_EVE_08_KnockDown_ControlRig_C, PrevHeadLocation) == 0x0670);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, Previous_L_Foot) == 0x0674);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, Previous_R_Foot) == 0x0680);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, Previous_L_Foot_Hit) == 0x06BC);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, Previous_R_Foot_Hit) == 0x06C8);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, ActorLocation) == 0x06E4);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, PreviousActorLocation) == 0x06F0);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, L_Foot_Location) == 0x0700);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, R_Foot_Location) == 0x070C);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, L_Hand_Location) == 0x0718);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, R_Hand_Location) == 0x0724);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, L_Foot_GroundNormal) == 0x0730);
static_assert(offsetof(UCH_P_EVE_08_Stand_ControlRig_C, R_Foot_GroundNormal) == 0x073C);
static_assert(offsetof(UBP_FluxDataComponent_C, UberGraphFrame) == 0x00C0);
static_assert(offsetof(UBP_FluxDataComponent_C, FluxSurfaceLocation) == 0x00D0);
static_assert(offsetof(UBP_FluxDataComponent_C, FluxFluidVelocity) == 0x00DC);
static_assert(offsetof(UBP_FluxDataComponent_C, CustomDataSystem) == 0x00F0);
static_assert(offsetof(UBP_FluxDataComponent_C, OwnerSocketName) == 0x010C);
static_assert(offsetof(UBP_FluxDataComponent_C, FluxFluidNormal) == 0x0114);
static_assert(offsetof(UBP_FluxDataComponent_C, SamplePoints) == 0x0120);
static_assert(offsetof(UBP_FluxDataComponent_C, ExportDataInstance) == 0x0130);
static_assert(offsetof(UBP_FluxDataComponent_C, SurfaceActor) == 0x0138);
static_assert(offsetof(UBP_FluxDataComponent_C, ReadbackData) == 0x0140);
static_assert(offsetof(UBP_FluxModifierComponent_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UBP_FluxModifierComponent_C, SimulationActor) == 0x0278);
static_assert(offsetof(UBP_FluxModifierComponent_C, WorldMaterials) == 0x0288);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_Root) == 0x02D8);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x0308);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0420);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0440);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_KawaiiPhysics) == 0x0460);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_KawaiiPhysics0) == 0x0BF0);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_KawaiiPhysics1) == 0x1380);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_KawaiiPhysics2) == 0x1B10);
static_assert(offsetof(UCH_P_EVE_05_AnimBP_C, AnimGraphNode_ControlRig) == 0x22A0);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_Root) == 0x02D8);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x0308);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0420);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0440);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_KawaiiPhysics) == 0x0460);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_KawaiiPhysics0) == 0x0BF0);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_KawaiiPhysics1) == 0x1380);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_KawaiiPhysics2) == 0x1B10);
static_assert(offsetof(UCH_P_EVE_06_AnimBP_C, AnimGraphNode_ControlRig) == 0x22A0);
static_assert(offsetof(FBS_InteractionSource, Transform_9_764EEE8F472ED0A7237B7DB6E41F7ACB) == 0x0010);
static_assert(offsetof(FBS_InteractionSource, Socket_13_D0CBF8A64AB6B4FF601986896C0AD13E) == 0x0040);
static_assert(offsetof(UBP_FluxInteractionComponent_C, UberGraphFrame) == 0x00C0);
static_assert(offsetof(UBP_FluxInteractionComponent_C, FluxData) == 0x00D0);
static_assert(offsetof(UBP_FluxInteractionComponent_C, Sources) == 0x00E0);
static_assert(offsetof(UBP_FluxInteractionComponent_C, Mesh) == 0x00F8);
static_assert(offsetof(UBP_FluxInteractionComponent_C, CurrentLocation) == 0x0100);
static_assert(offsetof(UBP_FluxInteractionComponent_C, PreviousLocations) == 0x0110);
static_assert(offsetof(UBP_FluxInteractionComponent_C, SplashState) == 0x0128);
static_assert(offsetof(UBP_FluxModifierForceComponent_C, MaterialInstance) == 0x0298);
static_assert(offsetof(UBP_FluxModifierForceComponent_C, Material) == 0x02B0);
static_assert(offsetof(UCH_P_EVE_10_AnimBP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UCH_P_EVE_10_AnimBP_C, AnimGraphNode_ControlRig) == 0x02D8);
static_assert(offsetof(UCH_P_EVE_10_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x0648);
static_assert(offsetof(UCH_P_EVE_10_AnimBP_C, AnimGraphNode_Root) == 0x0760);
static_assert(offsetof(UDitherActorComponent_C, UberGraphFrame) == 0x00C0);
static_assert(offsetof(UDitherActorComponent_C, DataTable) == 0x00D0);
static_assert(offsetof(UDitherActorComponent_C, ComponentNames) == 0x00E8);
static_assert(offsetof(UDitherActorComponent_C, TargetComponentClass) == 0x00F8);
static_assert(offsetof(UDitherActorComponent_C, Children) == 0x0110);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics) == 0x02E0);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics0) == 0x0A70);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics1) == 0x1200);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics2) == 0x1990);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics3) == 0x2120);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics4) == 0x28B0);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics5) == 0x3040);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_ControlRig) == 0x37D0);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics6) == 0x3B40);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x42D0);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x42F0);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics7) == 0x4310);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_KawaiiPhysics8) == 0x4AA0);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x5230);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_ControlRig9) == 0x5348);
static_assert(offsetof(UCH_P_EVE_Fusion_AnimBP_C, AnimGraphNode_Root) == 0x56B8);
static_assert(offsetof(ABP_FluxInteractionCapture_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(ABP_FluxInteractionCapture_C, MaterialBillboard) == 0x02D0);
static_assert(offsetof(ABP_FluxInteractionCapture_C, Preview) == 0x02D8);
static_assert(offsetof(ABP_FluxInteractionCapture_C, Ripple) == 0x02E0);
static_assert(offsetof(ABP_FluxInteractionCapture_C, area) == 0x02E8);
static_assert(offsetof(ABP_FluxInteractionCapture_C, Scene) == 0x02F0);
static_assert(offsetof(ABP_FluxInteractionCapture_C, DebugMaterial) == 0x02F8);
static_assert(offsetof(ABP_FluxInteractionCapture_C, WaterPreviewInstance) == 0x0300);
static_assert(offsetof(ABP_FluxInteractionCapture_C, Solver) == 0x0310);
static_assert(offsetof(ABP_FluxInteractionCapture_C, Editor) == 0x0318);
static_assert(offsetof(ABP_FluxInteractionCapture_C, DebugMesh) == 0x0330);
static_assert(offsetof(UBP_FluxDataAudioComponent_C, UberGraphFrame) == 0x0150);
static_assert(offsetof(UBP_FluxDataAudioComponent_C, AudioSource) == 0x0158);
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SoundMixer) == 0x0160);
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SoundOver_UE5_Workaround_) == 0x0168);
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SoundUnder_UE5_Workaround_) == 0x0170);
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SoundParameter) == 0x0178);
static_assert(offsetof(ABP_FluxNiagaraActor_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(ABP_FluxNiagaraActor_C, MaterialBillboard) == 0x02D0);
static_assert(offsetof(ABP_FluxNiagaraActor_C, Volume) == 0x02D8);
static_assert(offsetof(ABP_FluxNiagaraActor_C, Niagara) == 0x02E0);
static_assert(offsetof(ABP_FluxNiagaraActor_C, Scene) == 0x02E8);
static_assert(offsetof(ABP_FluxNiagaraActor_C, VolumeSize) == 0x02F0);
static_assert(offsetof(ABP_FluxNiagaraActor_C, NiagaraSystem) == 0x0310);
static_assert(offsetof(ABP_FluxNiagaraActor_C, InteractionClass) == 0x0328);
static_assert(offsetof(ABP_FluxNiagaraActor_C, InteractionActor) == 0x0330);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, UberGraphFrame) == 0x0520);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_Root) == 0x0528);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0558);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TransitionResult0) == 0x0580);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TransitionResult1) == 0x05A8);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TransitionResult2) == 0x05D0);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TransitionResult3) == 0x05F8);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TransitionResult4) == 0x0620);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_SBSequencePlayer) == 0x0648);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_StateResult) == 0x0708);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_BlendSpacePlayer) == 0x0738);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_StateResult5) == 0x0890);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_SBSequencePlayer6) == 0x08C0);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_StateResult7) == 0x0980);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_BlendSpacePlayer8) == 0x09B0);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_StateResult9) == 0x0B08);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_StateMachine) == 0x0B38);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x0BE8);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_TwoWayBlend10) == 0x0CB0);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0D78);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0E40);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_SequenceBlendedPlayer) == 0x0F98);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_SequenceBlendedPlayer11) == 0x1040);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x10E8);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x1110);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x1130);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_HitBones) == 0x1150);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_SequenceBlendedPlayer12) == 0x13A8);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_LookAtIK) == 0x1450);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_SequenceBlendedPlayer13) == 0x15F0);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x1698);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_LayeredBoneBlend14) == 0x1778);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_LayeredBoneBlend15) == 0x1858);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, SBAnimGraphNode_SequenceBlendedPlayer16) == 0x1938);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x19E0);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x1A80);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_SequencePlayer17) == 0x1B08);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_ControlRig) == 0x1B90);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, AnimGraphNode_SequencePlayer18) == 0x1F00);
static_assert(offsetof(UCH_NPC_TachyNPC_AnimBP_C, __CustomProperty_ActorLocation_8AD4B49D45DAD560210EA3A423F4A7FD) == 0x1F94);
static_assert(offsetof(UBP_FluxMeshGenerator_C, HeightBuffer) == 0x00C0);
static_assert(offsetof(UBP_FluxMeshGenerator_C, VelocityBuffer) == 0x00C8);
static_assert(offsetof(UBP_FluxMeshGenerator_C, ReadHeightMaterial) == 0x00D0);
static_assert(offsetof(UBP_FluxMeshGenerator_C, ReadVelocityMaterial) == 0x00D8);
static_assert(offsetof(ABP_FluxOceanWave_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(ABP_FluxOceanWave_C, MaterialBillboard) == 0x02D0);
static_assert(offsetof(ABP_FluxOceanWave_C, Box) == 0x02D8);
static_assert(offsetof(ABP_FluxOceanWave_C, DebugPlane) == 0x02E0);
static_assert(offsetof(ABP_FluxOceanWave_C, DefaultSceneRoot) == 0x02E8);
static_assert(offsetof(ABP_FluxOceanWave_C, GeneratorMaterial) == 0x02F0);
static_assert(offsetof(ABP_FluxOceanWave_C, GeneratorInstance) == 0x02F8);
static_assert(offsetof(ABP_FluxOceanWave_C, TexturePreview) == 0x0300);
static_assert(offsetof(ABP_FluxOceanWave_C, TextureFormat) == 0x030C);
static_assert(offsetof(ABP_FluxOceanWave_C, PreviewMaterial) == 0x0310);
static_assert(offsetof(ABP_FluxOceanWave_C, PreviewInstance) == 0x0320);
static_assert(offsetof(ABP_FluxOceanWave_C, WindDirection) == 0x0338);
static_assert(offsetof(ABP_FluxOceanWave_C, TextureTransform) == 0x0340);
static_assert(offsetof(ABP_FluxOceanWave_C, WindOffset) == 0x0354);
static_assert(offsetof(ABP_FluxOceanWave_C, DebugMesh) == 0x0360);
static_assert(offsetof(FBS_FluxSplashData, VisualEffect_9_72FD08AB47A15EC87C5F8C9C52E833C9) == 0x0000);
static_assert(offsetof(FBS_FluxSplashData, AudioEffect_10_249DEA304B20F5D999A818968AFF37EB) == 0x0008);
static_assert(offsetof(ABP_FluxSurface_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(ABP_FluxSurface_C, BP_FluxAudioComponent) == 0x02D0);
static_assert(offsetof(ABP_FluxSurface_C, DecalCausticsWet) == 0x02D8);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceProceduralMesh) == 0x02E0);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceOverMesh) == 0x02E8);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceUnderMesh) == 0x02F0);
static_assert(offsetof(ABP_FluxSurface_C, VolumeAbsorbtion) == 0x02F8);
static_assert(offsetof(ABP_FluxSurface_C, VolumeScattering) == 0x0300);
static_assert(offsetof(ABP_FluxSurface_C, BP_FluxDataComponent) == 0x0308);
static_assert(offsetof(ABP_FluxSurface_C, VolumeAudio) == 0x0310);
static_assert(offsetof(ABP_FluxSurface_C, VolumePostProcess) == 0x0318);
static_assert(offsetof(ABP_FluxSurface_C, VolumeCollision) == 0x0320);
static_assert(offsetof(ABP_FluxSurface_C, BP_TextureReader) == 0x0328);
static_assert(offsetof(ABP_FluxSurface_C, DefaultSceneRoot) == 0x0330);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceMeshMode) == 0x0338);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceMeshTransform) == 0x0340);
static_assert(offsetof(ABP_FluxSurface_C, ExtendVolumeSize) == 0x0370);
static_assert(offsetof(ABP_FluxSurface_C, SimulationState) == 0x0380);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceOverMaterial) == 0x0388);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceUnderMaterial) == 0x0390);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceDistantMaterial) == 0x0398);
static_assert(offsetof(ABP_FluxSurface_C, CausticsWetMaterial) == 0x03A0);
static_assert(offsetof(ABP_FluxSurface_C, PostprocessMaterial) == 0x03A8);
static_assert(offsetof(ABP_FluxSurface_C, VolumeAbsorptionMaterial) == 0x03B0);
static_assert(offsetof(ABP_FluxSurface_C, VolumeScatteringMaterial) == 0x03B8);
static_assert(offsetof(ABP_FluxSurface_C, MaterialInstances) == 0x03C0);
static_assert(offsetof(ABP_FluxSurface_C, InteractionInstances) == 0x03D0);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceOverInstance) == 0x03E0);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceUnderInstance) == 0x03E8);
static_assert(offsetof(ABP_FluxSurface_C, CausticsInstance) == 0x03F0);
static_assert(offsetof(ABP_FluxSurface_C, PostprocessInstance) == 0x03F8);
static_assert(offsetof(ABP_FluxSurface_C, VolumeAbsorptionInstance) == 0x0400);
static_assert(offsetof(ABP_FluxSurface_C, WaveTextureActor) == 0x0408);
static_assert(offsetof(ABP_FluxSurface_C, WaterBody) == 0x0418);
static_assert(offsetof(ABP_FluxSurface_C, GeneratedSurfaceOverMaterial) == 0x0428);
static_assert(offsetof(ABP_FluxSurface_C, AudioExtendDistance) == 0x0440);
static_assert(offsetof(ABP_FluxSurface_C, AudioAmbient) == 0x0450);
static_assert(offsetof(ABP_FluxSurface_C, VolumeScatteringInstance) == 0x0458);
static_assert(offsetof(ABP_FluxSurface_C, UnderSurfaceComponents) == 0x0460);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceDistantInstance) == 0x0470);
static_assert(offsetof(ABP_FluxSurface_C, DistantMeshes) == 0x0480);
static_assert(offsetof(ABP_FluxSurface_C, InteractionSplashes) == 0x0490);
static_assert(offsetof(ABP_FluxSurface_C, AudioAmbientOver__UE5_Workaround_) == 0x04E0);
static_assert(offsetof(ABP_FluxSurface_C, AudioAmbientUnder__UE5_Workaround_) == 0x04E8);
static_assert(offsetof(ABP_FluxSurface_C, CameraComponent) == 0x04F8);
static_assert(offsetof(ABP_FluxSurface_C, GeneratedMeshStats) == 0x0550);
static_assert(offsetof(ABP_FluxSurface_C, GridType) == 0x0560);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceOverMeshList) == 0x0568);
static_assert(offsetof(ABP_FluxSurface_C, SurfaceOverMesh_PhysMaterialOverride) == 0x0578);
static_assert(offsetof(UBP_FluxSolverComponent_C, UberGraphFrame) == 0x00C0);
static_assert(offsetof(UBP_FluxSolverComponent_C, SimulationInstance) == 0x00D0);
static_assert(offsetof(UBP_FluxSolverComponent_C, NormalInstance) == 0x00D8);
static_assert(offsetof(UBP_FluxSolverComponent_C, InteractionInstance) == 0x00E0);
static_assert(offsetof(UBP_FluxSolverComponent_C, ActiveInteractions) == 0x00F0);
static_assert(offsetof(UBP_FluxSolverComponent_C, NormalTexture) == 0x0108);
static_assert(offsetof(UBP_FluxSolverComponent_C, Heightmap0) == 0x0110);
static_assert(offsetof(UBP_FluxSolverComponent_C, Heightmap1) == 0x0118);
static_assert(offsetof(UBP_FluxSolverComponent_C, Heightmap2) == 0x0120);
static_assert(offsetof(UBP_FluxSolverComponent_C, SimulationFormat) == 0x0128);
static_assert(offsetof(UBP_FluxSolverComponent_C, NormalFormat) == 0x0134);
static_assert(offsetof(UBP_FluxSolverComponent_C, CapturedFocusActor) == 0x0140);
static_assert(offsetof(UBP_FluxSolverComponent_C, CaptureFocusLocation) == 0x0150);
static_assert(offsetof(UBP_FluxSolverComponent_C, WorldOffset) == 0x0160);
static_assert(offsetof(UBP_FluxSolverComponent_C, WorldOffsetPrev) == 0x0168);
static_assert(offsetof(UBP_FluxSolverComponent_C, WorldToInteractionUV) == 0x017C);
static_assert(offsetof(UBP_FluxSolverComponent_C, InteractionRenderers) == 0x0190);
static_assert(offsetof(UBP_FluxSolverComponent_C, State) == 0x01A8);
static_assert(offsetof(UDron_AnimBP_C, UberGraphFrame) == 0x0520);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_Root) == 0x0528);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0558);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult0) == 0x0580);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult1) == 0x05A8);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult2) == 0x05D0);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult3) == 0x05F8);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult4) == 0x0620);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult5) == 0x0648);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult6) == 0x0670);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult7) == 0x0698);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult8) == 0x06C0);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult9) == 0x06E8);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult10) == 0x0710);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult11) == 0x0738);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult12) == 0x0760);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_TransitionResult13) == 0x0788);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x07B0);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult) == 0x0838);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_SequencePlayer14) == 0x0868);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult15) == 0x08F0);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0920);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult16) == 0x0A10);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_SequencePlayer17) == 0x0A40);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult18) == 0x0AC8);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_BlendSpacePlayer19) == 0x0AF8);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult20) == 0x0BE8);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_SequencePlayer21) == 0x0C18);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult22) == 0x0CA0);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_SequencePlayer23) == 0x0CD0);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult24) == 0x0D58);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_BlendSpacePlayer25) == 0x0D88);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult26) == 0x0E78);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_SequencePlayer27) == 0x0EA8);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult28) == 0x0F30);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_BlendSpacePlayer29) == 0x0F60);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateResult30) == 0x1050);
static_assert(offsetof(UDron_AnimBP_C, AnimGraphNode_StateMachine) == 0x1080);
static_assert(offsetof(ABP_Dron_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(ABP_Dron_C, SBSkeletalMesh) == 0x02D0);
static_assert(offsetof(ABP_Dron_C, SpotLight) == 0x02D8);
static_assert(offsetof(ABP_Dron_C, cube) == 0x02E0);
static_assert(offsetof(ABP_Dron_C, DefaultSceneRoot) == 0x02E8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, UberGraphFrame) == 0x0520);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone) == 0x0528);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone0) == 0x0680);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_KawaiiPhysics) == 0x07E0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ModifyBone) == 0x0F70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ModifyBone1) == 0x1078);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ModifyBone2) == 0x1180);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive) == 0x1288);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer) == 0x1350);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_RandomPlayer) == 0x13D8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByInt) == 0x1450);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig) == 0x14F0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_LookAtIK) == 0x1860);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig3) == 0x1A00);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer4) == 0x1D70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TwoWayBlend) == 0x1DF8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_PoseSnapshot) == 0x1EC0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive5) == 0x1F70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer6) == 0x2038);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone7) == 0x20C0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone8) == 0x2218);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone9) == 0x2370);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone10) == 0x24C8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_LookAtIK11) == 0x2620);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_LookAtIK12) == 0x27C0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer13) == 0x2960);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer14) == 0x29E8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend) == 0x2A70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig15) == 0x2B50);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByInt16) == 0x2EC0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend17) == 0x2F60);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer) == 0x3040);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_LookAtIK18) == 0x30F0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive19) == 0x3290);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer) == 0x3358);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig20) == 0x34B0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer21) == 0x3820);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig22) == 0x38A8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone23) == 0x3C18);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone24) == 0x3D70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone25) == 0x3EC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone26) == 0x4020);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LocalToComponentSpace) == 0x4178);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ComponentToLocalSpace) == 0x4198);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ModifyBone27) == 0x41B8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_UseCachedPose) == 0x42C0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_UseCachedPose28) == 0x42E8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SaveCachedPose) == 0x4310);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend29) == 0x4468);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer30) == 0x4548);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer31) == 0x46A0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig32) == 0x47F8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig33) == 0x4B68);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig34) == 0x4ED8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TwoWayBlend35) == 0x5248);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_HitBones) == 0x5310);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend36) == 0x5568);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig37) == 0x5648);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LocalToComponentSpace38) == 0x59B8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ComponentToLocalSpace39) == 0x59D8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig40) == 0x59F8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_EventMoveTwoBoneIK) == 0x5D70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_EventMoveTwoBoneIK41) == 0x6390);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_EventMoveTwoBoneIK42) == 0x69B0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_EventMoveTwoBoneIK43) == 0x6FD0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_EventMoveIK) == 0x75F0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer44) == 0x7AD0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TwoWayBlend45) == 0x7B78);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive46) == 0x7C40);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive47) == 0x7D08);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_Constraint) == 0x7DD0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_Constraint48) == 0x7ED8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone49) == 0x7FE0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_PoseSnapshot50) == 0x8138);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer51) == 0x81E8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone52) == 0x8270);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer53) == 0x83C8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive54) == 0x8450);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ModifyBone55) == 0x8518);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone56) == 0x8620);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone57) == 0x8778);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone58) == 0x88D0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone59) == 0x8A28);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone60) == 0x8B80);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone61) == 0x8CD8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_LookAtIK62) == 0x8E30);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone63) == 0x8FD0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_LookAtIK64) == 0x9130);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_Constraint65) == 0x92D0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend66) == 0x93D8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer67) == 0x94B8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_CustomBlendSpacePlayer) == 0x9560);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TwoWayBlend68) == 0x9660);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ControlRig69) == 0x9728);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend70) == 0x9A98);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult) == 0x9B78);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult71) == 0x9BA0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult72) == 0x9BC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult73) == 0x9BF0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer74) == 0x9C18);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult) == 0x9CA0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer75) == 0x9CD0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult76) == 0x9D58);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer77) == 0x9D88);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult78) == 0x9E10);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer79) == 0x9E40);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult80) == 0x9EC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateMachine) == 0x9EF8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_Constraint81) == 0x9FA8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone82) == 0xA0B0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone83) == 0xA208);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone84) == 0xA360);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone85) == 0xA4B8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer86) == 0xA610);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer87) == 0xA6B8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive88) == 0xA760);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer89) == 0xA828);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SaveCachedPose90) == 0xA8D0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult91) == 0xAA28);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult92) == 0xAA50);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult93) == 0xAA78);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult94) == 0xAAA0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult95) == 0xAAC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult96) == 0xAAF0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult97) == 0xAB18);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult98) == 0xAB40);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult99) == 0xAB68);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult100) == 0xAB90);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult101) == 0xABB8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult102) == 0xABE0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult103) == 0xAC08);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult104) == 0xAC30);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult105) == 0xAC58);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult106) == 0xAC80);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult107) == 0xACA8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult108) == 0xACD0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult109) == 0xACF8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult110) == 0xAD20);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult111) == 0xAD48);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult112) == 0xAD70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult113) == 0xAD98);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult114) == 0xADC0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult115) == 0xADE8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult116) == 0xAE10);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult117) == 0xAE38);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult118) == 0xAE60);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult119) == 0xAE88);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult120) == 0xAEB0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult121) == 0xAED8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult122) == 0xAF00);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult123) == 0xAF28);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult124) == 0xAF50);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult125) == 0xAF78);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult126) == 0xAFA0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult127) == 0xAFC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult128) == 0xAFF0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult129) == 0xB018);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TransitionResult130) == 0xB040);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer131) == 0xB068);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult132) == 0xB1C0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer133) == 0xB1F0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer134) == 0xB278);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool) == 0xB300);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer135) == 0xB3A0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer136) == 0xB428);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool137) == 0xB4B0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool138) == 0xB550);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer139) == 0xB5F0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer140) == 0xB748);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer141) == 0xB7D0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool142) == 0xB858);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer143) == 0xB8F8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer144) == 0xBA50);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool145) == 0xBAD8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer146) == 0xBB78);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer147) == 0xBC00);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer148) == 0xBC88);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool149) == 0xBD10);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer150) == 0xBDB0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer151) == 0xBE38);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer152) == 0xBEC0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByEnum) == 0xBF48);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer153) == 0xBFF8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult154) == 0xC080);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer155) == 0xC0B0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult156) == 0xC208);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer157) == 0xC238);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult158) == 0xC390);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer) == 0xC3C0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool159) == 0xC4B0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer160) == 0xC550);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer161) == 0xC640);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool162) == 0xC730);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer163) == 0xC7D0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer164) == 0xC858);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool165) == 0xC8E0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool166) == 0xC980);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool167) == 0xCA20);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool168) == 0xCAC0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer169) == 0xCB60);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer170) == 0xCC50);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult171) == 0xCD40);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer172) == 0xCD70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive173) == 0xCE60);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool174) == 0xCF28);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer175) == 0xCFC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer176) == 0xD050);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool177) == 0xD0D8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer178) == 0xD178);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool179) == 0xD268);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer180) == 0xD308);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool181) == 0xD3F8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer182) == 0xD498);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool183) == 0xD588);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer184) == 0xD628);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool185) == 0xD718);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer186) == 0xD7B8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool187) == 0xD8A8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer188) == 0xD948);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool189) == 0xDAA0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer190) == 0xDB40);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult191) == 0xDC98);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer192) == 0xDCC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult193) == 0xDE20);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer194) == 0xDE50);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool195) == 0xDED8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer196) == 0xDF78);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult197) == 0xE000);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SBSequencePlayer) == 0xE030);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult198) == 0xE0F0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_OverriddenBlendSpacePlayer) == 0xE120);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend199) == 0xE218);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend200) == 0xE2F8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_OverriddenBlendSpacePlayer201) == 0xE3D8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_OverriddenBlendSpacePlayer202) == 0xE4D0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend203) == 0xE5C8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool204) == 0xE6A8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer205) == 0xE748);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer206) == 0xE8A0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult207) == 0xE9F8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer208) == 0xEA28);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult209) == 0xEB80);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer210) == 0xEBB0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool211) == 0xEC38);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SBSequencePlayer212) == 0xECD8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult213) == 0xED98);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_OverriddenBlendSpacePlayer214) == 0xEDC8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend215) == 0xEEC0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool216) == 0xEFA0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_OverriddenBlendSpacePlayer217) == 0xF040);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer218) == 0xF138);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer219) == 0xF228);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool220) == 0xF380);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer221) == 0xF420);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool222) == 0xF578);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer223) == 0xF618);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool224) == 0xF708);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer225) == 0xF7A8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend226) == 0xF898);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool227) == 0xF978);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer228) == 0xFA18);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendSpacePlayer229) == 0xFB08);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByInt230) == 0xFBF8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_BlendListByBool231) == 0xFC98);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SBMotionPlayer) == 0xFD40);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_BlendSpacePlayer232) == 0xFF20);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateResult233) == 0x10078);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_StateMachine234) == 0x100A8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LayeredBoneBlend235) == 0x10158);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive236) == 0x10238);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ModifyBone237) == 0x10300);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ModifyBone238) == 0x10408);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SequencePlayer239) == 0x10510);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone240) == 0x10598);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone241) == 0x106F0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone242) == 0x10848);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SpringBone243) == 0x109A0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ComponentToLocalSpace244) == 0x10AF8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_LocalToComponentSpace245) == 0x10B18);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TwoWayBlend246) == 0x10B38);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer247) == 0x10C00);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_TwoWayBlend248) == 0x10CA8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer249) == 0x10D70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_ApplyAdditive250) == 0x10E18);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBAnimGraphNode_SequenceBlendedPlayer251) == 0x10EE0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_UseCachedPose252) == 0x10F88);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_SaveCachedPose253) == 0x10FB0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimGraphNode_Root) == 0x11108);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_HeadLookAtLocation_38B751CB4C9EBF7614C7BB87FF34604C) == 0x11144);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_CameraRotation_38B751CB4C9EBF7614C7BB87FF34604C) == 0x11150);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_CameraLocation_38B751CB4C9EBF7614C7BB87FF34604C) == 0x1115C);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_TargetSocketLocation_D9D0063B41A17BB2DC253AB7CAC5DB8E) == 0x11198);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_MySocketLocalLocation_D9D0063B41A17BB2DC253AB7CAC5DB8E) == 0x111A4);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_MyAttachBoneName_D9D0063B41A17BB2DC253AB7CAC5DB8E) == 0x111B0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_IKBoneName_D9D0063B41A17BB2DC253AB7CAC5DB8E) == 0x111B8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_RecordRootTransform1_8E6956CF4B3EA5A1198A1D9AD55D2EE1) == 0x111D0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_RecordRootTransform0_8E6956CF4B3EA5A1198A1D9AD55D2EE1) == 0x11200);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_HitResult_8E6956CF4B3EA5A1198A1D9AD55D2EE1) == 0x11230);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_TPSAimXY_7D7F223946B6C7A4AED82F893FEC7C16) == 0x112C0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_TPSLookAtLocation_7D7F223946B6C7A4AED82F893FEC7C16) == 0x112CC);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_TPSHandSocket_7D7F223946B6C7A4AED82F893FEC7C16) == 0x112D8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_AimTarget_7D7F223946B6C7A4AED82F893FEC7C16) == 0x112E8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, __CustomProperty_ActorLocation_66DE1D55432220E8F6D6EBA1E9531850) == 0x112F8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, RunBlendMode) == 0x11334);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, Acceleration) == 0x11360);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, MoveToIdleFootPlacement) == 0x11380);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, LastMoveType) == 0x11381);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, RightFootNormal) == 0x11390);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, LeftFootNormal) == 0x1139C);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, Rotator) == 0x113C4);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, VLadderOffset) == 0x113DC);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, RightHitLoc) == 0x113FC);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, LeftHitLoc) == 0x11408);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, phymatR) == 0x11419);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, physmatL) == 0x1141A);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, LookAtLocation) == 0x1141C);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, DragonIKInput) == 0x11428);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, EventMoveType) == 0x11440);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, EventMoveIK_Hand_L) == 0x11450);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, EventMoveIK_Hand_R) == 0x115E0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, EventMoveIK_Foot_L) == 0x11770);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, EventMoveIK_Foot_R) == 0x11900);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, EventMoveIK_Root) == 0x11A90);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, CustomBlendSpaceInputParam) == 0x11C38);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, WeaponTransform) == 0x11C60);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AnimAccelation) == 0x11CA0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, OwnerBP) == 0x11CB0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, PropTM) == 0x11CE0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, WallRunNormal) == 0x11D14);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SBActorRightVector) == 0x11D20);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, AimXY) == 0x11D30);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, CurrentSprintVelocityDir) == 0x11D50);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, TPSAimControlRig_TargetLocation) == 0x11D60);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, LastMoveInput) == 0x11D74);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, FishingMode) == 0x11D8D);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, STS_IKBoneName) == 0x11DA8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, STS_MyAttachBoneName) == 0x11DB0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, STS_MySocketLocalLocation) == 0x11DB8);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, STS_TargetSocketLocation) == 0x11DC4);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SeqBP) == 0x11DE0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, WeaponConstraint_L_Location) == 0x11E4C);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, PoseName_PhotoMode) == 0x11E64);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, PhotoModeFacialAnimation) == 0x11E70);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SelfieCameraLocation) == 0x11E7C);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SelfieCameraRotation) == 0x11E88);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, SelfieHeadLookAtTarget) == 0x11E98);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, TPSModeType) == 0x11EAD);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, TPSHandSocket) == 0x11EB0);
static_assert(offsetof(UCH_P_EVE_01_AnimBP_New_C, TPSLookAtLocation) == 0x11EBC);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, UberGraphFrame) == 0x3880);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, SBHair) == 0x3888);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, SBPonytailShort) == 0x3890);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, SBAccSlot3) == 0x3898);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, WindOriginArrow) == 0x38A0);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, SBPonytail) == 0x38A8);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, Mesh_Face) == 0x38B0);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, SBSkeletalMesh) == 0x38B8);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, CameraOverlap) == 0x38C0);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, ACC_HairPin) == 0x38C8);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, Hidden_DestructiveCollision) == 0x38D0);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, ACCSlot) == 0x38D8);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, SBSceneCaptureComponent2D) == 0x38E0);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, HitActor) == 0x38F0);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, Dron) == 0x38F8);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, NewVar) == 0x3908);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, WaterPlane) == 0x3910);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, OverlappingWaterBody) == 0x3918);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, OverlappingGravityBox) == 0x3920);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, ValidWaterBodies) == 0x3928);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, LegRSocketLastLoc) == 0x3948);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, LegLSocketLastLoc) == 0x395C);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, EventTagName) == 0x396C);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, HairWindRootTarget) == 0x39BD);
static_assert(offsetof(ACH_P_EVE_01_Sequncer_BP_C, HairWindVector) == 0x39C0);
static_assert(offsetof(ABP_FluxSimulation_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(ABP_FluxSimulation_C, DebugCage) == 0x02D0);
static_assert(offsetof(ABP_FluxSimulation_C, Scene) == 0x02D8);
static_assert(offsetof(ABP_FluxSimulation_C, MaterialBillboard) == 0x02E0);
static_assert(offsetof(ABP_FluxSimulation_C, HeightmapPreview) == 0x02E8);
static_assert(offsetof(ABP_FluxSimulation_C, VolumeBox) == 0x02F0);
static_assert(offsetof(ABP_FluxSimulation_C, CaptureHeightMap) == 0x02F8);
static_assert(offsetof(ABP_FluxSimulation_C, HiddenActors) == 0x0308);
static_assert(offsetof(ABP_FluxSimulation_C, HiddenClass) == 0x0318);
static_assert(offsetof(ABP_FluxSimulation_C, ShowOnlyActors) == 0x0328);
static_assert(offsetof(ABP_FluxSimulation_C, ShowOnlyClass) == 0x0338);
static_assert(offsetof(ABP_FluxSimulation_C, PrimitiveRender) == 0x0348);
static_assert(offsetof(ABP_FluxSimulation_C, Editor) == 0x0350);
static_assert(offsetof(ABP_FluxSimulation_C, InitialState) == 0x0358);
static_assert(offsetof(ABP_FluxSimulation_C, CurrentState) == 0x0360);
static_assert(offsetof(ABP_FluxSimulation_C, AreaResolution) == 0x0388);
static_assert(offsetof(ABP_FluxSimulation_C, AreaWorldSize) == 0x0390);
static_assert(offsetof(ABP_FluxSimulation_C, AreaWorldSize_m_) == 0x0398);
static_assert(offsetof(ABP_FluxSimulation_C, WorldToSimulationUV) == 0x03A0);
static_assert(offsetof(ABP_FluxSimulation_C, IntegrateHeightTarget) == 0x03F0);
static_assert(offsetof(ABP_FluxSimulation_C, IntegrateVelocityTarget) == 0x03F8);
static_assert(offsetof(ABP_FluxSimulation_C, NormalHeightPing) == 0x0400);
static_assert(offsetof(ABP_FluxSimulation_C, NormalHeightPong) == 0x0408);
static_assert(offsetof(ABP_FluxSimulation_C, IntegrateHeight) == 0x0410);
static_assert(offsetof(ABP_FluxSimulation_C, IntegrateVelocity) == 0x0418);
static_assert(offsetof(ABP_FluxSimulation_C, WaterNormalHeight) == 0x0420);
static_assert(offsetof(ABP_FluxSimulation_C, ModifierActors) == 0x0428);
static_assert(offsetof(ABP_FluxSimulation_C, IntegrateHeightInstance) == 0x0438);
static_assert(offsetof(ABP_FluxSimulation_C, IntegrateVelocityInstance) == 0x0440);
static_assert(offsetof(ABP_FluxSimulation_C, WaterNormalHeightInstance) == 0x0448);
static_assert(offsetof(ABP_FluxSimulation_C, BasicInstances) == 0x0450);
static_assert(offsetof(ABP_FluxSimulation_C, HeightmapTexture) == 0x0468);
static_assert(offsetof(ABP_FluxSimulation_C, HeightmapPreviewInstance) == 0x0470);
static_assert(offsetof(ABP_FluxSimulation_C, LoadHeightInstance) == 0x0478);
static_assert(offsetof(ABP_FluxSimulation_C, LoadVelocityInstance) == 0x0480);
static_assert(offsetof(ABP_FluxSimulation_C, HeightmapMaterial) == 0x0488);
static_assert(offsetof(ABP_FluxSimulation_C, PreviewSurfaceActor) == 0x0490);
static_assert(offsetof(ABP_FluxSimulation_C, RenderActor) == 0x0498);
static_assert(offsetof(ABP_FluxSimulation_C, PreviewSurface) == 0x04A0);
static_assert(offsetof(ABP_FluxSimulation_C, SurfaceRenderMode) == 0x04A8);
static_assert(offsetof(ABP_FluxSimulation_C, SurfaceActorReference) == 0x04B0);
static_assert(offsetof(ABP_FluxSimulation_C, ClearWetInstance) == 0x04B8);
static_assert(offsetof(ABP_FluxSimulation_C, SurfaceActorRenderer) == 0x04D0);
static_assert(offsetof(ABP_FluxSimulation_C, BoundsPreviewInstance) == 0x04E0);
static_assert(offsetof(ABP_FluxSimulation_C, HeightmapUpdateInstance) == 0x04E8);
static_assert(offsetof(ABP_FluxSimulation_C, HeightmapUpdateTexture) == 0x04F0);
static_assert(offsetof(ABP_FluxSimulation_C, DebugMesh) == 0x0500);
static_assert(offsetof(ABP_FluxSimulation_C, HeightmapPostprocessInstance) == 0x0528);
static_assert(offsetof(ABP_FluxSimulation_C, DisableSimulationState) == 0x0538);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, UberGraphFrame) == 0x3880);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, BP_FluxDataComponent) == 0x3888);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, BP_FluxModifierForceComponent) == 0x3890);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, BP_FluxInteractionComponent) == 0x3898);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, Mesh_Face) == 0x38A0);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, BodyCollision) == 0x38A8);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, SBEnvOrigin) == 0x38B0);
static_assert(offsetof(ACH_NPC_TachyNPC_Blueprint_C, weapon) == 0x38C0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, UberGraphFrame) == 0x3880);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, AMB_FusionMode) == 0x3888);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BGM_FusionMode) == 0x3890);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, SBPonytailShort) == 0x3898);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, AMB_TachyMode) == 0x38A0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BGM_TachyMode) == 0x38A8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, TachyModeVBComp) == 0x38B0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, RainHaptic) == 0x38B8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, SBAccSlot3) == 0x38C0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, WindOriginArrow) == 0x38C8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, SBAccSlot1) == 0x38D0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BP_FluxModifierForceComponent) == 0x38D8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BP_FluxDataComponent) == 0x38E0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BP_FluxInteractionComponent) == 0x38E8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, WeaponPhysicsCollision) == 0x38F0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, AssistanceSlot) == 0x38F8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BodyCollision) == 0x3900);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, SBPonytail) == 0x3908);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, Mesh_Face) == 0x3910);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, SBHair) == 0x3918);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, CameraOverlap) == 0x3920);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, ACC_HairPin) == 0x3928);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, SBSceneCaptureComponent2D) == 0x3930);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, Dron) == 0x3940);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, WaterPlane) == 0x3950);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, OverlappingWaterBody) == 0x3958);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, OverlappingGravityBox) == 0x3960);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, LegRSocketLastLoc) == 0x3978);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, LegLSocketLastLoc) == 0x398C);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, EventTagName) == 0x399C);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, HairBonesCentre) == 0x39C0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, HairBonesRight) == 0x39D0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, HairBonesLeft) == 0x39E0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, HairSprayComp) == 0x3A08);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, PPS_Footstep_auto) == 0x3A10);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, In_Vector) == 0x3A1C);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, WeaponComponent) == 0x3A48);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, RadialForceLocation) == 0x3A58);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, WeaponMaterials) == 0x3A78);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, preSkeletalMesh) == 0x3A88);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, preMaterials) == 0x3A90);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, FishingRod) == 0x3AA0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, TachyModeBGM) == 0x3AB0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, TachyModeAMB) == 0x3AB8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BodyRainSplashFX) == 0x3AE0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BP_FluxSurface_Ocean) == 0x3AF0);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, Texture_Parameter_Values) == 0x3AF8);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BP_FluxOcean_Wave) == 0x3B08);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, BP_FluxSimulation) == 0x3B10);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, TachyModeMusic) == 0x3B28);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, HairWindRootTarget) == 0x3B31);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, HairWindVector) == 0x3B34);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, SkeletalMeshName) == 0x3B44);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, EventCustomNameValue) == 0x3B4C);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, UnderWaterSwimFX) == 0x3B58);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, UnderWaterSwimMouthFX) == 0x3B60);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, TachyModeSkeletalMesh) == 0x3B70);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, TachyFusionModeSkeletalMesh) == 0x3B78);
static_assert(offsetof(ACH_P_EVE_01_Blueprint_C, TachyFusionNoAccSkeletalMesh) == 0x3B88);
static_assert(offsetof(UCH_W_Sword_03_AnimBP_C, UberGraphFrame) == 0x0520);
static_assert(offsetof(UCH_W_Sword_03_AnimBP_C, AnimGraphNode_Root) == 0x0528);
static_assert(offsetof(UCH_W_Sword_03_AnimBP_C, SBAnimGraphNode_SequenceBlendedPlayer) == 0x0558);
static_assert(offsetof(UCH_W_Sword_03_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x0600);
static_assert(offsetof(UCH_W_Sword_03_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x06C8);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, UberGraphFrame) == 0x0520);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_Root) == 0x0528);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0558);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_TransitionResult0) == 0x0580);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x05A8);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_StateResult) == 0x0630);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_SequencePlayer1) == 0x0660);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_StateResult2) == 0x06E8);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_StateMachine) == 0x0718);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x07C8);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, AnimGraphNode_SequencePlayer3) == 0x0890);
static_assert(offsetof(UCH_ACC_HairPin_AnimBP_C, Swording) == 0x0918);
static_assert(offsetof(ADitherStaticMeshActor_C, UberGraphFrame) == 0x02D8);
static_assert(offsetof(ADitherStaticMeshActor_C, Box) == 0x02E0);
static_assert(offsetof(ADitherStaticMeshActor_C, DitherActorComponent) == 0x02E8);
static_assert(offsetof(AWaterSimUpdater_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(AWaterSimUpdater_C, Billboard) == 0x02D0);
static_assert(offsetof(AWaterSimUpdater_C, SceneCaptureComponent2D) == 0x02D8);
static_assert(offsetof(AWaterSimUpdater_C, DefaultSceneRoot) == 0x02E0);
static_assert(offsetof(AWaterSimUpdater_C, WaterFXType) == 0x02EC);
static_assert(offsetof(AWaterSimUpdater_C, ForceSplat_mat_dyn) == 0x0308);
static_assert(offsetof(AWaterSimUpdater_C, ComputeNormal_mat_dyn) == 0x0310);
static_assert(offsetof(AWaterSimUpdater_C, HeightSim_mat_dyn) == 0x0318);
static_assert(offsetof(AWaterSimUpdater_C, DepthCapture_dyn) == 0x0320);
static_assert(offsetof(AWaterSimUpdater_C, SceneCaptureTarget) == 0x0328);
static_assert(offsetof(AWaterSimUpdater_C, HeightfieldNormal) == 0x0330);
static_assert(offsetof(AWaterSimUpdater_C, Height0) == 0x0338);
static_assert(offsetof(AWaterSimUpdater_C, Height1) == 0x0340);
static_assert(offsetof(AWaterSimUpdater_C, Height2) == 0x0348);
static_assert(offsetof(AWaterSimUpdater_C, RenderTargetClearColor) == 0x035C);
static_assert(offsetof(AWaterSimUpdater_C, ActivePrimitiveComponents) == 0x0370);
static_assert(offsetof(AWaterSimUpdater_C, AciveParticleComponents) == 0x0380);
static_assert(offsetof(AWaterSimUpdater_C, ActiveSkeletalMeshComponents) == 0x0388);
static_assert(offsetof(AWaterSimUpdater_C, LocalActiveSkelMesh) == 0x0390);
static_assert(offsetof(AWaterSimUpdater_C, LocalActivePrimitiveComponent) == 0x0398);
static_assert(offsetof(AWaterSimUpdater_C, WaterOutPP) == 0x03A0);
static_assert(offsetof(AWaterSimUpdater_C, bubbleFX) == 0x03B0);
static_assert(offsetof(AWaterSimUpdater_C, ActivatedWaterBodies) == 0x03C0);
static_assert(offsetof(AWaterSimUpdater_C, CalcSimTimer) == 0x03D8);
static_assert(offsetof(AWaterSimUpdater_C, Player) == 0x03E8);
static_assert(offsetof(AGlobalUpdater_BP_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(AGlobalUpdater_BP_C, DefaultSceneRoot) == 0x02D0);
static_assert(offsetof(AGlobalUpdater_BP_C, PrimitiveComponentToAdd) == 0x02E0);
static_assert(offsetof(AGlobalUpdater_BP_C, SkeletalMeshComponentToAdd) == 0x02E8);
static_assert(offsetof(AGlobalUpdater_BP_C, CharacterMeshToAdd) == 0x02F8);
static_assert(offsetof(AGlobalUpdater_BP_C, WaterSimUpdater) == 0x0308);
static_assert(offsetof(AWaterBody_BP0_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(AWaterBody_BP0_C, HeightMapCaptureMesh) == 0x02D0);
static_assert(offsetof(AWaterBody_BP0_C, PostProcess) == 0x02D8);
static_assert(offsetof(AWaterBody_BP0_C, OverlapBox) == 0x02E0);
static_assert(offsetof(AWaterBody_BP0_C, ActivationBox) == 0x02E8);
static_assert(offsetof(AWaterBody_BP0_C, WaterPlaneMesh) == 0x02F0);
static_assert(offsetof(AWaterBody_BP0_C, PlaneCollider) == 0x02F8);
static_assert(offsetof(AWaterBody_BP0_C, DefaultSceneRoot) == 0x0300);
static_assert(offsetof(AWaterBody_BP0_C, WaterMeshAsset) == 0x0308);
static_assert(offsetof(AWaterBody_BP0_C, EndPoint) == 0x0314);
static_assert(offsetof(AWaterBody_BP0_C, WaterMaterial) == 0x0320);
static_assert(offsetof(AWaterBody_BP0_C, WaterFXType) == 0x0328);
static_assert(offsetof(AWaterBody_BP0_C, ActivePrimitiveComponents) == 0x0340);
static_assert(offsetof(AWaterBody_BP0_C, ActiveSkeletalMeshComponents) == 0x0350);
static_assert(offsetof(AWaterBody_BP0_C, LocalActiveSkelMesh) == 0x0358);
static_assert(offsetof(AWaterBody_BP0_C, LocalActivePrimitiveComponent) == 0x0360);
static_assert(offsetof(AWaterBody_BP0_C, WaterOutPP) == 0x0368);
static_assert(offsetof(AWaterBody_BP0_C, bubbleNiaFX) == 0x0378);
static_assert(offsetof(AWaterBody_BP0_C, BP_GlobalUpdater) == 0x0380);
static_assert(offsetof(AWaterBody_BP0_C, WaterPlaneMeshSize) == 0x0388);
static_assert(offsetof(FSplashFadeWidgetInfo, TargetWidget_5_5FB3407E48B9FE5562191A918EAE3A55) == 0x0008);
static_assert(offsetof(UWB_Splash_Set_C, UberGraphFrame) == 0x0680);
static_assert(offsetof(UWB_Splash_Set_C, SplashOutAni) == 0x0688);
static_assert(offsetof(UWB_Splash_Set_C, SplashInAni) == 0x0690);
static_assert(offsetof(UWB_Splash_Set_C, LoadingAni) == 0x0698);
static_assert(offsetof(UWB_Splash_Set_C, Button_Action) == 0x06A0);
static_assert(offsetof(UWB_Splash_Set_C, Throbber) == 0x06A8);
static_assert(offsetof(UWB_Splash_Set_C, WB_ShiftUp_Splash) == 0x06B0);
static_assert(offsetof(UWB_Splash_Set_C, WB_Sony_Splash) == 0x06B8);
static_assert(offsetof(UWB_Splash_Set_C, WB_Unreal_Splash) == 0x06C0);
static_assert(offsetof(UWB_Splash_Set_C, SplashInfoArray) == 0x0700);
static_assert(offsetof(UWB_Splash_Set_C, Target_Widget) == 0x0730);
static_assert(offsetof(UWB_Loading_Basic_C, UberGraphFrame) == 0x0750);
static_assert(offsetof(UWB_Loading_Basic_C, TextBlock) == 0x0758);
static_assert(offsetof(UWB_Loading_Basic_C, Throbber) == 0x0760);
static_assert(offsetof(FBS_FluxInteractionData, Location_10_0342F4634FB7916C0DE9CBAB9C88A476) == 0x0000);
static_assert(offsetof(FBS_MeshDefinition, Triangles_14_6262AA3F4E1CE218A85115AA4BE96C1C) == 0x0000);
static_assert(offsetof(FBS_MeshDefinition, Vertices_15_E8AFE418453520476FA3CBA576C886DE) == 0x0010);
static_assert(offsetof(FBS_MeshDefinition, TexCoords_16_4C629A5E484407F609EAB4932C6E33F0) == 0x0020);
static_assert(offsetof(FBS_MeshDefinition, Normals_17_80A7A73240297AC2D8766FB9FC89FE85) == 0x0030);
static_assert(offsetof(FBS_MeshDefinition, Colors_19_5726C34D4367889BC6A2DFB5779F300E) == 0x0040);
static_assert(offsetof(FBS_MeshDefinition, Tangents_23_DF4C41A04FE61FAEA5266EBD5BFCFDA3) == 0x0050);
