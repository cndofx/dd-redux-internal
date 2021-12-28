/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT7_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class CDT7.DunDefDamageType_Heart
// 0x0000 (0x00D0 - 0x00D0)
class UDunDefDamageType_Heart : public UDunDefDamageType_Generic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83801 ];

		return pClassPointer;
	};

};

UClass* UDunDefDamageType_Heart::pClassPointer = NULL;

// Class CDT7.DunDefDamageType_Void
// 0x0000 (0x00D4 - 0x00D4)
class UDunDefDamageType_Void : public UDunDefDamageType_Elemental
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83807 ];

		return pClassPointer;
	};

};

UClass* UDunDefDamageType_Void::pClassPointer = NULL;

// Class CDT7.DunDefPlayerAbility_FireAura
// 0x0010 (0x04A0 - 0x0490)
class ADunDefPlayerAbility_FireAura : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              FireAuraDamage;                                   		// 0x0490 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FireAuraDamageExponent;                           		// 0x0494 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      AuraDamageType;                                   		// 0x0498 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FireDuration;                                     		// 0x049C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83811 ];

		return pClassPointer;
	};

	void CancelEffect ( );
	float GetDamage ( );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void DoEffect ( );
	void OnActivate ( );
	void PostBeginPlay ( );
};

UClass* ADunDefPlayerAbility_FireAura::pClassPointer = NULL;

// Class CDT7.DunDefPlayerAbility_SpawnKobold
// 0x0028 (0x04A0 - 0x0478)
class ADunDefPlayerAbility_SpawnKobold : public ADunDefPlayerAbility_GenericActorSpawner
{
public:
	unsigned long                                      bIsSummon : 1;                                    		// 0x0478 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              BaseDamage;                                       		// 0x047C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseRange;                                        		// 0x0480 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              MaxRange;                                         		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseRangeScalingExponent;                         		// 0x0488 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DamageScalingStat;                                		// 0x048C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RadiusScalingStat;                                		// 0x048D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseDamageMultiplier;                             		// 0x0490 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseDamageExponent;                               		// 0x0494 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RangeBaseScale;                                   		// 0x0498 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefGasCloud*                             ExplosionTemplate;                                		// 0x049C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83829 ];

		return pClassPointer;
	};

	void SetRange ( float theRange );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	float GetAbilityDamageMultiplier ( );
	void DoActorSpawn ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayerAbility_SpawnKobold::pClassPointer = NULL;

// Class CDT7.DunDefPlayerAbility_SummonerPetBoost
// 0x0048 (0x047C - 0x0434)
class ADunDefPlayerAbility_SummonerPetBoost : public ADunDefPlayerAbility_CharacterToggle
{
public:
	class UParticleSystemComponent*                    AbilityEffectComponent;                           		// 0x0434 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       ActivationAnimation;                              		// 0x0438 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PetBoostHeroDamageExponent;                       		// 0x0440 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PetBoostDamageMultiplier;                         		// 0x0444 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PetAttackRateMultiplier;                          		// 0x0448 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PetAttackRateExponent;                            		// 0x044C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinPetDamageMultiplier;                           		// 0x0450 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPetDamageMultiplier;                           		// 0x0454 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinPetAttackMultiplier;                           		// 0x0458 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPetAttackMultiplier;                           		// 0x045C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatAttackDamageExponentNightmare;            		// 0x0460 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatAttackDamageExponent;                     		// 0x0464 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareAttackDamageExponent;                    		// 0x0468 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                OverlayEffectColor;                               		// 0x046C (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83859 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	float GetPetAttackRateMultiplier ( );
};

UClass* ADunDefPlayerAbility_SummonerPetBoost::pClassPointer = NULL;

// Class CDT7.DunDefProjectile_HarpoonDot
// 0x001C (0x037C - 0x0360)
class ADunDefProjectile_HarpoonDot : public ADunDefProjectile_Harpoon
{
public:
	float                                              DotDamageScale;                                   		// 0x0360 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DotTemplate;                                      		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttach : 1;                                      		// 0x0368 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DotAttached : 1;                                  		// 0x0368 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseDot : 1;                                      		// 0x0368 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x0368 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x0368 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x036C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x0370 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83891 ];

		return pClassPointer;
	};

	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void SpawnDot ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefProjectile_HarpoonDot::pClassPointer = NULL;

// Class CDT7.DunDefProjectile_HarpoonStaff
// 0x002C (0x03A0 - 0x0374)
class ADunDefProjectile_HarpoonStaff : public ADunDefProjectile_MagicBolt
{
public:
	float                                              DestructionDelayTime;                             		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumAllowedPassThrough;                            		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayPawnImpactSoundOnHittingEachPawn : 1;        		// 0x037C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDamageOnTouch : 1;                               		// 0x037C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPlayImpactEffectOnHittingEachPawn : 1;           		// 0x037C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x037C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x037C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x0380 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x0384 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x038C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            PreviousHitActors;                                		// 0x0390 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumPassThrough;                                   		// 0x039C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83916 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	bool IsImpactAllowed ( class AActor* Other );
};

