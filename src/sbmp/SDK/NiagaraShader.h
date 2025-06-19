
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

class UNiagaraScriptBase;
struct FNiagaraCompileEvent;
struct FNiagaraDataInterfaceGPUParamInfo;
struct FNiagaraDataInterfaceGeneratedFunction;
struct FSimulationStageMetaData;

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity -  1 (1 bytes)
enum class FNiagaraCompileEventSeverity : uint8_t
{
    Log                                                                              = 0,
    Warning                                                                          = 1,
    Error                                                                            = 2
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSimulationStageMetaData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SimulationStageName;                                        // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              IterationSource;                                            // 0x0008   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSpawnOnly : 1;                                             // 0x0010:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bWritesParticles : 1;                                       // 0x0010:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPartialParticleUpdate : 1;                                 // 0x0010:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x7];                                       // 0x0011   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      OutputDestinations;                                         // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinStage;                                                   // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxStage;                                                   // 0x002C   (0x0004)
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraDataInterfaceGeneratedFunction
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x28];                                      // 0x0000   (0x0028) MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FNiagaraDataInterfaceGPUParamInfo
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DataInterfaceHLSLSymbol;                                    // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DIClassName;                                                // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0020   (0x0010)
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FNiagaraCompileEvent
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Message;                                                    // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              NodeGuid;                                                   // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              PinGuid;                                                    // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FGuid>                                      StackGuids;                                                 // 0x0038   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UNiagaraScriptBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSimulationStageMetaData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraDataInterfaceGeneratedFunction) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraDataInterfaceGPUParamInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraCompileEvent) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0x0000);
static_assert(offsetof(FSimulationStageMetaData, IterationSource) == 0x0008);
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 0x0018);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0x0000);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 0x0010);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 0x0020);
static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0x0000);
static_assert(offsetof(FNiagaraCompileEvent, Message) == 0x0008);
static_assert(offsetof(FNiagaraCompileEvent, NodeGuid) == 0x0018);
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 0x0028);
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 0x0038);
#endif
