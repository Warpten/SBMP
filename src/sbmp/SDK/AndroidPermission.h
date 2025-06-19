
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

class UAndroidPermissionCallbackProxy;
class UAndroidPermissionFunctionLibrary;

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UAndroidPermissionCallbackProxy : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPermissionsGrantedDynamicDelegate;                        // 0x0028   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0038   (0x0010) MISSED
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
    // [0] permission : const FString
    constexpr static const FunctionPointer<UAndroidPermissionFunctionLibrary, bool, const FString> CheckPermission = { 0x190d830, 0 };
    // Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
    // [0] Permissions : const TArray<FString>&
    constexpr static const FunctionPointer<UAndroidPermissionFunctionLibrary, UAndroidPermissionCallbackProxy*, const TArray<FString>&> AcquirePermissions = { 0x1978370, 1 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAndroidPermissionCallbackProxy) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UAndroidPermissionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
#endif
