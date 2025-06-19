
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

#pragma pack(push, 0x1)

class UBasicOverlays;
class ULocalizedOverlays;
class UOverlays;
struct FOverlayItem;

/// Class /Script/Overlay.Overlays
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UOverlays : public UObject
{ 
public:
};

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FOverlayItem
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FTimespan                                          StartTime;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FTimespan                                          EndTime;                                                    // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            text;                                                       // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          position;                                                   // 0x0020   (0x0008)
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UBasicOverlays : public UOverlays
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FOverlayItem>                               Overlays;                                                   // 0x0028   (0x0010)
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class ULocalizedOverlays : public UOverlays
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBasicOverlays*                              DefaultOverlays;                                            // 0x0028   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, class UBasicOverlays*>               LocaleToOverlaysMap;                                        // 0x0030   (0x0050)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UOverlays) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOverlayItem) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UBasicOverlays) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULocalizedOverlays) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(offsetof(FOverlayItem, StartTime) == 0x0000);
static_assert(offsetof(FOverlayItem, EndTime) == 0x0008);
static_assert(offsetof(FOverlayItem, text) == 0x0010);
static_assert(offsetof(FOverlayItem, position) == 0x0020);
static_assert(offsetof(UBasicOverlays, Overlays) == 0x0028);
static_assert(offsetof(ULocalizedOverlays, DefaultOverlays) == 0x0028);
static_assert(offsetof(ULocalizedOverlays, LocaleToOverlaysMap) == 0x0030);
#endif
