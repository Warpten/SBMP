
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
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "Niagara.h"
#include "NiagaraCore.h"
#include "ChaosSolverEngine.h"

#pragma pack(push, 0x1)

class UNiagaraDataInterfaceChaosDestruction;
class UNiagaraDataInterfaceFieldSystem;
struct FChaosDestructionEvent;

/// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum -  1 (1 bytes)
enum class ELocationZToSpawnEnum : uint8_t
{
    ChaosNiagara_LocationZToSpawn_None                                               = 0,
    ChaosNiagara_LocationZToSpawn_Min                                                = 1,
    ChaosNiagara_LocationZToSpawn_Max                                                = 2,
    ChaosNiagara_LocationZToSpawn_MinMax                                             = 3,
    ChaosNiagara_Max                                                                 = 4
};

/// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum -  1 (1 bytes)
enum class ELocationYToSpawnEnum : uint8_t
{
    ChaosNiagara_LocationYToSpawn_None                                               = 0,
    ChaosNiagara_LocationYToSpawn_Min                                                = 1,
    ChaosNiagara_LocationYToSpawn_Max                                                = 2,
    ChaosNiagara_LocationYToSpawn_MinMax                                             = 3,
    ChaosNiagara_Max                                                                 = 4
};

/// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum -  1 (1 bytes)
enum class ELocationXToSpawnEnum : uint8_t
{
    ChaosNiagara_LocationXToSpawn_None                                               = 0,
    ChaosNiagara_LocationXToSpawn_Min                                                = 1,
    ChaosNiagara_LocationXToSpawn_Max                                                = 2,
    ChaosNiagara_LocationXToSpawn_MinMax                                             = 3,
    ChaosNiagara_Max                                                                 = 4
};

/// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum -  1 (1 bytes)
enum class ELocationFilteringModeEnum : uint8_t
{
    ChaosNiagara_LocationFilteringMode_Inclusive                                     = 0,
    ChaosNiagara_LocationFilteringMode_Exclusive                                     = 1,
    ChaosNiagara_Max                                                                 = 2
};

/// Enum /Script/ChaosNiagara.EDataSourceTypeEnum -  1 (1 bytes)
enum class EDataSourceTypeEnum : uint8_t
{
    ChaosNiagara_DataSourceType_Collision                                            = 0,
    ChaosNiagara_DataSourceType_Breaking                                             = 1,
    ChaosNiagara_DataSourceType_Trailing                                             = 2,
    ChaosNiagara_Max                                                                 = 3
};

/// Enum /Script/ChaosNiagara.EDebugTypeEnum -  1 (1 bytes)
enum class EDebugTypeEnum : uint8_t
{
    ChaosNiagara_DebugType_NoDebug                                                   = 0,
    ChaosNiagara_DebugType_ColorBySolver                                             = 1,
    ChaosNiagara_DebugType_ColorByParticleIndex                                      = 2,
    ChaosNiagara_Max                                                                 = 3
};

/// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum -  1 (1 bytes)
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
    ChaosNiagara_RandomVelocityGenerationType_RandomDistribution                     = 0,
    ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers        = 1,
    ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased                   = 2,
    ChaosNiagara_Max                                                                 = 3
};

/// Enum /Script/ChaosNiagara.EDataSortTypeEnum -  1 (1 bytes)
enum class EDataSortTypeEnum : uint8_t
{
    ChaosNiagara_DataSortType_NoSorting                                              = 0,
    ChaosNiagara_DataSortType_RandomShuffle                                          = 1,
    ChaosNiagara_DataSortType_SortByMassMaxToMin                                     = 2,
    ChaosNiagara_DataSortType_SortByMassMinToMax                                     = 3,
    ChaosNiagara_Max                                                                 = 4
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
/// Size: 0x0238 (568 bytes) (0x000038 - 0x000238) align n/a MaxSize: 0x0238
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TSet<AChaosSolverActor*>                           ChaosSolverActorSet;                                        // 0x0038   (0x0050)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDataSourceTypeEnum                                DataSourceType;                                             // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData12_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DataProcessFrequency;                                       // 0x008C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxNumberOfDataEntriesToSpawn;                              // 0x0090   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DoSpawn;                                                    // 0x0094   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x3];                                       // 0x0095   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          SpawnMultiplierMinMax;                                      // 0x0098   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpawnChance;                                                // 0x00A0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          ImpulseToSpawnMinMax;                                       // 0x00A4   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          SpeedToSpawnMinMax;                                         // 0x00AC   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          MassToSpawnMinMax;                                          // 0x00B4   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          ExtentMinToSpawnMinMax;                                     // 0x00BC   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          ExtentMaxToSpawnMinMax;                                     // 0x00C4   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          VolumeToSpawnMinMax;                                        // 0x00CC   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          SolverTimeToSpawnMinMax;                                    // 0x00D4   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SurfaceTypeToSpawn;                                         // 0x00DC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELocationFilteringModeEnum                         LocationFilteringMode;                                      // 0x00E0   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELocationXToSpawnEnum                              LocationXToSpawn;                                           // 0x00E1   (0x0001)
    /* public    */ unsigned char                                      UnknownData14_6[0x2];                                       // 0x00E2   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          LocationXToSpawnMinMax;                                     // 0x00E4   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELocationYToSpawnEnum                              LocationYToSpawn;                                           // 0x00EC   (0x0001)
    /* public    */ unsigned char                                      UnknownData15_6[0x3];                                       // 0x00ED   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          LocationYToSpawnMinMax;                                     // 0x00F0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELocationZToSpawnEnum                              LocationZToSpawn;                                           // 0x00F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData16_6[0x3];                                       // 0x00F9   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          LocationZToSpawnMinMax;                                     // 0x00FC   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDataSortTypeEnum                                  DataSortingType;                                            // 0x0104   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGetExternalCollisionData;                                  // 0x0105   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DoSpatialHash;                                              // 0x0106   (0x0001)
    /* public    */ unsigned char                                      UnknownData17_6[0x1];                                       // 0x0107   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SpatialHashVolumeMin;                                       // 0x0108   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SpatialHashVolumeMax;                                       // 0x0114   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SpatialHashVolumeCellSize;                                  // 0x0120   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxDataPerCell;                                             // 0x012C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyMaterialsFilter;                                      // 0x0130   (0x0001)
    /* public    */ unsigned char                                      UnknownData18_6[0x7];                                       // 0x0131   (0x0007) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TSet<UPhysicalMaterial*>                           ChaosBreakingMaterialSet;                                   // 0x0138   (0x0050)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGetExternalBreakingData;                                   // 0x0188   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGetExternalTrailingData;                                   // 0x0189   (0x0001)
    /* public    */ unsigned char                                      UnknownData19_6[0x2];                                       // 0x018A   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          RandomPositionMagnitudeMinMax;                              // 0x018C   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InheritedVelocityMultiplier;                                // 0x0194   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERandomVelocityGenerationTypeEnum                  RandomVelocityGenerationType;                               // 0x0198   (0x0001)
    /* public    */ unsigned char                                      UnknownData20_6[0x3];                                       // 0x0199   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          RandomVelocityMagnitudeMinMax;                              // 0x019C   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpreadAngleMax;                                             // 0x01A4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            VelocityOffsetMin;                                          // 0x01A8   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            VelocityOffsetMax;                                          // 0x01B4   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          FinalVelocityMagnitudeMinMax;                               // 0x01C0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxLatency;                                                 // 0x01C8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDebugTypeEnum                                     DebugType;                                                  // 0x01CC   (0x0001)
    /* public    */ unsigned char                                      UnknownData21_6[0x3];                                       // 0x01CD   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            LastSpawnedPointID;                                         // 0x01D0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              LastSpawnTime;                                              // 0x01D4   (0x0004)
    /* public    */ unsigned char                                      UnknownData22_6[0x10];                                      // 0x01D8   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              SolverTime;                                                 // 0x01E8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              TimeStampOfLastProcessedData;                               // 0x01EC   (0x0004)
    /* public    */ unsigned char                                      UnknownData23_7[0x48];                                      // 0x01F0   (0x0048) MISSED
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceFieldSystem
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align n/a MaxSize: 0x0090
class UNiagaraDataInterfaceFieldSystem : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBlueprint*                                  BlueprintSource;                                            // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      SourceActor;                                                // 0x0040   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntVector                                         FieldDimensions;                                            // 0x0048   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            MinBounds;                                                  // 0x0054   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            MaxBounds;                                                  // 0x0060   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x24];                                      // 0x006C   (0x0024) MISSED
};

/// Struct /Script/ChaosNiagara.ChaosDestructionEvent
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align n/a MaxSize: 0x0044
struct FChaosDestructionEvent
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Normal;                                                     // 0x000C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x0018   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularVelocity;                                            // 0x0024   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentMin;                                                  // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentMax;                                                  // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleID;                                                 // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Time;                                                       // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Type;                                                       // 0x0040   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UNiagaraDataInterfaceChaosDestruction) == 0x0238); // 568 bytes (0x000038 - 0x000238)
static_assert(sizeof(UNiagaraDataInterfaceFieldSystem) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(FChaosDestructionEvent) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSourceType) == 0x0088);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnMultiplierMinMax) == 0x0098);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ImpulseToSpawnMinMax) == 0x00A4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpeedToSpawnMinMax) == 0x00AC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MassToSpawnMinMax) == 0x00B4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMinToSpawnMinMax) == 0x00BC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMaxToSpawnMinMax) == 0x00C4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VolumeToSpawnMinMax) == 0x00CC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTimeToSpawnMinMax) == 0x00D4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationFilteringMode) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawn) == 0x00E1);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawnMinMax) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawn) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawnMinMax) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawn) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawnMinMax) == 0x00FC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSortingType) == 0x0104);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMin) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMax) == 0x0114);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeCellSize) == 0x0120);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomPositionMagnitudeMinMax) == 0x018C);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityGenerationType) == 0x0198);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityMagnitudeMinMax) == 0x019C);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMin) == 0x01A8);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMax) == 0x01B4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, FinalVelocityMagnitudeMinMax) == 0x01C0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DebugType) == 0x01CC);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, BlueprintSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, FieldDimensions) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, MinBounds) == 0x0054);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, MaxBounds) == 0x0060);
static_assert(offsetof(FChaosDestructionEvent, position) == 0x0000);
static_assert(offsetof(FChaosDestructionEvent, Normal) == 0x000C);
static_assert(offsetof(FChaosDestructionEvent, Velocity) == 0x0018);
static_assert(offsetof(FChaosDestructionEvent, AngularVelocity) == 0x0024);
#endif