UClass* ADunDefProjectile_HarpoonStaff::pClassPointer = NULL;

// Class CDT7.DunDefProjectile_SnowBall
// 0x0018 (0x03D8 - 0x03C0)
class ADunDefProjectile_SnowBall : public ADunDefProjectile_BowlingBall
{
public:
	class ADunDefEmitterSpawnable*                     EffectTemplate;                                   		// 0x03C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttach : 1;                                      		// 0x03C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseEffect : 1;                                   		// 0x03C4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x03C4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x03C4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUseParticleEffectOnHit : 1;                      		// 0x03C4 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x03C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x03CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x03D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x03D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83950 ];

		return pClassPointer;
	};

	void DoEffect ( );
	void SpawnEffect ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefProjectile_SnowBall::pClassPointer = NULL;

// Class CDT7.DunDefProjectile_StaffDot
// 0x0020 (0x0394 - 0x0374)
class ADunDefProjectile_StaffDot : public ADunDefProjectile_MagicBolt
{
public:
	float                                              DotDamageScale;                                   		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DotTemplate;                                      		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     EffectTemplate;                                   		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttach : 1;                                      		// 0x0380 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseDot : 1;                                      		// 0x0380 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseEffect : 1;                                   		// 0x0380 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x0380 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x0380 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bUseParticleEffectOnHit : 1;                      		// 0x0380 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x0384 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x038C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x0390 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83979 ];

		return pClassPointer;
	};

	void SpawnEffect ( );
	void Landed ( struct FVector HitNormal, class AActor* Floor );
	void SpawnDot ( struct FVector HitLocation, struct FVector HitNormal );
	void DoEffect ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefProjectile_StaffDot::pClassPointer = NULL;

// Class CDT7.DunDefTower_CannonBall
// 0x000C (0x0744 - 0x0738)
class ADunDefTower_CannonBall : public ADunDefTower_ProjectileType
{
public:
	struct FName                                       SkelControlPitchLookAtName;                       		// 0x0738 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkelControlLookAt*                          MySkelControlPitchLookAt;                         		// 0x0740 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84012 ];

		return pClassPointer;
	};

	void UpdateTurretLookSkelControl ( float DeltaTime );
	void eventPostBeginPlay ( );
};

UClass* ADunDefTower_CannonBall::pClassPointer = NULL;

// Class CDT7.DunDefTower_Totem
// 0x0020 (0x073C - 0x071C)
class ADunDefTower_Totem : public ADunDefTower_Aura
{
public:
	struct FName                                       CustomAnimNodeName;                               		// 0x071C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotemExponent;                                    		// 0x0724 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              MinMultiplier;                                    		// 0x0728 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              MaxMultiplier;                                    		// 0x072C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              TotemMultiplier;                                  		// 0x0730 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned char                                      AssociatedHeroStat;                               		// 0x0734 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RadiusHeroStat;                                   		// 0x0735 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlend*                              CustomAnimNode;                                   		// 0x0738 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84031 ];

		return pClassPointer;
	};

	void PlayIdleAnimation ( );
	void PlaySpawnInAnimation ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	bool IsValidForLifeEnergyDecrease ( class ADunDefPawn* P );
	float GetDamageMultiplier ( );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	bool TimedEffect ( class ADunDefPawn* P );
	void PostBeginPlay ( );
	void ReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefTower_Totem::pClassPointer = NULL;

// Class CDT7.DunDefTower_DamageTotem
// 0x0000 (0x073C - 0x073C)
class ADunDefTower_DamageTotem : public ADunDefTower_Totem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84073 ];

		return pClassPointer;
	};

	void ExitEffect ( class ADunDefPawn* P );
	void EntryEffect ( class ADunDefPawn* P );
	bool TimedEffect ( class ADunDefPawn* P );
	void PostBeginPlay ( );
};

UClass* ADunDefTower_DamageTotem::pClassPointer = NULL;

