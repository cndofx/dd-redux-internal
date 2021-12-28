/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT7_f_structs.h
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

// Function CDT7.DunDefPlayerAbility_FireAura.CancelEffect
// [0x00020102] 
struct ADunDefPlayerAbility_FireAura_execCancelEffect_Parms
{
};

// Function CDT7.DunDefPlayerAbility_FireAura.GetDamage
// [0x00020102] 
struct ADunDefPlayerAbility_FireAura_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefPlayerAbility_FireAura.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_FireAura_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefPlayerAbility_FireAura.DoEffect
// [0x00020102] 
struct ADunDefPlayerAbility_FireAura_execDoEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefPlayerAbility_FireAura.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_FireAura_execOnActivate_Parms
{
};

// Function CDT7.DunDefPlayerAbility_FireAura.PostBeginPlay
// [0x00020102] 
struct ADunDefPlayerAbility_FireAura_execPostBeginPlay_Parms
{
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.SetRange
// [0x00020102] 
struct ADunDefPlayerAbility_SpawnKobold_execSetRange_Parms
{
	float                                              theRange;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_SpawnKobold_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.ScaleForHeroModifiers
// [0x00020102] 
struct ADunDefPlayerAbility_SpawnKobold_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UDunDefHero*                              hero;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.GetAbilityDamageMultiplier
// [0x00020002] 
struct ADunDefPlayerAbility_SpawnKobold_execGetAbilityDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.DoActorSpawn
// [0x00820002] 
struct ADunDefPlayerAbility_SpawnKobold_execDoActorSpawn_Parms
{
	// struct FVector                                  SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   spawnedActor;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 OriginalSpawnRotation;                            		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_SpawnKobold_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefPlayerAbility_SummonerPetBoost.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_SummonerPetBoost_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefPlayerAbility_SummonerPetBoost.GetPetAttackRateMultiplier
// [0x00020102] 
struct ADunDefPlayerAbility_SummonerPetBoost_execGetPetAttackRateMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Mult;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UDunDefHero*                              hero;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_HarpoonDot.ProcessTouch
// [0x00020102] 
struct ADunDefProjectile_HarpoonDot_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefEmitterSpawnable*                  aSpawnableEmitter;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  aSpawned;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           MomentumToUse;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_HarpoonDot.SpawnDot
// [0x00020002] 
struct ADunDefProjectile_HarpoonDot_execSpawnDot_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          Dot;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_HarpoonStaff.Explode
// [0x00820102] 
struct ADunDefProjectile_HarpoonStaff_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DownHitLocation;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DownHitNormal;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  spawnedResult;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           SizeChange;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_HarpoonStaff.ProcessTouch
// [0x00020102] 
struct ADunDefProjectile_HarpoonStaff_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefEmitterSpawnable*                  aSpawnableEmitter;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  aSpawned;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           MomentumToUse;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_HarpoonStaff.IsImpactAllowed
// [0x00020102] 
struct ADunDefProjectile_HarpoonStaff_execIsImpactAllowed_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefProjectile_SnowBall.DoEffect
// [0x00020002] 
struct ADunDefProjectile_SnowBall_execDoEffect_Parms
{
	// class AActor*                                   EnemyHit;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           HitRadius;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_SnowBall.SpawnEffect
// [0x00020002] 
struct ADunDefProjectile_SnowBall_execSpawnEffect_Parms
{
	// class ADunDefEmitterSpawnable*                  SpawnEffect;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   EnemyHit;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           HitRadius;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_SnowBall.Explode
// [0x00820102] 
struct ADunDefProjectile_SnowBall_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DownHitLocation;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DownHitNormal;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  spawnedResult;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           SizeChange;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnEffect
// [0x00020002] 
struct ADunDefProjectile_StaffDot_execSpawnEffect_Parms
{
	// class ADunDefEmitterSpawnable*                  SpawnEffect;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   EnemyHit;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           HitRadius;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_StaffDot.Landed
// [0x00020102] 
struct ADunDefProjectile_StaffDot_execLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Floor;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnDot
// [0x00020002] 
struct ADunDefProjectile_StaffDot_execSpawnDot_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          Dot;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_StaffDot.DoEffect
// [0x00020002] 
struct ADunDefProjectile_StaffDot_execDoEffect_Parms
{
};

// Function CDT7.DunDefProjectile_StaffDot.Explode
// [0x00020102] 
struct ADunDefProjectile_StaffDot_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefEmitterSpawnable*                  ImpactEffect;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           SizeChange;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_CannonBall.UpdateTurretLookSkelControl
// [0x00020102] 
struct ADunDefTower_CannonBall_execUpdateTurretLookSkelControl_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_CannonBall.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_CannonBall_eventPostBeginPlay_Parms
{
};

// Function CDT7.DunDefTower_Totem.PlayIdleAnimation
// [0x00020102] 
struct ADunDefTower_Totem_execPlayIdleAnimation_Parms
{
};

// Function CDT7.DunDefTower_Totem.PlaySpawnInAnimation
// [0x00020102] 
struct ADunDefTower_Totem_execPlaySpawnInAnimation_Parms
{
};

// Function CDT7.DunDefTower_Totem.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_Totem_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UDunDefHero*                              hero;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_Totem.IsValidForLifeEnergyDecrease
// [0x00020102] 
struct ADunDefTower_Totem_execIsValidForLifeEnergyDecrease_Parms
{
	class ADunDefPawn*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_Totem.GetDamageMultiplier
// [0x00020102] 
struct ADunDefTower_Totem_execGetDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_Totem.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_Totem_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_Totem.TimedEffect
// [0x00020102] 
struct ADunDefTower_Totem_execTimedEffect_Parms
{
	class ADunDefPawn*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_Totem.PostBeginPlay
// [0x00020102] 
struct ADunDefTower_Totem_execPostBeginPlay_Parms
{
};

// Function CDT7.DunDefTower_Totem.ReplicatedEvent
// [0x00020102] 
struct ADunDefTower_Totem_execReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_DamageTotem.ExitEffect
// [0x00020102] 
struct ADunDefTower_DamageTotem_execExitEffect_Parms
{
	class ADunDefPawn*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_DamageTotem.EntryEffect
// [0x00020102] 
struct ADunDefTower_DamageTotem_execEntryEffect_Parms
{
	class ADunDefPawn*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_DamageTotem.TimedEffect
// [0x00020102] 
struct ADunDefTower_DamageTotem_execTimedEffect_Parms
{
	class ADunDefPawn*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_DamageTotem.PostBeginPlay
// [0x00020102] 
struct ADunDefTower_DamageTotem_execPostBeginPlay_Parms
{
};

// Function CDT7.DunDefTower_SAM.GetDamageType
// [0x00020102] 
struct ADunDefTower_SAM_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SAM.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_SAM_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SAM.ShootProjectile
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SAM_eventShootProjectile_Parms
{
	// class ADunDefHomingProjectile*                  hProjectile;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SAM.ShootMissileRight
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SAM_eventShootMissileRight_Parms
{
};

// Function CDT7.DunDefTower_SAM.ShootMissileLeft
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SAM_eventShootMissileLeft_Parms
{
};

// Function CDT7.DunDefTower_SAM.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SAM_eventPostBeginPlay_Parms
{
};

// Function CDT7.DunDefTower_SnowBall.UpdateTarget
// [0x00820002] 
struct ADunDefTower_SnowBall_execUpdateTarget_Parms
{
	// class AActor*                                   PotentialTarget;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               TargetableInterface;                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           ClosestRange;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           TempRange;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ProjectileSpawnLocation;                          		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ProjectileSpawnRotation;                          		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           theTargetingDesirability;                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SnowBall.ShootProjectile
// [0x00820902] ( FUNC_Event )
struct ADunDefTower_SnowBall_eventShootProjectile_Parms
{
	// struct FVector                                  OrigProjectileSpawnLocation;                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ProjectileSpawnLocation;                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ProjectileSpawnRotation;                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        theProjectile;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RandomAimOffset;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShootAtLocation;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SnowBall.GetAttackDuration
// [0x00020102] 
struct ADunDefTower_SnowBall_execGetAttackDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SnowBall.GetMovementSpeedMultiplier
// [0x00020102] 
struct ADunDefTower_SnowBall_execGetMovementSpeedMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SnowBall.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_SnowBall_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.SetDyingPhysics
// [0x00020100] 
struct ADunDefTower_SpiderQueen_execSetDyingPhysics_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.Died
// [0x00020002] 
struct ADunDefTower_SpiderQueen_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueen.SetUpperBodyLookAt
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execSetUpperBodyLookAt_Parms
{
	unsigned long                                      bTurnOn : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SpiderQueen_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.PlayStunnedHurtEffect
// [0x00820102] 
struct ADunDefTower_SpiderQueen_execPlayStunnedHurtEffect_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 theRot;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SpiderQueen.ShootWeb
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_SpiderQueen_eventShootWeb_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.PlayWebShootAnim
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execPlayWebShootAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueen.PlayWebChargeAnim
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execPlayWebChargeAnim_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.SetWebChargeTime
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execSetWebChargeTime_Parms
{
	float                                              NewWebChargeTime;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.GetWebProjectileLocAndRot
// [0x00420102] 
struct ADunDefTower_SpiderQueen_execGetWebProjectileLocAndRot_Parms
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Orientation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function CDT7.DunDefTower_SpiderQueen.GetMeleeSwingLocation
// [0x00820102] 
struct ADunDefTower_SpiderQueen_execGetMeleeSwingLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SwingLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SwingRotation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SpiderQueen.MeleeSwingEnd
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_SpiderQueen_eventMeleeSwingEnd_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.MeleeSwingStart
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_SpiderQueen_eventMeleeSwingStart_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.SetRageMode
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execSetRageMode_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.GetEnrageIntervalMult
// [0x00020002] 
struct ADunDefTower_SpiderQueen_execGetEnrageIntervalMult_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueen.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefTower_SpiderQueen_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.CheckSpecialCoreDmg
// [0x00820002] 
struct ADunDefTower_SpiderQueen_execCheckSpecialCoreDmg_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  theLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 theRot;                                           		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SpiderQueen.AdjustDamage
// [0x00424002] 
struct ADunDefTower_SpiderQueen_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.NotifyTakeHit
// [0x00020002] 
struct ADunDefTower_SpiderQueen_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.StopStunAnimation
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execStopStunAnimation_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.PlayStunAnimation
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execPlayStunAnimation_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.PlayBabySpawnAnim
// [0x00020102] 
struct ADunDefTower_SpiderQueen_execPlayBabySpawnAnim_Parms
{
	float                                              playSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueen.GetPawnDamageModifier
// [0x00024102] 
struct ADunDefTower_SpiderQueen_execGetPawnDamageModifier_Parms
{
	unsigned long                                      bDontIncludeAbilities : 1;                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueen.UpdateDifficultyValues
// [0x00024002] 
struct ADunDefTower_SpiderQueen_execUpdateDifficultyValues_Parms
{
	unsigned long                                      UpdateMaterial : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      onlyDynamicValues : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueen.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SpiderQueen_eventPostBeginPlay_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.PlayJumpAnimation
// [0x00020100] 
struct ADunDefTower_SpiderQueen_execPlayJumpAnimation_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueen.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefTower_SpiderQueen_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueenController.GetAttackDamage
// [0x00020002] 
struct ADunDefTower_SpiderQueenController_execGetAttackDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueenController.SetTarget
// [0x00024802] ( FUNC_Event )
struct ADunDefTower_SpiderQueenController_eventSetTarget_Parms
{
	class AActor*                                      NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDontClearIgnoreList : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.DunDefTower_SpiderQueenController.ShootWeb
// [0x00820002] 
struct ADunDefTower_SpiderQueenController_execShootWeb_Parms
{
	// struct FVector                                  WebSpawnLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 WebSpawnRotation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefWebProjectile*                     theProjectile;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WebShootDirection;                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  WebLandLocation;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TempWebShootDirection;                            		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             shiftDirection;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	// class AActor*                                   myTarget;                                         		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SpiderQueenController.GetWebChargeTime
// [0x00020102] 
struct ADunDefTower_SpiderQueenController_execGetWebChargeTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueenController.DoWebAttack
// [0x00020002] 
struct ADunDefTower_SpiderQueenController_execDoWebAttack_Parms
{
	// class ADunDefTower_SpiderQueen*                 theSpider;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SpiderQueenController.GetAttackInterval
// [0x00024002] 
struct ADunDefTower_SpiderQueenController_execGetAttackInterval_Parms
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueenController.CheckForCustomAttacks
// [0x00020002] 
struct ADunDefTower_SpiderQueenController_execCheckForCustomAttacks_Parms
{
	// float                                           DistancetoTarget;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_SpiderQueenController.ForceWakeUp
// [0x00020002] 
struct ADunDefTower_SpiderQueenController_execForceWakeUp_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueenController.AddToSwingHurtList
// [0x00020002] 
struct ADunDefTower_SpiderQueenController_execAddToSwingHurtList_Parms
{
	class AActor*                                      newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_SpiderQueenController.EndMeleeSwing
// [0x00020002] 
struct ADunDefTower_SpiderQueenController_execEndMeleeSwing_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueenController.StartMeleeSwing
// [0x00020000] 
struct ADunDefTower_SpiderQueenController_execStartMeleeSwing_Parms
{
};

// Function CDT7.DunDefTower_SpiderQueenController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SpiderQueenController_eventPostBeginPlay_Parms
{
};

// Function CDT7.DunDefTower_TotemMapWide.PlayIdleAnimation
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execPlayIdleAnimation_Parms
{
};

// Function CDT7.DunDefTower_TotemMapWide.PlaySpawnInAnimation
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execPlaySpawnInAnimation_Parms
{
};

// Function CDT7.DunDefTower_TotemMapWide.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_TotemMapWide_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UDunDefHero*                              hero;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_TotemMapWide.Destroyed
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execDestroyed_Parms
{
	// class ADunDefPlayer*                            A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_TotemMapWide.Effect
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execEffect_Parms
{
	// class ADunDefPlayer*                            A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefTower_TotemMapWide.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_TotemMapWide_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_TotemMapWide.PostBeginPlay
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execPostBeginPlay_Parms
{
};

// Function CDT7.DunDefTower_TotemMapWide.GetSpeedMultiplier
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execGetSpeedMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefTower_TotemMapWide.ReplicatedEvent
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefTower_TotemMapWide.SameTeamAs
// [0x00020102] 
struct ADunDefTower_TotemMapWide_execSameTeamAs_Parms
{
	class UDunDefTargetableInterface*                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.DunDefWeapon_MagicStaff_Dot.ShootProjectiles
// [0x00824102] 
struct ADunDefWeapon_MagicStaff_Dot_execShootProjectiles_Parms
{
	int                                                theFireMode;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefProjectile*                        SpawnedProjectile;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  MuzzleFlashEffect;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             useNumProjectiles;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             projAdditionalDamageAmount;                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bForceNoRotClamping : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ProjDamage;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           projSpeed;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ProjAdditionalDamageType;                         		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetHealAmount
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetHealAmount_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           healAmount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.OnDunDefProjectileImpacted
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execOnDunDefProjectileImpacted_Parms
{
	class ADunDefProjectile*                           aProjectile;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      impactedOn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           MaxManaDamageClamp;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ManaPowerToAdd;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_PawnTookDamage
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_PawnTookDamage_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_AnimNotifyAttachment_Parms
{
	int                                                NotifyID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      equipmentSkelComp;                                		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShootProjectile
// [0x00824002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execShootProjectile_Parms
{
	unsigned long                                      bIsAltProjectile : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   MyMeshComponent;                                  		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        SpawnedProjectile;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               BestTarget;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             useNumProjectiles;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             theAdditionalDamageAmount;                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// class ADunDefProjectile*                        projectileArch;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	// struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot theDelayedShot;                                   		// 0x0040 (0x0024) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetMuzzleTransformation
// [0x00420002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetMuzzleTransformation_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetWeaponDamage
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetWeaponDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ApplyPrimaryDamageMultiplierDisplay
// [0x00420002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execApplyPrimaryDamageMultiplierDisplay_Parms
{
	int                                                StatValue;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetEquipmentStatValue
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetEquipmentStatValue_Parms
{
	unsigned char                                      equipmentStatType;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      returnFinalAddedValue : 1;                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      includeStatLevelUp : 1;                           		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             val;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execAddRandomizeValues_Parms
{
	float                                              equipmentQuality;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      doResetStatsToTemplate : 1;                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDontUseMissionRandomizerMultiplier : 1;          		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              RandomizerMultiplierOverride;                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsForShop : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowTranscendentGear : 1;                       		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execAllowStatLevelUp_Parms
{
	unsigned char                                      EQS;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                statSubIndex;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      IsInForgeUI : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreManaRequirement : 1;                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetAttackInterval_Parms
{
	unsigned long                                      bIncludeShotsPerSecondExponent : 1;               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetElementalDamageType
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetElementalDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileElementalDamage
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileElementalDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileDamage
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileDamage_Parms
{
	class ADunDefProjectile*                           projectileArch;                                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileSpeed
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileSpeed_Parms
{
	class ADunDefProjectile*                           projectileArch;                                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetNumProjectiles
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetNumProjectiles_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredSphereRotationalPlacement
// [0x00420002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredSphereRotationalPlacement_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class ADunDefPlayer*                               myPlayer;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HasTarget;                                        		// 0x0008 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredDirection
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredDirection_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class ADunDefPlayer*                               myPlayer;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShutDown
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execShutDown_Parms
{
	unsigned long                                      isDestruction : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AttachedComponent
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execAttachedComponent_Parms
{
	class UPrimitiveComponent*                         aComp;                                            		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateAI
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execUpdateAI_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateDelayedShots
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execUpdateDelayedShots_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.TickedByPawn
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execTickedByPawn_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestTarget
// [0x00820002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetBestTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   act;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   aTarget;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestTarget;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           closestDistance;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           newDistance;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ProjectileSpawnLocation;                          		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ProjectileSpawnRotation;                          		// 0x002C (0x000C) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   MyMeshComponent;                                  		// 0x0038 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestHealingTarget
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetBestHealingTarget_Parms
{
	float                                              CheckHealthPercentageThreshold;                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   act;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            aTarget;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            BestTarget;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           LowestHealthPercent;                              		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           newHealthPercent;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AttachedComponent
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execAttachedComponent_Parms
{
	class UPrimitiveComponent*                         aComp;                                            		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execNotifyEquipment_AnimNotifyAttachment_Parms
{
	int                                                NotifyID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      equipmentSkelComp;                                		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.ShutDown
// [0x00024002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execShutDown_Parms
{
	unsigned long                                      isDestruction : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAI
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAI_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetHealMultiplier
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execGetHealMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetMomentumMultiplier
// [0x00020102] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execGetMomentumMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAttackSwing
// [0x00820002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAttackSwing_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  slapLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 slapRot;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            OwnerPlayer;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   SMComp;                                           		// 0x0024 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// unsigned long                                   bAddedManaForDamage : 1;                          		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDidMeleeHealing : 1;                             		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           MaxManaDamageClamp;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           ManaPowerToAdd;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           MaxHealDamageClamp;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           healAmount;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           Damage;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           RandomMultiplier;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AddToSwingHurtList
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execAddToSwingHurtList_Parms
{
	class ADunDefPlayer*                               myOwner;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      newEntry;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.TickedByPawn
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execTickedByPawn_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerUpgrader_execNotifyEquipment_AnimNotifyAttachment_Parms
{
	int                                                NotifyID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      equipmentSkelComp;                                		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.UpgradeTower
// [0x00020102] 
struct UHeroEquipment_Familiar_TowerUpgrader_execUpgradeTower_Parms
{
	// class USkeletalMeshComponent*                   MyMeshComponent;                                  		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             aTower;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             UpgradeAmount;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.GetAttackInterval
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerUpgrader_execGetAttackInterval_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.GetUpgradeAmount
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerUpgrader_execGetUpgradeAmount_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.UpdateAI
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerUpgrader_execUpdateAI_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.TickedByPawn
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerUpgrader_execTickedByPawn_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.GetBestTarget
// [0x00820102] 
struct UHeroEquipment_Familiar_TowerUpgrader_execGetBestTarget_Parms
{
	class ADunDefTower*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    thePawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             BestTower;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             TestTower;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           TestHealthPercent;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           LowestHealthPercent;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           boundRadius;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           boundHeight;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  towerLoc;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.AttachedComponent
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerUpgrader_execAttachedComponent_Parms
{
	class UPrimitiveComponent*                         aComp;                                            		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.UI_TBR.LaunchMap
// [0x00024102] 
struct UUI_TBR_execLaunchMap_Parms
{
	unsigned long                                      bStartTrueBossRush : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             PrimaryUserID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_TBR.WasCheckPointButtonPressed
// [0x00020102] 
struct UUI_TBR_execWasCheckPointButtonPressed_Parms
{
	class UUIObject*                                   Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUIScriptWidget_Button*                   ButtonToTest;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_TBR.NotifyWidgetClicked
// [0x00020802] ( FUNC_Event )
struct UUI_TBR_eventNotifyWidgetClicked_Parms
{
	class UUIObject*                                   Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_TBR.CheckProgress
// [0x00020102] 
struct UUI_TBR_execCheckProgress_Parms
{
	// class UUIScriptWidget_Button*                   ButtonToTest;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ValueToCheck;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_TBR.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUI_TBR_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function CDT7.UI_ConfirmBox.OnReceivedInputKey
// [0x00420002] 
struct UUI_ConfirmBox_execOnReceivedInputKey_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ConfirmBox.PostInitialSceneUpdate
// [0x00020002] 
struct UUI_ConfirmBox_execPostInitialSceneUpdate_Parms
{
};

// Function CDT7.UI_ConfirmBox.OnButtonPressed
// [0x00020002] 
struct UUI_ConfirmBox_execOnButtonPressed_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ConfirmBox.InitalizeItemFromShop
// [0x00020002] 
struct UUI_ConfirmBox_execInitalizeItemFromShop_Parms
{
	struct FsShopItemInfo                              ItemInfo;                                         		// 0x0000 (0x00C0) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FsShopInfo                                  ShopInfo;                                         		// 0x00C0 (0x0038) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x00F8 (0x0004) [0x0000000000000000]              
	// class USurface*                                 TempIcon;                                         		// 0x00FC (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ConfirmBox.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUI_ConfirmBox_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function CDT7.UI_ConfirmBox.OnCancelClicked
// [0x00120000] 
struct UUI_ConfirmBox_execOnCancelClicked_Parms
{
};

// Function CDT7.UI_ConfirmBox.OnConfirmClicked
// [0x00120000] 
struct UUI_ConfirmBox_execOnConfirmClicked_Parms
{
};

// Function CDT7.UIButton_Shop.DrawToolTip
// [0x00020002] 
struct UUIButton_Shop_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X1;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X2;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y1;                                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y2;                                               		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScaleX;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScaleY;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           TextWidth;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           TextHeight;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           leftRect;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           rightRect;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           topRect;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           bottomRect;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           ownerLeft;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           ownerRight;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           ownerTop;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           ownerBottom;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FString                                  theToolTipString;                                 		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UFont*                                    PrevFont;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEnabled : 1;                                     		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FTextEx >                        TextBlocks;                                       		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             ii;                                               		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UIButton_Shop.RenderGame
// [0x00820802] ( FUNC_Event )
struct UUIButton_Shop_eventRenderGame_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X1;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X2;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y1;                                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y2;                                               		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bEnabled : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UFont*                                    PrevFont;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           scaleMult;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           scaleOffset;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           widgetScaleX;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           widgetScaleY;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// class USurface*                                 IconTex;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             BgCol;                                            		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UHeroEquipment*                           myEquipment;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           IconScaleMult;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           leftRect;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           topRect;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           rightRect;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           bottomRect;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             DrawWhiteColor;                                   		// 0x0058 (0x0010) [0x0000000000000000]              
	// unsigned long                                   bIsFolder : 1;                                    		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function CDT7.UIButton_Shop.GetEquipment
// [0x00020002] 
struct UUIButton_Shop_execGetEquipment_Parms
{
	class UHeroEquipment*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UIButton_Shop.UpdateItemInfo
// [0x00020002] 
struct UUIButton_Shop_execUpdateItemInfo_Parms
{
};

// Function CDT7.UIButton_Shop.GetDataContainer
// [0x00020002] 
struct UUIButton_Shop_execGetDataContainer_Parms
{
	class UUIDataContainer_Equipment*                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUIObject*                                tOwner;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UIButton_Shop.GetToolTipString
// [0x00020002] 
struct UUIButton_Shop_execGetToolTipString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function CDT7.UIButton_Shop.InitializeFromDataListEntry
// [0x00020002] 
struct UUIButton_Shop_execInitializeFromDataListEntry_Parms
{
	class UUIPanel_DataList*                           DataList;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UDataListEntryInterface*                     Entry;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.UIButton_Shop.GetShopInfo
// [0x00820102] 
struct UUIButton_Shop_execGetShopInfo_Parms
{
	struct FsShopInfo                                  ReturnValue;                                      		// 0x0000 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FsShopInfo                               ShopInfo;                                         		// 0x0038 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function CDT7.UIButton_Shop.GetShopItemInfo
// [0x00020102] 
struct UUIButton_Shop_execGetShopItemInfo_Parms
{
	struct FsShopItemInfo                              ReturnValue;                                      		// 0x0000 (0x00C0) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function CDT7.UIButton_Shop.ButtonClicked
// [0x00020002] 
struct UUIButton_Shop_execButtonClicked_Parms
{
	class UUIScreenObject*                             Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UIButton_Shop.NotifyWidgetClicked
// [0x00120000] 
struct UUIButton_Shop_execNotifyWidgetClicked_Parms
{
	class UUIObject*                                   Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ShopBase.GetSelectedShopButton
// [0x00020002] 
struct UUI_ShopBase_execGetSelectedShopButton_Parms
{
	class UUIButton_DataListEntry*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ShopBase.GetShopInfo
// [0x00020002] 
struct UUI_ShopBase_execGetShopInfo_Parms
{
	struct FsShopInfo                                  ReturnValue;                                      		// 0x0000 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function CDT7.UI_ShopBase.GetItemInfo
// [0x00820002] 
struct UUI_ShopBase_execGetItemInfo_Parms
{
	class UUIButton_Shop*                              Button;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGetValueFromFocusControl : 1;                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bGetValueFromLastSelectedButton : 1;              		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FsShopItemInfo                              ReturnValue;                                      		// 0x000C (0x00C0) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FsShopItemInfo                           ItemInfo;                                         		// 0x00CC (0x00C0) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function CDT7.UI_ShopBase.GetShopName
// [0x00020002] 
struct UUI_ShopBase_execGetShopName_Parms
{
	unsigned long                                      bGetDescription : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function CDT7.UI_ShopBase.AllowOverlays
// [0x00020002] 
struct UUI_ShopBase_execAllowOverlays_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ShopBase.GetConsumedItemList
// [0x00020102] 
struct UUI_ShopBase_execGetConsumedItemList_Parms
{
	struct FsShopItemInfo                              ShopItemInfo;                                     		// 0x0000 (0x00C0) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< class UHeroEquipment* >                    ReturnValue;                                      		// 0x00C0 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< class UHeroEquipment* >                 Equipments;                                       		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x00D8 (0x0004) [0x0000000000000000]              
	// int                                             ii;                                               		// 0x00DC (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.GetLastSelectedItem
// [0x00020102] 
struct UUI_ShopBase_execGetLastSelectedItem_Parms
{
	class UUIButton_Shop*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ShopBase.GiveMana
// [0x00820102] 
struct UUI_ShopBase_execGiveMana_Parms
{
	struct FsShopItemInfo                              ShopItemInfo;                                     		// 0x0000 (0x00C0) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ADunDefPlayerController*                     PlayerController;                                 		// 0x00C0 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FHighDigitInt                            mana;                                             		// 0x00C4 (0x0010) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.GenerateItem
// [0x00820102] 
struct UUI_ShopBase_execGenerateItem_Parms
{
	struct FsShopItemInfo                              ShopItemInfo;                                     		// 0x0000 (0x00C0) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x00C0 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FEquipmentNetInfo                        theNetInfo;                                       		// 0x00C4 (0x00F8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FEquipmentNetInfo                        BlankNetInfo;                                     		// 0x01BC (0x00F8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UHeroEquipment*                           theNewEquipment;                                  		// 0x02B4 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           TheOldEquipment;                                  		// 0x02B8 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x02BC (0x0004) [0x0000000000000000]              
	// int                                             ii;                                               		// 0x02C0 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  PC;                                               		// 0x02C4 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.PurchaseItem
// [0x00020102] 
struct UUI_ShopBase_execPurchaseItem_Parms
{
	struct FsShopItemInfo                              ShopItemInfo;                                     		// 0x0000 (0x00C0) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function CDT7.UI_ShopBase.EntrySelected
// [0x00020002] 
struct UUI_ShopBase_execEntrySelected_Parms
{
	class UUIButton_DataListEntry*                     Button;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UUIButton_Shop*                           Selected;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.RefreshedList
// [0x00020002] 
struct UUI_ShopBase_execRefreshedList_Parms
{
};

// Function CDT7.UI_ShopBase.RefreshItemList
// [0x00020102] 
struct UUI_ShopBase_execRefreshItemList_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.UI_ShopBase.OnReceivedInputKey
// [0x00420002] 
struct UUI_ShopBase_execOnReceivedInputKey_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ShopBase.CancelClicked
// [0x00020002] 
struct UUI_ShopBase_execCancelClicked_Parms
{
};

// Function CDT7.UI_ShopBase.ConfirmClicked
// [0x00020002] 
struct UUI_ShopBase_execConfirmClicked_Parms
{
};

// Function CDT7.UI_ShopBase.OpenError
// [0x00020102] 
struct UUI_ShopBase_execOpenError_Parms
{
	unsigned char                                      ErrorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.UI_ShopBase.OpenConfirm
// [0x00020102] 
struct UUI_ShopBase_execOpenConfirm_Parms
{
	struct FsShopItemInfo                              ItemInfo;                                         		// 0x0000 (0x00C0) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UDunDefUIScene*                           ConfirmBox;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.OnItemPurchased
// [0x00020102] 
struct UUI_ShopBase_execOnItemPurchased_Parms
{
	class UUIObject*                                   CallerObject;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.UI_ShopBase.NotifyWidgetClicked
// [0x00020802] ( FUNC_Event )
struct UUI_ShopBase_eventNotifyWidgetClicked_Parms
{
	class UUIObject*                                   Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUIButton_Shop*                           Selected;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.GetTotalCost
// [0x00020102] 
struct UUI_ShopBase_execGetTotalCost_Parms
{
	struct FsShopItemInfo                              ShopItemInfo;                                     		// 0x0000 (0x00C0) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x00C0 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.UI_ShopBase.UpdateUI
// [0x00020102] 
struct UUI_ShopBase_execUpdateUI_Parms
{
};

// Function CDT7.UI_ShopBase.CanPurchaseItem
// [0x00820102] 
struct UUI_ShopBase_execCanPurchaseItem_Parms
{
	class UUIButton_Shop*                              Button;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             TotalCost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FsShopItemInfo                           ShopItemInfo;                                     		// 0x0010 (0x00C0) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function CDT7.UI_ShopBase.ConsumeItems
// [0x00824102] 
struct UUI_ShopBase_execConsumeItems_Parms
{
	TArray< class UHeroEquipment* >                    ItemsToConsume;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ManaToConsume;                                    		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// int                                             it;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             NumItemsToConsume;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FHighDigitInt                            mana;                                             		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.ClearCurrencyAmounts
// [0x00020102] 
struct UUI_ShopBase_execClearCurrencyAmounts_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.FormatManaString
// [0x00020102] 
struct UUI_ShopBase_execFormatManaString_Parms
{
	struct FString                                     ManaStringin;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  LocalString;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  LocalString2;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.UpdateCurrencyAmounts
// [0x00020102] 
struct UUI_ShopBase_execUpdateCurrencyAmounts_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.InitializeShop
// [0x00020102] 
struct UUI_ShopBase_execInitializeShop_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UDunDefHeroManager*                       hero;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.UI_ShopBase.PostInitialSceneUpdate
// [0x00020002] 
struct UUI_ShopBase_execPostInitialSceneUpdate_Parms
{
};

// Function CDT7.UI_ShopBase.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUI_ShopBase_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function CDT7.IShopHandler.OnItemPurchased
// [0x00020100] 
struct UIShopHandler_execOnItemPurchased_Parms
{
	class UUIObject*                                   CallerObject;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDef_SeqEvent_VoidForgeBuyEvent.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqEvent_VoidForgeBuyEvent_eventActivated_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif