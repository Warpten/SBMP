
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

class ULayersBlueprintLibrary;
struct FActorLayer;

/// Class /Script/ActorLayerUtilities.LayersBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
    // [0] InActor : const AActor*
    // [1] Layer : const FActorLayer&
    constexpr static const FunctionPointer<ULayersBlueprintLibrary, void, const AActor*, const FActorLayer&> RemoveActorFromLayer = { 0x1977300, 0 };
    // Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors
    // [0] WorldContextObject : const UObject*
    // [1] ActorLayer : const FActorLayer&
    constexpr static const FunctionPointer<ULayersBlueprintLibrary, TArray<AActor*>, const UObject*, const FActorLayer&> GetActors = { 0x1977640, 1 };
    // Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
    // [0] InActor : const AActor*
    // [1] Layer : const FActorLayer&
    constexpr static const FunctionPointer<ULayersBlueprintLibrary, void, const AActor*, const FActorLayer&> AddActorToLayer = { 0x19774a0, 2 };
};

/// Struct /Script/ActorLayerUtilities.ActorLayer
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FActorLayer
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ULayersBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FActorLayer) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FActorLayer, Name) == 0x0000);
#endif
