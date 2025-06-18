
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

/// Class /Script/ActorLayerUtilities.LayersBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	constexpr static const FunctionPointer<ULayersBlueprintLibrary, void, const AActor*, const FActorLayer&> ULayersBlueprintLibrary = { 0x196fba0, 0 }; 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	constexpr static const FunctionPointer<ULayersBlueprintLibrary, TArray<AActor*>, const UObject*, const FActorLayer&> ULayersBlueprintLibrary = { 0x196fee0, 1 }; 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	constexpr static const FunctionPointer<ULayersBlueprintLibrary, void, const AActor*, const FActorLayer&> ULayersBlueprintLibrary = { 0x196fd40, 2 }; 
};

/// Struct /Script/ActorLayerUtilities.ActorLayer
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FActorLayer
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(ULayersBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FActorLayer) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FActorLayer, Name) == 0x0000);
