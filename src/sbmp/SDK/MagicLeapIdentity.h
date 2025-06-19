
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

class UMagicLeapIdentity;
struct FMagicLeapIdentityAttribute;

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityKey -  1 (1 bytes)
enum class EMagicLeapIdentityKey : uint8_t
{
    GivenName                                                                        = 0,
    FamilyName                                                                       = 1,
    Email                                                                            = 2,
    Bio                                                                              = 3,
    PhoneNumber                                                                      = 4,
    Avatar2D                                                                         = 5,
    Avatar3D                                                                         = 6,
    Unknown                                                                          = 7
};

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityError -  1 (1 bytes)
enum class EMagicLeapIdentityError : uint8_t
{
    Ok                                                                               = 0,
    InvalidParam                                                                     = 1,
    AllocFailed                                                                      = 2,
    PrivilegeDenied                                                                  = 3,
    FailedToConnectToLocalService                                                    = 4,
    FailedToConnectToCloudService                                                    = 5,
    CloudAuthentication                                                              = 6,
    InvalidInformationFromCloud                                                      = 7,
    NotLoggedIn                                                                      = 8,
    ExpiredCredentials                                                               = 9,
    FailedToGetUserProfile                                                           = 10,
    Unauthorized                                                                     = 11,
    CertificateError                                                                 = 12,
    RejectedByCloud                                                                  = 13,
    AlreadyLoggedIn                                                                  = 14,
    ModifyIsNotSupported                                                             = 15,
    NetworkError                                                                     = 16,
    UnspecifiedFailure                                                               = 17
};

/// Class /Script/MagicLeapIdentity.MagicLeapIdentity
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UMagicLeapIdentity : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010) MISSED

    /// Functions
    // Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
    // [0] ResultCode : const EMagicLeapIdentityError
    // [1] AttributeValue : const TArray<FMagicLeapIdentityAttribute>&
    constexpr static const FunctionPointer<UMagicLeapIdentity, void, const EMagicLeapIdentityError, const TArray<FMagicLeapIdentityAttribute>&> RequestIdentityAttributeValueDelegate__DelegateSignature = { 0x2bc7620, 0 };
    // Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
    // [0] RequestedAttributeList : const TArray<EMagicLeapIdentityKey>&
    // [1] ResultDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapIdentity, EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&, const FDelegateProperty&> RequestAttributeValueAsync = { 0x19041e0, 1 };
    // Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
    // [0] RequestedAttributeList : const TArray<EMagicLeapIdentityKey>&
    // [1] RequestedAttributeValues : const TArray<FMagicLeapIdentityAttribute>&
    constexpr static const FunctionPointer<UMagicLeapIdentity, EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&, const TArray<FMagicLeapIdentityAttribute>&> RequestAttributeValue = { 0x1904340, 2 };
    // Function /Script/MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
    // [0] ResultCode : const EMagicLeapIdentityError
    // [1] AttributesUpdatedSuccessfully : const TArray<EMagicLeapIdentityKey>&
    constexpr static const FunctionPointer<UMagicLeapIdentity, void, const EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&> ModifyIdentityAttributeValueDelegate__DelegateSignature = { 0x2bc7620, 3 };
    // Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
    // [0] ResultDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapIdentity, void, const FDelegateProperty&> GetAllAvailableAttributesAsync = { 0x19044e0, 4 };
    // Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
    // [0] AvailableAttributes : const TArray<EMagicLeapIdentityKey>&
    constexpr static const FunctionPointer<UMagicLeapIdentity, EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&> GetAllAvailableAttributes = { 0x19045a0, 5 };
    // Function /Script/MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
    // [0] ResultCode : const EMagicLeapIdentityError
    // [1] AvailableAttributes : const TArray<EMagicLeapIdentityKey>&
    constexpr static const FunctionPointer<UMagicLeapIdentity, void, const EMagicLeapIdentityError, const TArray<EMagicLeapIdentityKey>&> AvailableIdentityAttributesDelegate__DelegateSignature = { 0x2bc7620, 6 };
};

/// Struct /Script/MagicLeapIdentity.MagicLeapIdentityAttribute
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMagicLeapIdentityAttribute
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMagicLeapIdentityKey                              Attribute;                                                  // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Value;                                                      // 0x0008   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMagicLeapIdentity) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMagicLeapIdentityAttribute) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapIdentityAttribute, Attribute) == 0x0000);
static_assert(offsetof(FMagicLeapIdentityAttribute, Value) == 0x0008);
#endif
