/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT3_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum CDT3.Seq_Condition_CDTOptionsCheck.CDTOptions
/*enum CDTOptions
{
	TowerDynLighting                                   = 0,
	MoveBuilding                                       = 1,
	PlayerSellTower                                    = 2,
	QualityFX                                          = 3,
	CDPortalVisible                                    = 4,
	DisplayFiveStar                                    = 5,
	CosmeticVisible                                    = 6,
	CDTOptions_MAX                                     = 7
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class CDT3.DunDefProjectile_Meteor_HeroScaling
// 0x0004 (0x037C - 0x0378)
class ADunDefProjectile_Meteor_HeroScaling : public ADunDefProjectile_Meteor
{
public:
	float                                              FireDamageScale;                                  		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83646 ];

		return pClassPointer;
	};

	void SpawnFires ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefProjectile_Meteor_HeroScaling::pClassPointer = NULL;

// Class CDT3.Seq_Condition_CDTOptionsCheck
// 0x0001 (0x00D1 - 0x00D0)
class USeq_Condition_CDTOptionsCheck : public USequenceCondition
{
public:
	unsigned char                                      Select;                                           		// 0x00D0 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202476 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USeq_Condition_CDTOptionsCheck::pClassPointer = NULL;

// Class CDT3.MultiZoneMinimap
// 0x0014 (0x02B0 - 0x029C)
class AMultiZoneMinimap : public ADunDefMiniMap
{
public:
	TArray< struct FTexVolumeMap >                     MiniMapLocationArray;                             		// 0x029C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ActiveTexIndex;                                   		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceUpdate;                                  		// 0x02AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202512 ];

		return pClassPointer;
	};

	struct FVector ConvertCanvasCoordToWorldCoord ( struct FVector mapCoord, float additionalCoordScale );
	struct FVector ConvertWorldCoordToCenterMapCoord ( struct FVector worldCoord, float additionalCoordScale );
	bool IsTouching ( class APawn* PlayerPawn, struct FTexVolumeMap Vmap );
	void SetMapIndex ( int Index );
	void CheckToDisplayMap ( );
	void eventTick ( float DeltaTime );
	void eventPostBeginPlay ( );
};

UClass* AMultiZoneMinimap::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif