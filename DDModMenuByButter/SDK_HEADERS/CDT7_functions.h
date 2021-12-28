/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT7_functions.h
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

// Function CDT7.DunDefPlayerAbility_FireAura.CancelEffect
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_FireAura::CancelEffect ( )
{
	static UFunction* pFnCancelEffect = NULL;

	if ( ! pFnCancelEffect )
		pFnCancelEffect = (UFunction*) UObject::GObjObjects()->Data[ 83825 ];

	ADunDefPlayerAbility_FireAura_execCancelEffect_Parms CancelEffect_Parms;

	this->ProcessEvent ( pFnCancelEffect, &CancelEffect_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_FireAura.GetDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_FireAura::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 83823 ];

	ADunDefPlayerAbility_FireAura_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function CDT7.DunDefPlayerAbility_FireAura.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_FireAura::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 83820 ];

	ADunDefPlayerAbility_FireAura_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function CDT7.DunDefPlayerAbility_FireAura.DoEffect
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_FireAura::DoEffect ( )
{
	static UFunction* pFnDoEffect = NULL;

	if ( ! pFnDoEffect )
		pFnDoEffect = (UFunction*) UObject::GObjObjects()->Data[ 83818 ];

	ADunDefPlayerAbility_FireAura_execDoEffect_Parms DoEffect_Parms;

	this->ProcessEvent ( pFnDoEffect, &DoEffect_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_FireAura.OnActivate
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_FireAura::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 83817 ];

	ADunDefPlayerAbility_FireAura_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_FireAura.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_FireAura::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83816 ];

	ADunDefPlayerAbility_FireAura_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.SetRange
// [0x00020102] 
// Parameters infos:
// float                          theRange                       ( CPF_Parm )

void ADunDefPlayerAbility_SpawnKobold::SetRange ( float theRange )
{
	static UFunction* pFnSetRange = NULL;

	if ( ! pFnSetRange )
		pFnSetRange = (UFunction*) UObject::GObjObjects()->Data[ 83856 ];

	ADunDefPlayerAbility_SpawnKobold_execSetRange_Parms SetRange_Parms;
	SetRange_Parms.theRange = theRange;

	this->ProcessEvent ( pFnSetRange, &SetRange_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_SpawnKobold::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 83853 ];

	ADunDefPlayerAbility_SpawnKobold_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.ScaleForHeroModifiers
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsFirstTime                    ( CPF_Parm )

void ADunDefPlayerAbility_SpawnKobold::ScaleForHeroModifiers ( unsigned long IsFirstTime )
{
	static UFunction* pFnScaleForHeroModifiers = NULL;

	if ( ! pFnScaleForHeroModifiers )
		pFnScaleForHeroModifiers = (UFunction*) UObject::GObjObjects()->Data[ 83850 ];

	ADunDefPlayerAbility_SpawnKobold_execScaleForHeroModifiers_Parms ScaleForHeroModifiers_Parms;
	ScaleForHeroModifiers_Parms.IsFirstTime = IsFirstTime;

	this->ProcessEvent ( pFnScaleForHeroModifiers, &ScaleForHeroModifiers_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.GetAbilityDamageMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_SpawnKobold::GetAbilityDamageMultiplier ( )
{
	static UFunction* pFnGetAbilityDamageMultiplier = NULL;

	if ( ! pFnGetAbilityDamageMultiplier )
		pFnGetAbilityDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 83848 ];

	ADunDefPlayerAbility_SpawnKobold_execGetAbilityDamageMultiplier_Parms GetAbilityDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetAbilityDamageMultiplier, &GetAbilityDamageMultiplier_Parms, NULL );

	return GetAbilityDamageMultiplier_Parms.ReturnValue;
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.DoActorSpawn
// [0x00820002] 
// Parameters infos:

void ADunDefPlayerAbility_SpawnKobold::DoActorSpawn ( )
{
	static UFunction* pFnDoActorSpawn = NULL;

	if ( ! pFnDoActorSpawn )
		pFnDoActorSpawn = (UFunction*) UObject::GObjObjects()->Data[ 83843 ];

	ADunDefPlayerAbility_SpawnKobold_execDoActorSpawn_Parms DoActorSpawn_Parms;

	this->ProcessEvent ( pFnDoActorSpawn, &DoActorSpawn_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_SpawnKobold.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPlayerAbility_SpawnKobold::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83841 ];

	ADunDefPlayerAbility_SpawnKobold_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function CDT7.DunDefPlayerAbility_SummonerPetBoost.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_SummonerPetBoost::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 83885 ];

	ADunDefPlayerAbility_SummonerPetBoost_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function CDT7.DunDefPlayerAbility_SummonerPetBoost.GetPetAttackRateMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_SummonerPetBoost::GetPetAttackRateMultiplier ( )
{
	static UFunction* pFnGetPetAttackRateMultiplier = NULL;

	if ( ! pFnGetPetAttackRateMultiplier )
		pFnGetPetAttackRateMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 83881 ];

	ADunDefPlayerAbility_SummonerPetBoost_execGetPetAttackRateMultiplier_Parms GetPetAttackRateMultiplier_Parms;

	this->ProcessEvent ( pFnGetPetAttackRateMultiplier, &GetPetAttackRateMultiplier_Parms, NULL );

	return GetPetAttackRateMultiplier_Parms.ReturnValue;
};

// Function CDT7.DunDefProjectile_HarpoonDot.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_HarpoonDot::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 83907 ];

	ADunDefProjectile_HarpoonDot_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function CDT7.DunDefProjectile_HarpoonDot.SpawnDot
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_HarpoonDot::SpawnDot ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnDot = NULL;

	if ( ! pFnSpawnDot )
		pFnSpawnDot = (UFunction*) UObject::GObjObjects()->Data[ 83903 ];

	ADunDefProjectile_HarpoonDot_execSpawnDot_Parms SpawnDot_Parms;
	memcpy ( &SpawnDot_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnDot_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnDot, &SpawnDot_Parms, NULL );
};

// Function CDT7.DunDefProjectile_HarpoonStaff.Explode
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_HarpoonStaff::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 83941 ];

	ADunDefProjectile_HarpoonStaff_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function CDT7.DunDefProjectile_HarpoonStaff.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_HarpoonStaff::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 83934 ];

	ADunDefProjectile_HarpoonStaff_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function CDT7.DunDefProjectile_HarpoonStaff.IsImpactAllowed
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool ADunDefProjectile_HarpoonStaff::IsImpactAllowed ( class AActor* Other )
{
	static UFunction* pFnIsImpactAllowed = NULL;

	if ( ! pFnIsImpactAllowed )
		pFnIsImpactAllowed = (UFunction*) UObject::GObjObjects()->Data[ 83931 ];

	ADunDefProjectile_HarpoonStaff_execIsImpactAllowed_Parms IsImpactAllowed_Parms;
	IsImpactAllowed_Parms.Other = Other;

	this->ProcessEvent ( pFnIsImpactAllowed, &IsImpactAllowed_Parms, NULL );

	return IsImpactAllowed_Parms.ReturnValue;
};

// Function CDT7.DunDefProjectile_SnowBall.DoEffect
// [0x00020002] 
// Parameters infos:

void ADunDefProjectile_SnowBall::DoEffect ( )
{
	static UFunction* pFnDoEffect = NULL;

	if ( ! pFnDoEffect )
		pFnDoEffect = (UFunction*) UObject::GObjObjects()->Data[ 83972 ];

	ADunDefProjectile_SnowBall_execDoEffect_Parms DoEffect_Parms;

	this->ProcessEvent ( pFnDoEffect, &DoEffect_Parms, NULL );
};

// Function CDT7.DunDefProjectile_SnowBall.SpawnEffect
// [0x00020002] 
// Parameters infos:

void ADunDefProjectile_SnowBall::SpawnEffect ( )
{
	static UFunction* pFnSpawnEffect = NULL;

	if ( ! pFnSpawnEffect )
		pFnSpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 83968 ];

	ADunDefProjectile_SnowBall_execSpawnEffect_Parms SpawnEffect_Parms;

	this->ProcessEvent ( pFnSpawnEffect, &SpawnEffect_Parms, NULL );
};

// Function CDT7.DunDefProjectile_SnowBall.Explode
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_SnowBall::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 83961 ];

	ADunDefProjectile_SnowBall_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnEffect
// [0x00020002] 
// Parameters infos:

void ADunDefProjectile_StaffDot::SpawnEffect ( )
{
	static UFunction* pFnSpawnEffect = NULL;

	if ( ! pFnSpawnEffect )
		pFnSpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 84006 ];

	ADunDefProjectile_StaffDot_execSpawnEffect_Parms SpawnEffect_Parms;

	this->ProcessEvent ( pFnSpawnEffect, &SpawnEffect_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.Landed
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Floor                          ( CPF_Parm )

void ADunDefProjectile_StaffDot::Landed ( struct FVector HitNormal, class AActor* Floor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 84003 ];

	ADunDefProjectile_StaffDot_execLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.Floor = Floor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnDot
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_StaffDot::SpawnDot ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnDot = NULL;

	if ( ! pFnSpawnDot )
		pFnSpawnDot = (UFunction*) UObject::GObjObjects()->Data[ 83999 ];

	ADunDefProjectile_StaffDot_execSpawnDot_Parms SpawnDot_Parms;
	memcpy ( &SpawnDot_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnDot_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnDot, &SpawnDot_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.DoEffect
// [0x00020002] 
// Parameters infos:

void ADunDefProjectile_StaffDot::DoEffect ( )
{
	static UFunction* pFnDoEffect = NULL;

	if ( ! pFnDoEffect )
		pFnDoEffect = (UFunction*) UObject::GObjObjects()->Data[ 83998 ];

	ADunDefProjectile_StaffDot_execDoEffect_Parms DoEffect_Parms;

	this->ProcessEvent ( pFnDoEffect, &DoEffect_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_StaffDot::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 83993 ];

	ADunDefProjectile_StaffDot_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function CDT7.DunDefTower_CannonBall.UpdateTurretLookSkelControl
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefTower_CannonBall::UpdateTurretLookSkelControl ( float DeltaTime )
{
	static UFunction* pFnUpdateTurretLookSkelControl = NULL;

	if ( ! pFnUpdateTurretLookSkelControl )
		pFnUpdateTurretLookSkelControl = (UFunction*) UObject::GObjObjects()->Data[ 84016 ];

	ADunDefTower_CannonBall_execUpdateTurretLookSkelControl_Parms UpdateTurretLookSkelControl_Parms;
	UpdateTurretLookSkelControl_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateTurretLookSkelControl, &UpdateTurretLookSkelControl_Parms, NULL );
};

// Function CDT7.DunDefTower_CannonBall.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_CannonBall::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84015 ];

	ADunDefTower_CannonBall_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefTower_Totem.PlayIdleAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefTower_Totem::PlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84062 ];

	ADunDefTower_Totem_execPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function CDT7.DunDefTower_Totem.PlaySpawnInAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefTower_Totem::PlaySpawnInAnimation ( )
{
	static UFunction* pFnPlaySpawnInAnimation = NULL;

	if ( ! pFnPlaySpawnInAnimation )
		pFnPlaySpawnInAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84061 ];

	ADunDefTower_Totem_execPlaySpawnInAnimation_Parms PlaySpawnInAnimation_Parms;

	this->ProcessEvent ( pFnPlaySpawnInAnimation, &PlaySpawnInAnimation_Parms, NULL );
};

// Function CDT7.DunDefTower_Totem.ScaleForHeroModifiers
// [0x00020002] 
// Parameters infos:
// unsigned long                  IsFirstTime                    ( CPF_Parm )

void ADunDefTower_Totem::ScaleForHeroModifiers ( unsigned long IsFirstTime )
{
	static UFunction* pFnScaleForHeroModifiers = NULL;

	if ( ! pFnScaleForHeroModifiers )
		pFnScaleForHeroModifiers = (UFunction*) UObject::GObjObjects()->Data[ 84058 ];

	ADunDefTower_Totem_execScaleForHeroModifiers_Parms ScaleForHeroModifiers_Parms;
	ScaleForHeroModifiers_Parms.IsFirstTime = IsFirstTime;

	this->ProcessEvent ( pFnScaleForHeroModifiers, &ScaleForHeroModifiers_Parms, NULL );
};

// Function CDT7.DunDefTower_Totem.IsValidForLifeEnergyDecrease
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPawn*             P                              ( CPF_Parm )

bool ADunDefTower_Totem::IsValidForLifeEnergyDecrease ( class ADunDefPawn* P )
{
	static UFunction* pFnIsValidForLifeEnergyDecrease = NULL;

	if ( ! pFnIsValidForLifeEnergyDecrease )
		pFnIsValidForLifeEnergyDecrease = (UFunction*) UObject::GObjObjects()->Data[ 84055 ];

	ADunDefTower_Totem_execIsValidForLifeEnergyDecrease_Parms IsValidForLifeEnergyDecrease_Parms;
	IsValidForLifeEnergyDecrease_Parms.P = P;

	this->ProcessEvent ( pFnIsValidForLifeEnergyDecrease, &IsValidForLifeEnergyDecrease_Parms, NULL );

	return IsValidForLifeEnergyDecrease_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_Totem.GetDamageMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_Totem::GetDamageMultiplier ( )
{
	static UFunction* pFnGetDamageMultiplier = NULL;

	if ( ! pFnGetDamageMultiplier )
		pFnGetDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84053 ];

	ADunDefTower_Totem_execGetDamageMultiplier_Parms GetDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetDamageMultiplier, &GetDamageMultiplier_Parms, NULL );

	return GetDamageMultiplier_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_Totem.DrawTowerToolTipStats
// [0x00420102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// float                          canvasScale                    ( CPF_Parm )
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void ADunDefTower_Totem::DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY )
{
	static UFunction* pFnDrawTowerToolTipStats = NULL;

	if ( ! pFnDrawTowerToolTipStats )
		pFnDrawTowerToolTipStats = (UFunction*) UObject::GObjObjects()->Data[ 84046 ];

	ADunDefTower_Totem_execDrawTowerToolTipStats_Parms DrawTowerToolTipStats_Parms;
	DrawTowerToolTipStats_Parms.C = C;
	DrawTowerToolTipStats_Parms.Opacity = Opacity;
	DrawTowerToolTipStats_Parms.ForPlayer = ForPlayer;
	DrawTowerToolTipStats_Parms.canvasScale = canvasScale;

	this->ProcessEvent ( pFnDrawTowerToolTipStats, &DrawTowerToolTipStats_Parms, NULL );

	if ( PosX )
		*PosX = DrawTowerToolTipStats_Parms.PosX;

	if ( PosY )
		*PosY = DrawTowerToolTipStats_Parms.PosY;
};

// Function CDT7.DunDefTower_Totem.TimedEffect
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPawn*             P                              ( CPF_Parm )

bool ADunDefTower_Totem::TimedEffect ( class ADunDefPawn* P )
{
	static UFunction* pFnTimedEffect = NULL;

	if ( ! pFnTimedEffect )
		pFnTimedEffect = (UFunction*) UObject::GObjObjects()->Data[ 84043 ];

	ADunDefTower_Totem_execTimedEffect_Parms TimedEffect_Parms;
	TimedEffect_Parms.P = P;

	this->ProcessEvent ( pFnTimedEffect, &TimedEffect_Parms, NULL );

	return TimedEffect_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_Totem.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefTower_Totem::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84042 ];

	ADunDefTower_Totem_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefTower_Totem.ReplicatedEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefTower_Totem::ReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 84040 ];

	ADunDefTower_Totem_execReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function CDT7.DunDefTower_DamageTotem.ExitEffect
// [0x00020102] 
// Parameters infos:
// class ADunDefPawn*             P                              ( CPF_Parm )

void ADunDefTower_DamageTotem::ExitEffect ( class ADunDefPawn* P )
{
	static UFunction* pFnExitEffect = NULL;

	if ( ! pFnExitEffect )
		pFnExitEffect = (UFunction*) UObject::GObjObjects()->Data[ 84080 ];

	ADunDefTower_DamageTotem_execExitEffect_Parms ExitEffect_Parms;
	ExitEffect_Parms.P = P;

	this->ProcessEvent ( pFnExitEffect, &ExitEffect_Parms, NULL );
};

// Function CDT7.DunDefTower_DamageTotem.EntryEffect
// [0x00020102] 
// Parameters infos:
// class ADunDefPawn*             P                              ( CPF_Parm )

void ADunDefTower_DamageTotem::EntryEffect ( class ADunDefPawn* P )
{
	static UFunction* pFnEntryEffect = NULL;

	if ( ! pFnEntryEffect )
		pFnEntryEffect = (UFunction*) UObject::GObjObjects()->Data[ 84078 ];

	ADunDefTower_DamageTotem_execEntryEffect_Parms EntryEffect_Parms;
	EntryEffect_Parms.P = P;

	this->ProcessEvent ( pFnEntryEffect, &EntryEffect_Parms, NULL );
};

// Function CDT7.DunDefTower_DamageTotem.TimedEffect
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPawn*             P                              ( CPF_Parm )

bool ADunDefTower_DamageTotem::TimedEffect ( class ADunDefPawn* P )
{
	static UFunction* pFnTimedEffect = NULL;

	if ( ! pFnTimedEffect )
		pFnTimedEffect = (UFunction*) UObject::GObjObjects()->Data[ 84075 ];

	ADunDefTower_DamageTotem_execTimedEffect_Parms TimedEffect_Parms;
	TimedEffect_Parms.P = P;

	this->ProcessEvent ( pFnTimedEffect, &TimedEffect_Parms, NULL );

	return TimedEffect_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_DamageTotem.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefTower_DamageTotem::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84074 ];

	ADunDefTower_DamageTotem_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefTower_SAM.GetDamageType
// [0x00020102] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ADunDefTower_SAM::GetDamageType ( )
{
	static UFunction* pFnGetDamageType = NULL;

	if ( ! pFnGetDamageType )
		pFnGetDamageType = (UFunction*) UObject::GObjObjects()->Data[ 84114 ];

	ADunDefTower_SAM_execGetDamageType_Parms GetDamageType_Parms;

	this->ProcessEvent ( pFnGetDamageType, &GetDamageType_Parms, NULL );

	return GetDamageType_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SAM.GetAttackDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SAM::GetAttackDamage ( )
{
	static UFunction* pFnGetAttackDamage = NULL;

	if ( ! pFnGetAttackDamage )
		pFnGetAttackDamage = (UFunction*) UObject::GObjObjects()->Data[ 84112 ];

	ADunDefTower_SAM_execGetAttackDamage_Parms GetAttackDamage_Parms;

	this->ProcessEvent ( pFnGetAttackDamage, &GetAttackDamage_Parms, NULL );

	return GetAttackDamage_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SAM.ShootProjectile
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SAM::eventShootProjectile ( )
{
	static UFunction* pFnShootProjectile = NULL;

	if ( ! pFnShootProjectile )
		pFnShootProjectile = (UFunction*) UObject::GObjObjects()->Data[ 84110 ];

	ADunDefTower_SAM_eventShootProjectile_Parms ShootProjectile_Parms;

	this->ProcessEvent ( pFnShootProjectile, &ShootProjectile_Parms, NULL );
};

// Function CDT7.DunDefTower_SAM.ShootMissileRight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SAM::eventShootMissileRight ( )
{
	static UFunction* pFnShootMissileRight = NULL;

	if ( ! pFnShootMissileRight )
		pFnShootMissileRight = (UFunction*) UObject::GObjObjects()->Data[ 84109 ];

	ADunDefTower_SAM_eventShootMissileRight_Parms ShootMissileRight_Parms;

	this->ProcessEvent ( pFnShootMissileRight, &ShootMissileRight_Parms, NULL );
};

// Function CDT7.DunDefTower_SAM.ShootMissileLeft
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SAM::eventShootMissileLeft ( )
{
	static UFunction* pFnShootMissileLeft = NULL;

	if ( ! pFnShootMissileLeft )
		pFnShootMissileLeft = (UFunction*) UObject::GObjObjects()->Data[ 84108 ];

	ADunDefTower_SAM_eventShootMissileLeft_Parms ShootMissileLeft_Parms;

	this->ProcessEvent ( pFnShootMissileLeft, &ShootMissileLeft_Parms, NULL );
};

// Function CDT7.DunDefTower_SAM.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SAM::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84107 ];

	ADunDefTower_SAM_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefTower_SnowBall.UpdateTarget
// [0x00820002] 
// Parameters infos:

void ADunDefTower_SnowBall::UpdateTarget ( )
{
	static UFunction* pFnUpdateTarget = NULL;

	if ( ! pFnUpdateTarget )
		pFnUpdateTarget = (UFunction*) UObject::GObjObjects()->Data[ 84147 ];

	ADunDefTower_SnowBall_execUpdateTarget_Parms UpdateTarget_Parms;

	this->ProcessEvent ( pFnUpdateTarget, &UpdateTarget_Parms, NULL );
};

// Function CDT7.DunDefTower_SnowBall.ShootProjectile
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SnowBall::eventShootProjectile ( )
{
	static UFunction* pFnShootProjectile = NULL;

	if ( ! pFnShootProjectile )
		pFnShootProjectile = (UFunction*) UObject::GObjObjects()->Data[ 84140 ];

	ADunDefTower_SnowBall_eventShootProjectile_Parms ShootProjectile_Parms;

	this->ProcessEvent ( pFnShootProjectile, &ShootProjectile_Parms, NULL );
};

// Function CDT7.DunDefTower_SnowBall.GetAttackDuration
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SnowBall::GetAttackDuration ( )
{
	static UFunction* pFnGetAttackDuration = NULL;

	if ( ! pFnGetAttackDuration )
		pFnGetAttackDuration = (UFunction*) UObject::GObjObjects()->Data[ 84138 ];

	ADunDefTower_SnowBall_execGetAttackDuration_Parms GetAttackDuration_Parms;

	this->ProcessEvent ( pFnGetAttackDuration, &GetAttackDuration_Parms, NULL );

	return GetAttackDuration_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SnowBall.GetMovementSpeedMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SnowBall::GetMovementSpeedMultiplier ( )
{
	static UFunction* pFnGetMovementSpeedMultiplier = NULL;

	if ( ! pFnGetMovementSpeedMultiplier )
		pFnGetMovementSpeedMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84136 ];

	ADunDefTower_SnowBall_execGetMovementSpeedMultiplier_Parms GetMovementSpeedMultiplier_Parms;

	this->ProcessEvent ( pFnGetMovementSpeedMultiplier, &GetMovementSpeedMultiplier_Parms, NULL );

	return GetMovementSpeedMultiplier_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SnowBall.DrawTowerToolTipStats
// [0x00420102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// float                          canvasScale                    ( CPF_Parm )
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void ADunDefTower_SnowBall::DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY )
{
	static UFunction* pFnDrawTowerToolTipStats = NULL;

	if ( ! pFnDrawTowerToolTipStats )
		pFnDrawTowerToolTipStats = (UFunction*) UObject::GObjObjects()->Data[ 84129 ];

	ADunDefTower_SnowBall_execDrawTowerToolTipStats_Parms DrawTowerToolTipStats_Parms;
	DrawTowerToolTipStats_Parms.C = C;
	DrawTowerToolTipStats_Parms.Opacity = Opacity;
	DrawTowerToolTipStats_Parms.ForPlayer = ForPlayer;
	DrawTowerToolTipStats_Parms.canvasScale = canvasScale;

	this->ProcessEvent ( pFnDrawTowerToolTipStats, &DrawTowerToolTipStats_Parms, NULL );

	if ( PosX )
		*PosX = DrawTowerToolTipStats_Parms.PosX;

	if ( PosY )
		*PosY = DrawTowerToolTipStats_Parms.PosY;
};

// Function CDT7.DunDefTower_SpiderQueen.SetDyingPhysics
// [0x00020100] 
// Parameters infos:

void ADunDefTower_SpiderQueen::SetDyingPhysics ( )
{
	static UFunction* pFnSetDyingPhysics = NULL;

	if ( ! pFnSetDyingPhysics )
		pFnSetDyingPhysics = (UFunction*) UObject::GObjObjects()->Data[ 84292 ];

	ADunDefTower_SpiderQueen_execSetDyingPhysics_Parms SetDyingPhysics_Parms;

	this->ProcessEvent ( pFnSetDyingPhysics, &SetDyingPhysics_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefTower_SpiderQueen::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 84287 ];

	ADunDefTower_SpiderQueen_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueen.SetUpperBodyLookAt
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnOn                        ( CPF_Parm )

void ADunDefTower_SpiderQueen::SetUpperBodyLookAt ( unsigned long bTurnOn )
{
	static UFunction* pFnSetUpperBodyLookAt = NULL;

	if ( ! pFnSetUpperBodyLookAt )
		pFnSetUpperBodyLookAt = (UFunction*) UObject::GObjObjects()->Data[ 84285 ];

	ADunDefTower_SpiderQueen_execSetUpperBodyLookAt_Parms SetUpperBodyLookAt_Parms;
	SetUpperBodyLookAt_Parms.bTurnOn = bTurnOn;

	this->ProcessEvent ( pFnSetUpperBodyLookAt, &SetUpperBodyLookAt_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefTower_SpiderQueen::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84283 ];

	ADunDefTower_SpiderQueen_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.PlayStunnedHurtEffect
// [0x00820102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefTower_SpiderQueen::PlayStunnedHurtEffect ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayStunnedHurtEffect = NULL;

	if ( ! pFnPlayStunnedHurtEffect )
		pFnPlayStunnedHurtEffect = (UFunction*) UObject::GObjObjects()->Data[ 84279 ];

	ADunDefTower_SpiderQueen_execPlayStunnedHurtEffect_Parms PlayStunnedHurtEffect_Parms;
	PlayStunnedHurtEffect_Parms.DamageType = DamageType;
	memcpy ( &PlayStunnedHurtEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayStunnedHurtEffect, &PlayStunnedHurtEffect_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.ShootWeb
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SpiderQueen::eventShootWeb ( )
{
	static UFunction* pFnShootWeb = NULL;

	if ( ! pFnShootWeb )
		pFnShootWeb = (UFunction*) UObject::GObjObjects()->Data[ 84278 ];

	ADunDefTower_SpiderQueen_eventShootWeb_Parms ShootWeb_Parms;

	this->ProcessEvent ( pFnShootWeb, &ShootWeb_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.PlayWebShootAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SpiderQueen::PlayWebShootAnim ( )
{
	static UFunction* pFnPlayWebShootAnim = NULL;

	if ( ! pFnPlayWebShootAnim )
		pFnPlayWebShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 84276 ];

	ADunDefTower_SpiderQueen_execPlayWebShootAnim_Parms PlayWebShootAnim_Parms;

	this->ProcessEvent ( pFnPlayWebShootAnim, &PlayWebShootAnim_Parms, NULL );

	return PlayWebShootAnim_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueen.PlayWebChargeAnim
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SpiderQueen::PlayWebChargeAnim ( )
{
	static UFunction* pFnPlayWebChargeAnim = NULL;

	if ( ! pFnPlayWebChargeAnim )
		pFnPlayWebChargeAnim = (UFunction*) UObject::GObjObjects()->Data[ 84275 ];

	ADunDefTower_SpiderQueen_execPlayWebChargeAnim_Parms PlayWebChargeAnim_Parms;

	this->ProcessEvent ( pFnPlayWebChargeAnim, &PlayWebChargeAnim_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.SetWebChargeTime
// [0x00020102] 
// Parameters infos:
// float                          NewWebChargeTime               ( CPF_Parm )

void ADunDefTower_SpiderQueen::SetWebChargeTime ( float NewWebChargeTime )
{
	static UFunction* pFnSetWebChargeTime = NULL;

	if ( ! pFnSetWebChargeTime )
		pFnSetWebChargeTime = (UFunction*) UObject::GObjObjects()->Data[ 84273 ];

	ADunDefTower_SpiderQueen_execSetWebChargeTime_Parms SetWebChargeTime_Parms;
	SetWebChargeTime_Parms.NewWebChargeTime = NewWebChargeTime;

	this->ProcessEvent ( pFnSetWebChargeTime, &SetWebChargeTime_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.GetWebProjectileLocAndRot
// [0x00420102] 
// Parameters infos:
// struct FVector                 Position                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                Orientation                    ( CPF_Parm | CPF_OutParm )

void ADunDefTower_SpiderQueen::GetWebProjectileLocAndRot ( struct FVector* Position, struct FRotator* Orientation )
{
	static UFunction* pFnGetWebProjectileLocAndRot = NULL;

	if ( ! pFnGetWebProjectileLocAndRot )
		pFnGetWebProjectileLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 84270 ];

	ADunDefTower_SpiderQueen_execGetWebProjectileLocAndRot_Parms GetWebProjectileLocAndRot_Parms;

	this->ProcessEvent ( pFnGetWebProjectileLocAndRot, &GetWebProjectileLocAndRot_Parms, NULL );

	if ( Position )
		memcpy ( Position, &GetWebProjectileLocAndRot_Parms.Position, 0xC );

	if ( Orientation )
		memcpy ( Orientation, &GetWebProjectileLocAndRot_Parms.Orientation, 0xC );
};

// Function CDT7.DunDefTower_SpiderQueen.GetMeleeSwingLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTower_SpiderQueen::GetMeleeSwingLocation ( )
{
	static UFunction* pFnGetMeleeSwingLocation = NULL;

	if ( ! pFnGetMeleeSwingLocation )
		pFnGetMeleeSwingLocation = (UFunction*) UObject::GObjObjects()->Data[ 84266 ];

	ADunDefTower_SpiderQueen_execGetMeleeSwingLocation_Parms GetMeleeSwingLocation_Parms;

	this->ProcessEvent ( pFnGetMeleeSwingLocation, &GetMeleeSwingLocation_Parms, NULL );

	return GetMeleeSwingLocation_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueen.MeleeSwingEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SpiderQueen::eventMeleeSwingEnd ( )
{
	static UFunction* pFnMeleeSwingEnd = NULL;

	if ( ! pFnMeleeSwingEnd )
		pFnMeleeSwingEnd = (UFunction*) UObject::GObjObjects()->Data[ 84265 ];

	ADunDefTower_SpiderQueen_eventMeleeSwingEnd_Parms MeleeSwingEnd_Parms;

	this->ProcessEvent ( pFnMeleeSwingEnd, &MeleeSwingEnd_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.MeleeSwingStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SpiderQueen::eventMeleeSwingStart ( )
{
	static UFunction* pFnMeleeSwingStart = NULL;

	if ( ! pFnMeleeSwingStart )
		pFnMeleeSwingStart = (UFunction*) UObject::GObjObjects()->Data[ 84264 ];

	ADunDefTower_SpiderQueen_eventMeleeSwingStart_Parms MeleeSwingStart_Parms;

	this->ProcessEvent ( pFnMeleeSwingStart, &MeleeSwingStart_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.SetRageMode
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SpiderQueen::SetRageMode ( )
{
	static UFunction* pFnSetRageMode = NULL;

	if ( ! pFnSetRageMode )
		pFnSetRageMode = (UFunction*) UObject::GObjObjects()->Data[ 84263 ];

	ADunDefTower_SpiderQueen_execSetRageMode_Parms SetRageMode_Parms;

	this->ProcessEvent ( pFnSetRageMode, &SetRageMode_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.GetEnrageIntervalMult
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SpiderQueen::GetEnrageIntervalMult ( )
{
	static UFunction* pFnGetEnrageIntervalMult = NULL;

	if ( ! pFnGetEnrageIntervalMult )
		pFnGetEnrageIntervalMult = (UFunction*) UObject::GObjObjects()->Data[ 84261 ];

	ADunDefTower_SpiderQueen_execGetEnrageIntervalMult_Parms GetEnrageIntervalMult_Parms;

	this->ProcessEvent ( pFnGetEnrageIntervalMult, &GetEnrageIntervalMult_Parms, NULL );

	return GetEnrageIntervalMult_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueen.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SpiderQueen::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 84253 ];

	ADunDefTower_SpiderQueen_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.CheckSpecialCoreDmg
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefTower_SpiderQueen::CheckSpecialCoreDmg ( struct FVector HitLocation )
{
	static UFunction* pFnCheckSpecialCoreDmg = NULL;

	if ( ! pFnCheckSpecialCoreDmg )
		pFnCheckSpecialCoreDmg = (UFunction*) UObject::GObjObjects()->Data[ 84248 ];

	ADunDefTower_SpiderQueen_execCheckSpecialCoreDmg_Parms CheckSpecialCoreDmg_Parms;
	memcpy ( &CheckSpecialCoreDmg_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnCheckSpecialCoreDmg, &CheckSpecialCoreDmg_Parms, NULL );

	return CheckSpecialCoreDmg_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueen.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefTower_SpiderQueen::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 84240 ];

	ADunDefTower_SpiderQueen_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	AdjustDamage_Parms.DamageType = DamageType;
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustDamage_Parms.inDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );
};

// Function CDT7.DunDefTower_SpiderQueen.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ADunDefTower_SpiderQueen::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 84234 ];

	ADunDefTower_SpiderQueen_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.StopStunAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SpiderQueen::StopStunAnimation ( )
{
	static UFunction* pFnStopStunAnimation = NULL;

	if ( ! pFnStopStunAnimation )
		pFnStopStunAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84233 ];

	ADunDefTower_SpiderQueen_execStopStunAnimation_Parms StopStunAnimation_Parms;

	this->ProcessEvent ( pFnStopStunAnimation, &StopStunAnimation_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.PlayStunAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SpiderQueen::PlayStunAnimation ( )
{
	static UFunction* pFnPlayStunAnimation = NULL;

	if ( ! pFnPlayStunAnimation )
		pFnPlayStunAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84232 ];

	ADunDefTower_SpiderQueen_execPlayStunAnimation_Parms PlayStunAnimation_Parms;

	this->ProcessEvent ( pFnPlayStunAnimation, &PlayStunAnimation_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.PlayBabySpawnAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          playSpeed                      ( CPF_Parm )

float ADunDefTower_SpiderQueen::PlayBabySpawnAnim ( float playSpeed )
{
	static UFunction* pFnPlayBabySpawnAnim = NULL;

	if ( ! pFnPlayBabySpawnAnim )
		pFnPlayBabySpawnAnim = (UFunction*) UObject::GObjObjects()->Data[ 84229 ];

	ADunDefTower_SpiderQueen_execPlayBabySpawnAnim_Parms PlayBabySpawnAnim_Parms;
	PlayBabySpawnAnim_Parms.playSpeed = playSpeed;

	this->ProcessEvent ( pFnPlayBabySpawnAnim, &PlayBabySpawnAnim_Parms, NULL );

	return PlayBabySpawnAnim_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueen.GetPawnDamageModifier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bDontIncludeAbilities          ( CPF_OptionalParm | CPF_Parm )

float ADunDefTower_SpiderQueen::GetPawnDamageModifier ( unsigned long bDontIncludeAbilities )
{
	static UFunction* pFnGetPawnDamageModifier = NULL;

	if ( ! pFnGetPawnDamageModifier )
		pFnGetPawnDamageModifier = (UFunction*) UObject::GObjObjects()->Data[ 84226 ];

	ADunDefTower_SpiderQueen_execGetPawnDamageModifier_Parms GetPawnDamageModifier_Parms;
	GetPawnDamageModifier_Parms.bDontIncludeAbilities = bDontIncludeAbilities;

	this->ProcessEvent ( pFnGetPawnDamageModifier, &GetPawnDamageModifier_Parms, NULL );

	return GetPawnDamageModifier_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueen.UpdateDifficultyValues
// [0x00024002] 
// Parameters infos:
// unsigned long                  UpdateMaterial                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  onlyDynamicValues              ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SpiderQueen::UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues )
{
	static UFunction* pFnUpdateDifficultyValues = NULL;

	if ( ! pFnUpdateDifficultyValues )
		pFnUpdateDifficultyValues = (UFunction*) UObject::GObjObjects()->Data[ 84223 ];

	ADunDefTower_SpiderQueen_execUpdateDifficultyValues_Parms UpdateDifficultyValues_Parms;
	UpdateDifficultyValues_Parms.UpdateMaterial = UpdateMaterial;
	UpdateDifficultyValues_Parms.onlyDynamicValues = onlyDynamicValues;

	this->ProcessEvent ( pFnUpdateDifficultyValues, &UpdateDifficultyValues_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SpiderQueen::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84222 ];

	ADunDefTower_SpiderQueen_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.PlayJumpAnimation
// [0x00020100] 
// Parameters infos:

void ADunDefTower_SpiderQueen::PlayJumpAnimation ( )
{
	static UFunction* pFnPlayJumpAnimation = NULL;

	if ( ! pFnPlayJumpAnimation )
		pFnPlayJumpAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84221 ];

	ADunDefTower_SpiderQueen_execPlayJumpAnimation_Parms PlayJumpAnimation_Parms;

	this->ProcessEvent ( pFnPlayJumpAnimation, &PlayJumpAnimation_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueen.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SpiderQueen::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84204 ];

	ADunDefTower_SpiderQueen_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.GetAttackDamage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefTower_SpiderQueenController::GetAttackDamage ( )
{
	static UFunction* pFnGetAttackDamage = NULL;

	if ( ! pFnGetAttackDamage )
		pFnGetAttackDamage = (UFunction*) UObject::GObjObjects()->Data[ 84416 ];

	ADunDefTower_SpiderQueenController_execGetAttackDamage_Parms GetAttackDamage_Parms;

	this->ProcessEvent ( pFnGetAttackDamage, &GetAttackDamage_Parms, NULL );

	return GetAttackDamage_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueenController.SetTarget
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  NewTarget                      ( CPF_Parm )
// unsigned long                  bDontClearIgnoreList           ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SpiderQueenController::eventSetTarget ( class AActor* NewTarget, unsigned long bDontClearIgnoreList )
{
	static UFunction* pFnSetTarget = NULL;

	if ( ! pFnSetTarget )
		pFnSetTarget = (UFunction*) UObject::GObjObjects()->Data[ 84413 ];

	ADunDefTower_SpiderQueenController_eventSetTarget_Parms SetTarget_Parms;
	SetTarget_Parms.NewTarget = NewTarget;
	SetTarget_Parms.bDontClearIgnoreList = bDontClearIgnoreList;

	this->ProcessEvent ( pFnSetTarget, &SetTarget_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.ShootWeb
// [0x00820002] 
// Parameters infos:

void ADunDefTower_SpiderQueenController::ShootWeb ( )
{
	static UFunction* pFnShootWeb = NULL;

	if ( ! pFnShootWeb )
		pFnShootWeb = (UFunction*) UObject::GObjObjects()->Data[ 84380 ];

	ADunDefTower_SpiderQueenController_execShootWeb_Parms ShootWeb_Parms;

	this->ProcessEvent ( pFnShootWeb, &ShootWeb_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.GetWebChargeTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SpiderQueenController::GetWebChargeTime ( )
{
	static UFunction* pFnGetWebChargeTime = NULL;

	if ( ! pFnGetWebChargeTime )
		pFnGetWebChargeTime = (UFunction*) UObject::GObjObjects()->Data[ 84378 ];

	ADunDefTower_SpiderQueenController_execGetWebChargeTime_Parms GetWebChargeTime_Parms;

	this->ProcessEvent ( pFnGetWebChargeTime, &GetWebChargeTime_Parms, NULL );

	return GetWebChargeTime_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueenController.DoWebAttack
// [0x00020002] 
// Parameters infos:

void ADunDefTower_SpiderQueenController::DoWebAttack ( )
{
	static UFunction* pFnDoWebAttack = NULL;

	if ( ! pFnDoWebAttack )
		pFnDoWebAttack = (UFunction*) UObject::GObjObjects()->Data[ 84376 ];

	ADunDefTower_SpiderQueenController_execDoWebAttack_Parms DoWebAttack_Parms;

	this->ProcessEvent ( pFnDoWebAttack, &DoWebAttack_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.GetAttackInterval
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_OptionalParm | CPF_Parm )

float ADunDefTower_SpiderQueenController::GetAttackInterval ( class AActor* Victim )
{
	static UFunction* pFnGetAttackInterval = NULL;

	if ( ! pFnGetAttackInterval )
		pFnGetAttackInterval = (UFunction*) UObject::GObjObjects()->Data[ 84373 ];

	ADunDefTower_SpiderQueenController_execGetAttackInterval_Parms GetAttackInterval_Parms;
	GetAttackInterval_Parms.Victim = Victim;

	this->ProcessEvent ( pFnGetAttackInterval, &GetAttackInterval_Parms, NULL );

	return GetAttackInterval_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueenController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefTower_SpiderQueenController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 84371 ];

	ADunDefTower_SpiderQueenController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.ForceWakeUp
// [0x00020002] 
// Parameters infos:

void ADunDefTower_SpiderQueenController::ForceWakeUp ( )
{
	static UFunction* pFnForceWakeUp = NULL;

	if ( ! pFnForceWakeUp )
		pFnForceWakeUp = (UFunction*) UObject::GObjObjects()->Data[ 84358 ];

	ADunDefTower_SpiderQueenController_execForceWakeUp_Parms ForceWakeUp_Parms;

	this->ProcessEvent ( pFnForceWakeUp, &ForceWakeUp_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool ADunDefTower_SpiderQueenController::AddToSwingHurtList ( class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 84335 ];

	ADunDefTower_SpiderQueenController_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_SpiderQueenController.EndMeleeSwing
// [0x00020002] 
// Parameters infos:

void ADunDefTower_SpiderQueenController::EndMeleeSwing ( )
{
	static UFunction* pFnEndMeleeSwing = NULL;

	if ( ! pFnEndMeleeSwing )
		pFnEndMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 84334 ];

	ADunDefTower_SpiderQueenController_execEndMeleeSwing_Parms EndMeleeSwing_Parms;

	this->ProcessEvent ( pFnEndMeleeSwing, &EndMeleeSwing_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.StartMeleeSwing
// [0x00020000] 
// Parameters infos:

void ADunDefTower_SpiderQueenController::StartMeleeSwing ( )
{
	static UFunction* pFnStartMeleeSwing = NULL;

	if ( ! pFnStartMeleeSwing )
		pFnStartMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 84333 ];

	ADunDefTower_SpiderQueenController_execStartMeleeSwing_Parms StartMeleeSwing_Parms;

	this->ProcessEvent ( pFnStartMeleeSwing, &StartMeleeSwing_Parms, NULL );
};

// Function CDT7.DunDefTower_SpiderQueenController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SpiderQueenController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84332 ];

	ADunDefTower_SpiderQueenController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.PlayIdleAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TotemMapWide::PlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84453 ];

	ADunDefTower_TotemMapWide_execPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.PlaySpawnInAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TotemMapWide::PlaySpawnInAnimation ( )
{
	static UFunction* pFnPlaySpawnInAnimation = NULL;

	if ( ! pFnPlaySpawnInAnimation )
		pFnPlaySpawnInAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84452 ];

	ADunDefTower_TotemMapWide_execPlaySpawnInAnimation_Parms PlaySpawnInAnimation_Parms;

	this->ProcessEvent ( pFnPlaySpawnInAnimation, &PlaySpawnInAnimation_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.ScaleForHeroModifiers
// [0x00020002] 
// Parameters infos:
// unsigned long                  IsFirstTime                    ( CPF_Parm )

void ADunDefTower_TotemMapWide::ScaleForHeroModifiers ( unsigned long IsFirstTime )
{
	static UFunction* pFnScaleForHeroModifiers = NULL;

	if ( ! pFnScaleForHeroModifiers )
		pFnScaleForHeroModifiers = (UFunction*) UObject::GObjObjects()->Data[ 84449 ];

	ADunDefTower_TotemMapWide_execScaleForHeroModifiers_Parms ScaleForHeroModifiers_Parms;
	ScaleForHeroModifiers_Parms.IsFirstTime = IsFirstTime;

	this->ProcessEvent ( pFnScaleForHeroModifiers, &ScaleForHeroModifiers_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.Destroyed
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TotemMapWide::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 84447 ];

	ADunDefTower_TotemMapWide_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.Effect
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TotemMapWide::Effect ( )
{
	static UFunction* pFnEffect = NULL;

	if ( ! pFnEffect )
		pFnEffect = (UFunction*) UObject::GObjObjects()->Data[ 84445 ];

	ADunDefTower_TotemMapWide_execEffect_Parms Effect_Parms;

	this->ProcessEvent ( pFnEffect, &Effect_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.DrawTowerToolTipStats
// [0x00420102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// float                          canvasScale                    ( CPF_Parm )
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void ADunDefTower_TotemMapWide::DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY )
{
	static UFunction* pFnDrawTowerToolTipStats = NULL;

	if ( ! pFnDrawTowerToolTipStats )
		pFnDrawTowerToolTipStats = (UFunction*) UObject::GObjObjects()->Data[ 84438 ];

	ADunDefTower_TotemMapWide_execDrawTowerToolTipStats_Parms DrawTowerToolTipStats_Parms;
	DrawTowerToolTipStats_Parms.C = C;
	DrawTowerToolTipStats_Parms.Opacity = Opacity;
	DrawTowerToolTipStats_Parms.ForPlayer = ForPlayer;
	DrawTowerToolTipStats_Parms.canvasScale = canvasScale;

	this->ProcessEvent ( pFnDrawTowerToolTipStats, &DrawTowerToolTipStats_Parms, NULL );

	if ( PosX )
		*PosX = DrawTowerToolTipStats_Parms.PosX;

	if ( PosY )
		*PosY = DrawTowerToolTipStats_Parms.PosY;
};

// Function CDT7.DunDefTower_TotemMapWide.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TotemMapWide::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84437 ];

	ADunDefTower_TotemMapWide_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.GetSpeedMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TotemMapWide::GetSpeedMultiplier ( )
{
	static UFunction* pFnGetSpeedMultiplier = NULL;

	if ( ! pFnGetSpeedMultiplier )
		pFnGetSpeedMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84435 ];

	ADunDefTower_TotemMapWide_execGetSpeedMultiplier_Parms GetSpeedMultiplier_Parms;

	this->ProcessEvent ( pFnGetSpeedMultiplier, &GetSpeedMultiplier_Parms, NULL );

	return GetSpeedMultiplier_Parms.ReturnValue;
};

// Function CDT7.DunDefTower_TotemMapWide.ReplicatedEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefTower_TotemMapWide::ReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 84433 ];

	ADunDefTower_TotemMapWide_execReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function CDT7.DunDefTower_TotemMapWide.SameTeamAs
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefTargetableInterface* Target                         ( CPF_Parm )

bool ADunDefTower_TotemMapWide::SameTeamAs ( class UDunDefTargetableInterface* Target )
{
	static UFunction* pFnSameTeamAs = NULL;

	if ( ! pFnSameTeamAs )
		pFnSameTeamAs = (UFunction*) UObject::GObjObjects()->Data[ 84430 ];

	ADunDefTower_TotemMapWide_execSameTeamAs_Parms SameTeamAs_Parms;
	SameTeamAs_Parms.Target = Target;

	this->ProcessEvent ( pFnSameTeamAs, &SameTeamAs_Parms, NULL );

	return SameTeamAs_Parms.ReturnValue;
};

// Function CDT7.DunDefWeapon_MagicStaff_Dot.ShootProjectiles
// [0x00824102] 
// Parameters infos:
// int                            theFireMode                    ( CPF_OptionalParm | CPF_Parm )

void ADunDefWeapon_MagicStaff_Dot::ShootProjectiles ( int theFireMode )
{
	static UFunction* pFnShootProjectiles = NULL;

	if ( ! pFnShootProjectiles )
		pFnShootProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 84462 ];

	ADunDefWeapon_MagicStaff_Dot_execShootProjectiles_Parms ShootProjectiles_Parms;
	ShootProjectiles_Parms.theFireMode = theFireMode;

	this->ProcessEvent ( pFnShootProjectiles, &ShootProjectiles_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetHealAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetHealAmount ( )
{
	static UFunction* pFnGetHealAmount = NULL;

	if ( ! pFnGetHealAmount )
		pFnGetHealAmount = (UFunction*) UObject::GObjObjects()->Data[ 84673 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetHealAmount_Parms GetHealAmount_Parms;

	this->ProcessEvent ( pFnGetHealAmount, &GetHealAmount_Parms, NULL );

	return GetHealAmount_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.OnDunDefProjectileImpacted
// [0x00020002] 
// Parameters infos:
// class ADunDefProjectile*       aProjectile                    ( CPF_Parm )
// class AActor*                  impactedOn                     ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::OnDunDefProjectileImpacted ( class ADunDefProjectile* aProjectile, class AActor* impactedOn )
{
	static UFunction* pFnOnDunDefProjectileImpacted = NULL;

	if ( ! pFnOnDunDefProjectileImpacted )
		pFnOnDunDefProjectileImpacted = (UFunction*) UObject::GObjObjects()->Data[ 84668 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execOnDunDefProjectileImpacted_Parms OnDunDefProjectileImpacted_Parms;
	OnDunDefProjectileImpacted_Parms.aProjectile = aProjectile;
	OnDunDefProjectileImpacted_Parms.impactedOn = impactedOn;

	this->ProcessEvent ( pFnOnDunDefProjectileImpacted, &OnDunDefProjectileImpacted_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_PawnTookDamage
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::NotifyEquipment_PawnTookDamage ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyEquipment_PawnTookDamage = NULL;

	if ( ! pFnNotifyEquipment_PawnTookDamage )
		pFnNotifyEquipment_PawnTookDamage = (UFunction*) UObject::GObjObjects()->Data[ 84661 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_PawnTookDamage_Parms NotifyEquipment_PawnTookDamage_Parms;
	NotifyEquipment_PawnTookDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyEquipment_PawnTookDamage_Parms.HitLocation, &HitLocation, 0xC );
	NotifyEquipment_PawnTookDamage_Parms.Damage = Damage;
	NotifyEquipment_PawnTookDamage_Parms.DamageType = DamageType;
	memcpy ( &NotifyEquipment_PawnTookDamage_Parms.Momentum, &Momentum, 0xC );
	NotifyEquipment_PawnTookDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyEquipment_PawnTookDamage, &NotifyEquipment_PawnTookDamage_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
// Parameters infos:
// int                            NotifyID                       ( CPF_Parm )
// class USkeletalMeshComponent*  equipmentSkelComp              ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_TowerDamageScaling::NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp )
{
	static UFunction* pFnNotifyEquipment_AnimNotifyAttachment = NULL;

	if ( ! pFnNotifyEquipment_AnimNotifyAttachment )
		pFnNotifyEquipment_AnimNotifyAttachment = (UFunction*) UObject::GObjObjects()->Data[ 84658 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_AnimNotifyAttachment_Parms NotifyEquipment_AnimNotifyAttachment_Parms;
	NotifyEquipment_AnimNotifyAttachment_Parms.NotifyID = NotifyID;
	NotifyEquipment_AnimNotifyAttachment_Parms.equipmentSkelComp = equipmentSkelComp;

	this->ProcessEvent ( pFnNotifyEquipment_AnimNotifyAttachment, &NotifyEquipment_AnimNotifyAttachment_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShootProjectile
// [0x00824002] 
// Parameters infos:
// unsigned long                  bIsAltProjectile               ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::ShootProjectile ( unsigned long bIsAltProjectile )
{
	static UFunction* pFnShootProjectile = NULL;

	if ( ! pFnShootProjectile )
		pFnShootProjectile = (UFunction*) UObject::GObjObjects()->Data[ 84645 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execShootProjectile_Parms ShootProjectile_Parms;
	ShootProjectile_Parms.bIsAltProjectile = bIsAltProjectile;

	this->ProcessEvent ( pFnShootProjectile, &ShootProjectile_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetMuzzleTransformation
// [0x00420002] 
// Parameters infos:
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// struct FVector                 SpawnLocation                  ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRotation                  ( CPF_Parm | CPF_OutParm )

void UHeroEquipment_Familiar_TowerDamageScaling::GetMuzzleTransformation ( class USkeletalMeshComponent* myMeshComp, struct FVector* SpawnLocation, struct FRotator* SpawnRotation )
{
	static UFunction* pFnGetMuzzleTransformation = NULL;

	if ( ! pFnGetMuzzleTransformation )
		pFnGetMuzzleTransformation = (UFunction*) UObject::GObjObjects()->Data[ 84641 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetMuzzleTransformation_Parms GetMuzzleTransformation_Parms;
	GetMuzzleTransformation_Parms.myMeshComp = myMeshComp;

	this->ProcessEvent ( pFnGetMuzzleTransformation, &GetMuzzleTransformation_Parms, NULL );

	if ( SpawnLocation )
		memcpy ( SpawnLocation, &GetMuzzleTransformation_Parms.SpawnLocation, 0xC );

	if ( SpawnRotation )
		memcpy ( SpawnRotation, &GetMuzzleTransformation_Parms.SpawnRotation, 0xC );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetWeaponDamage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHeroEquipment_Familiar_TowerDamageScaling::GetWeaponDamage ( )
{
	static UFunction* pFnGetWeaponDamage = NULL;

	if ( ! pFnGetWeaponDamage )
		pFnGetWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 84639 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetWeaponDamage_Parms GetWeaponDamage_Parms;

	this->ProcessEvent ( pFnGetWeaponDamage, &GetWeaponDamage_Parms, NULL );

	return GetWeaponDamage_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ApplyPrimaryDamageMultiplierDisplay
// [0x00420002] 
// Parameters infos:
// int                            StatValue                      ( CPF_Parm | CPF_OutParm )

void UHeroEquipment_Familiar_TowerDamageScaling::ApplyPrimaryDamageMultiplierDisplay ( int* StatValue )
{
	static UFunction* pFnApplyPrimaryDamageMultiplierDisplay = NULL;

	if ( ! pFnApplyPrimaryDamageMultiplierDisplay )
		pFnApplyPrimaryDamageMultiplierDisplay = (UFunction*) UObject::GObjObjects()->Data[ 84637 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execApplyPrimaryDamageMultiplierDisplay_Parms ApplyPrimaryDamageMultiplierDisplay_Parms;

	this->ProcessEvent ( pFnApplyPrimaryDamageMultiplierDisplay, &ApplyPrimaryDamageMultiplierDisplay_Parms, NULL );

	if ( StatValue )
		*StatValue = ApplyPrimaryDamageMultiplierDisplay_Parms.StatValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetEquipmentStatValue
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  equipmentStatType              ( CPF_Parm )
// unsigned long                  returnFinalAddedValue          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  includeStatLevelUp             ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetEquipmentStatValue ( unsigned char equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp )
{
	static UFunction* pFnGetEquipmentStatValue = NULL;

	if ( ! pFnGetEquipmentStatValue )
		pFnGetEquipmentStatValue = (UFunction*) UObject::GObjObjects()->Data[ 84631 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetEquipmentStatValue_Parms GetEquipmentStatValue_Parms;
	GetEquipmentStatValue_Parms.equipmentStatType = equipmentStatType;
	GetEquipmentStatValue_Parms.returnFinalAddedValue = returnFinalAddedValue;
	GetEquipmentStatValue_Parms.includeStatLevelUp = includeStatLevelUp;

	this->ProcessEvent ( pFnGetEquipmentStatValue, &GetEquipmentStatValue_Parms, NULL );

	return GetEquipmentStatValue_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues
// [0x00024002] 
// Parameters infos:
// float                          equipmentQuality               ( CPF_Parm )
// unsigned long                  doResetStatsToTemplate         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDontUseMissionRandomizerMultiplier ( CPF_OptionalParm | CPF_Parm )
// float                          RandomizerMultiplierOverride   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsForShop                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowTranscendentGear         ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::AddRandomizeValues ( float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear )
{
	static UFunction* pFnAddRandomizeValues = NULL;

	if ( ! pFnAddRandomizeValues )
		pFnAddRandomizeValues = (UFunction*) UObject::GObjObjects()->Data[ 84624 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execAddRandomizeValues_Parms AddRandomizeValues_Parms;
	AddRandomizeValues_Parms.equipmentQuality = equipmentQuality;
	AddRandomizeValues_Parms.doResetStatsToTemplate = doResetStatsToTemplate;
	AddRandomizeValues_Parms.bDontUseMissionRandomizerMultiplier = bDontUseMissionRandomizerMultiplier;
	AddRandomizeValues_Parms.RandomizerMultiplierOverride = RandomizerMultiplierOverride;
	AddRandomizeValues_Parms.bIsForShop = bIsForShop;
	AddRandomizeValues_Parms.bAllowTranscendentGear = bAllowTranscendentGear;

	this->ProcessEvent ( pFnAddRandomizeValues, &AddRandomizeValues_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EQS                            ( CPF_Parm )
// int                            statSubIndex                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  IsInForgeUI                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreManaRequirement         ( CPF_OptionalParm | CPF_Parm )

bool UHeroEquipment_Familiar_TowerDamageScaling::AllowStatLevelUp ( unsigned char EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement )
{
	static UFunction* pFnAllowStatLevelUp = NULL;

	if ( ! pFnAllowStatLevelUp )
		pFnAllowStatLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 84618 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execAllowStatLevelUp_Parms AllowStatLevelUp_Parms;
	AllowStatLevelUp_Parms.EQS = EQS;
	AllowStatLevelUp_Parms.statSubIndex = statSubIndex;
	AllowStatLevelUp_Parms.IsInForgeUI = IsInForgeUI;
	AllowStatLevelUp_Parms.bIgnoreManaRequirement = bIgnoreManaRequirement;

	this->ProcessEvent ( pFnAllowStatLevelUp, &AllowStatLevelUp_Parms, NULL );

	return AllowStatLevelUp_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIncludeShotsPerSecondExponent ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetAttackInterval ( unsigned long bIncludeShotsPerSecondExponent )
{
	static UFunction* pFnGetAttackInterval = NULL;

	if ( ! pFnGetAttackInterval )
		pFnGetAttackInterval = (UFunction*) UObject::GObjObjects()->Data[ 84615 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetAttackInterval_Parms GetAttackInterval_Parms;
	GetAttackInterval_Parms.bIncludeShotsPerSecondExponent = bIncludeShotsPerSecondExponent;

	this->ProcessEvent ( pFnGetAttackInterval, &GetAttackInterval_Parms, NULL );

	return GetAttackInterval_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetElementalDamageType
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* UHeroEquipment_Familiar_TowerDamageScaling::GetElementalDamageType ( )
{
	static UFunction* pFnGetElementalDamageType = NULL;

	if ( ! pFnGetElementalDamageType )
		pFnGetElementalDamageType = (UFunction*) UObject::GObjObjects()->Data[ 84613 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetElementalDamageType_Parms GetElementalDamageType_Parms;

	this->ProcessEvent ( pFnGetElementalDamageType, &GetElementalDamageType_Parms, NULL );

	return GetElementalDamageType_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileElementalDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileElementalDamage ( )
{
	static UFunction* pFnGetProjectileElementalDamage = NULL;

	if ( ! pFnGetProjectileElementalDamage )
		pFnGetProjectileElementalDamage = (UFunction*) UObject::GObjObjects()->Data[ 84611 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileElementalDamage_Parms GetProjectileElementalDamage_Parms;

	this->ProcessEvent ( pFnGetProjectileElementalDamage, &GetProjectileElementalDamage_Parms, NULL );

	return GetProjectileElementalDamage_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileDamage
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefProjectile*       projectileArch                 ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileDamage ( class ADunDefProjectile* projectileArch )
{
	static UFunction* pFnGetProjectileDamage = NULL;

	if ( ! pFnGetProjectileDamage )
		pFnGetProjectileDamage = (UFunction*) UObject::GObjObjects()->Data[ 84608 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileDamage_Parms GetProjectileDamage_Parms;
	GetProjectileDamage_Parms.projectileArch = projectileArch;

	this->ProcessEvent ( pFnGetProjectileDamage, &GetProjectileDamage_Parms, NULL );

	return GetProjectileDamage_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileSpeed
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefProjectile*       projectileArch                 ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileSpeed ( class ADunDefProjectile* projectileArch )
{
	static UFunction* pFnGetProjectileSpeed = NULL;

	if ( ! pFnGetProjectileSpeed )
		pFnGetProjectileSpeed = (UFunction*) UObject::GObjObjects()->Data[ 84605 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileSpeed_Parms GetProjectileSpeed_Parms;
	GetProjectileSpeed_Parms.projectileArch = projectileArch;

	this->ProcessEvent ( pFnGetProjectileSpeed, &GetProjectileSpeed_Parms, NULL );

	return GetProjectileSpeed_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetNumProjectiles
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHeroEquipment_Familiar_TowerDamageScaling::GetNumProjectiles ( )
{
	static UFunction* pFnGetNumProjectiles = NULL;

	if ( ! pFnGetNumProjectiles )
		pFnGetNumProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 84603 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetNumProjectiles_Parms GetNumProjectiles_Parms;

	this->ProcessEvent ( pFnGetNumProjectiles, &GetNumProjectiles_Parms, NULL );

	return GetNumProjectiles_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredSphereRotationalPlacement
// [0x00420002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// class ADunDefPlayer*           myPlayer                       ( CPF_Parm )
// unsigned char                  HasTarget                      ( CPF_Parm | CPF_OutParm )

struct FRotator UHeroEquipment_Familiar_TowerDamageScaling::GetDesiredSphereRotationalPlacement ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget )
{
	static UFunction* pFnGetDesiredSphereRotationalPlacement = NULL;

	if ( ! pFnGetDesiredSphereRotationalPlacement )
		pFnGetDesiredSphereRotationalPlacement = (UFunction*) UObject::GObjObjects()->Data[ 84598 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredSphereRotationalPlacement_Parms GetDesiredSphereRotationalPlacement_Parms;
	GetDesiredSphereRotationalPlacement_Parms.myMeshComp = myMeshComp;
	GetDesiredSphereRotationalPlacement_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetDesiredSphereRotationalPlacement, &GetDesiredSphereRotationalPlacement_Parms, NULL );

	if ( HasTarget )
		*HasTarget = GetDesiredSphereRotationalPlacement_Parms.HasTarget;

	return GetDesiredSphereRotationalPlacement_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredDirection
// [0x00020002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// class ADunDefPlayer*           myPlayer                       ( CPF_Parm )

struct FRotator UHeroEquipment_Familiar_TowerDamageScaling::GetDesiredDirection ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer )
{
	static UFunction* pFnGetDesiredDirection = NULL;

	if ( ! pFnGetDesiredDirection )
		pFnGetDesiredDirection = (UFunction*) UObject::GObjObjects()->Data[ 84594 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredDirection_Parms GetDesiredDirection_Parms;
	GetDesiredDirection_Parms.myMeshComp = myMeshComp;
	GetDesiredDirection_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetDesiredDirection, &GetDesiredDirection_Parms, NULL );

	return GetDesiredDirection_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShutDown
// [0x00024002] 
// Parameters infos:
// unsigned long                  isDestruction                  ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::ShutDown ( unsigned long isDestruction )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 84592 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execShutDown_Parms ShutDown_Parms;
	ShutDown_Parms.isDestruction = isDestruction;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AttachedComponent
// [0x00020002] 
// Parameters infos:
// class UPrimitiveComponent*     aComp                          ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_TowerDamageScaling::AttachedComponent ( class UPrimitiveComponent* aComp )
{
	static UFunction* pFnAttachedComponent = NULL;

	if ( ! pFnAttachedComponent )
		pFnAttachedComponent = (UFunction*) UObject::GObjObjects()->Data[ 84590 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execAttachedComponent_Parms AttachedComponent_Parms;
	AttachedComponent_Parms.aComp = aComp;

	this->ProcessEvent ( pFnAttachedComponent, &AttachedComponent_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateAI
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateAI = NULL;

	if ( ! pFnUpdateAI )
		pFnUpdateAI = (UFunction*) UObject::GObjObjects()->Data[ 84587 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execUpdateAI_Parms UpdateAI_Parms;
	UpdateAI_Parms.PlayerOwner = PlayerOwner;
	UpdateAI_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAI, &UpdateAI_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateDelayedShots
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::UpdateDelayedShots ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateDelayedShots = NULL;

	if ( ! pFnUpdateDelayedShots )
		pFnUpdateDelayedShots = (UFunction*) UObject::GObjObjects()->Data[ 84583 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execUpdateDelayedShots_Parms UpdateDelayedShots_Parms;
	UpdateDelayedShots_Parms.PlayerOwner = PlayerOwner;
	UpdateDelayedShots_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDelayedShots, &UpdateDelayedShots_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.TickedByPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnTickedByPawn = NULL;

	if ( ! pFnTickedByPawn )
		pFnTickedByPawn = (UFunction*) UObject::GObjObjects()->Data[ 84580 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execTickedByPawn_Parms TickedByPawn_Parms;
	TickedByPawn_Parms.PlayerOwner = PlayerOwner;
	TickedByPawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickedByPawn, &TickedByPawn_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestTarget
// [0x00820002] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* UHeroEquipment_Familiar_TowerDamageScaling::GetBestTarget ( )
{
	static UFunction* pFnGetBestTarget = NULL;

	if ( ! pFnGetBestTarget )
		pFnGetBestTarget = (UFunction*) UObject::GObjObjects()->Data[ 84569 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetBestTarget_Parms GetBestTarget_Parms;

	this->ProcessEvent ( pFnGetBestTarget, &GetBestTarget_Parms, NULL );

	return GetBestTarget_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestHealingTarget
// [0x00024002] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          CheckHealthPercentageThreshold ( CPF_OptionalParm | CPF_Parm )

class UDunDefTargetableInterface* UHeroEquipment_Familiar_TowerDamageScaling::GetBestHealingTarget ( float CheckHealthPercentageThreshold )
{
	static UFunction* pFnGetBestHealingTarget = NULL;

	if ( ! pFnGetBestHealingTarget )
		pFnGetBestHealingTarget = (UFunction*) UObject::GObjObjects()->Data[ 84560 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetBestHealingTarget_Parms GetBestHealingTarget_Parms;
	GetBestHealingTarget_Parms.CheckHealthPercentageThreshold = CheckHealthPercentageThreshold;

	this->ProcessEvent ( pFnGetBestHealingTarget, &GetBestHealingTarget_Parms, NULL );

	return GetBestHealingTarget_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AttachedComponent
// [0x00020002] 
// Parameters infos:
// class UPrimitiveComponent*     aComp                          ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_Melee_TowerScaling::AttachedComponent ( class UPrimitiveComponent* aComp )
{
	static UFunction* pFnAttachedComponent = NULL;

	if ( ! pFnAttachedComponent )
		pFnAttachedComponent = (UFunction*) UObject::GObjObjects()->Data[ 84738 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execAttachedComponent_Parms AttachedComponent_Parms;
	AttachedComponent_Parms.aComp = aComp;

	this->ProcessEvent ( pFnAttachedComponent, &AttachedComponent_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
// Parameters infos:
// int                            NotifyID                       ( CPF_Parm )
// class USkeletalMeshComponent*  equipmentSkelComp              ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_Melee_TowerScaling::NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp )
{
	static UFunction* pFnNotifyEquipment_AnimNotifyAttachment = NULL;

	if ( ! pFnNotifyEquipment_AnimNotifyAttachment )
		pFnNotifyEquipment_AnimNotifyAttachment = (UFunction*) UObject::GObjObjects()->Data[ 84735 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execNotifyEquipment_AnimNotifyAttachment_Parms NotifyEquipment_AnimNotifyAttachment_Parms;
	NotifyEquipment_AnimNotifyAttachment_Parms.NotifyID = NotifyID;
	NotifyEquipment_AnimNotifyAttachment_Parms.equipmentSkelComp = equipmentSkelComp;

	this->ProcessEvent ( pFnNotifyEquipment_AnimNotifyAttachment, &NotifyEquipment_AnimNotifyAttachment_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.ShutDown
// [0x00024002] 
// Parameters infos:
// unsigned long                  isDestruction                  ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::ShutDown ( unsigned long isDestruction )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 84733 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execShutDown_Parms ShutDown_Parms;
	ShutDown_Parms.isDestruction = isDestruction;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAI
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateAI = NULL;

	if ( ! pFnUpdateAI )
		pFnUpdateAI = (UFunction*) UObject::GObjObjects()->Data[ 84730 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAI_Parms UpdateAI_Parms;
	UpdateAI_Parms.PlayerOwner = PlayerOwner;
	UpdateAI_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAI, &UpdateAI_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetHealMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_Melee_TowerScaling::GetHealMultiplier ( )
{
	static UFunction* pFnGetHealMultiplier = NULL;

	if ( ! pFnGetHealMultiplier )
		pFnGetHealMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84728 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execGetHealMultiplier_Parms GetHealMultiplier_Parms;

	this->ProcessEvent ( pFnGetHealMultiplier, &GetHealMultiplier_Parms, NULL );

	return GetHealMultiplier_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetMomentumMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_Melee_TowerScaling::GetMomentumMultiplier ( )
{
	static UFunction* pFnGetMomentumMultiplier = NULL;

	if ( ! pFnGetMomentumMultiplier )
		pFnGetMomentumMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84726 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execGetMomentumMultiplier_Parms GetMomentumMultiplier_Parms;

	this->ProcessEvent ( pFnGetMomentumMultiplier, &GetMomentumMultiplier_Parms, NULL );

	return GetMomentumMultiplier_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAttackSwing
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::UpdateAttackSwing ( float DeltaTime )
{
	static UFunction* pFnUpdateAttackSwing = NULL;

	if ( ! pFnUpdateAttackSwing )
		pFnUpdateAttackSwing = (UFunction*) UObject::GObjObjects()->Data[ 84711 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAttackSwing_Parms UpdateAttackSwing_Parms;
	UpdateAttackSwing_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAttackSwing, &UpdateAttackSwing_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayer*           myOwner                        ( CPF_Parm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool UHeroEquipment_Familiar_Melee_TowerScaling::AddToSwingHurtList ( class ADunDefPlayer* myOwner, class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 84707 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.myOwner = myOwner;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.TickedByPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnTickedByPawn = NULL;

	if ( ! pFnTickedByPawn )
		pFnTickedByPawn = (UFunction*) UObject::GObjObjects()->Data[ 84704 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execTickedByPawn_Parms TickedByPawn_Parms;
	TickedByPawn_Parms.PlayerOwner = PlayerOwner;
	TickedByPawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickedByPawn, &TickedByPawn_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
// Parameters infos:
// int                            NotifyID                       ( CPF_Parm )
// class USkeletalMeshComponent*  equipmentSkelComp              ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_TowerUpgrader::NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp )
{
	static UFunction* pFnNotifyEquipment_AnimNotifyAttachment = NULL;

	if ( ! pFnNotifyEquipment_AnimNotifyAttachment )
		pFnNotifyEquipment_AnimNotifyAttachment = (UFunction*) UObject::GObjObjects()->Data[ 84780 ];

	UHeroEquipment_Familiar_TowerUpgrader_execNotifyEquipment_AnimNotifyAttachment_Parms NotifyEquipment_AnimNotifyAttachment_Parms;
	NotifyEquipment_AnimNotifyAttachment_Parms.NotifyID = NotifyID;
	NotifyEquipment_AnimNotifyAttachment_Parms.equipmentSkelComp = equipmentSkelComp;

	this->ProcessEvent ( pFnNotifyEquipment_AnimNotifyAttachment, &NotifyEquipment_AnimNotifyAttachment_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.UpgradeTower
// [0x00020102] 
// Parameters infos:

void UHeroEquipment_Familiar_TowerUpgrader::UpgradeTower ( )
{
	static UFunction* pFnUpgradeTower = NULL;

	if ( ! pFnUpgradeTower )
		pFnUpgradeTower = (UFunction*) UObject::GObjObjects()->Data[ 84775 ];

	UHeroEquipment_Familiar_TowerUpgrader_execUpgradeTower_Parms UpgradeTower_Parms;

	this->ProcessEvent ( pFnUpgradeTower, &UpgradeTower_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.GetAttackInterval
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_TowerUpgrader::GetAttackInterval ( )
{
	static UFunction* pFnGetAttackInterval = NULL;

	if ( ! pFnGetAttackInterval )
		pFnGetAttackInterval = (UFunction*) UObject::GObjObjects()->Data[ 84773 ];

	UHeroEquipment_Familiar_TowerUpgrader_execGetAttackInterval_Parms GetAttackInterval_Parms;

	this->ProcessEvent ( pFnGetAttackInterval, &GetAttackInterval_Parms, NULL );

	return GetAttackInterval_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.GetUpgradeAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_TowerUpgrader::GetUpgradeAmount ( )
{
	static UFunction* pFnGetUpgradeAmount = NULL;

	if ( ! pFnGetUpgradeAmount )
		pFnGetUpgradeAmount = (UFunction*) UObject::GObjObjects()->Data[ 84771 ];

	UHeroEquipment_Familiar_TowerUpgrader_execGetUpgradeAmount_Parms GetUpgradeAmount_Parms;

	this->ProcessEvent ( pFnGetUpgradeAmount, &GetUpgradeAmount_Parms, NULL );

	return GetUpgradeAmount_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.UpdateAI
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerUpgrader::UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateAI = NULL;

	if ( ! pFnUpdateAI )
		pFnUpdateAI = (UFunction*) UObject::GObjObjects()->Data[ 84768 ];

	UHeroEquipment_Familiar_TowerUpgrader_execUpdateAI_Parms UpdateAI_Parms;
	UpdateAI_Parms.PlayerOwner = PlayerOwner;
	UpdateAI_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAI, &UpdateAI_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.TickedByPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerUpgrader::TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnTickedByPawn = NULL;

	if ( ! pFnTickedByPawn )
		pFnTickedByPawn = (UFunction*) UObject::GObjObjects()->Data[ 84765 ];

	UHeroEquipment_Familiar_TowerUpgrader_execTickedByPawn_Parms TickedByPawn_Parms;
	TickedByPawn_Parms.PlayerOwner = PlayerOwner;
	TickedByPawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickedByPawn, &TickedByPawn_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.GetBestTarget
// [0x00820102] 
// Parameters infos:
// class ADunDefTower*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefTower* UHeroEquipment_Familiar_TowerUpgrader::GetBestTarget ( )
{
	static UFunction* pFnGetBestTarget = NULL;

	if ( ! pFnGetBestTarget )
		pFnGetBestTarget = (UFunction*) UObject::GObjObjects()->Data[ 84755 ];

	UHeroEquipment_Familiar_TowerUpgrader_execGetBestTarget_Parms GetBestTarget_Parms;

	this->ProcessEvent ( pFnGetBestTarget, &GetBestTarget_Parms, NULL );

	return GetBestTarget_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerUpgrader.AttachedComponent
// [0x00020002] 
// Parameters infos:
// class UPrimitiveComponent*     aComp                          ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_TowerUpgrader::AttachedComponent ( class UPrimitiveComponent* aComp )
{
	static UFunction* pFnAttachedComponent = NULL;

	if ( ! pFnAttachedComponent )
		pFnAttachedComponent = (UFunction*) UObject::GObjObjects()->Data[ 84753 ];

	UHeroEquipment_Familiar_TowerUpgrader_execAttachedComponent_Parms AttachedComponent_Parms;
	AttachedComponent_Parms.aComp = aComp;

	this->ProcessEvent ( pFnAttachedComponent, &AttachedComponent_Parms, NULL );
};

// Function CDT7.UI_TBR.LaunchMap
// [0x00024102] 
// Parameters infos:
// unsigned long                  bStartTrueBossRush             ( CPF_OptionalParm | CPF_Parm )

void UUI_TBR::LaunchMap ( unsigned long bStartTrueBossRush )
{
	static UFunction* pFnLaunchMap = NULL;

	if ( ! pFnLaunchMap )
		pFnLaunchMap = (UFunction*) UObject::GObjObjects()->Data[ 202155 ];

	UUI_TBR_execLaunchMap_Parms LaunchMap_Parms;
	LaunchMap_Parms.bStartTrueBossRush = bStartTrueBossRush;

	this->ProcessEvent ( pFnLaunchMap, &LaunchMap_Parms, NULL );
};

// Function CDT7.UI_TBR.WasCheckPointButtonPressed
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Widget                         ( CPF_Parm )

bool UUI_TBR::WasCheckPointButtonPressed ( class UUIObject* Widget )
{
	static UFunction* pFnWasCheckPointButtonPressed = NULL;

	if ( ! pFnWasCheckPointButtonPressed )
		pFnWasCheckPointButtonPressed = (UFunction*) UObject::GObjObjects()->Data[ 202159 ];

	UUI_TBR_execWasCheckPointButtonPressed_Parms WasCheckPointButtonPressed_Parms;
	WasCheckPointButtonPressed_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWasCheckPointButtonPressed, &WasCheckPointButtonPressed_Parms, NULL );

	return WasCheckPointButtonPressed_Parms.ReturnValue;
};

// Function CDT7.UI_TBR.NotifyWidgetClicked
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Widget                         ( CPF_Parm )

bool UUI_TBR::eventNotifyWidgetClicked ( class UUIObject* Widget )
{
	static UFunction* pFnNotifyWidgetClicked = NULL;

	if ( ! pFnNotifyWidgetClicked )
		pFnNotifyWidgetClicked = (UFunction*) UObject::GObjObjects()->Data[ 202162 ];

	UUI_TBR_eventNotifyWidgetClicked_Parms NotifyWidgetClicked_Parms;
	NotifyWidgetClicked_Parms.Widget = Widget;

	this->ProcessEvent ( pFnNotifyWidgetClicked, &NotifyWidgetClicked_Parms, NULL );

	return NotifyWidgetClicked_Parms.ReturnValue;
};

// Function CDT7.UI_TBR.CheckProgress
// [0x00020102] 
// Parameters infos:

void UUI_TBR::CheckProgress ( )
{
	static UFunction* pFnCheckProgress = NULL;

	if ( ! pFnCheckProgress )
		pFnCheckProgress = (UFunction*) UObject::GObjObjects()->Data[ 202165 ];

	UUI_TBR_execCheckProgress_Parms CheckProgress_Parms;

	this->ProcessEvent ( pFnCheckProgress, &CheckProgress_Parms, NULL );
};

// Function CDT7.UI_TBR.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUI_TBR::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = (UFunction*) UObject::GObjObjects()->Data[ 202167 ];

	UUI_TBR_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function CDT7.UI_ConfirmBox.OnReceivedInputKey
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUI_ConfirmBox::OnReceivedInputKey ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnReceivedInputKey = NULL;

	if ( ! pFnOnReceivedInputKey )
		pFnOnReceivedInputKey = (UFunction*) UObject::GObjObjects()->Data[ 202184 ];

	UUI_ConfirmBox_execOnReceivedInputKey_Parms OnReceivedInputKey_Parms;

	this->ProcessEvent ( pFnOnReceivedInputKey, &OnReceivedInputKey_Parms, NULL );

	if ( EventParms )
		memcpy ( EventParms, &OnReceivedInputKey_Parms.EventParms, 0x20 );

	return OnReceivedInputKey_Parms.ReturnValue;
};

// Function CDT7.UI_ConfirmBox.PostInitialSceneUpdate
// [0x00020002] 
// Parameters infos:

void UUI_ConfirmBox::PostInitialSceneUpdate ( )
{
	static UFunction* pFnPostInitialSceneUpdate = NULL;

	if ( ! pFnPostInitialSceneUpdate )
		pFnPostInitialSceneUpdate = (UFunction*) UObject::GObjObjects()->Data[ 202185 ];

	UUI_ConfirmBox_execPostInitialSceneUpdate_Parms PostInitialSceneUpdate_Parms;

	this->ProcessEvent ( pFnPostInitialSceneUpdate, &PostInitialSceneUpdate_Parms, NULL );
};

// Function CDT7.UI_ConfirmBox.OnButtonPressed
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUI_ConfirmBox::OnButtonPressed ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnButtonPressed = NULL;

	if ( ! pFnOnButtonPressed )
		pFnOnButtonPressed = (UFunction*) UObject::GObjObjects()->Data[ 202189 ];

	UUI_ConfirmBox_execOnButtonPressed_Parms OnButtonPressed_Parms;
	OnButtonPressed_Parms.EventObject = EventObject;
	OnButtonPressed_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnButtonPressed, &OnButtonPressed_Parms, NULL );

	return OnButtonPressed_Parms.ReturnValue;
};

// Function CDT7.UI_ConfirmBox.InitalizeItemFromShop
// [0x00020002] 
// Parameters infos:
// struct FsShopItemInfo          ItemInfo                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FsShopInfo              ShopInfo                       ( CPF_Parm | CPF_NeedCtorLink )

void UUI_ConfirmBox::InitalizeItemFromShop ( struct FsShopItemInfo ItemInfo, struct FsShopInfo ShopInfo )
{
	static UFunction* pFnInitalizeItemFromShop = NULL;

	if ( ! pFnInitalizeItemFromShop )
		pFnInitalizeItemFromShop = (UFunction*) UObject::GObjObjects()->Data[ 202194 ];

	UUI_ConfirmBox_execInitalizeItemFromShop_Parms InitalizeItemFromShop_Parms;
	memcpy ( &InitalizeItemFromShop_Parms.ItemInfo, &ItemInfo, 0xC0 );
	memcpy ( &InitalizeItemFromShop_Parms.ShopInfo, &ShopInfo, 0x38 );

	this->ProcessEvent ( pFnInitalizeItemFromShop, &InitalizeItemFromShop_Parms, NULL );
};

// Function CDT7.UI_ConfirmBox.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUI_ConfirmBox::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = (UFunction*) UObject::GObjObjects()->Data[ 202196 ];

	UUI_ConfirmBox_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function CDT7.UI_ConfirmBox.OnCancelClicked
// [0x00120000] 
// Parameters infos:

void UUI_ConfirmBox::OnCancelClicked ( )
{
	static UFunction* pFnOnCancelClicked = NULL;

	if ( ! pFnOnCancelClicked )
		pFnOnCancelClicked = (UFunction*) UObject::GObjObjects()->Data[ 202208 ];

	UUI_ConfirmBox_execOnCancelClicked_Parms OnCancelClicked_Parms;

	this->ProcessEvent ( pFnOnCancelClicked, &OnCancelClicked_Parms, NULL );
};

// Function CDT7.UI_ConfirmBox.OnConfirmClicked
// [0x00120000] 
// Parameters infos:

void UUI_ConfirmBox::OnConfirmClicked ( )
{
	static UFunction* pFnOnConfirmClicked = NULL;

	if ( ! pFnOnConfirmClicked )
		pFnOnConfirmClicked = (UFunction*) UObject::GObjObjects()->Data[ 202207 ];

	UUI_ConfirmBox_execOnConfirmClicked_Parms OnConfirmClicked_Parms;

	this->ProcessEvent ( pFnOnConfirmClicked, &OnConfirmClicked_Parms, NULL );
};

// Function CDT7.UIButton_Shop.DrawToolTip
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          X1                             ( CPF_Parm )
// float                          X2                             ( CPF_Parm )
// float                          Y1                             ( CPF_Parm )
// float                          Y2                             ( CPF_Parm )
// float                          ScaleX                         ( CPF_Parm )
// float                          ScaleY                         ( CPF_Parm )

void UUIButton_Shop::DrawToolTip ( class UCanvas* C, float X1, float X2, float Y1, float Y2, float ScaleX, float ScaleY )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 202097 ];

	UUIButton_Shop_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.X1 = X1;
	DrawToolTip_Parms.X2 = X2;
	DrawToolTip_Parms.Y1 = Y1;
	DrawToolTip_Parms.Y2 = Y2;
	DrawToolTip_Parms.ScaleX = ScaleX;
	DrawToolTip_Parms.ScaleY = ScaleY;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function CDT7.UIButton_Shop.RenderGame
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          X1                             ( CPF_Parm )
// float                          X2                             ( CPF_Parm )
// float                          Y1                             ( CPF_Parm )
// float                          Y2                             ( CPF_Parm )

void UUIButton_Shop::eventRenderGame ( class UCanvas* C, float X1, float X2, float Y1, float Y2 )
{
	static UFunction* pFnRenderGame = NULL;

	if ( ! pFnRenderGame )
		pFnRenderGame = (UFunction*) UObject::GObjObjects()->Data[ 202119 ];

	UUIButton_Shop_eventRenderGame_Parms RenderGame_Parms;
	RenderGame_Parms.C = C;
	RenderGame_Parms.X1 = X1;
	RenderGame_Parms.X2 = X2;
	RenderGame_Parms.Y1 = Y1;
	RenderGame_Parms.Y2 = Y2;

	this->ProcessEvent ( pFnRenderGame, &RenderGame_Parms, NULL );
};

// Function CDT7.UIButton_Shop.GetEquipment
// [0x00020002] 
// Parameters infos:
// class UHeroEquipment*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UHeroEquipment* UUIButton_Shop::GetEquipment ( )
{
	static UFunction* pFnGetEquipment = NULL;

	if ( ! pFnGetEquipment )
		pFnGetEquipment = (UFunction*) UObject::GObjObjects()->Data[ 202121 ];

	UUIButton_Shop_execGetEquipment_Parms GetEquipment_Parms;

	this->ProcessEvent ( pFnGetEquipment, &GetEquipment_Parms, NULL );

	return GetEquipment_Parms.ReturnValue;
};

// Function CDT7.UIButton_Shop.UpdateItemInfo
// [0x00020002] 
// Parameters infos:

void UUIButton_Shop::UpdateItemInfo ( )
{
	static UFunction* pFnUpdateItemInfo = NULL;

	if ( ! pFnUpdateItemInfo )
		pFnUpdateItemInfo = (UFunction*) UObject::GObjObjects()->Data[ 202122 ];

	UUIButton_Shop_execUpdateItemInfo_Parms UpdateItemInfo_Parms;

	this->ProcessEvent ( pFnUpdateItemInfo, &UpdateItemInfo_Parms, NULL );
};

// Function CDT7.UIButton_Shop.GetDataContainer
// [0x00020002] 
// Parameters infos:
// class UUIDataContainer_Equipment* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UUIDataContainer_Equipment* UUIButton_Shop::GetDataContainer ( )
{
	static UFunction* pFnGetDataContainer = NULL;

	if ( ! pFnGetDataContainer )
		pFnGetDataContainer = (UFunction*) UObject::GObjObjects()->Data[ 202125 ];

	UUIButton_Shop_execGetDataContainer_Parms GetDataContainer_Parms;

	this->ProcessEvent ( pFnGetDataContainer, &GetDataContainer_Parms, NULL );

	return GetDataContainer_Parms.ReturnValue;
};

// Function CDT7.UIButton_Shop.GetToolTipString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UUIButton_Shop::GetToolTipString ( )
{
	static UFunction* pFnGetToolTipString = NULL;

	if ( ! pFnGetToolTipString )
		pFnGetToolTipString = (UFunction*) UObject::GObjObjects()->Data[ 202127 ];

	UUIButton_Shop_execGetToolTipString_Parms GetToolTipString_Parms;

	this->ProcessEvent ( pFnGetToolTipString, &GetToolTipString_Parms, NULL );

	return GetToolTipString_Parms.ReturnValue;
};

// Function CDT7.UIButton_Shop.InitializeFromDataListEntry
// [0x00020002] 
// Parameters infos:
// class UUIPanel_DataList*       DataList                       ( CPF_Parm )
// class UDataListEntryInterface* Entry                          ( CPF_Parm )

void UUIButton_Shop::InitializeFromDataListEntry ( class UUIPanel_DataList* DataList, class UDataListEntryInterface* Entry )
{
	static UFunction* pFnInitializeFromDataListEntry = NULL;

	if ( ! pFnInitializeFromDataListEntry )
		pFnInitializeFromDataListEntry = (UFunction*) UObject::GObjObjects()->Data[ 202130 ];

	UUIButton_Shop_execInitializeFromDataListEntry_Parms InitializeFromDataListEntry_Parms;
	InitializeFromDataListEntry_Parms.DataList = DataList;
	InitializeFromDataListEntry_Parms.Entry = Entry;

	this->ProcessEvent ( pFnInitializeFromDataListEntry, &InitializeFromDataListEntry_Parms, NULL );
};

// Function CDT7.UIButton_Shop.GetShopInfo
// [0x00820102] 
// Parameters infos:
// struct FsShopInfo              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FsShopInfo UUIButton_Shop::GetShopInfo ( )
{
	static UFunction* pFnGetShopInfo = NULL;

	if ( ! pFnGetShopInfo )
		pFnGetShopInfo = (UFunction*) UObject::GObjObjects()->Data[ 202133 ];

	UUIButton_Shop_execGetShopInfo_Parms GetShopInfo_Parms;

	this->ProcessEvent ( pFnGetShopInfo, &GetShopInfo_Parms, NULL );

	return GetShopInfo_Parms.ReturnValue;
};

// Function CDT7.UIButton_Shop.GetShopItemInfo
// [0x00020102] 
// Parameters infos:
// struct FsShopItemInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FsShopItemInfo UUIButton_Shop::GetShopItemInfo ( )
{
	static UFunction* pFnGetShopItemInfo = NULL;

	if ( ! pFnGetShopItemInfo )
		pFnGetShopItemInfo = (UFunction*) UObject::GObjObjects()->Data[ 202300 ];

	UUIButton_Shop_execGetShopItemInfo_Parms GetShopItemInfo_Parms;

	this->ProcessEvent ( pFnGetShopItemInfo, &GetShopItemInfo_Parms, NULL );

	return GetShopItemInfo_Parms.ReturnValue;
};

// Function CDT7.UIButton_Shop.ButtonClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         Sender                         ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIButton_Shop::ButtonClicked ( class UUIScreenObject* Sender, int PlayerIndex )
{
	static UFunction* pFnButtonClicked = NULL;

	if ( ! pFnButtonClicked )
		pFnButtonClicked = (UFunction*) UObject::GObjObjects()->Data[ 202137 ];

	UUIButton_Shop_execButtonClicked_Parms ButtonClicked_Parms;
	ButtonClicked_Parms.Sender = Sender;
	ButtonClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnButtonClicked, &ButtonClicked_Parms, NULL );

	return ButtonClicked_Parms.ReturnValue;
};

// Function CDT7.UIButton_Shop.NotifyWidgetClicked
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Widget                         ( CPF_Parm )

bool UUIButton_Shop::NotifyWidgetClicked ( class UUIObject* Widget )
{
	static UFunction* pFnNotifyWidgetClicked = NULL;

	if ( ! pFnNotifyWidgetClicked )
		pFnNotifyWidgetClicked = (UFunction*) UObject::GObjObjects()->Data[ 202148 ];

	UUIButton_Shop_execNotifyWidgetClicked_Parms NotifyWidgetClicked_Parms;
	NotifyWidgetClicked_Parms.Widget = Widget;

	this->ProcessEvent ( pFnNotifyWidgetClicked, &NotifyWidgetClicked_Parms, NULL );

	return NotifyWidgetClicked_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GetSelectedShopButton
// [0x00020002] 
// Parameters infos:
// class UUIButton_DataListEntry* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UUIButton_DataListEntry* UUI_ShopBase::GetSelectedShopButton ( )
{
	static UFunction* pFnGetSelectedShopButton = NULL;

	if ( ! pFnGetSelectedShopButton )
		pFnGetSelectedShopButton = (UFunction*) UObject::GObjObjects()->Data[ 202229 ];

	UUI_ShopBase_execGetSelectedShopButton_Parms GetSelectedShopButton_Parms;

	this->ProcessEvent ( pFnGetSelectedShopButton, &GetSelectedShopButton_Parms, NULL );

	return GetSelectedShopButton_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GetShopInfo
// [0x00020002] 
// Parameters infos:
// struct FsShopInfo              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FsShopInfo UUI_ShopBase::GetShopInfo ( )
{
	static UFunction* pFnGetShopInfo = NULL;

	if ( ! pFnGetShopInfo )
		pFnGetShopInfo = (UFunction*) UObject::GObjObjects()->Data[ 202231 ];

	UUI_ShopBase_execGetShopInfo_Parms GetShopInfo_Parms;

	this->ProcessEvent ( pFnGetShopInfo, &GetShopInfo_Parms, NULL );

	return GetShopInfo_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GetItemInfo
// [0x00820002] 
// Parameters infos:
// struct FsShopItemInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UUIButton_Shop*          Button                         ( CPF_Parm )
// unsigned long                  bGetValueFromFocusControl      ( CPF_Parm )
// unsigned long                  bGetValueFromLastSelectedButton ( CPF_Parm )

struct FsShopItemInfo UUI_ShopBase::GetItemInfo ( class UUIButton_Shop* Button, unsigned long bGetValueFromFocusControl, unsigned long bGetValueFromLastSelectedButton )
{
	static UFunction* pFnGetItemInfo = NULL;

	if ( ! pFnGetItemInfo )
		pFnGetItemInfo = (UFunction*) UObject::GObjObjects()->Data[ 202237 ];

	UUI_ShopBase_execGetItemInfo_Parms GetItemInfo_Parms;
	GetItemInfo_Parms.Button = Button;
	GetItemInfo_Parms.bGetValueFromFocusControl = bGetValueFromFocusControl;
	GetItemInfo_Parms.bGetValueFromLastSelectedButton = bGetValueFromLastSelectedButton;

	this->ProcessEvent ( pFnGetItemInfo, &GetItemInfo_Parms, NULL );

	return GetItemInfo_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GetShopName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned long                  bGetDescription                ( CPF_Parm )

struct FString UUI_ShopBase::GetShopName ( unsigned long bGetDescription )
{
	static UFunction* pFnGetShopName = NULL;

	if ( ! pFnGetShopName )
		pFnGetShopName = (UFunction*) UObject::GObjObjects()->Data[ 202240 ];

	UUI_ShopBase_execGetShopName_Parms GetShopName_Parms;
	GetShopName_Parms.bGetDescription = bGetDescription;

	this->ProcessEvent ( pFnGetShopName, &GetShopName_Parms, NULL );

	return GetShopName_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.AllowOverlays
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUI_ShopBase::AllowOverlays ( )
{
	static UFunction* pFnAllowOverlays = NULL;

	if ( ! pFnAllowOverlays )
		pFnAllowOverlays = (UFunction*) UObject::GObjObjects()->Data[ 202242 ];

	UUI_ShopBase_execAllowOverlays_Parms AllowOverlays_Parms;

	this->ProcessEvent ( pFnAllowOverlays, &AllowOverlays_Parms, NULL );

	return AllowOverlays_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GetConsumedItemList
// [0x00020102] 
// Parameters infos:
// TArray< class UHeroEquipment* > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FsShopItemInfo          ShopItemInfo                   ( CPF_Parm | CPF_NeedCtorLink )

TArray< class UHeroEquipment* > UUI_ShopBase::GetConsumedItemList ( struct FsShopItemInfo ShopItemInfo )
{
	static UFunction* pFnGetConsumedItemList = NULL;

	if ( ! pFnGetConsumedItemList )
		pFnGetConsumedItemList = (UFunction*) UObject::GObjObjects()->Data[ 202250 ];

	UUI_ShopBase_execGetConsumedItemList_Parms GetConsumedItemList_Parms;
	memcpy ( &GetConsumedItemList_Parms.ShopItemInfo, &ShopItemInfo, 0xC0 );

	this->ProcessEvent ( pFnGetConsumedItemList, &GetConsumedItemList_Parms, NULL );

	return GetConsumedItemList_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GetLastSelectedItem
// [0x00020102] 
// Parameters infos:
// class UUIButton_Shop*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UUIButton_Shop* UUI_ShopBase::GetLastSelectedItem ( )
{
	static UFunction* pFnGetLastSelectedItem = NULL;

	if ( ! pFnGetLastSelectedItem )
		pFnGetLastSelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 202252 ];

	UUI_ShopBase_execGetLastSelectedItem_Parms GetLastSelectedItem_Parms;

	this->ProcessEvent ( pFnGetLastSelectedItem, &GetLastSelectedItem_Parms, NULL );

	return GetLastSelectedItem_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GiveMana
// [0x00820102] 
// Parameters infos:
// struct FsShopItemInfo          ShopItemInfo                   ( CPF_Parm | CPF_NeedCtorLink )
// class ADunDefPlayerController* PlayerController               ( CPF_Parm )

void UUI_ShopBase::GiveMana ( struct FsShopItemInfo ShopItemInfo, class ADunDefPlayerController* PlayerController )
{
	static UFunction* pFnGiveMana = NULL;

	if ( ! pFnGiveMana )
		pFnGiveMana = (UFunction*) UObject::GObjObjects()->Data[ 202256 ];

	UUI_ShopBase_execGiveMana_Parms GiveMana_Parms;
	memcpy ( &GiveMana_Parms.ShopItemInfo, &ShopItemInfo, 0xC0 );
	GiveMana_Parms.PlayerController = PlayerController;

	this->ProcessEvent ( pFnGiveMana, &GiveMana_Parms, NULL );
};

// Function CDT7.UI_ShopBase.GenerateItem
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FsShopItemInfo          ShopItemInfo                   ( CPF_Parm | CPF_NeedCtorLink )

bool UUI_ShopBase::GenerateItem ( struct FsShopItemInfo ShopItemInfo )
{
	static UFunction* pFnGenerateItem = NULL;

	if ( ! pFnGenerateItem )
		pFnGenerateItem = (UFunction*) UObject::GObjObjects()->Data[ 202266 ];

	UUI_ShopBase_execGenerateItem_Parms GenerateItem_Parms;
	memcpy ( &GenerateItem_Parms.ShopItemInfo, &ShopItemInfo, 0xC0 );

	this->ProcessEvent ( pFnGenerateItem, &GenerateItem_Parms, NULL );

	return GenerateItem_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.PurchaseItem
// [0x00020102] 
// Parameters infos:
// struct FsShopItemInfo          ShopItemInfo                   ( CPF_Parm | CPF_NeedCtorLink )

void UUI_ShopBase::PurchaseItem ( struct FsShopItemInfo ShopItemInfo )
{
	static UFunction* pFnPurchaseItem = NULL;

	if ( ! pFnPurchaseItem )
		pFnPurchaseItem = (UFunction*) UObject::GObjObjects()->Data[ 202268 ];

	UUI_ShopBase_execPurchaseItem_Parms PurchaseItem_Parms;
	memcpy ( &PurchaseItem_Parms.ShopItemInfo, &ShopItemInfo, 0xC0 );

	this->ProcessEvent ( pFnPurchaseItem, &PurchaseItem_Parms, NULL );
};

// Function CDT7.UI_ShopBase.EntrySelected
// [0x00020002] 
// Parameters infos:
// class UUIButton_DataListEntry* Button                         ( CPF_Parm )

void UUI_ShopBase::EntrySelected ( class UUIButton_DataListEntry* Button )
{
	static UFunction* pFnEntrySelected = NULL;

	if ( ! pFnEntrySelected )
		pFnEntrySelected = (UFunction*) UObject::GObjObjects()->Data[ 202271 ];

	UUI_ShopBase_execEntrySelected_Parms EntrySelected_Parms;
	EntrySelected_Parms.Button = Button;

	this->ProcessEvent ( pFnEntrySelected, &EntrySelected_Parms, NULL );
};

// Function CDT7.UI_ShopBase.RefreshedList
// [0x00020002] 
// Parameters infos:

void UUI_ShopBase::RefreshedList ( )
{
	static UFunction* pFnRefreshedList = NULL;

	if ( ! pFnRefreshedList )
		pFnRefreshedList = (UFunction*) UObject::GObjObjects()->Data[ 202272 ];

	UUI_ShopBase_execRefreshedList_Parms RefreshedList_Parms;

	this->ProcessEvent ( pFnRefreshedList, &RefreshedList_Parms, NULL );
};

// Function CDT7.UI_ShopBase.RefreshItemList
// [0x00020102] 
// Parameters infos:
// int                            Id                             ( CPF_Parm )

void UUI_ShopBase::RefreshItemList ( int Id )
{
	static UFunction* pFnRefreshItemList = NULL;

	if ( ! pFnRefreshItemList )
		pFnRefreshItemList = (UFunction*) UObject::GObjObjects()->Data[ 202274 ];

	UUI_ShopBase_execRefreshItemList_Parms RefreshItemList_Parms;
	RefreshItemList_Parms.Id = Id;

	this->ProcessEvent ( pFnRefreshItemList, &RefreshItemList_Parms, NULL );
};

// Function CDT7.UI_ShopBase.OnReceivedInputKey
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUI_ShopBase::OnReceivedInputKey ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnReceivedInputKey = NULL;

	if ( ! pFnOnReceivedInputKey )
		pFnOnReceivedInputKey = (UFunction*) UObject::GObjObjects()->Data[ 202277 ];

	UUI_ShopBase_execOnReceivedInputKey_Parms OnReceivedInputKey_Parms;

	this->ProcessEvent ( pFnOnReceivedInputKey, &OnReceivedInputKey_Parms, NULL );

	if ( EventParms )
		memcpy ( EventParms, &OnReceivedInputKey_Parms.EventParms, 0x20 );

	return OnReceivedInputKey_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.CancelClicked
// [0x00020002] 
// Parameters infos:

void UUI_ShopBase::CancelClicked ( )
{
	static UFunction* pFnCancelClicked = NULL;

	if ( ! pFnCancelClicked )
		pFnCancelClicked = (UFunction*) UObject::GObjObjects()->Data[ 202278 ];

	UUI_ShopBase_execCancelClicked_Parms CancelClicked_Parms;

	this->ProcessEvent ( pFnCancelClicked, &CancelClicked_Parms, NULL );
};

// Function CDT7.UI_ShopBase.ConfirmClicked
// [0x00020002] 
// Parameters infos:

void UUI_ShopBase::ConfirmClicked ( )
{
	static UFunction* pFnConfirmClicked = NULL;

	if ( ! pFnConfirmClicked )
		pFnConfirmClicked = (UFunction*) UObject::GObjObjects()->Data[ 202279 ];

	UUI_ShopBase_execConfirmClicked_Parms ConfirmClicked_Parms;

	this->ProcessEvent ( pFnConfirmClicked, &ConfirmClicked_Parms, NULL );
};

// Function CDT7.UI_ShopBase.OpenError
// [0x00020102] 
// Parameters infos:
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UUI_ShopBase::OpenError ( unsigned char ErrorCode )
{
	static UFunction* pFnOpenError = NULL;

	if ( ! pFnOpenError )
		pFnOpenError = (UFunction*) UObject::GObjObjects()->Data[ 202281 ];

	UUI_ShopBase_execOpenError_Parms OpenError_Parms;
	OpenError_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOpenError, &OpenError_Parms, NULL );
};

// Function CDT7.UI_ShopBase.OpenConfirm
// [0x00020102] 
// Parameters infos:
// struct FsShopItemInfo          ItemInfo                       ( CPF_Parm | CPF_NeedCtorLink )

void UUI_ShopBase::OpenConfirm ( struct FsShopItemInfo ItemInfo )
{
	static UFunction* pFnOpenConfirm = NULL;

	if ( ! pFnOpenConfirm )
		pFnOpenConfirm = (UFunction*) UObject::GObjObjects()->Data[ 202287 ];

	UUI_ShopBase_execOpenConfirm_Parms OpenConfirm_Parms;
	memcpy ( &OpenConfirm_Parms.ItemInfo, &ItemInfo, 0xC0 );

	this->ProcessEvent ( pFnOpenConfirm, &OpenConfirm_Parms, NULL );
};

// Function CDT7.UI_ShopBase.OnItemPurchased
// [0x00020102] 
// Parameters infos:
// class UUIObject*               CallerObject                   ( CPF_Parm )

void UUI_ShopBase::OnItemPurchased ( class UUIObject* CallerObject )
{
	static UFunction* pFnOnItemPurchased = NULL;

	if ( ! pFnOnItemPurchased )
		pFnOnItemPurchased = (UFunction*) UObject::GObjObjects()->Data[ 202289 ];

	UUI_ShopBase_execOnItemPurchased_Parms OnItemPurchased_Parms;
	OnItemPurchased_Parms.CallerObject = CallerObject;

	this->ProcessEvent ( pFnOnItemPurchased, &OnItemPurchased_Parms, NULL );
};

// Function CDT7.UI_ShopBase.NotifyWidgetClicked
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Widget                         ( CPF_Parm )

bool UUI_ShopBase::eventNotifyWidgetClicked ( class UUIObject* Widget )
{
	static UFunction* pFnNotifyWidgetClicked = NULL;

	if ( ! pFnNotifyWidgetClicked )
		pFnNotifyWidgetClicked = (UFunction*) UObject::GObjObjects()->Data[ 202294 ];

	UUI_ShopBase_eventNotifyWidgetClicked_Parms NotifyWidgetClicked_Parms;
	NotifyWidgetClicked_Parms.Widget = Widget;

	this->ProcessEvent ( pFnNotifyWidgetClicked, &NotifyWidgetClicked_Parms, NULL );

	return NotifyWidgetClicked_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.GetTotalCost
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FsShopItemInfo          ShopItemInfo                   ( CPF_Parm | CPF_NeedCtorLink )

int UUI_ShopBase::GetTotalCost ( struct FsShopItemInfo ShopItemInfo )
{
	static UFunction* pFnGetTotalCost = NULL;

	if ( ! pFnGetTotalCost )
		pFnGetTotalCost = (UFunction*) UObject::GObjObjects()->Data[ 202297 ];

	UUI_ShopBase_execGetTotalCost_Parms GetTotalCost_Parms;
	memcpy ( &GetTotalCost_Parms.ShopItemInfo, &ShopItemInfo, 0xC0 );

	this->ProcessEvent ( pFnGetTotalCost, &GetTotalCost_Parms, NULL );

	return GetTotalCost_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.UpdateUI
// [0x00020102] 
// Parameters infos:

void UUI_ShopBase::UpdateUI ( )
{
	static UFunction* pFnUpdateUI = NULL;

	if ( ! pFnUpdateUI )
		pFnUpdateUI = (UFunction*) UObject::GObjObjects()->Data[ 202298 ];

	UUI_ShopBase_execUpdateUI_Parms UpdateUI_Parms;

	this->ProcessEvent ( pFnUpdateUI, &UpdateUI_Parms, NULL );
};

// Function CDT7.UI_ShopBase.CanPurchaseItem
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIButton_Shop*          Button                         ( CPF_Parm )

bool UUI_ShopBase::CanPurchaseItem ( class UUIButton_Shop* Button )
{
	static UFunction* pFnCanPurchaseItem = NULL;

	if ( ! pFnCanPurchaseItem )
		pFnCanPurchaseItem = (UFunction*) UObject::GObjObjects()->Data[ 202306 ];

	UUI_ShopBase_execCanPurchaseItem_Parms CanPurchaseItem_Parms;
	CanPurchaseItem_Parms.Button = Button;

	this->ProcessEvent ( pFnCanPurchaseItem, &CanPurchaseItem_Parms, NULL );

	return CanPurchaseItem_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.ConsumeItems
// [0x00824102] 
// Parameters infos:
// TArray< class UHeroEquipment* > ItemsToConsume                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ManaToConsume                  ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UUI_ShopBase::ConsumeItems ( TArray< class UHeroEquipment* > ItemsToConsume, struct FString ManaToConsume )
{
	static UFunction* pFnConsumeItems = NULL;

	if ( ! pFnConsumeItems )
		pFnConsumeItems = (UFunction*) UObject::GObjObjects()->Data[ 202314 ];

	UUI_ShopBase_execConsumeItems_Parms ConsumeItems_Parms;
	memcpy ( &ConsumeItems_Parms.ItemsToConsume, &ItemsToConsume, 0xC );
	memcpy ( &ConsumeItems_Parms.ManaToConsume, &ManaToConsume, 0xC );

	this->ProcessEvent ( pFnConsumeItems, &ConsumeItems_Parms, NULL );
};

// Function CDT7.UI_ShopBase.ClearCurrencyAmounts
// [0x00020102] 
// Parameters infos:

void UUI_ShopBase::ClearCurrencyAmounts ( )
{
	static UFunction* pFnClearCurrencyAmounts = NULL;

	if ( ! pFnClearCurrencyAmounts )
		pFnClearCurrencyAmounts = (UFunction*) UObject::GObjObjects()->Data[ 202316 ];

	UUI_ShopBase_execClearCurrencyAmounts_Parms ClearCurrencyAmounts_Parms;

	this->ProcessEvent ( pFnClearCurrencyAmounts, &ClearCurrencyAmounts_Parms, NULL );
};

// Function CDT7.UI_ShopBase.FormatManaString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ManaStringin                   ( CPF_Parm | CPF_NeedCtorLink )

struct FString UUI_ShopBase::FormatManaString ( struct FString ManaStringin )
{
	static UFunction* pFnFormatManaString = NULL;

	if ( ! pFnFormatManaString )
		pFnFormatManaString = (UFunction*) UObject::GObjObjects()->Data[ 202322 ];

	UUI_ShopBase_execFormatManaString_Parms FormatManaString_Parms;
	memcpy ( &FormatManaString_Parms.ManaStringin, &ManaStringin, 0xC );

	this->ProcessEvent ( pFnFormatManaString, &FormatManaString_Parms, NULL );

	return FormatManaString_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.UpdateCurrencyAmounts
// [0x00020102] 
// Parameters infos:

void UUI_ShopBase::UpdateCurrencyAmounts ( )
{
	static UFunction* pFnUpdateCurrencyAmounts = NULL;

	if ( ! pFnUpdateCurrencyAmounts )
		pFnUpdateCurrencyAmounts = (UFunction*) UObject::GObjObjects()->Data[ 202325 ];

	UUI_ShopBase_execUpdateCurrencyAmounts_Parms UpdateCurrencyAmounts_Parms;

	this->ProcessEvent ( pFnUpdateCurrencyAmounts, &UpdateCurrencyAmounts_Parms, NULL );
};

// Function CDT7.UI_ShopBase.InitializeShop
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUI_ShopBase::InitializeShop ( )
{
	static UFunction* pFnInitializeShop = NULL;

	if ( ! pFnInitializeShop )
		pFnInitializeShop = (UFunction*) UObject::GObjObjects()->Data[ 202328 ];

	UUI_ShopBase_execInitializeShop_Parms InitializeShop_Parms;

	this->ProcessEvent ( pFnInitializeShop, &InitializeShop_Parms, NULL );

	return InitializeShop_Parms.ReturnValue;
};

// Function CDT7.UI_ShopBase.PostInitialSceneUpdate
// [0x00020002] 
// Parameters infos:

void UUI_ShopBase::PostInitialSceneUpdate ( )
{
	static UFunction* pFnPostInitialSceneUpdate = NULL;

	if ( ! pFnPostInitialSceneUpdate )
		pFnPostInitialSceneUpdate = (UFunction*) UObject::GObjObjects()->Data[ 202329 ];

	UUI_ShopBase_execPostInitialSceneUpdate_Parms PostInitialSceneUpdate_Parms;

	this->ProcessEvent ( pFnPostInitialSceneUpdate, &PostInitialSceneUpdate_Parms, NULL );
};

// Function CDT7.UI_ShopBase.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUI_ShopBase::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = (UFunction*) UObject::GObjObjects()->Data[ 202331 ];

	UUI_ShopBase_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function CDT7.IShopHandler.OnItemPurchased
// [0x00020100] 
// Parameters infos:
// class UUIObject*               CallerObject                   ( CPF_Parm )

void UIShopHandler::OnItemPurchased ( class UUIObject* CallerObject )
{
	static UFunction* pFnOnItemPurchased = NULL;

	if ( ! pFnOnItemPurchased )
		pFnOnItemPurchased = (UFunction*) UObject::GObjObjects()->Data[ 202464 ];

	UIShopHandler_execOnItemPurchased_Parms OnItemPurchased_Parms;
	OnItemPurchased_Parms.CallerObject = CallerObject;

	this->ProcessEvent ( pFnOnItemPurchased, &OnItemPurchased_Parms, NULL );
};

// Function CDT7.DunDef_SeqEvent_VoidForgeBuyEvent.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqEvent_VoidForgeBuyEvent::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 202467 ];

	UDunDef_SeqEvent_VoidForgeBuyEvent_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif