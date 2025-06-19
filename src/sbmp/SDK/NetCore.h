
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

class UNetAnalyticsAggregatorConfig;
struct FNetAnalyticsDataConfig;

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FNetAnalyticsDataConfig
{ 
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DataName;                                                   // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003) MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UNetAnalyticsAggregatorConfig : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0028   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FNetAnalyticsDataConfig) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0x0000);
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x0028);
#endif
