/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT3_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires
// [0x00820002] 
struct ADunDefProjectile_Meteor_HeroScaling_execSpawnFires_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          spawnedFire;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newFireLoc;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           randRadius;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function CDT3.Seq_Condition_CDTOptionsCheck.Activated
// [0x00020802] ( FUNC_Event )
struct USeq_Condition_CDTOptionsCheck_eventActivated_Parms
{
	// unsigned long                                   Result : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function CDT3.MultiZoneMinimap.ConvertCanvasCoordToWorldCoord
// [0x00024102] 
struct AMultiZoneMinimap_execConvertCanvasCoordToWorldCoord_Parms
{
	struct FVector                                     mapCoord;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              additionalCoordScale;                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT3.MultiZoneMinimap.ConvertWorldCoordToCenterMapCoord
// [0x00824102] 
struct AMultiZoneMinimap_execConvertWorldCoordToCenterMapCoord_Parms
{
	struct FVector                                     worldCoord;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              additionalCoordScale;                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  DistanceValue;                                    		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function CDT3.MultiZoneMinimap.IsTouching
// [0x00020102] 
struct AMultiZoneMinimap_execIsTouching_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTexVolumeMap                               Vmap;                                             		// 0x0004 (0x002C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AVolume*                                  V;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function CDT3.MultiZoneMinimap.SetMapIndex
// [0x00820102] 
struct AMultiZoneMinimap_execSetMapIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FTexVolumeMap                            volMap;                                           		// 0x0004 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function CDT3.MultiZoneMinimap.CheckToDisplayMap
// [0x00020102] 
struct AMultiZoneMinimap_execCheckToDisplayMap_Parms
{
	// class ADunDefPlayer*                            PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT3.MultiZoneMinimap.Tick
// [0x00020902] ( FUNC_Event )
struct AMultiZoneMinimap_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT3.MultiZoneMinimap.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AMultiZoneMinimap_eventPostBeginPlay_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif