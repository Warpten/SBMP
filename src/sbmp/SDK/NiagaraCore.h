
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

class UNiagaraDataInterfaceBase;
class UNiagaraMergeable;
struct FNiagaraCompileHash;

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraMergeable : public UObject
{ 
public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{ 
public:
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraCompileHash
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<char>                                       DataHash;                                                   // 0x0000   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UNiagaraMergeable) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraCompileHash) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0x0000);
#endif
