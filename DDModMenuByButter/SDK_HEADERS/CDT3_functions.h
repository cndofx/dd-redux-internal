/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT3_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires
// [0x00820002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_Meteor_HeroScaling::SpawnFires ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnFires = NULL;

	if ( ! pFnSpawnFires )
		pFnSpawnFires = (UFunction*) UObject::GObjObjects()->Data[ 83648 ];

	ADunDefProjectile_Meteor_HeroScaling_execSpawnFires_Parms SpawnFires_Parms;
	memcpy ( &SpawnFires_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnFires_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnFires, &SpawnFires_Parms, NULL );
};

// Function CDT3.Seq_Condition_CDTOptionsCheck.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeq_Condition_CDTOptionsCheck::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 202473 ];

	USeq_Condition_CDTOptionsCheck_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function CDT3.MultiZoneMinimap.ConvertCanvasCoordToWorldCoord
// [0x00024102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 mapCoord                       ( CPF_Parm )
// float                          additionalCoordScale           ( CPF_OptionalParm | CPF_Parm )

struct FVector AMultiZoneMinimap::ConvertCanvasCoordToWorldCoord ( struct FVector mapCoord, float additionalCoordScale )
{
	static UFunction* pFnConvertCanvasCoordToWorldCoord = NULL;

	if ( ! pFnConvertCanvasCoordToWorldCoord )
		pFnConvertCanvasCoordToWorldCoord = (UFunction*) UObject::GObjObjects()->Data[ 202481 ];

	AMultiZoneMinimap_execConvertCanvasCoordToWorldCoord_Parms ConvertCanvasCoordToWorldCoord_Parms;
	memcpy ( &ConvertCanvasCoordToWorldCoord_Parms.mapCoord, &mapCoord, 0xC );
	ConvertCanvasCoordToWorldCoord_Parms.additionalCoordScale = additionalCoordScale;

	this->ProcessEvent ( pFnConvertCanvasCoordToWorldCoord, &ConvertCanvasCoordToWorldCoord_Parms, NULL );

	return ConvertCanvasCoordToWorldCoord_Parms.ReturnValue;
};

// Function CDT3.MultiZoneMinimap.ConvertWorldCoordToCenterMapCoord
// [0x00824102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 worldCoord                     ( CPF_Parm )
// float                          additionalCoordScale           ( CPF_OptionalParm | CPF_Parm )

struct FVector AMultiZoneMinimap::ConvertWorldCoordToCenterMapCoord ( struct FVector worldCoord, float additionalCoordScale )
{
	static UFunction* pFnConvertWorldCoordToCenterMapCoord = NULL;

	if ( ! pFnConvertWorldCoordToCenterMapCoord )
		pFnConvertWorldCoordToCenterMapCoord = (UFunction*) UObject::GObjObjects()->Data[ 202486 ];

	AMultiZoneMinimap_execConvertWorldCoordToCenterMapCoord_Parms ConvertWorldCoordToCenterMapCoord_Parms;
	memcpy ( &ConvertWorldCoordToCenterMapCoord_Parms.worldCoord, &worldCoord, 0xC );
	ConvertWorldCoordToCenterMapCoord_Parms.additionalCoordScale = additionalCoordScale;

	this->ProcessEvent ( pFnConvertWorldCoordToCenterMapCoord, &ConvertWorldCoordToCenterMapCoord_Parms, NULL );

	return ConvertWorldCoordToCenterMapCoord_Parms.ReturnValue;
};

// Function CDT3.MultiZoneMinimap.IsTouching
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   PlayerPawn                     ( CPF_Parm )
// struct FTexVolumeMap           Vmap                           ( CPF_Parm | CPF_NeedCtorLink )

bool AMultiZoneMinimap::IsTouching ( class APawn* PlayerPawn, struct FTexVolumeMap Vmap )
{
	static UFunction* pFnIsTouching = NULL;

	if ( ! pFnIsTouching )
		pFnIsTouching = (UFunction*) UObject::GObjObjects()->Data[ 202491 ];

	AMultiZoneMinimap_execIsTouching_Parms IsTouching_Parms;
	IsTouching_Parms.PlayerPawn = PlayerPawn;
	memcpy ( &IsTouching_Parms.Vmap, &Vmap, 0x2C );

	this->ProcessEvent ( pFnIsTouching, &IsTouching_Parms, NULL );

	return IsTouching_Parms.ReturnValue;
};

// Function CDT3.MultiZoneMinimap.SetMapIndex
// [0x00820102] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void AMultiZoneMinimap::SetMapIndex ( int Index )
{
	static UFunction* pFnSetMapIndex = NULL;

	if ( ! pFnSetMapIndex )
		pFnSetMapIndex = (UFunction*) UObject::GObjObjects()->Data[ 202494 ];

	AMultiZoneMinimap_execSetMapIndex_Parms SetMapIndex_Parms;
	SetMapIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnSetMapIndex, &SetMapIndex_Parms, NULL );
};

// Function CDT3.MultiZoneMinimap.CheckToDisplayMap
// [0x00020102] 
// Parameters infos:

void AMultiZoneMinimap::CheckToDisplayMap ( )
{
	static UFunction* pFnCheckToDisplayMap = NULL;

	if ( ! pFnCheckToDisplayMap )
		pFnCheckToDisplayMap = (UFunction*) UObject::GObjObjects()->Data[ 202497 ];

	AMultiZoneMinimap_execCheckToDisplayMap_Parms CheckToDisplayMap_Parms;

	this->ProcessEvent ( pFnCheckToDisplayMap, &CheckToDisplayMap_Parms, NULL );
};

// Function CDT3.MultiZoneMinimap.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AMultiZoneMinimap::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 202499 ];

	AMultiZoneMinimap_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function CDT3.MultiZoneMinimap.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMultiZoneMinimap::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 202500 ];

	AMultiZoneMinimap_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif