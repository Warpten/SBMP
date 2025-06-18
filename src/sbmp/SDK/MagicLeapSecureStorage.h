
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/MagicLeapSecureStorage.MagicLeapSecureStorage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
    // [0] Key : const FString
    // [1] DataToStore : const FVector&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FVector&> PutSecureVector = { 0x1906dc0, 0 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
    // [0] Key : const FString
    // [1] DataToStore : const FTransform&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FTransform&> PutSecureTransform = { 0x1906bf0, 1 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
    // [0] Key : const FString
    // [1] DataToStore : const FString
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FString> PutSecureString = { 0x1907560, 2 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
    // [0] Key : const FString
    // [1] ObjectToStore : const USaveGame*
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const USaveGame*> PutSecureSaveGame = { 0x1906a50, 3 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
    // [0] Key : const FString
    // [1] DataToStore : const FRotator&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FRotator&> PutSecureRotator = { 0x1906dc0, 4 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
    // [0] Key : const FString
    // [1] DataToStore : const int64_t
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int64_t> PutSecureInt64 = { 0x1907870, 5 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
    // [0] Key : const FString
    // [1] DataToStore : const int32_t
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int32_t> PutSecureInt = { 0x19079f0, 6 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
    // [0] Key : const FString
    // [1] DataToStore : const float
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const float> PutSecureFloat = { 0x19076f0, 7 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
    // [0] Key : const FString
    // [1] DataToStore : const char
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const char> PutSecureByte = { 0x1907b70, 8 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
    // [0] Key : const FString
    // [1] DataToStore : const bool
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const bool> PutSecureBool = { 0x1907cf0, 9 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
    // [0] Key : const FString
    // [1] DataToStore : const TArray<int32_t>&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const TArray<int32_t>&> PutSecureArray = { 0x1906390, 10 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
    // [0] Key : const FString
    // [1] DataToRetrieve : const FVector&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FVector&> GetSecureVector = { 0x1906dc0, 11 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
    // [0] Key : const FString
    // [1] DataToRetrieve : const FTransform&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FTransform&> GetSecureTransform = { 0x1906bf0, 12 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
    // [0] Key : const FString
    // [1] DataToRetrieve : const FString&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FString&> GetSecureString = { 0x1906f40, 13 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
    // [0] Key : const FString
    // [1] ObjectToRetrieve : const USaveGame*&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const USaveGame*&> GetSecureSaveGame = { 0x19068b0, 14 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
    // [0] Key : const FString
    // [1] DataToRetrieve : const FRotator&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FRotator&> GetSecureRotator = { 0x1906dc0, 15 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
    // [0] Key : const FString
    // [1] DataToRetrieve : const int64_t&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int64_t&> GetSecureInt64 = { 0x1907260, 16 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
    // [0] Key : const FString
    // [1] DataToRetrieve : const int32_t&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int32_t&> GetSecureInt = { 0x19070e0, 17 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
    // [0] Key : const FString
    // [1] DataToRetrieve : const float&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const float&> GetSecureFloat = { 0x19070e0, 18 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
    // [0] Key : const FString
    // [1] DataToRetrieve : const char&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const char&> GetSecureByte = { 0x19073e0, 19 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
    // [0] Key : const FString
    // [1] DataToRetrieve : const bool&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const bool&> GetSecureBool = { 0x19073e0, 20 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
    // [0] Key : const FString
    // [1] DataToRetrieve : const TArray<int32_t>&
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const TArray<int32_t>&> GetSecureArray = { 0x1906630, 21 };
    // Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
    // [0] Key : const FString
    constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString> DeleteSecureData = { 0x19067c0, 22 };
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapSecureStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
