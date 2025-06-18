
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityKey
/// Size: 0x01 (1 bytes)
enum class EMagicLeapIdentityKey : uint8_t
{
	EMagicLeapIdentityKey__GivenName                                                 = 0,
	EMagicLeapIdentityKey__FamilyName                                                = 1,
	EMagicLeapIdentityKey__Email                                                     = 2,
	EMagicLeapIdentityKey__Bio                                                       = 3,
	EMagicLeapIdentityKey__PhoneNumber                                               = 4,
	EMagicLeapIdentityKey__Avatar2D                                                  = 5,
	EMagicLeapIdentityKey__Avatar3D                                                  = 6,
	EMagicLeapIdentityKey__Unknown                                                   = 7
};

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapIdentityError : uint8_t
{
	EMagicLeapIdentityError__Ok                                                      = 0,
	EMagicLeapIdentityError__InvalidParam                                            = 1,
	EMagicLeapIdentityError__AllocFailed                                             = 2,
	EMagicLeapIdentityError__PrivilegeDenied                                         = 3,
	EMagicLeapIdentityError__FailedToConnectToLocalService                           = 4,
	EMagicLeapIdentityError__FailedToConnectToCloudService                           = 5,
	EMagicLeapIdentityError__CloudAuthentication                                     = 6,
	EMagicLeapIdentityError__InvalidInformationFromCloud                             = 7,
	EMagicLeapIdentityError__NotLoggedIn                                             = 8,
	EMagicLeapIdentityError__ExpiredCredentials                                      = 9,
	EMagicLeapIdentityError__FailedToGetUserProfile                                  = 10,
	EMagicLeapIdentityError__Unauthorized                                            = 11,
	EMagicLeapIdentityError__CertificateError                                        = 12,
	EMagicLeapIdentityError__RejectedByCloud                                         = 13,
	EMagicLeapIdentityError__AlreadyLoggedIn                                         = 14,
	EMagicLeapIdentityError__ModifyIsNotSupported                                    = 15,
	EMagicLeapIdentityError__NetworkError                                            = 16,
	EMagicLeapIdentityError__UnspecifiedFailure                                      = 17
};

/// Class /Script/MagicLeapIdentity.MagicLeapIdentity
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UMagicLeapIdentity : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
	constexpr static const FunctionPointer<UMagicLeapIdentity, void, const EMagicLeapIdentityError, const TArray<FMagicLeapIdentityAttribute>&> UMagicLeapIdentity = { 0x2bbb090, 0 }; 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
	constexpr static const FunctionPointer<UMagicLeapIdentity, EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&, const FDelegateProperty&> UMagicLeapIdentity = { 0x18fd280, 1 }; 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
	constexpr static const FunctionPointer<UMagicLeapIdentity, EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&, const TArray<FMagicLeapIdentityAttribute>&> UMagicLeapIdentity = { 0x18fd3e0, 2 }; 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
	constexpr static const FunctionPointer<UMagicLeapIdentity, void, const EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&> UMagicLeapIdentity = { 0x2bbb090, 3 }; 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
	constexpr static const FunctionPointer<UMagicLeapIdentity, void, const FDelegateProperty&> UMagicLeapIdentity = { 0x18fd580, 4 }; 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
	constexpr static const FunctionPointer<UMagicLeapIdentity, EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&> UMagicLeapIdentity = { 0x18fd640, 5 }; 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
	constexpr static const FunctionPointer<UMagicLeapIdentity, void, const EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&> UMagicLeapIdentity = { 0x2bbb090, 6 }; 
};

/// Struct /Script/MagicLeapIdentity.MagicLeapIdentityAttribute
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMagicLeapIdentityAttribute
{ 
	EMagicLeapIdentityKey                              Attribute;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapIdentity) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMagicLeapIdentityAttribute) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapIdentityAttribute, Attribute) == 0x0000);
static_assert(offsetof(FMagicLeapIdentityAttribute, Value) == 0x0008);
