
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

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UAndroidPermissionCallbackProxy : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnPermissionsGrantedDynamicDelegate;                        // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	constexpr static const FunctionPointer<UAndroidPermissionFunctionLibrary, bool, const FString> UAndroidPermissionFunctionLibrary = { 0x19067c0, 0 }; 
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	constexpr static const FunctionPointer<UAndroidPermissionFunctionLibrary, UAndroidPermissionCallbackProxy*, const TArray<FString>&> UAndroidPermissionFunctionLibrary = { 0x1970c10, 1 }; 
};

#pragma pack(pop)


static_assert(sizeof(UAndroidPermissionCallbackProxy) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UAndroidPermissionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
