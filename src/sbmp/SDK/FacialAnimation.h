
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

/// Class /Script/FacialAnimation.AudioCurveSourceComponent
/// Size: 0x0930 (2352 bytes) (0x0008E8 - 0x000930) align n/a MaxSize: 0x0930
class UAudioCurveSourceComponent : public UAudioComponent
{ 
public:
	unsigned char                                      UnknownData02_8[0x8];                                       // 0x08E8   (0x0008)  MISSED
	FName                                              CurveSourceBindingName;                                     // 0x08F0   (0x0008)  
	float                                              CurveSyncOffset;                                            // 0x08F8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x34];                                      // 0x08FC   (0x0034)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioCurveSourceComponent) == 0x0930); // 2352 bytes (0x0008E8 - 0x000930)
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x08F0);