// Class CDT7.DunDefTower_SAM
// 0x0070 (0x07A8 - 0x0738)
class ADunDefTower_SAM : public ADunDefTower_ProjectileType
{
public:
	class ADunDefHomingProjectile*                     HomingProjectileTemplate;                         		// 0x0738 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SkelControlPitchLookAtName;                       		// 0x073C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkelControlSingleBone*                      LeftMissileController;                            		// 0x0744 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkelControlSingleBone*                      RightMissileController;                           		// 0x0748 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       RotateToTargetAnimNodeName;                       		// 0x074C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftMissileControllerName;                        		// 0x0754 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightMissileControllerName;                       		// 0x075C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftMissileSocketName;                            		// 0x0764 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightMissileSocketName;                           		// 0x076C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      leftSocket : 1;                                   		// 0x0774 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     LeftSpawnLocation;                                		// 0x0778 (0x000C) [0x0000000000000000]              
	struct FVector                                     RightSpawnLocation;                               		// 0x0784 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RightSpawnRotation;                               		// 0x0790 (0x000C) [0x0000000000000000]              
	struct FRotator                                    LeftSpawnRotation;                                		// 0x079C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84092 ];

		return pClassPointer;
	};

	class UClass* GetDamageType ( );
	float GetAttackDamage ( );
	void eventShootProjectile ( );
	void eventShootMissileRight ( );
	void eventShootMissileLeft ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefTower_SAM::pClassPointer = NULL;

// Class CDT7.DunDefTower_SnowBall
// 0x0010 (0x0748 - 0x0738)
class ADunDefTower_SnowBall : public ADunDefTower_Fireball
{
public:
	float                                              GroundSpeedAdjustment;                            		// 0x0738 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumSpeed;                                     		// 0x073C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumSpeedIronManMode;                          		// 0x0740 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlowTargetTime;                                   		// 0x0744 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84124 ];

		return pClassPointer;
	};

	void UpdateTarget ( );
	void eventShootProjectile ( );
	float GetAttackDuration ( );
	float GetMovementSpeedMultiplier ( );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
};

UClass* ADunDefTower_SnowBall::pClassPointer = NULL;

// Class CDT7.DunDefTower_SpiderQueen
// 0x00D0 (0x0CFC - 0x0C2C)
class ADunDefTower_SpiderQueen : public ADunDefEnemy
{
public:
	float                                              StunDelay;                                        		// 0x0C2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CoreDamageMultiplier;                             		// 0x0C30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumAngleDotForSuperHit;                       		// 0x0C34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    NonStunnedDmgScalar;                              		// 0x0C38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CurrentNonStunnedDmgScalar;                       		// 0x0C44 (0x0004) [0x0000000000000000]              
	struct FName                                       BabySpawnLocSocket;                               		// 0x0C48 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BabySpawnAnimName;                                		// 0x0C50 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StunnedAnimLoop;                                  		// 0x0C58 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CrystalSocketName;                                		// 0x0C60 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MeleeSwingSocketName;                             		// 0x0C68 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebShootSocket;                                   		// 0x0C70 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebShootAnimation;                                		// 0x0C78 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StunnedHurtAnim;                                  		// 0x0C80 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     StunnedHurtEffectTemplate;                        		// 0x0C88 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    StunnedCoreVFX;                                   		// 0x0C8C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    EnragedVFX;                                       		// 0x0C90 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       EnrageSocketName;                                 		// 0x0C94 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UpperBodyLookAtName;                              		// 0x0C9C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrystalScaleDownTime;                             		// 0x0CA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinCrystalBrightnessScale;                        		// 0x0CA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageHealthPct;                                  		// 0x0CAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageDmgMult;                                    		// 0x0CB0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageBabySpawnMult;                              		// 0x0CB4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageIntervalMult;                               		// 0x0CB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageGroundSpeedMult;                            		// 0x0CBC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   EnemyHealthBarMaterialTemplate;                   		// 0x0CC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRageMode : 1;                                    		// 0x0CC4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsStunned : 1;                                   		// 0x0CC4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLookAtTarget : 1;                                		// 0x0CC4 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              TimeOfDeath;                                      		// 0x0CC8 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   QueenMIC;                                         		// 0x0CCC (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          UpperBodyLookAt;                                  		// 0x0CD0 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          IKTest;                                           		// 0x0CD4 (0x0004) [0x0000000000000000]              
	class AActor*                                      TheLastDamageCauser;                              		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              WebChargeTime;                                    		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              WebStartTime;                                     		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              currentTakenStunnedDamage;                        		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              AllowedDmgStunnedPct;                             		// 0x0CE8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                EnrageCoreColor;                                  		// 0x0CEC (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84163 ];

