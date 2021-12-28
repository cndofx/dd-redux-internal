/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT3_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct CDT3.MultiZoneMinimap.TexVolumeMap
// 0x002C
struct FTexVolumeMap
{
	class UTexture2D*                                  MiniMapBackgroundTexture;                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AVolume* >                           DisplayedInsideVolumes;                           		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     CenterMapCoord;                                   		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MapWorldScale;                                    		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapScale;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif