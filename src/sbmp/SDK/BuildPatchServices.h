
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

class UBuildPatchManifest;
struct FChunkInfoData;
struct FChunkPartData;
struct FCustomFieldData;
struct FFileManifestData;
struct FSHAHashData;

/// Struct /Script/BuildPatchServices.SHAHashData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FSHAHashData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               Hash[20];                                                   // 0x0000   (0x0014)
};

/// Struct /Script/BuildPatchServices.ChunkPartData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FChunkPartData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Guid;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           Offset;                                                     // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           Size;                                                       // 0x0014   (0x0004)
};

/// Struct /Script/BuildPatchServices.FileManifestData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FFileManifestData
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Filename;                                                   // 0x0000   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSHAHashData                                       FileHash;                                                   // 0x0010   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0024   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FChunkPartData>                             FileChunkParts;                                             // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    InstallTags;                                                // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsUnixExecutable;                                          // 0x0048   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0049   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SymlinkTarget;                                              // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsReadOnly;                                                // 0x0060   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsCompressed;                                              // 0x0061   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x6];                                       // 0x0062   (0x0006) MISSED
};

/// Struct /Script/BuildPatchServices.ChunkInfoData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FChunkInfoData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Guid;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint64_t                                           Hash;                                                       // 0x0010   (0x0008)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSHAHashData                                       ShaHash;                                                    // 0x0018   (0x0014)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int64_t                                            FileSize;                                                   // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               GroupNumber;                                                // 0x0038   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0039   (0x0007) MISSED
};

/// Struct /Script/BuildPatchServices.CustomFieldData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FCustomFieldData
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Key;                                                        // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Value;                                                      // 0x0010   (0x0010)
};

/// Class /Script/BuildPatchServices.BuildPatchManifest
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align n/a MaxSize: 0x0120
class UBuildPatchManifest : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               ManifestFileVersion;                                        // 0x0028   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsFileData;                                                // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x002A   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           AppID;                                                      // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AppName;                                                    // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            BuildVersion;                                               // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LaunchExe;                                                  // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LaunchCommand;                                              // 0x0060   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FString>                                      PrereqIds;                                                  // 0x0070   (0x0050)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PrereqName;                                                 // 0x00C0   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PrereqPath;                                                 // 0x00D0   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PrereqArgs;                                                 // 0x00E0   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FFileManifestData>                          FileManifestList;                                           // 0x00F0   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FChunkInfoData>                             ChunkList;                                                  // 0x0100   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCustomFieldData>                           CustomFields;                                               // 0x0110   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FSHAHashData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FChunkPartData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFileManifestData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FChunkInfoData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCustomFieldData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UBuildPatchManifest) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(offsetof(FChunkPartData, Guid) == 0x0000);
static_assert(offsetof(FFileManifestData, Filename) == 0x0000);
static_assert(offsetof(FFileManifestData, FileHash) == 0x0010);
static_assert(offsetof(FFileManifestData, FileChunkParts) == 0x0028);
static_assert(offsetof(FFileManifestData, InstallTags) == 0x0038);
static_assert(offsetof(FFileManifestData, SymlinkTarget) == 0x0050);
static_assert(offsetof(FChunkInfoData, Guid) == 0x0000);
static_assert(offsetof(FChunkInfoData, ShaHash) == 0x0018);
static_assert(offsetof(FCustomFieldData, Key) == 0x0000);
static_assert(offsetof(FCustomFieldData, Value) == 0x0010);
static_assert(offsetof(UBuildPatchManifest, AppName) == 0x0030);
static_assert(offsetof(UBuildPatchManifest, BuildVersion) == 0x0040);
static_assert(offsetof(UBuildPatchManifest, LaunchExe) == 0x0050);
static_assert(offsetof(UBuildPatchManifest, LaunchCommand) == 0x0060);
static_assert(offsetof(UBuildPatchManifest, PrereqName) == 0x00C0);
static_assert(offsetof(UBuildPatchManifest, PrereqPath) == 0x00D0);
static_assert(offsetof(UBuildPatchManifest, PrereqArgs) == 0x00E0);
static_assert(offsetof(UBuildPatchManifest, FileManifestList) == 0x00F0);
static_assert(offsetof(UBuildPatchManifest, ChunkList) == 0x0100);
static_assert(offsetof(UBuildPatchManifest, CustomFields) == 0x0110);
#endif