		return pClassPointer;
	};

	void SetDyingPhysics ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void SetUpperBodyLookAt ( unsigned long bTurnOn );
	void eventTick ( float DeltaTime );
	void PlayStunnedHurtEffect ( class UClass* DamageType, struct FVector HitLocation );
	void eventShootWeb ( );
	float PlayWebShootAnim ( );
	void PlayWebChargeAnim ( );
	void SetWebChargeTime ( float NewWebChargeTime );
	void GetWebProjectileLocAndRot ( struct FVector* Position, struct FRotator* Orientation );
	struct FVector GetMeleeSwingLocation ( );
	void eventMeleeSwingEnd ( );
	void eventMeleeSwingStart ( );
	void SetRageMode ( );
	float GetEnrageIntervalMult ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool CheckSpecialCoreDmg ( struct FVector HitLocation );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void StopStunAnimation ( );
	void PlayStunAnimation ( );
	float PlayBabySpawnAnim ( float playSpeed );
	float GetPawnDamageModifier ( unsigned long bDontIncludeAbilities );
	void UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues );
	void eventPostBeginPlay ( );
	void PlayJumpAnimation ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefTower_SpiderQueen::pClassPointer = NULL;

// Class CDT7.DunDefTower_SpiderQueenController
// 0x0080 (0x0680 - 0x0600)
class ADunDefTower_SpiderQueenController : public ADunDefEnemyController
{
public:
	int                                                NumWebProjectiles;                                		// 0x0600 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebRefireDelay;                                   		// 0x0604 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefWebProjectile*                        WebProjectileTemplate;                            		// 0x0608 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebShootAngle;                                    		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShootSpeed;                                       		// 0x0610 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinWebShootDistance;                              		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWebShootDistance;                              		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinWebAttackPrepTime;                             		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWebAttackPrepTime;                             		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    WebShotAngleOffset;                               		// 0x0624 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeRadius;                                      		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebAttackStateName;                               		// 0x0634 (0x0008) [0x0000000000000000]              
	float                                              LastWebShootTime;                                 		// 0x063C (0x0004) [0x0000000000000000]              
	float                                              currentWebPrepTime;                               		// 0x0640 (0x0004) [0x0000000000000000]              
	int                                                currentNumFiredProjectiles;                       		// 0x0644 (0x0004) [0x0000000000000000]              
	int                                                MeleeDamageAmount;                                		// 0x0648 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeleeSwingExtent;                                 		// 0x0650 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MeleeDamageType;                                  		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsInMeleeSwing : 1;                               		// 0x0660 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     PreviousMeleeSwingLocation;                       		// 0x0664 (0x000C) [0x0000000000000000]              
	TArray< class AActor* >                            SwingHurtList;                                    		// 0x0670 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              StunTime;                                         		// 0x067C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84247 ];

		return pClassPointer;
	};

	int GetAttackDamage ( );
	void eventSetTarget ( class AActor* NewTarget, unsigned long bDontClearIgnoreList );
	void ShootWeb ( );
	float GetWebChargeTime ( );
	void DoWebAttack ( );
	float GetAttackInterval ( class AActor* Victim );
	void CheckForCustomAttacks ( );
	void ForceWakeUp ( );
	bool AddToSwingHurtList ( class AActor* newEntry );
	void EndMeleeSwing ( );
	void StartMeleeSwing ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefTower_SpiderQueenController::pClassPointer = NULL;

// Class CDT7.DunDefTower_TotemMapWide
// 0x0030 (0x06B8 - 0x0688)
class ADunDefTower_TotemMapWide : public ADunDefTower_NonPhysical
{
public:
	struct FName                                       CustomAnimNodeName;                               		// 0x0688 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotemExponent;                                    		// 0x0690 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              MinMultiplier;                                    		// 0x0694 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              MaxMultiplier;                                    		// 0x0698 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              TotemMultiplier;                                  		// 0x069C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class UParticleSystem*                             AuraPawnEffect;                                   		// 0x06A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AssociatedHeroStat;                               		// 0x06A4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlend*                              CustomAnimNode;                                   		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ADunDefPlayer* >                     HeroList;                                         		// 0x06AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84419 ];

		return pClassPointer;
	};

	void PlayIdleAnimation ( );
	void PlaySpawnInAnimation ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	void Destroyed ( );
	void Effect ( );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	void PostBeginPlay ( );
	float GetSpeedMultiplier ( );
	void ReplicatedEvent ( struct FName VarName );
	bool SameTeamAs ( class UDunDefTargetableInterface* Target );
};

UClass* ADunDefTower_TotemMapWide::pClassPointer = NULL;

// Class CDT7.DunDefWeapon_MagicStaff_Dot
// 0x0000 (0x05F4 - 0x05F4)
class ADunDefWeapon_MagicStaff_Dot : public ADunDefWeapon_MagicStaff
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84461 ];

		return pClassPointer;
	};

	void ShootProjectiles ( int theFireMode );
};

UClass* ADunDefWeapon_MagicStaff_Dot::pClassPointer = NULL;

