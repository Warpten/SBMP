
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

struct FCachedPropertyPath;
struct FPropertyPathSegment;

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FPropertyPathSegment
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class Ustruct*                                     struct0;                                                    // 0x0010   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x0018   (0x0010) MISSED
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FCachedPropertyPath
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0010   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UFunction*                                   CachedFunction;                                             // 0x0018   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0020   (0x0008) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FPropertyPathSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCachedPropertyPath) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FPropertyPathSegment, Name) == 0x0000);
static_assert(offsetof(FPropertyPathSegment, struct0) == 0x0010);
static_assert(offsetof(FCachedPropertyPath, Segments) == 0x0000);
static_assert(offsetof(FCachedPropertyPath, CachedFunction) == 0x0018);
#endif
