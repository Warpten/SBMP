
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

#pragma pack(push, 0x1)

struct FWebJSCallbackBase;
struct FWebJSFunction;
struct FWebJSResponse;

/// Struct /Script/WebBrowser.WebJSCallbackBase
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FWebJSCallbackBase
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x20];                                      // 0x0000   (0x0020) MISSED
};

/// Struct /Script/WebBrowser.WebJSResponse
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FWebJSResponse : FWebJSCallbackBase
{ 
};

/// Struct /Script/WebBrowser.WebJSFunction
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FWebJSFunction : FWebJSCallbackBase
{ 
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FWebJSCallbackBase) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWebJSResponse) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FWebJSFunction) == 0x0020); // 32 bytes (0x000020 - 0x000020)
#endif