// Class CDT7.HeroEquipment_Familiar_TowerDamageScaling
// 0x00FC (0x0B98 - 0x0A9C)
class UHeroEquipment_Familiar_TowerDamageScaling : public UHeroEquipment_Familiar
{
public:
	float                                              ProjectileShootInterval;                          		// 0x0A9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           ProjectileTemplate;                               		// 0x0AA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           ProjectileTemplateAlt;                            		// 0x0AA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefProjectile* >                 ProjectileTemplates;                              		// 0x0AA8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       FamiliarSocketName;                               		// 0x0AB4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MuzzleSocketName;                                 		// 0x0ABC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShootEffectSocket;                                		// 0x0AC4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetRange;                                      		// 0x0ACC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ScaleTowerDamage : 1;                             		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseFixedShootSpeed : 1;                          		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShootProjectileWithoutTarget : 1;                		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bForceProjectileMuzzleRotation : 1;               		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIgnoreHurtAnimationWhenShooting : 1;             		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bUseProjectileImpactedDelegate : 1;               		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bMythicalScaleTowerDamage : 1;                    		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bChooseHealingTarget : 1;                         		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bProjectilesCollideWithOwner : 1;                 		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bAddManaForDamage : 1;                            		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bUseAltProjectile : 1;                            		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bIgnoreElementInTargeting : 1;                    		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bDoShotsPerSecondBonusCap : 1;                    		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      DoLineOfSightCheck : 1;                           		// 0x0AD0 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      bDidAddManaForDamage : 1;                         		// 0x0AD0 (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	TArray< struct FVector >                           ProjectileSpawnOffsets;                           		// 0x0AD4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     ProjectileSpawnOffset;                            		// 0x0AE0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FRotator >                          ProjectileRotOffsets;                             		// 0x0AEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    ProjectileDelays;                                 		// 0x0AF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MinimumProjectileSpeed;                           		// 0x0B04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileSpeedBonusMultiplier;                   		// 0x0B08 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAttackAnimationSpeed;                          		// 0x0B0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileDamageMultiplier;                       		// 0x0B10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShotsPerSecondExponent;                           		// 0x0B14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShotsPerSecondAnimExponent;                       		// 0x0B18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AbsoluteDamageMultiplier;                         		// 0x0B1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x0B20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x0B24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x0B28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MythicalScaleDamageStatExponent;                  		// 0x0B2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x0B30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareDamageMultiplier;                        		// 0x0B34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExtraNightmareDamageMultiplier;                   		// 0x0B38 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MythicalScaleDamageStatType;                      		// 0x0B3C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ShootSound;                                       		// 0x0B40 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ShootEffect;                                      		// 0x0B44 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseHealAmount;                                   		// 0x0B48 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealAmountMultiplier;                             		// 0x0B4C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareHealingMultiplier;                       		// 0x0B50 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AltProjectileMinimumRange;                        		// 0x0B54 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealingPriorityHealthPercentage;                  		// 0x0B58 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AttackAnimationAlt;                               		// 0x0B5C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShotsPerSecondBonusCap;                           		// 0x0B64 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseDamageToManaRatio;                            		// 0x0B68 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaMultiplier;                                   		// 0x0B6C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxManaPerDamage;                                 		// 0x0B70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinManaPerDamage;                                 		// 0x0B74 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxManaMultiplierExponent;                        		// 0x0B78 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageManaMultiplierExponent;                     		// 0x0B7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastShootProjectileTime;                          		// 0x0B80 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDunDefTargetableInterface*                  BestTargetRef;                                    		// 0x0B84 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0B88 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot > DelayedShots;                                     		// 0x0B8C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84486 ];

		return pClassPointer;
	};

	float GetHealAmount ( );
	void OnDunDefProjectileImpacted ( class ADunDefProjectile* aProjectile, class AActor* impactedOn );
	void NotifyEquipment_PawnTookDamage ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp );
	void ShootProjectile ( unsigned long bIsAltProjectile );
	void GetMuzzleTransformation ( class USkeletalMeshComponent* myMeshComp, struct FVector* SpawnLocation, struct FRotator* SpawnRotation );
	int GetWeaponDamage ( );
	void ApplyPrimaryDamageMultiplierDisplay ( int* StatValue );
	float GetEquipmentStatValue ( unsigned char equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp );
	void AddRandomizeValues ( float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear );
	bool AllowStatLevelUp ( unsigned char EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement );
	float GetAttackInterval ( unsigned long bIncludeShotsPerSecondExponent );
	class UClass* GetElementalDamageType ( );
	float GetProjectileElementalDamage ( );
	float GetProjectileDamage ( class ADunDefProjectile* projectileArch );
	float GetProjectileSpeed ( class ADunDefProjectile* projectileArch );
	int GetNumProjectiles ( );
	struct FRotator GetDesiredSphereRotationalPlacement ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget );
	struct FRotator GetDesiredDirection ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer );
	void ShutDown ( unsigned long isDestruction );
	void AttachedComponent ( class UPrimitiveComponent* aComp );
	void UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	void UpdateDelayedShots ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	void TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	class UDunDefTargetableInterface* GetBestTarget ( );
	class UDunDefTargetableInterface* GetBestHealingTarget ( float CheckHealthPercentageThreshold );
};

