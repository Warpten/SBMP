
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


/// Enum /Script/ImageWrapper.EBitmapCSType -  4 (4 bytes)
enum class EBitmapCSType : uint32_t
{
    BCST_BLCS_CALIBRATED_RGB                                                         = 0,
    BCST_LCS_sRGB                                                                    = 1934772034,
    BCST_LCS_WINDOWS_COLOR_SPACE                                                     = 1466527264,
    BCST_PROFILE_LINKED                                                              = 1279872587,
    BCST_PROFILE_EMBEDDED                                                            = 1296188740
};

/// Enum /Script/ImageWrapper.EBitmapHeaderVersion -  1 (1 bytes)
enum class EBitmapHeaderVersion : uint8_t
{
    BHV_BITMAPINFOHEADER                                                             = 0,
    BHV_BITMAPV2INFOHEADER                                                           = 1,
    BHV_BITMAPV3INFOHEADER                                                           = 2,
    BHV_BITMAPV4HEADER                                                               = 3,
    BHV_BITMAPV5HEADER                                                               = 4
};

#pragma pack(pop)


#if !defined(IDACLANG)
#endif
