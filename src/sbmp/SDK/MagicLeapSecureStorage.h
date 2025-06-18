
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MagicLeapSecureStorage.MagicLeapSecureStorage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FVector&> PutSecureVector = { 0x1906dc0, 0 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FTransform&> PutSecureTransform = { 0x1906bf0, 1 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FString> PutSecureString = { 0x1907560, 2 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const USaveGame*> PutSecureSaveGame = { 0x1906a50, 3 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FRotator&> PutSecureRotator = { 0x1906dc0, 4 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int64_t> PutSecureInt64 = { 0x1907870, 5 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int32_t> PutSecureInt = { 0x19079f0, 6 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const float> PutSecureFloat = { 0x19076f0, 7 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const char> PutSecureByte = { 0x1907b70, 8 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const bool> PutSecureBool = { 0x1907cf0, 9 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const TArray<int32_t>&> PutSecureArray = { 0x1906390, 10 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FVector&> GetSecureVector = { 0x1906dc0, 11 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FTransform&> GetSecureTransform = { 0x1906bf0, 12 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FString&> GetSecureString = { 0x1906f40, 13 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const USaveGame*&> GetSecureSaveGame = { 0x19068b0, 14 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const FRotator&> GetSecureRotator = { 0x1906dc0, 15 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int64_t&> GetSecureInt64 = { 0x1907260, 16 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const int32_t&> GetSecureInt = { 0x19070e0, 17 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const float&> GetSecureFloat = { 0x19070e0, 18 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const char&> GetSecureByte = { 0x19073e0, 19 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const bool&> GetSecureBool = { 0x19073e0, 20 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString, const TArray<int32_t>&> GetSecureArray = { 0x1906630, 21 }; 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
	constexpr static const FunctionPointer<UMagicLeapSecureStorage, bool, const FString> DeleteSecureData = { 0x19067c0, 22 }; 
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapSecureStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