UClass* UHeroEquipment_Familiar_TowerDamageScaling::pClassPointer = NULL;

// Class CDT7.HeroEquipment_Familiar_Melee_TowerScaling
// 0x0060 (0x0BF8 - 0x0B98)
class UHeroEquipment_Familiar_Melee_TowerScaling : public UHeroEquipment_Familiar_TowerDamageScaling
{
public:
	float                                              MeleeHitRadius;                                   		// 0x0B98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x0B9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MeleeDamageType;                                  		// 0x0BA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxKnockbackMultiplier;                           		// 0x0BA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockbackBonusLinearScale;                        		// 0x0BA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockbackBonusExpScale;                           		// 0x0BAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAlsoShootProjectile : 1;                         		// 0x0BB0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ScaleMeleeDamageForHero : 1;                      		// 0x0BB0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseRandomizedDamage : 1;                         		// 0x0BB0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDoMeleeHealing : 1;                              		// 0x0BB0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIsAttacking : 1;                                 		// 0x0BB0 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              MeleeRange;                                       		// 0x0BB4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScaleDamageStatExponent;                          		// 0x0BB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExtraNightmareMeleeDamageMultiplier;              		// 0x0BBC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AlsoShootProjectileAnimation;                     		// 0x0BC0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScaleMeleeDamageForHeroStatType;                  		// 0x0BC8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                RandomizedDamageMultiplierMaximum;                		// 0x0BCC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomizedDamageMultiplierDivisor;                		// 0x0BD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseDamageToHealRatio;                            		// 0x0BD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EquipmentDamageMultiplierBase;                    		// 0x0BD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealPerDamage;                                 		// 0x0BDC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinHealPerDamage;                                 		// 0x0BE0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealMultiplierExponent;                        		// 0x0BE4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageHealMultiplierExponent;                     		// 0x0BE8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            SwingHurtList;                                    		// 0x0BEC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84677 ];

		return pClassPointer;
	};

	void AttachedComponent ( class UPrimitiveComponent* aComp );
	void NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp );
	void ShutDown ( unsigned long isDestruction );
	void UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	float GetHealMultiplier ( );
	float GetMomentumMultiplier ( );
	void UpdateAttackSwing ( float DeltaTime );
	bool AddToSwingHurtList ( class ADunDefPlayer* myOwner, class AActor* newEntry );
	void TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
};

UClass* UHeroEquipment_Familiar_Melee_TowerScaling::pClassPointer = NULL;

// Class CDT7.HeroEquipment_Familiar_TowerUpgrader
// 0x0028 (0x0AC4 - 0x0A9C)
class UHeroEquipment_Familiar_TowerUpgrader : public UHeroEquipment_Familiar
{
public:
	float                                              UpgradeInterval;                                  		// 0x0A9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAttackAnimationSpeed;                          		// 0x0AA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UpgradeRange;                                     		// 0x0AA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UpgradeCostMultiplier;                            		// 0x0AA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     PawnUpgradeEffect;                                		// 0x0AAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxUpgradeCost;                                   		// 0x0AB0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseFixedUpgradeSpeed : 1;                        		// 0x0AB4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDoingUpgrade : 1;                                		// 0x0AB4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	int                                                UpgradeCost;                                      		// 0x0AB8 (0x0004) [0x0000000000000000]              
	class ADunDefTower*                                TargetActor;                                      		// 0x0ABC (0x0004) [0x0000000000000000]              
	float                                              LastUpgradeTime;                                  		// 0x0AC0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84741 ];

		return pClassPointer;
	};

	void NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp );
	void UpgradeTower ( );
	float GetAttackInterval ( );
	float GetUpgradeAmount ( );
	void UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	void TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	class ADunDefTower* GetBestTarget ( );
	void AttachedComponent ( class UPrimitiveComponent* aComp );
};

UClass* UHeroEquipment_Familiar_TowerUpgrader::pClassPointer = NULL;

// Class CDT7.UI_TBR
// 0x0128 (0x0760 - 0x0638)
class UUI_TBR : public UDunDefUIScene
{
public:
	class UUIButton*                                   CloseButton;                                      		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UUIScriptWidget_Button* >            CheckPointButtons;                                		// 0x063C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct UDunDefHeroManagerNative_FOptionsInfo       SavedOptions;                                     		// 0x0648 (0x00F8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UDunDefHeroManager*                          HeroManager;                                      		// 0x0740 (0x0004) [0x0000000000000000]              
	struct FString                                     MapToLaunch;                                      		// 0x0744 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MapSelection;                                     		// 0x0750 (0x0004) [0x0000000000000000]              
	int                                                DifficultySelection;                              		// 0x0754 (0x0004) [0x0000000000000000]              
	class UUIScriptWidget_Button*                      TBRAscensionStartButton;                          		// 0x0758 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIScriptWidget_Button*                      TBRNightmareStartButton;                          		// 0x075C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202178 ];

		return pClassPointer;
	};

	void LaunchMap ( unsigned long bStartTrueBossRush );
	bool WasCheckPointButtonPressed ( class UUIObject* Widget );
	bool eventNotifyWidgetClicked ( class UUIObject* Widget );
	void CheckProgress ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
};

UClass* UUI_TBR::pClassPointer = NULL;

// Class CDT7.UI_ShopBase
// 0x009C (0x06D4 - 0x0638)
class UUI_ShopBase : public UDunDefUIScene
{
public:
	int                                                ShopID;                                           		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UUIButton_Shop* >                    Btn_ShopButtons;                                  		// 0x063C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UUILabel* >                          Lb_CurrencyLabels;                                		// 0x0648 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIPanel_DataList*                           ItemDataList;                                     		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseDynamicDataList : 1;                          		// 0x0658 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseKeyModifers : 1;                              		// 0x0658 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bFireKismetEventOnPurchase : 1;                   		// 0x0658 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FsShopInfo                                  ShopInfo;                                         		// 0x065C (0x0038) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FsShopInfo >                        ShopInfoPerTab;                                   		// 0x0694 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIButton*                                   CloseButton;                                      		// 0x06A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Lb_ShopName;                                      		// 0x06A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Lb_ShopDescription;                               		// 0x06A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       KismetEventName;                                  		// 0x06AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UDunDefUIScene*                              UI_ConfirmBoxTemplate;                            		// 0x06B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDunDefHeroManager*                          HeroManager;                                      		// 0x06B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                UserID;                                           		// 0x06BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDunDefHero*                                 currentHero;                                      		// 0x06C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton_Shop*                              LastSelecteditem;                                 		// 0x06C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIObject*                                   LastSelectedButton;                               		// 0x06C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Amount;                                           		// 0x06CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ADunDefPlayerController*                     CurrentPlayerController;                          		// 0x06D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202368 ];

		return pClassPointer;
	};

	class UUIButton_DataListEntry* GetSelectedShopButton ( );
	struct FsShopInfo GetShopInfo ( );
	struct FsShopItemInfo GetItemInfo ( class UUIButton_Shop* Button, unsigned long bGetValueFromFocusControl, unsigned long bGetValueFromLastSelectedButton );
	struct FString GetShopName ( unsigned long bGetDescription );
	bool AllowOverlays ( );
	TArray< class UHeroEquipment* > GetConsumedItemList ( struct FsShopItemInfo ShopItemInfo );
	class UUIButton_Shop* GetLastSelectedItem ( );
	void GiveMana ( struct FsShopItemInfo ShopItemInfo, class ADunDefPlayerController* PlayerController );
	bool GenerateItem ( struct FsShopItemInfo ShopItemInfo );
	void PurchaseItem ( struct FsShopItemInfo ShopItemInfo );
	void EntrySelected ( class UUIButton_DataListEntry* Button );
	void RefreshedList ( );
	void RefreshItemList ( int Id );
	bool OnReceivedInputKey ( struct FInputEventParameters* EventParms );
	void CancelClicked ( );
	void ConfirmClicked ( );
	void OpenError ( unsigned char ErrorCode );
	void OpenConfirm ( struct FsShopItemInfo ItemInfo );
	void OnItemPurchased ( class UUIObject* CallerObject );
	bool eventNotifyWidgetClicked ( class UUIObject* Widget );
	int GetTotalCost ( struct FsShopItemInfo ShopItemInfo );
	void UpdateUI ( );
	bool CanPurchaseItem ( class UUIButton_Shop* Button );
	void ConsumeItems ( TArray< class UHeroEquipment* > ItemsToConsume, struct FString ManaToConsume );
	void ClearCurrencyAmounts ( );
	struct FString FormatManaString ( struct FString ManaStringin );
	void UpdateCurrencyAmounts ( );
	bool InitializeShop ( );
	void PostInitialSceneUpdate ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
};

UClass* UUI_ShopBase::pClassPointer = NULL;

// Class CDT7.UI_VoidForge
// 0x0000 (0x06D4 - 0x06D4)
class UUI_VoidForge : public UUI_ShopBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202224 ];

		return pClassPointer;
	};

};

UClass* UUI_VoidForge::pClassPointer = NULL;

// Class CDT7.UI_DivineForge
// 0x0000 (0x06D4 - 0x06D4)
class UUI_DivineForge : public UUI_VoidForge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202220 ];

		return pClassPointer;
	};

};

UClass* UUI_DivineForge::pClassPointer = NULL;

// Class CDT7.UI_CoalForge
// 0x0000 (0x06D4 - 0x06D4)
class UUI_CoalForge : public UUI_DivineForge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202216 ];

		return pClassPointer;
	};

};

UClass* UUI_CoalForge::pClassPointer = NULL;

// Class CDT7.UI_ConfirmBox
// 0x0148 (0x0780 - 0x0638)
class UUI_ConfirmBox : public UDunDefUIScene
{
public:
	class UUIButton*                                   Lbt_ConfirmButton;                                		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIButton*                                   Lbt_CancelButton;                                 		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIButton*                                   Lbt_ErrorConfirm;                                 		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Lb_ConfirmText;                                   		// 0x0644 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIPanel*                                    Pnl_ItemInfo;                                     		// 0x0648 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Lb_ItemDescription;                               		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UUILabel* >                          CurrencyLabels;                                   		// 0x0650 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIImage*                                    ItemIcon;                                         		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UUIImage* >                          CurrencyIcons;                                    		// 0x0660 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bShopInitalized : 1;                              		// 0x066C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FsShopInfo                                  CachedShopInfo;                                   		// 0x0670 (0x0038) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FsShopItemInfo                              CachedShopItemInfo;                               		// 0x06A8 (0x00C0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConfirmClicked__Delegate;                     		// 0x0768 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelClicked__Delegate;                      		// 0x0774 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202284 ];

		return pClassPointer;
	};

	bool OnReceivedInputKey ( struct FInputEventParameters* EventParms );
	void PostInitialSceneUpdate ( );
	bool OnButtonPressed ( class UUIScreenObject* EventObject, int PlayerIndex );
	void InitalizeItemFromShop ( struct FsShopItemInfo ItemInfo, struct FsShopInfo ShopInfo );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void OnCancelClicked ( );
	void OnConfirmClicked ( );
};

UClass* UUI_ConfirmBox::pClassPointer = NULL;

// Class CDT7.UIButton_Shop
// 0x00EC (0x0870 - 0x0784)
class UUIButton_Shop : public UUIScriptWidget_EquipmentIconButton
{
public:
	struct FsShopItemInfo                              ItemInfo;                                         		// 0x0784 (0x00C0) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCanRefreshItemTemplate : 1;                      		// 0x0844 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              TooltipItemIconPaddingX;                          		// 0x0848 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TooltipItemIconPaddingY;                          		// 0x084C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TooltipCurrencyTextPaddingX;                      		// 0x0850 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TooltipCurrencyTextPaddingY;                      		// 0x0854 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TooltipItemIconScaleX;                            		// 0x0858 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TooltipItemIconScaleY;                            		// 0x085C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpaceBetweenCurrencyEntries;                      		// 0x0860 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __NotifyWidgetClicked__Delegate;                  		// 0x0864 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202354 ];

		return pClassPointer;
	};

	void DrawToolTip ( class UCanvas* C, float X1, float X2, float Y1, float Y2, float ScaleX, float ScaleY );
	void eventRenderGame ( class UCanvas* C, float X1, float X2, float Y1, float Y2 );
	class UHeroEquipment* GetEquipment ( );
	void UpdateItemInfo ( );
	class UUIDataContainer_Equipment* GetDataContainer ( );
	struct FString GetToolTipString ( );
	void InitializeFromDataListEntry ( class UUIPanel_DataList* DataList, class UDataListEntryInterface* Entry );
	struct FsShopInfo GetShopInfo ( );
	struct FsShopItemInfo GetShopItemInfo ( );
	bool ButtonClicked ( class UUIScreenObject* Sender, int PlayerIndex );
	bool NotifyWidgetClicked ( class UUIObject* Widget );
};

UClass* UUIButton_Shop::pClassPointer = NULL;

// Class CDT7.IShopHandler
// 0x0000 (0x003C - 0x003C)
class UIShopHandler : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202465 ];

		return pClassPointer;
	};

	void OnItemPurchased ( class UUIObject* CallerObject );
};

UClass* UIShopHandler::pClassPointer = NULL;

// Class CDT7.DunDef_SeqEvent_VoidForgeBuyEvent
// 0x0008 (0x0108 - 0x0100)
class UDunDef_SeqEvent_VoidForgeBuyEvent : public USequenceEvent
{
public:
	int                                                ItemIndex;                                        		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Debug;                                            		// 0x0104 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202470 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqEvent_VoidForgeBuyEvent::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif