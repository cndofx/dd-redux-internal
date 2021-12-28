#include "Header.h"
#include <stdlib.h>  
bool bDebug = false;//internal debug
bool ConsoleDebug = false;
bool LogToFile = FALSE;
bool bShowDEMOWINDOW = false;
bool LogWeaponStats = false;
bool UnreleasedCheats = FALSE;



std::string ModMenuName = "Rebirth Final";
const wchar_t* ButterStringData = L"Butter";
FString ButterString = (wchar_t*)ButterStringData;


DWORD ScoreHookAddrOffset = 0x7E0f1;
DWORD dllBase = (DWORD)GetModuleHandleA(NULL);
HWND gameHWND = FindWindow(NULL, TEXT("Dungeon Defenders"));
//ue3 procevent hook
DWORD BaseProcessEventAddress = 0x090B00;
DWORD ProcessEventAddress = (dllBase + BaseProcessEventAddress);
typedef void(__thiscall* tProcessEvent)(UObject*, UFunction*, void*, void*);
tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;
void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult);
//dx9 endscene hook
typedef HRESULT(APIENTRY* tEndScene)(LPDIRECT3DDEVICE9 pDevice);
tEndScene oScene;
HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice);
//menu hook allows inputs
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wPAram, LPARAM lParam);
typedef LRESULT(CALLBACK* WNDPROC)(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);
WNDPROC oWndProc;
//hooks
void ScoreHook();
Hooking ProcEventHook((void*)ProcessEventAddress, HookedPE, 5);
Hooking EndSceneHook((void*)NULL, hkEndScene, 7);
Hooking ScoreHookObj((void*)(dllBase + ScoreHookAddrOffset), ScoreHook, 8);




bool end = true;
bool UpdateScore = false;
int newScore = 0;
bool AddItem = FALSE;

//BGRA
FColor fRed = { 0, 0, 255, 255 };
FColor fBlue = { 255, 0, 0, 255 };
FColor fCyan = { 255, 255, 0, 255 };
FColor fGreen = { 0, 255, 0, 255 };
FColor fWhite = { 255, 255, 255, 255 };




UDunDef_SeqAct_GiveEquipmentToPlayers* GEP = nullptr;
TArray< FGiveEquipmentEntry >   LastItemEntry;
FGiveEquipmentEntry tmpEntry;

ADunDefPlayer* crashObj = nullptr;

UGameEngine* gameEngine = nullptr;  //EntityList
APlayerController* controller = nullptr;  //player controller/hero
ADunDefGameReplicationInfo* plevel = nullptr;  //level up
UDunDef_SeqAct_SetWaveNumber* waveNum = nullptr;  //wave skipping
UDunDefHeroManager* heroManager = nullptr;  //Add items to box
ADunDefPlayer* player = nullptr;  //might not be needed
AMain* pMain = nullptr;  //Enemys Left for wave
AHUD* hud = nullptr;
UHeroEquipment* LastDroppedWep = nullptr;
FVector									VacuumHackPos = { 0, 0, 0 };
FVector									NewLocation = { 0, 0, 0 };

//MENU
int ToggleKey = VK_INSERT;
bool bToggleKeyChangeRequest = FALSE;

int EndKey = VK_END;
bool bEndKeyKeyChangeRequest = FALSE;

bool bGetNewTeleportLocation = FALSE;
bool bTeleportPlayer = FALSE;

int NewTeleportKey = VK_F3;
bool NewTeleportKeyKeyChangeRequest = FALSE;
int TeleportPlayerKey = VK_F4;
bool TeleportPlayerKeyKeyChangeRequest = FALSE;

int FilterAmmount = 500;

enum MenuOptions
{
	CHEATS,
	ESP,
	LOBBY,
	SETTINGS,
	ITEM_MODDING
};
MenuOptions MenuTab = CHEATS;
bool ShowMenu = TRUE;
bool bEspEnabled = FALSE;
bool bEspLines = FALSE;
bool bEspHealth = FALSE;
bool bEspBox = FALSE;
bool bGodMode = FALSE;
bool bVacuumHack = FALSE;
bool bShowVacuumPos = FALSE;
bool bShowTeleportPos = FALSE;
bool bLootShower = FALSE;
bool bAutoPickUp = FALSE;
bool bAutoKill = FALSE;
bool bWaveSkip = FALSE;
bool bModDroppedItem = FALSE;
bool bKillOneToAdvance = FALSE;
bool bLobbyGravity = FALSE;
bool bLobbyScale = FALSE;
bool bLobbyJump = FALSE;
bool bMultiplyReward = FALSE;
bool bPersonalTowers = FALSE;
bool bUnlimManaBuild = FALSE;
bool bUnlimManaShop = FALSE;
bool bNoCD = FALSE;
bool bScaleEnemy = FALSE;
bool bDrawRoute = FALSE;
bool bLockLevelAt = FALSE;
bool ChangeRewards = FALSE;
bool bAutoXp = FALSE;
bool bManaTrail = FALSE;
bool bTeleportPlayersSafe = FALSE;
bool bTeleportPlayersPoint = FALSE;


int MultiplyRewardsBy = 10;

float Gravity = 0;
float JumpHeight = 2000.0f;
float DrawScale = 1.0f;
float eDrawScale = 1.0f;
int WaveSkipToNum = 0;
//auto pickup settings
enum Stats
{
	eUnknown,
	eHHealth,
	eHSpeed,
	eHDamage,
	eHCast,
	Ability1,
	Ability2,
	eTHealth,
	eTSpeed,
	eTDamage,
	eTRange
};
enum ItemQuality
{
	Cursed = 0,
	Torn = 0,
	Worn = 3,
	Stocky = 6,
	Solid = 8,
	Sturdy = 10,
	Polished = 12,
	Shining = 14,
	Powerful = 20,
	Amazing = 27,
	Epic = 34,
	Legendary = 45,
	Godly = 60,
	Mythical = 74,
	Transcendent = 78,
	Supreme = 83,
	Ultimate = 90,
	Ultimate93 = 93,
	Ultimateplus = 100
};
ItemQuality quailityTypes;




int ItemBoxFilterStats[11];
int ItemPickUpFilterStats[11];

int ItemsAdded, TotalItemsCkd;




struct ItemCopy
{
	int                                                StatModifiers[0xB];
	struct FDamageReduction                            DamageReductions[0x4];
	int                                                WeaponDamageBonus;
	int                                                WeaponNumberOfProjectilesBonus;
	int                                                WeaponSpeedOfProjectilesBonus;

	class UClass* WeaponAdditionalDamageType;

	int                                                WeaponAdditionalDamageAmount;
	float                                              WeaponDrawScaleMultiplier;
	float                                              MaxRandomElementalDamageMultiplier;
	float                                              WeaponSwingSpeedMultiplier;
	unsigned long                                      WeaponReloadSpeedBonusUse : 1;
	unsigned long                                      bIgnoreLevelRequirement : 1;
	unsigned long                                      WeaponKnockbackBonusUse : 1;
	unsigned long                                      bCanBeUpgraded : 1;
	unsigned long                                      AllowRenamingAtMaxUpgrade : 1;
	unsigned long                                      bForceUseParentTemplate : 1;
	unsigned long                                      WeaponAltDamageBonusUse : 1;
	unsigned long                                      bDisableTheRandomization : 1;
	unsigned long                                      WeaponBlockingBonusUse : 1;
	unsigned long                                      bDontCalculateLevelRequirement : 1;
	unsigned long                                      WeaponClipAmmoBonusUse : 1;
	unsigned long                                      bDontUseLevelName : 1;
	unsigned long                                      WeaponChargeSpeedBonusUse : 1;
	unsigned long                                      WeaponShotsPerSecondBonusUse : 1;
	unsigned long                                      UseWeaponCoreStats : 1;
	unsigned long                                      bIsLocked : 1;
	unsigned long                                      bWasAttached : 1;
	unsigned long                                      bIsShopEquipment : 1;
	unsigned long                                      bIsSecondary : 1;
	unsigned long                                      bIsNameOnlineVerified : 1;
	unsigned long                                      bIsForgerNameOnlineVerified : 1;
	unsigned long                                      bWasAddedToDefenderStore : 1;
	int                                                WeaponReloadSpeedBonus;
	int                                                WeaponKnockbackBonus;
	int                                                WeaponAltDamageBonus;
	int                                                WeaponBlockingBonus;
	int                                                WeaponClipAmmoBonus;
	int                                                AdditionalAllowedUpgradeResistancePoints;
	int                                                RequirementLevelOverride;
	int                                                WeaponChargeSpeedBonus;
	int                                                WeaponShotsPerSecondBonus;
	unsigned char                                      NameIndex_Base;
	unsigned char                                      NameIndex_QualityDescriptor;
	unsigned char                                      NameIndex_DamageReduction;
	unsigned char                                      PrimaryColorSet;
	unsigned char                                      SecondaryColorSet;
	unsigned char                                      bCantBeDropped;
	unsigned char                                      bCantBeSold;
	unsigned char                                      bAutoLockInItemBox;
	unsigned char                                      bDidOnetimeEffect;
	unsigned char                                      ManualLR;
	unsigned char                                      EquipmentType;


	struct FLinearColor                                PrimaryColorOverride;
	struct FLinearColor                                SecondaryColorOverride;
	int                                                MaximumSellWorth;
	int                                                MinimumSellWorth;
	int                                                ShopMinimumSellWorth;
	int                                                MaxEquipmentLevel;
	struct FString                                     UserEquipmentName;
	struct FString                                     EquipmentDescription;
	struct FString                                     UserForgerName;


	int                                                Level;
	int                                                StoredMana;
	int                                                UserID;
	float                                              MyRatingPercent;
	float                                              MyRating;
	int                                                EquipmentID1;
	int                                                EquipmentID2;
	struct FString                                     EquipmentName;
	struct FEG_StatRandomizer                          StatModifierRandomizers[0xB];
	unsigned long                                      bForceRandomDLCColor : 1;
	unsigned long                                      bUseShotsPerSecondRandomizerMult : 1;
	unsigned long                                      bForceAllowDropping : 1;
	unsigned long                                      bForceAllowSelling : 1;
	unsigned long                                      bDoTranscendentLevelBoost : 1;
	unsigned long                                      bUseLevelRequirementOverrides : 1;
	unsigned long                                      bForceRandomizerWithMinEquipmentLevel : 1;
	unsigned long                                      bAllowSellingToExceedSoftManaCap : 1;
	unsigned long                                      bCanBeEquipped : 1;
	unsigned long                                      bForceUseEquipmentDrawScale : 1;
	unsigned long                                      bDistributeManaUponDroppedDestruction : 1;
	unsigned long                                      bAllowDroppedDestruction : 1;
	unsigned long                                      bDontHideEquipmentAttachmentInFPV : 1;
	unsigned long                                      bEncumberHero : 1;
	unsigned long                                      bIconUseEquipmentRating : 1;
	unsigned long                                      bPlayerShopForceToMinimumSellWorth : 1;
	unsigned long                                      bMaxEquipLevelUseAltCalc : 1;
	unsigned long                                      AllowNameRandomization : 1;
	unsigned long                                      OnlyRandomizeBaseName : 1;
	unsigned long                                      bNoNegativeRandomizations : 1;
	unsigned long                                      UsesEquipmentAttachments : 1;
	unsigned long                                      UseColorSets : 1;
	unsigned long                                      RandomizeColorSets : 1;
	unsigned long                                      bUsePreviewZOffsetting : 1;
	unsigned long                                      bUseSelectionPreviewScale : 1;
	unsigned long                                      bUsePawnWeaponDamageCallback : 1;
	unsigned long                                      bUsePawnDamageCallback : 1;
	unsigned long                                      bCantSave : 1;
	unsigned long                                      bCantPutInItemBox : 1;
	unsigned long                                      bSetRandomizerMultipliers : 1;
	unsigned long                                      bPlayerShopPurchasePending : 1;
	unsigned long                                      bCanModifyParticleColour : 1;
	unsigned long                                      bUseHighDigitManaTokenValue : 1;
	int                                                RandomizerStatModifierGoNegativeThreshold;
	float                                              RandomizerStatModifierGoNegativeMultiplier;
	float                                              RandomizerStatModifierGoNegativeChance;
	class ADunDefWeapon* EquipmentWeaponTemplate;
	float                                              RandomizerQualityMultiplier;
	float                                              LevelRequirementRatingOffset;
	float                                              MinElementalDamageIncreasePerLevel;
	float                                              HighLevelRequirementsRatingThreshold;
	float                                              MaximumSellWorthUpgradeDepreciationFactor;
	float                                              TranscendentLevelBoostAmount;
	float                                              TranscendentLevelBoostRandomizerPower;
	float                                              HighResaleWorthPower;
	float                                              SupremeLevelBoostAmount;
	float                                              SupremeLevelBoostRandomizerPower;
	float                                              UltimateLevelBoostAmount;
	float                                              UltimateLevelBoostRandomizerPower;
	TArray< struct FLevelRequirementOverride >         LevelRequirementOverrides;
	struct FEG_StatRandomizer                          WeaponDamageBonusRandomizer;
	int                                                OneTime_ExpBonus;
	int                                                HighLevelThreshold;
	int                                                MaxHeroStatValue;
	int                                                TranscendentMaxHeroStatValue;
	int                                                SupremeMaxHeroStatValue;
	int                                                MinTranscendentLevel;
	int                                                MinSupremeLevel;
	int                                                UltimateMaxHeroStatValue;
	int                                                UltimatePlusMaxHeroStatValue;
	int                                                MinUltimateLevel;
	TArray< struct FString >                           DescriptionStringOriginalReplacements;
	TArray< struct FString >                           DescriptionStringNewReplacements;
	struct FEG_StatRandomizer                          WeaponAltDamageBonusRandomizer;
	struct FEG_StatRandomizer                          DamageReductionRandomizers[0x4];
	struct FEG_StatRandomizer                          WeaponClipAmmoBonusRandomizer;
	struct FEG_StatRandomizer                          WeaponReloadSpeedBonusRandomizer;
	struct FEG_StatRandomizer                          WeaponKnockbackBonusRandomizer;
	struct FEG_StatRandomizer                          WeaponChargeSpeedBonusRandomizer;
	struct FEG_StatRandomizer                          WeaponBlockingBonusRandomizer;
	struct FEG_StatRandomizer                          MaxEquipmentLevelRandomizer;
	float                                              SellWorthLinearFactor;
	float                                              SellWorthExponentialFactor;
	float                                              SellWorthMin;
	float                                              SellWorthMax;
	float                                              SellRatingExponent;
	float                                              SellWorthEquipmentRatingBase;
	float                                              ElementalDamageMultiplier;
	float                                              ShopSellWorthLinearFactor;
	float                                              ShopSellWorthExponentialFactor;
	float                                              ShopSellWorthMin;
	float                                              ShopSellWorthMax;
	float                                              ShopSellRatingExponent;
	float                                              ShopSellWorthEquipmentRatingBase;
	float                                              ShopSellWorthWeaponMultiplier;
	float                                              ShopSellWorthWeaponExponentialFactorMult;
	float                                              AltDamageRandomizerMult;
	float                                              MaxShopSellWorth;
	float                                              ShopSellWorthMinWeaponMultiplier;
	float                                              ShopSellWorthMaxWeaponMultiplier;
	float                                              ShopSellWorthRatingWeaponMultiplier;
	float                                              ManaCostPerLevelMaxQualityMultiplierAdditional;
	float                                              HighLevelManaCostPerLevelMaxQualityMultiplierAdditional;
	float                                              ManaCostPerLevelExponentialFactorAdditional;
	float                                              HighLevelManaCostPerLevelExponentialFactorAdditional;
	float                                              WeaponDrawScaleRandomizerExtraMultiplier;
	TArray< int >                                      EquipLevelRequirements;
	float                                              ElementalDamageIncreasePerLevelMultiplier;
	float                                              DamageIncreasePerLevelMultiplier;
	float                                              UltimateDamageIncreasePerLevelMultiplier;
	float                                              MaxElementalDamageIncreasePerLevel;
	float                                              MaxDamageIncreasePerLevel;
	float                                              UltimateMaxDamageIncreasePerLevel;
	float                                              SelectionPreviewScaleMultiplier;
	float                                              AltDamageIncreasePerLevelMultiplier;
	float                                              AltMaxDamageIncreasePerLevel;
	float                                              PrimaryColorOverrideMultiplier;
	float                                              SecondaryColorOverrideMultiplier;
	float                                              GlobalSelectionPreviewScaleMultiplier;
	float                                              ShopSellWorthMaxExponentAbsolute;
	float                                              EquipmentRatingPercentBase;
	float                                              WeaponEquipmentRatingPercentBase;
	TArray< float >                                    QualityShopCostMultipliers;
	TArray< float >                                    QualityShopCostCaps;
	int                                                WeaponKnockbackMax;
	int                                                MaxNonTranscendentStatRollValue;
	int                                                MinDamageBonus;
	int                                                MinEquipmentLevels;
	int                                                LevelRequirementOffset;
	struct FEG_StatRandomizer                          WeaponShotsPerSecondBonusRandomizer;
	int                                                WeaponNumberOfProjectilesQualityBaseline;
	int                                                DamageReductionUpgradeInterval;
	struct FEG_StatRandomizer                          WeaponNumberOfProjectilesBonusRandomizer;
	struct FEG_StatRandomizer                          WeaponSpeedOfProjectilesBonusRandomizer;
	struct FEG_StatRandomizer                          WeaponAdditionalDamageAmountRandomizer;
	struct FEG_StatRandomizer                          WeaponDrawScaleMultiplierRandomizer;


	unsigned char                                      weaponType;
	unsigned char                                      EquipmentSetID;
	TArray< unsigned char >                            AccessoryRequirements;
	float                                              ManaCostPerLevelLinearFactor;
	float                                              IconColorMultPrimary;
	float                                              IconColorMultSecondary;
	float                                              ManaCostPerLevelExponentialFactor;
	float                                              ManaCostPerLevelMinQualityMultiplier;
	float                                              ManaCostPerLevelMaxQualityMultiplier;
	float                                              RespawnTimeMultiplier;
	float                                              TotalRandomizerMultiplier;
	TArray< struct FEquipmentAttachmentInfo >          EquipmentAttachmentInfos;
	struct FString                                     LevelString;
	struct FString                                     ForgedByDescription;
	float                                              PrimaryColorSetIntensity;
	float                                              PrimaryColorSetPow;
	float                                              SecondaryColorSetIntensity;
	float                                              SecondaryColorSetPow;
	float                                              WeaponDrawScaleGlobalMultiplier;
	float                                              IconScaleMultiplier;
	float                                              FullEquipmentSetStatMultiplier;
	float                                              MythicalFullEquipmentSetStatMultiplier;
	float                                              TranscendentFullEquipmentSetStatMultiplier;
	float                                              SupremeFullEquipmentSetStatMultiplier;
	float                                              UltimateFullEquipmentSetStatMultiplier;
	float                                              WeaponDamageDisplayValueScale;
	float                                              RatingPercentForLevelUpCostExponent;
	float                                              WeaponDamageBonusRandomizerMultiplier;
	float                                              AdditionalWeaponDamageBonusRandomizerMultiplier;
	float                                              SellWorthMultiplierLevelBase;
	float                                              SellWorthMultiplierLevelMin;
	float                                              SellWorthMultiplierLevelMax;
	struct FLinearColor                                ExtraEquipmentColorMultiplier;
	struct FName                                       ExtraEquipmentColorMultiplierMaterialParamName;
	float                                              PreviewMinOffsetScale;
	float                                              PreviewMinOffsetZ;
	float                                              PreviewMaxOffsetScale;
	float                                              PreviewMaxOffsetZ;
	class UMaterialInstanceConstant* EquipmentIconMat;
	struct FString                                     AdditionalDescription;
	struct FString                                     DamageDescription;
	TArray< struct FString >                           EquipmentStatNames;
	TArray< struct FString >                           EquipmentStatDescriptions;


	struct FLinearColor                                IconColorAddPrimary;
	struct FLinearColor                                IconColorAddSecondary;
	struct FString                                     BaseForgerName;
	float                                              ComparisonSimilarRatingAllowance;
	float                                              ComparisonRatingExponent;
	float                                              PlayerSpeedMultiplier;
	float                                              PlayerGravityMultiplier;
	struct FColor                                      GivenEquipmentMessageColor;
	struct FString                                     GivenEquipmentMessageString;
	struct FString                                     RequiredLevelString;
	struct FString                                     RequiredClassString;


	struct FVector                                     PreviewTranslationOffset;
	struct FString                                     BackupUserForgerName;
	struct FString                                     BackupUserEquipmentName;
	float                                              MyNonUpgradeLevelRating;
	int                                                PlayerShopSellAmount;
	struct FHighDigitInt                               PlayerShopSellAmountHDI;
	float                                              DebugPreTranscendentEquipmentRating;
	TArray< struct FEG_StatMatchingString >            RandomBaseNames;
	TArray< struct FEG_StatMatchingString >            DamageReductionNames;
	TArray< struct FEG_StatMatchingString >            QualityDescriptorNames;
	TArray< struct FEG_StatMatchingString >            QualityDescriptorRealNames;
	float                                              MinWeaponScale;
	float                                              WeaponDamageMultiplier;
	float                                              WeaponAltDamageMultiplier;

	TArray< struct UHeroEquipment_FLevelRange >        MaxLevelRangeDifficultyArray;
	TArray< struct FEquipmentComparison >              compareSets;


};

ItemCopy copyItem(UHeroEquipment* tmpItem)
{
	ItemCopy newItem;









	*newItem.StatModifiers = tmpItem->StatModifiers[0];
	*newItem.DamageReductions = tmpItem->DamageReductions[0];
	newItem.WeaponDamageBonus = tmpItem->WeaponDamageBonus;
	newItem.WeaponNumberOfProjectilesBonus = tmpItem->WeaponNumberOfProjectilesBonus;
	newItem.WeaponSpeedOfProjectilesBonus = tmpItem->WeaponSpeedOfProjectilesBonus;
	newItem.WeaponAdditionalDamageType = tmpItem->WeaponAdditionalDamageType;
	newItem.WeaponAdditionalDamageAmount = tmpItem->WeaponAdditionalDamageAmount;
	newItem.WeaponDrawScaleMultiplier = tmpItem->WeaponDrawScaleMultiplier;
	newItem.MaxRandomElementalDamageMultiplier = tmpItem->MaxRandomElementalDamageMultiplier;
	newItem.WeaponSwingSpeedMultiplier = tmpItem->WeaponSwingSpeedMultiplier;
	newItem.WeaponReloadSpeedBonusUse = tmpItem->WeaponReloadSpeedBonusUse;
	newItem.bIgnoreLevelRequirement = tmpItem->bIgnoreLevelRequirement;
	newItem.WeaponKnockbackBonusUse = tmpItem->WeaponKnockbackBonusUse;
	newItem.bCanBeUpgraded = tmpItem->bCanBeUpgraded;
	newItem.AllowRenamingAtMaxUpgrade = tmpItem->AllowRenamingAtMaxUpgrade;
	newItem.bForceUseParentTemplate = tmpItem->bForceUseParentTemplate;
	newItem.WeaponAltDamageBonusUse = tmpItem->WeaponAltDamageBonusUse;
	newItem.bDisableTheRandomization = tmpItem->bDisableTheRandomization;
	newItem.WeaponBlockingBonusUse = tmpItem->WeaponBlockingBonusUse;
	newItem.bDontCalculateLevelRequirement = tmpItem->bDontCalculateLevelRequirement;
	newItem.WeaponClipAmmoBonusUse = tmpItem->WeaponClipAmmoBonusUse;
	newItem.bDontUseLevelName = tmpItem->bDontUseLevelName;
	newItem.WeaponChargeSpeedBonusUse = tmpItem->WeaponChargeSpeedBonusUse;
	newItem.WeaponShotsPerSecondBonusUse = tmpItem->WeaponShotsPerSecondBonusUse;
	newItem.UseWeaponCoreStats = tmpItem->UseWeaponCoreStats;
	newItem.bIsLocked = tmpItem->bIsLocked;
	newItem.bWasAttached = tmpItem->bWasAttached;
	newItem.bIsShopEquipment = tmpItem->bIsShopEquipment;
	newItem.bIsSecondary = tmpItem->bIsSecondary;
	newItem.bIsNameOnlineVerified = tmpItem->bIsNameOnlineVerified;
	newItem.bIsForgerNameOnlineVerified = tmpItem->bIsForgerNameOnlineVerified;
	newItem.bWasAddedToDefenderStore = tmpItem->bWasAddedToDefenderStore;
	newItem.WeaponReloadSpeedBonus = tmpItem->WeaponReloadSpeedBonus;
	newItem.WeaponKnockbackBonus = tmpItem->WeaponKnockbackBonus;
	newItem.WeaponAltDamageBonus = tmpItem->WeaponAltDamageBonus;
	newItem.WeaponBlockingBonus = tmpItem->WeaponBlockingBonus;
	newItem.WeaponClipAmmoBonus = tmpItem->WeaponClipAmmoBonus;
	newItem.AdditionalAllowedUpgradeResistancePoints = tmpItem->AdditionalAllowedUpgradeResistancePoints;
	newItem.RequirementLevelOverride = tmpItem->RequirementLevelOverride;
	newItem.WeaponChargeSpeedBonus = tmpItem->WeaponChargeSpeedBonus;
	newItem.WeaponShotsPerSecondBonus = tmpItem->WeaponShotsPerSecondBonus;
	newItem.NameIndex_Base = tmpItem->NameIndex_Base;
	newItem.NameIndex_QualityDescriptor = tmpItem->NameIndex_QualityDescriptor;
	newItem.NameIndex_DamageReduction = tmpItem->NameIndex_DamageReduction;
	newItem.PrimaryColorSet = tmpItem->PrimaryColorSet;
	newItem.SecondaryColorSet = tmpItem->SecondaryColorSet;
	newItem.bCantBeDropped = tmpItem->bCantBeDropped;
	newItem.bCantBeSold = tmpItem->bCantBeSold;
	newItem.bAutoLockInItemBox = tmpItem->bAutoLockInItemBox;
	newItem.bDidOnetimeEffect = tmpItem->bDidOnetimeEffect;
	newItem.ManualLR = tmpItem->ManualLR;
	newItem.EquipmentType = tmpItem->EquipmentType;
	newItem.PrimaryColorOverride = tmpItem->PrimaryColorOverride;
	newItem.SecondaryColorOverride = tmpItem->SecondaryColorOverride;
	newItem.MaximumSellWorth = tmpItem->MaximumSellWorth;
	newItem.MinimumSellWorth = tmpItem->MinimumSellWorth;
	newItem.ShopMinimumSellWorth = tmpItem->ShopMinimumSellWorth;
	newItem.MaxEquipmentLevel = tmpItem->MaxEquipmentLevel;
	newItem.UserEquipmentName = tmpItem->UserEquipmentName;
	newItem.EquipmentDescription = tmpItem->EquipmentDescription;
	newItem.UserForgerName = tmpItem->UserForgerName;
	newItem.Level = tmpItem->Level;
	newItem.StoredMana = tmpItem->StoredMana;
	newItem.UserID = tmpItem->UserID;
	newItem.MyRatingPercent = tmpItem->MyRatingPercent;
	newItem.MyRating = tmpItem->MyRating;
	newItem.EquipmentID1 = tmpItem->EquipmentID1;
	newItem.EquipmentID2 = tmpItem->EquipmentID2;
	newItem.EquipmentName = tmpItem->EquipmentName;
	*newItem.StatModifierRandomizers = tmpItem->StatModifierRandomizers[0];
	newItem.bForceRandomDLCColor = tmpItem->bForceRandomDLCColor;
	newItem.bUseShotsPerSecondRandomizerMult = tmpItem->bUseShotsPerSecondRandomizerMult;
	newItem.bForceAllowDropping = tmpItem->bForceAllowDropping;
	newItem.bForceAllowSelling = tmpItem->bForceAllowSelling;
	newItem.bDoTranscendentLevelBoost = tmpItem->bDoTranscendentLevelBoost;
	newItem.bUseLevelRequirementOverrides = tmpItem->bUseLevelRequirementOverrides;
	newItem.bForceRandomizerWithMinEquipmentLevel = tmpItem->bForceRandomizerWithMinEquipmentLevel;
	newItem.bAllowSellingToExceedSoftManaCap = tmpItem->bAllowSellingToExceedSoftManaCap;
	newItem.bCanBeEquipped = tmpItem->bCanBeEquipped;
	newItem.bForceUseEquipmentDrawScale = tmpItem->bForceUseEquipmentDrawScale;
	newItem.bDistributeManaUponDroppedDestruction = tmpItem->bDistributeManaUponDroppedDestruction;
	newItem.bAllowDroppedDestruction = tmpItem->bAllowDroppedDestruction;
	newItem.bDontHideEquipmentAttachmentInFPV = tmpItem->bDontHideEquipmentAttachmentInFPV;
	newItem.bEncumberHero = tmpItem->bEncumberHero;
	newItem.bIconUseEquipmentRating = tmpItem->bIconUseEquipmentRating;
	newItem.bPlayerShopForceToMinimumSellWorth = tmpItem->bPlayerShopForceToMinimumSellWorth;
	newItem.bMaxEquipLevelUseAltCalc = tmpItem->bMaxEquipLevelUseAltCalc;
	newItem.AllowNameRandomization = tmpItem->AllowNameRandomization;
	newItem.OnlyRandomizeBaseName = tmpItem->OnlyRandomizeBaseName;
	newItem.bNoNegativeRandomizations = tmpItem->bNoNegativeRandomizations;
	newItem.UsesEquipmentAttachments = tmpItem->UsesEquipmentAttachments;
	newItem.UseColorSets = tmpItem->UseColorSets;
	newItem.RandomizeColorSets = tmpItem->RandomizeColorSets;
	newItem.bUsePreviewZOffsetting = tmpItem->bUsePreviewZOffsetting;
	newItem.bUseSelectionPreviewScale = tmpItem->bUseSelectionPreviewScale;
	newItem.bUsePawnWeaponDamageCallback = tmpItem->bUsePawnWeaponDamageCallback;
	newItem.bUsePawnDamageCallback = tmpItem->bUsePawnDamageCallback;
	newItem.bCantSave = tmpItem->bCantSave;
	newItem.bCantPutInItemBox = tmpItem->bCantPutInItemBox;
	newItem.bSetRandomizerMultipliers = tmpItem->bSetRandomizerMultipliers;
	newItem.bPlayerShopPurchasePending = tmpItem->bPlayerShopPurchasePending;
	newItem.bCanModifyParticleColour = tmpItem->bCanModifyParticleColour;
	newItem.bUseHighDigitManaTokenValue = tmpItem->bUseHighDigitManaTokenValue;
	newItem.RandomizerStatModifierGoNegativeThreshold = tmpItem->RandomizerStatModifierGoNegativeThreshold;
	newItem.RandomizerStatModifierGoNegativeMultiplier = tmpItem->RandomizerStatModifierGoNegativeMultiplier;
	newItem.RandomizerStatModifierGoNegativeChance = tmpItem->RandomizerStatModifierGoNegativeChance;
	newItem.EquipmentWeaponTemplate = tmpItem->EquipmentWeaponTemplate;
	newItem.RandomizerQualityMultiplier = tmpItem->RandomizerQualityMultiplier;
	newItem.LevelRequirementRatingOffset = tmpItem->LevelRequirementRatingOffset;
	newItem.MinElementalDamageIncreasePerLevel = tmpItem->MinElementalDamageIncreasePerLevel;
	newItem.HighLevelRequirementsRatingThreshold = tmpItem->HighLevelRequirementsRatingThreshold;
	newItem.MaximumSellWorthUpgradeDepreciationFactor = tmpItem->MaximumSellWorthUpgradeDepreciationFactor;
	newItem.TranscendentLevelBoostAmount = tmpItem->TranscendentLevelBoostAmount;
	newItem.TranscendentLevelBoostRandomizerPower = tmpItem->TranscendentLevelBoostRandomizerPower;
	newItem.HighResaleWorthPower = tmpItem->HighResaleWorthPower;
	newItem.SupremeLevelBoostAmount = tmpItem->SupremeLevelBoostAmount;
	newItem.SupremeLevelBoostRandomizerPower = tmpItem->SupremeLevelBoostRandomizerPower;
	newItem.UltimateLevelBoostAmount = tmpItem->UltimateLevelBoostAmount;
	newItem.UltimateLevelBoostRandomizerPower = tmpItem->UltimateLevelBoostRandomizerPower;
	newItem.LevelRequirementOverrides = tmpItem->LevelRequirementOverrides;
	newItem.WeaponDamageBonusRandomizer = tmpItem->WeaponDamageBonusRandomizer;
	newItem.OneTime_ExpBonus = tmpItem->OneTime_ExpBonus;
	newItem.HighLevelThreshold = tmpItem->HighLevelThreshold;
	newItem.MaxHeroStatValue = tmpItem->MaxHeroStatValue;
	newItem.TranscendentMaxHeroStatValue = tmpItem->TranscendentMaxHeroStatValue;
	newItem.SupremeMaxHeroStatValue = tmpItem->SupremeMaxHeroStatValue;
	newItem.MinTranscendentLevel = tmpItem->MinTranscendentLevel;
	newItem.MinSupremeLevel = tmpItem->MinSupremeLevel;
	newItem.UltimateMaxHeroStatValue = tmpItem->UltimateMaxHeroStatValue;
	newItem.UltimatePlusMaxHeroStatValue = tmpItem->UltimatePlusMaxHeroStatValue;
	newItem.MinUltimateLevel = tmpItem->MinUltimateLevel;
	newItem.DescriptionStringOriginalReplacements = tmpItem->DescriptionStringOriginalReplacements;
	newItem.DescriptionStringNewReplacements = tmpItem->DescriptionStringNewReplacements;
	newItem.WeaponAltDamageBonusRandomizer = tmpItem->WeaponAltDamageBonusRandomizer;
	*newItem.DamageReductionRandomizers = tmpItem->DamageReductionRandomizers[0];
	newItem.WeaponClipAmmoBonusRandomizer = tmpItem->WeaponClipAmmoBonusRandomizer;
	newItem.WeaponReloadSpeedBonusRandomizer = tmpItem->WeaponReloadSpeedBonusRandomizer;
	newItem.WeaponKnockbackBonusRandomizer = tmpItem->WeaponKnockbackBonusRandomizer;
	newItem.WeaponChargeSpeedBonusRandomizer = tmpItem->WeaponChargeSpeedBonusRandomizer;
	newItem.WeaponBlockingBonusRandomizer = tmpItem->WeaponBlockingBonusRandomizer;
	newItem.MaxEquipmentLevelRandomizer = tmpItem->MaxEquipmentLevelRandomizer;
	newItem.SellWorthLinearFactor = tmpItem->SellWorthLinearFactor;
	newItem.SellWorthExponentialFactor = tmpItem->SellWorthExponentialFactor;
	newItem.SellWorthMin = tmpItem->SellWorthMin;
	newItem.SellWorthMax = tmpItem->SellWorthMax;
	newItem.SellRatingExponent = tmpItem->SellRatingExponent;
	newItem.SellWorthEquipmentRatingBase = tmpItem->SellWorthEquipmentRatingBase;
	newItem.ElementalDamageMultiplier = tmpItem->ElementalDamageMultiplier;
	newItem.ShopSellWorthLinearFactor = tmpItem->ShopSellWorthLinearFactor;
	newItem.ShopSellWorthExponentialFactor = tmpItem->ShopSellWorthExponentialFactor;
	newItem.ShopSellWorthMin = tmpItem->ShopSellWorthMin;
	newItem.ShopSellWorthMax = tmpItem->ShopSellWorthMax;
	newItem.ShopSellRatingExponent = tmpItem->ShopSellRatingExponent;
	newItem.ShopSellWorthEquipmentRatingBase = tmpItem->ShopSellWorthEquipmentRatingBase;
	newItem.ShopSellWorthWeaponMultiplier = tmpItem->ShopSellWorthWeaponMultiplier;
	newItem.ShopSellWorthWeaponExponentialFactorMult = tmpItem->ShopSellWorthWeaponExponentialFactorMult;
	newItem.AltDamageRandomizerMult = tmpItem->AltDamageRandomizerMult;
	newItem.MaxShopSellWorth = tmpItem->MaxShopSellWorth;
	newItem.ShopSellWorthMinWeaponMultiplier = tmpItem->ShopSellWorthMinWeaponMultiplier;
	newItem.ShopSellWorthMaxWeaponMultiplier = tmpItem->ShopSellWorthMaxWeaponMultiplier;
	newItem.ShopSellWorthRatingWeaponMultiplier = tmpItem->ShopSellWorthRatingWeaponMultiplier;
	newItem.ManaCostPerLevelMaxQualityMultiplierAdditional = tmpItem->ManaCostPerLevelMaxQualityMultiplierAdditional;
	newItem.HighLevelManaCostPerLevelMaxQualityMultiplierAdditional = tmpItem->HighLevelManaCostPerLevelMaxQualityMultiplierAdditional;
	newItem.ManaCostPerLevelExponentialFactorAdditional = tmpItem->ManaCostPerLevelExponentialFactorAdditional;
	newItem.HighLevelManaCostPerLevelExponentialFactorAdditional = tmpItem->HighLevelManaCostPerLevelExponentialFactorAdditional;
	newItem.WeaponDrawScaleRandomizerExtraMultiplier = tmpItem->WeaponDrawScaleRandomizerExtraMultiplier;
	newItem.EquipLevelRequirements = tmpItem->EquipLevelRequirements;
	newItem.ElementalDamageIncreasePerLevelMultiplier = tmpItem->ElementalDamageIncreasePerLevelMultiplier;
	newItem.DamageIncreasePerLevelMultiplier = tmpItem->DamageIncreasePerLevelMultiplier;
	newItem.UltimateDamageIncreasePerLevelMultiplier = tmpItem->UltimateDamageIncreasePerLevelMultiplier;
	newItem.MaxElementalDamageIncreasePerLevel = tmpItem->MaxElementalDamageIncreasePerLevel;
	newItem.MaxDamageIncreasePerLevel = tmpItem->MaxDamageIncreasePerLevel;
	newItem.UltimateMaxDamageIncreasePerLevel = tmpItem->UltimateMaxDamageIncreasePerLevel;
	newItem.SelectionPreviewScaleMultiplier = tmpItem->SelectionPreviewScaleMultiplier;
	newItem.AltDamageIncreasePerLevelMultiplier = tmpItem->AltDamageIncreasePerLevelMultiplier;
	newItem.AltMaxDamageIncreasePerLevel = tmpItem->AltMaxDamageIncreasePerLevel;
	newItem.PrimaryColorOverrideMultiplier = tmpItem->PrimaryColorOverrideMultiplier;
	newItem.SecondaryColorOverrideMultiplier = tmpItem->SecondaryColorOverrideMultiplier;
	newItem.GlobalSelectionPreviewScaleMultiplier = tmpItem->GlobalSelectionPreviewScaleMultiplier;
	newItem.ShopSellWorthMaxExponentAbsolute = tmpItem->ShopSellWorthMaxExponentAbsolute;
	newItem.EquipmentRatingPercentBase = tmpItem->EquipmentRatingPercentBase;
	newItem.WeaponEquipmentRatingPercentBase = tmpItem->WeaponEquipmentRatingPercentBase;
	newItem.QualityShopCostMultipliers = tmpItem->QualityShopCostMultipliers;
	newItem.QualityShopCostCaps = tmpItem->QualityShopCostCaps;
	newItem.WeaponKnockbackMax = tmpItem->WeaponKnockbackMax;
	newItem.MaxNonTranscendentStatRollValue = tmpItem->MaxNonTranscendentStatRollValue;
	newItem.MinDamageBonus = tmpItem->MinDamageBonus;
	newItem.MinEquipmentLevels = tmpItem->MinEquipmentLevels;
	newItem.LevelRequirementOffset = tmpItem->LevelRequirementOffset;
	newItem.WeaponShotsPerSecondBonusRandomizer = tmpItem->WeaponShotsPerSecondBonusRandomizer;
	newItem.WeaponNumberOfProjectilesQualityBaseline = tmpItem->WeaponNumberOfProjectilesQualityBaseline;
	newItem.DamageReductionUpgradeInterval = tmpItem->DamageReductionUpgradeInterval;
	newItem.WeaponNumberOfProjectilesBonusRandomizer = tmpItem->WeaponNumberOfProjectilesBonusRandomizer;
	newItem.WeaponSpeedOfProjectilesBonusRandomizer = tmpItem->WeaponSpeedOfProjectilesBonusRandomizer;
	newItem.WeaponAdditionalDamageAmountRandomizer = tmpItem->WeaponAdditionalDamageAmountRandomizer;
	newItem.WeaponDrawScaleMultiplierRandomizer = tmpItem->WeaponDrawScaleMultiplierRandomizer;
	newItem.weaponType = tmpItem->weaponType;
	newItem.EquipmentSetID = tmpItem->EquipmentSetID;
	newItem.AccessoryRequirements = tmpItem->AccessoryRequirements;
	newItem.ManaCostPerLevelLinearFactor = tmpItem->ManaCostPerLevelLinearFactor;
	newItem.IconColorMultPrimary = tmpItem->IconColorMultPrimary;
	newItem.IconColorMultSecondary = tmpItem->IconColorMultSecondary;
	newItem.ManaCostPerLevelExponentialFactor = tmpItem->ManaCostPerLevelExponentialFactor;
	newItem.ManaCostPerLevelMinQualityMultiplier = tmpItem->ManaCostPerLevelMinQualityMultiplier;
	newItem.ManaCostPerLevelMaxQualityMultiplier = tmpItem->ManaCostPerLevelMaxQualityMultiplier;
	newItem.RespawnTimeMultiplier = tmpItem->RespawnTimeMultiplier;
	newItem.TotalRandomizerMultiplier = tmpItem->TotalRandomizerMultiplier;
	newItem.EquipmentAttachmentInfos = tmpItem->EquipmentAttachmentInfos;
	newItem.LevelString = tmpItem->LevelString;
	newItem.ForgedByDescription = tmpItem->ForgedByDescription;
	newItem.PrimaryColorSetIntensity = tmpItem->PrimaryColorSetIntensity;
	newItem.PrimaryColorSetPow = tmpItem->PrimaryColorSetPow;
	newItem.SecondaryColorSetIntensity = tmpItem->SecondaryColorSetIntensity;
	newItem.SecondaryColorSetPow = tmpItem->SecondaryColorSetPow;
	newItem.WeaponDrawScaleGlobalMultiplier = tmpItem->WeaponDrawScaleGlobalMultiplier;
	newItem.IconScaleMultiplier = tmpItem->IconScaleMultiplier;
	newItem.FullEquipmentSetStatMultiplier = tmpItem->FullEquipmentSetStatMultiplier;
	newItem.MythicalFullEquipmentSetStatMultiplier = tmpItem->MythicalFullEquipmentSetStatMultiplier;
	newItem.TranscendentFullEquipmentSetStatMultiplier = tmpItem->TranscendentFullEquipmentSetStatMultiplier;
	newItem.SupremeFullEquipmentSetStatMultiplier = tmpItem->SupremeFullEquipmentSetStatMultiplier;
	newItem.UltimateFullEquipmentSetStatMultiplier = tmpItem->UltimateFullEquipmentSetStatMultiplier;
	newItem.WeaponDamageDisplayValueScale = tmpItem->WeaponDamageDisplayValueScale;
	newItem.RatingPercentForLevelUpCostExponent = tmpItem->RatingPercentForLevelUpCostExponent;
	newItem.WeaponDamageBonusRandomizerMultiplier = tmpItem->WeaponDamageBonusRandomizerMultiplier;
	newItem.AdditionalWeaponDamageBonusRandomizerMultiplier = tmpItem->AdditionalWeaponDamageBonusRandomizerMultiplier;
	newItem.SellWorthMultiplierLevelBase = tmpItem->SellWorthMultiplierLevelBase;
	newItem.SellWorthMultiplierLevelMin = tmpItem->SellWorthMultiplierLevelMin;
	newItem.SellWorthMultiplierLevelMax = tmpItem->SellWorthMultiplierLevelMax;
	newItem.ExtraEquipmentColorMultiplier = tmpItem->ExtraEquipmentColorMultiplier;
	newItem.ExtraEquipmentColorMultiplierMaterialParamName = tmpItem->ExtraEquipmentColorMultiplierMaterialParamName;
	newItem.PreviewMinOffsetScale = tmpItem->PreviewMinOffsetScale;
	newItem.PreviewMinOffsetZ = tmpItem->PreviewMinOffsetZ;
	newItem.PreviewMaxOffsetScale = tmpItem->PreviewMaxOffsetScale;
	newItem.PreviewMaxOffsetZ = tmpItem->PreviewMaxOffsetZ;
	newItem.EquipmentIconMat = tmpItem->EquipmentIconMat;
	newItem.AdditionalDescription = tmpItem->AdditionalDescription;
	newItem.DamageDescription = tmpItem->DamageDescription;
	newItem.EquipmentStatNames = tmpItem->EquipmentStatNames;
	newItem.EquipmentStatDescriptions = tmpItem->EquipmentStatDescriptions;
	newItem.IconColorAddPrimary = tmpItem->IconColorAddPrimary;
	newItem.IconColorAddSecondary = tmpItem->IconColorAddSecondary;
	newItem.BaseForgerName = tmpItem->BaseForgerName;
	newItem.ComparisonSimilarRatingAllowance = tmpItem->ComparisonSimilarRatingAllowance;
	newItem.ComparisonRatingExponent = tmpItem->ComparisonRatingExponent;
	newItem.PlayerSpeedMultiplier = tmpItem->PlayerSpeedMultiplier;
	newItem.PlayerGravityMultiplier = tmpItem->PlayerGravityMultiplier;
	newItem.GivenEquipmentMessageColor = tmpItem->GivenEquipmentMessageColor;
	newItem.GivenEquipmentMessageString = tmpItem->GivenEquipmentMessageString;
	newItem.RequiredLevelString = tmpItem->RequiredLevelString;
	newItem.RequiredClassString = tmpItem->RequiredClassString;
	newItem.PreviewTranslationOffset = tmpItem->PreviewTranslationOffset;
	newItem.BackupUserForgerName = tmpItem->BackupUserForgerName;
	newItem.BackupUserEquipmentName = tmpItem->BackupUserEquipmentName;
	newItem.MyNonUpgradeLevelRating = tmpItem->MyNonUpgradeLevelRating;
	newItem.PlayerShopSellAmount = tmpItem->PlayerShopSellAmount;
	newItem.PlayerShopSellAmountHDI = tmpItem->PlayerShopSellAmountHDI;
	newItem.DebugPreTranscendentEquipmentRating = tmpItem->DebugPreTranscendentEquipmentRating;
	newItem.RandomBaseNames = tmpItem->RandomBaseNames;
	newItem.DamageReductionNames = tmpItem->DamageReductionNames;
	newItem.QualityDescriptorNames = tmpItem->QualityDescriptorNames;
	newItem.QualityDescriptorRealNames = tmpItem->QualityDescriptorRealNames;
	newItem.MinWeaponScale = tmpItem->MinWeaponScale;
	newItem.WeaponDamageMultiplier = tmpItem->WeaponDamageMultiplier;
	newItem.WeaponAltDamageMultiplier = tmpItem->WeaponAltDamageMultiplier;
	newItem.MaxLevelRangeDifficultyArray = tmpItem->MaxLevelRangeDifficultyArray;
	newItem.compareSets = tmpItem->compareSets;


	return newItem;


}

void pasteItem(UHeroEquipment* tmpItem, ItemCopy newItem)
{



	*tmpItem->StatModifiers = newItem.StatModifiers[0];
	*tmpItem->DamageReductions = newItem.DamageReductions[0];
	tmpItem->WeaponDamageBonus = newItem.WeaponDamageBonus;
	tmpItem->WeaponNumberOfProjectilesBonus = newItem.WeaponNumberOfProjectilesBonus;
	tmpItem->WeaponSpeedOfProjectilesBonus = newItem.WeaponSpeedOfProjectilesBonus;
	tmpItem->WeaponAdditionalDamageType = newItem.WeaponAdditionalDamageType;
	tmpItem->WeaponAdditionalDamageAmount = newItem.WeaponAdditionalDamageAmount;
	tmpItem->WeaponDrawScaleMultiplier = newItem.WeaponDrawScaleMultiplier;
	tmpItem->MaxRandomElementalDamageMultiplier = newItem.MaxRandomElementalDamageMultiplier;
	tmpItem->WeaponSwingSpeedMultiplier = newItem.WeaponSwingSpeedMultiplier;
	tmpItem->WeaponReloadSpeedBonusUse = newItem.WeaponReloadSpeedBonusUse;
	tmpItem->bIgnoreLevelRequirement = newItem.bIgnoreLevelRequirement;
	tmpItem->WeaponKnockbackBonusUse = newItem.WeaponKnockbackBonusUse;
	tmpItem->bCanBeUpgraded = newItem.bCanBeUpgraded;
	tmpItem->AllowRenamingAtMaxUpgrade = newItem.AllowRenamingAtMaxUpgrade;
	tmpItem->bForceUseParentTemplate = newItem.bForceUseParentTemplate;
	tmpItem->WeaponAltDamageBonusUse = newItem.WeaponAltDamageBonusUse;
	tmpItem->bDisableTheRandomization = newItem.bDisableTheRandomization;
	tmpItem->WeaponBlockingBonusUse = newItem.WeaponBlockingBonusUse;
	tmpItem->bDontCalculateLevelRequirement = newItem.bDontCalculateLevelRequirement;
	tmpItem->WeaponClipAmmoBonusUse = newItem.WeaponClipAmmoBonusUse;
	tmpItem->bDontUseLevelName = newItem.bDontUseLevelName;
	tmpItem->WeaponChargeSpeedBonusUse = newItem.WeaponChargeSpeedBonusUse;
	tmpItem->WeaponShotsPerSecondBonusUse = newItem.WeaponShotsPerSecondBonusUse;
	tmpItem->UseWeaponCoreStats = newItem.UseWeaponCoreStats;
	tmpItem->bIsLocked = newItem.bIsLocked;
	tmpItem->bWasAttached = newItem.bWasAttached;
	tmpItem->bIsShopEquipment = newItem.bIsShopEquipment;
	tmpItem->bIsSecondary = newItem.bIsSecondary;
	tmpItem->bIsNameOnlineVerified = newItem.bIsNameOnlineVerified;
	tmpItem->bIsForgerNameOnlineVerified = newItem.bIsForgerNameOnlineVerified;
	tmpItem->bWasAddedToDefenderStore = newItem.bWasAddedToDefenderStore;
	tmpItem->WeaponReloadSpeedBonus = newItem.WeaponReloadSpeedBonus;
	tmpItem->WeaponKnockbackBonus = newItem.WeaponKnockbackBonus;
	tmpItem->WeaponAltDamageBonus = newItem.WeaponAltDamageBonus;
	tmpItem->WeaponBlockingBonus = newItem.WeaponBlockingBonus;
	tmpItem->WeaponClipAmmoBonus = newItem.WeaponClipAmmoBonus;
	tmpItem->AdditionalAllowedUpgradeResistancePoints = newItem.AdditionalAllowedUpgradeResistancePoints;
	tmpItem->RequirementLevelOverride = newItem.RequirementLevelOverride;
	tmpItem->WeaponChargeSpeedBonus = newItem.WeaponChargeSpeedBonus;
	tmpItem->WeaponShotsPerSecondBonus = newItem.WeaponShotsPerSecondBonus;
	tmpItem->NameIndex_Base = newItem.NameIndex_Base;
	tmpItem->NameIndex_QualityDescriptor = newItem.NameIndex_QualityDescriptor;
	tmpItem->NameIndex_DamageReduction = newItem.NameIndex_DamageReduction;
	tmpItem->PrimaryColorSet = newItem.PrimaryColorSet;
	tmpItem->SecondaryColorSet = newItem.SecondaryColorSet;
	tmpItem->bCantBeDropped = newItem.bCantBeDropped;
	tmpItem->bCantBeSold = newItem.bCantBeSold;
	tmpItem->bAutoLockInItemBox = newItem.bAutoLockInItemBox;
	tmpItem->bDidOnetimeEffect = newItem.bDidOnetimeEffect;
	tmpItem->ManualLR = newItem.ManualLR;
	tmpItem->EquipmentType = newItem.EquipmentType;
	tmpItem->PrimaryColorOverride = newItem.PrimaryColorOverride;
	tmpItem->SecondaryColorOverride = newItem.SecondaryColorOverride;
	tmpItem->MaximumSellWorth = newItem.MaximumSellWorth;
	tmpItem->MinimumSellWorth = newItem.MinimumSellWorth;
	tmpItem->ShopMinimumSellWorth = newItem.ShopMinimumSellWorth;
	tmpItem->MaxEquipmentLevel = newItem.MaxEquipmentLevel;
	tmpItem->UserEquipmentName = newItem.UserEquipmentName;
	tmpItem->EquipmentDescription = newItem.EquipmentDescription;
	tmpItem->UserForgerName = newItem.UserForgerName;
	tmpItem->Level = newItem.Level;
	tmpItem->StoredMana = newItem.StoredMana;
	//tmpItem->UserID = newItem.UserID;
	tmpItem->MyRatingPercent = newItem.MyRatingPercent;
	tmpItem->MyRating = newItem.MyRating;
	//unique item id
	//tmpItem->EquipmentID1 = newItem.EquipmentID1;
	//tmpItem->EquipmentID2 = newItem.EquipmentID2;
	tmpItem->EquipmentName = newItem.EquipmentName;
	*tmpItem->StatModifierRandomizers = newItem.StatModifierRandomizers[0];
	tmpItem->bForceRandomDLCColor = newItem.bForceRandomDLCColor;
	tmpItem->bUseShotsPerSecondRandomizerMult = newItem.bUseShotsPerSecondRandomizerMult;
	tmpItem->bForceAllowDropping = newItem.bForceAllowDropping;
	tmpItem->bForceAllowSelling = newItem.bForceAllowSelling;
	tmpItem->bDoTranscendentLevelBoost = newItem.bDoTranscendentLevelBoost;
	tmpItem->bUseLevelRequirementOverrides = newItem.bUseLevelRequirementOverrides;
	tmpItem->bForceRandomizerWithMinEquipmentLevel = newItem.bForceRandomizerWithMinEquipmentLevel;
	tmpItem->bAllowSellingToExceedSoftManaCap = newItem.bAllowSellingToExceedSoftManaCap;
	tmpItem->bCanBeEquipped = newItem.bCanBeEquipped;
	tmpItem->bForceUseEquipmentDrawScale = newItem.bForceUseEquipmentDrawScale;
	tmpItem->bDistributeManaUponDroppedDestruction = newItem.bDistributeManaUponDroppedDestruction;
	tmpItem->bAllowDroppedDestruction = newItem.bAllowDroppedDestruction;
	tmpItem->bDontHideEquipmentAttachmentInFPV = newItem.bDontHideEquipmentAttachmentInFPV;
	tmpItem->bEncumberHero = newItem.bEncumberHero;
	tmpItem->bIconUseEquipmentRating = newItem.bIconUseEquipmentRating;
	tmpItem->bPlayerShopForceToMinimumSellWorth = newItem.bPlayerShopForceToMinimumSellWorth;
	tmpItem->bMaxEquipLevelUseAltCalc = newItem.bMaxEquipLevelUseAltCalc;
	tmpItem->AllowNameRandomization = newItem.AllowNameRandomization;
	tmpItem->OnlyRandomizeBaseName = newItem.OnlyRandomizeBaseName;
	tmpItem->bNoNegativeRandomizations = newItem.bNoNegativeRandomizations;
	tmpItem->UsesEquipmentAttachments = newItem.UsesEquipmentAttachments;
	tmpItem->UseColorSets = newItem.UseColorSets;
	tmpItem->RandomizeColorSets = newItem.RandomizeColorSets;
	tmpItem->bUsePreviewZOffsetting = newItem.bUsePreviewZOffsetting;
	tmpItem->bUseSelectionPreviewScale = newItem.bUseSelectionPreviewScale;
	tmpItem->bUsePawnWeaponDamageCallback = newItem.bUsePawnWeaponDamageCallback;
	tmpItem->bUsePawnDamageCallback = newItem.bUsePawnDamageCallback;
	tmpItem->bCantSave = newItem.bCantSave;
	tmpItem->bCantPutInItemBox = newItem.bCantPutInItemBox;
	tmpItem->bSetRandomizerMultipliers = newItem.bSetRandomizerMultipliers;
	tmpItem->bPlayerShopPurchasePending = newItem.bPlayerShopPurchasePending;
	tmpItem->bCanModifyParticleColour = newItem.bCanModifyParticleColour;
	tmpItem->bUseHighDigitManaTokenValue = newItem.bUseHighDigitManaTokenValue;
	tmpItem->RandomizerStatModifierGoNegativeThreshold = newItem.RandomizerStatModifierGoNegativeThreshold;
	tmpItem->RandomizerStatModifierGoNegativeMultiplier = newItem.RandomizerStatModifierGoNegativeMultiplier;
	tmpItem->RandomizerStatModifierGoNegativeChance = newItem.RandomizerStatModifierGoNegativeChance;

	tmpItem->RandomizerQualityMultiplier = newItem.RandomizerQualityMultiplier;
	tmpItem->LevelRequirementRatingOffset = newItem.LevelRequirementRatingOffset;
	tmpItem->MinElementalDamageIncreasePerLevel = newItem.MinElementalDamageIncreasePerLevel;
	tmpItem->HighLevelRequirementsRatingThreshold = newItem.HighLevelRequirementsRatingThreshold;
	tmpItem->MaximumSellWorthUpgradeDepreciationFactor = newItem.MaximumSellWorthUpgradeDepreciationFactor;
	tmpItem->TranscendentLevelBoostAmount = newItem.TranscendentLevelBoostAmount;
	tmpItem->TranscendentLevelBoostRandomizerPower = newItem.TranscendentLevelBoostRandomizerPower;
	tmpItem->HighResaleWorthPower = newItem.HighResaleWorthPower;
	tmpItem->SupremeLevelBoostAmount = newItem.SupremeLevelBoostAmount;
	tmpItem->SupremeLevelBoostRandomizerPower = newItem.SupremeLevelBoostRandomizerPower;
	tmpItem->UltimateLevelBoostAmount = newItem.UltimateLevelBoostAmount;
	tmpItem->UltimateLevelBoostRandomizerPower = newItem.UltimateLevelBoostRandomizerPower;
	tmpItem->LevelRequirementOverrides = newItem.LevelRequirementOverrides;
	tmpItem->WeaponDamageBonusRandomizer = newItem.WeaponDamageBonusRandomizer;
	tmpItem->OneTime_ExpBonus = newItem.OneTime_ExpBonus;
	tmpItem->HighLevelThreshold = newItem.HighLevelThreshold;
	tmpItem->MaxHeroStatValue = newItem.MaxHeroStatValue;
	tmpItem->TranscendentMaxHeroStatValue = newItem.TranscendentMaxHeroStatValue;
	tmpItem->SupremeMaxHeroStatValue = newItem.SupremeMaxHeroStatValue;
	tmpItem->MinTranscendentLevel = newItem.MinTranscendentLevel;
	tmpItem->MinSupremeLevel = newItem.MinSupremeLevel;
	tmpItem->UltimateMaxHeroStatValue = newItem.UltimateMaxHeroStatValue;
	tmpItem->UltimatePlusMaxHeroStatValue = newItem.UltimatePlusMaxHeroStatValue;
	tmpItem->MinUltimateLevel = newItem.MinUltimateLevel;
	tmpItem->DescriptionStringOriginalReplacements = newItem.DescriptionStringOriginalReplacements;
	tmpItem->DescriptionStringNewReplacements = newItem.DescriptionStringNewReplacements;
	tmpItem->WeaponAltDamageBonusRandomizer = newItem.WeaponAltDamageBonusRandomizer;
	*tmpItem->DamageReductionRandomizers = newItem.DamageReductionRandomizers[0];
	tmpItem->WeaponClipAmmoBonusRandomizer = newItem.WeaponClipAmmoBonusRandomizer;
	tmpItem->WeaponReloadSpeedBonusRandomizer = newItem.WeaponReloadSpeedBonusRandomizer;
	tmpItem->WeaponKnockbackBonusRandomizer = newItem.WeaponKnockbackBonusRandomizer;
	tmpItem->WeaponChargeSpeedBonusRandomizer = newItem.WeaponChargeSpeedBonusRandomizer;
	tmpItem->WeaponBlockingBonusRandomizer = newItem.WeaponBlockingBonusRandomizer;
	tmpItem->MaxEquipmentLevelRandomizer = newItem.MaxEquipmentLevelRandomizer;
	tmpItem->SellWorthLinearFactor = newItem.SellWorthLinearFactor;
	tmpItem->SellWorthExponentialFactor = newItem.SellWorthExponentialFactor;
	tmpItem->SellWorthMin = newItem.SellWorthMin;
	tmpItem->SellWorthMax = newItem.SellWorthMax;
	tmpItem->SellRatingExponent = newItem.SellRatingExponent;
	tmpItem->SellWorthEquipmentRatingBase = newItem.SellWorthEquipmentRatingBase;
	tmpItem->ElementalDamageMultiplier = newItem.ElementalDamageMultiplier;
	tmpItem->ShopSellWorthLinearFactor = newItem.ShopSellWorthLinearFactor;
	tmpItem->ShopSellWorthExponentialFactor = newItem.ShopSellWorthExponentialFactor;
	tmpItem->ShopSellWorthMin = newItem.ShopSellWorthMin;
	tmpItem->ShopSellWorthMax = newItem.ShopSellWorthMax;
	tmpItem->ShopSellRatingExponent = newItem.ShopSellRatingExponent;
	tmpItem->ShopSellWorthEquipmentRatingBase = newItem.ShopSellWorthEquipmentRatingBase;
	tmpItem->ShopSellWorthWeaponMultiplier = newItem.ShopSellWorthWeaponMultiplier;
	tmpItem->ShopSellWorthWeaponExponentialFactorMult = newItem.ShopSellWorthWeaponExponentialFactorMult;
	tmpItem->AltDamageRandomizerMult = newItem.AltDamageRandomizerMult;
	tmpItem->MaxShopSellWorth = newItem.MaxShopSellWorth;
	tmpItem->ShopSellWorthMinWeaponMultiplier = newItem.ShopSellWorthMinWeaponMultiplier;
	tmpItem->ShopSellWorthMaxWeaponMultiplier = newItem.ShopSellWorthMaxWeaponMultiplier;
	tmpItem->ShopSellWorthRatingWeaponMultiplier = newItem.ShopSellWorthRatingWeaponMultiplier;
	tmpItem->ManaCostPerLevelMaxQualityMultiplierAdditional = newItem.ManaCostPerLevelMaxQualityMultiplierAdditional;
	tmpItem->HighLevelManaCostPerLevelMaxQualityMultiplierAdditional = newItem.HighLevelManaCostPerLevelMaxQualityMultiplierAdditional;
	tmpItem->ManaCostPerLevelExponentialFactorAdditional = newItem.ManaCostPerLevelExponentialFactorAdditional;
	tmpItem->HighLevelManaCostPerLevelExponentialFactorAdditional = newItem.HighLevelManaCostPerLevelExponentialFactorAdditional;
	tmpItem->WeaponDrawScaleRandomizerExtraMultiplier = newItem.WeaponDrawScaleRandomizerExtraMultiplier;
	tmpItem->EquipLevelRequirements = newItem.EquipLevelRequirements;
	tmpItem->ElementalDamageIncreasePerLevelMultiplier = newItem.ElementalDamageIncreasePerLevelMultiplier;
	tmpItem->DamageIncreasePerLevelMultiplier = newItem.DamageIncreasePerLevelMultiplier;
	tmpItem->UltimateDamageIncreasePerLevelMultiplier = newItem.UltimateDamageIncreasePerLevelMultiplier;
	tmpItem->MaxElementalDamageIncreasePerLevel = newItem.MaxElementalDamageIncreasePerLevel;
	tmpItem->MaxDamageIncreasePerLevel = newItem.MaxDamageIncreasePerLevel;
	tmpItem->UltimateMaxDamageIncreasePerLevel = newItem.UltimateMaxDamageIncreasePerLevel;
	tmpItem->SelectionPreviewScaleMultiplier = newItem.SelectionPreviewScaleMultiplier;
	tmpItem->AltDamageIncreasePerLevelMultiplier = newItem.AltDamageIncreasePerLevelMultiplier;
	tmpItem->AltMaxDamageIncreasePerLevel = newItem.AltMaxDamageIncreasePerLevel;
	tmpItem->PrimaryColorOverrideMultiplier = newItem.PrimaryColorOverrideMultiplier;
	tmpItem->SecondaryColorOverrideMultiplier = newItem.SecondaryColorOverrideMultiplier;
	tmpItem->GlobalSelectionPreviewScaleMultiplier = newItem.GlobalSelectionPreviewScaleMultiplier;
	tmpItem->ShopSellWorthMaxExponentAbsolute = newItem.ShopSellWorthMaxExponentAbsolute;
	tmpItem->EquipmentRatingPercentBase = newItem.EquipmentRatingPercentBase;
	tmpItem->WeaponEquipmentRatingPercentBase = newItem.WeaponEquipmentRatingPercentBase;
	tmpItem->QualityShopCostMultipliers = newItem.QualityShopCostMultipliers;
	tmpItem->QualityShopCostCaps = newItem.QualityShopCostCaps;
	tmpItem->WeaponKnockbackMax = newItem.WeaponKnockbackMax;
	tmpItem->MaxNonTranscendentStatRollValue = newItem.MaxNonTranscendentStatRollValue;
	tmpItem->MinDamageBonus = newItem.MinDamageBonus;
	tmpItem->MinEquipmentLevels = newItem.MinEquipmentLevels;
	tmpItem->LevelRequirementOffset = newItem.LevelRequirementOffset;
	tmpItem->WeaponShotsPerSecondBonusRandomizer = newItem.WeaponShotsPerSecondBonusRandomizer;
	tmpItem->WeaponNumberOfProjectilesQualityBaseline = newItem.WeaponNumberOfProjectilesQualityBaseline;
	tmpItem->DamageReductionUpgradeInterval = newItem.DamageReductionUpgradeInterval;
	tmpItem->WeaponNumberOfProjectilesBonusRandomizer = newItem.WeaponNumberOfProjectilesBonusRandomizer;
	tmpItem->WeaponSpeedOfProjectilesBonusRandomizer = newItem.WeaponSpeedOfProjectilesBonusRandomizer;
	tmpItem->WeaponAdditionalDamageAmountRandomizer = newItem.WeaponAdditionalDamageAmountRandomizer;
	tmpItem->WeaponDrawScaleMultiplierRandomizer = newItem.WeaponDrawScaleMultiplierRandomizer;
	//tmpItem->weaponType = newItem.weaponType;
	//tmpItem->EquipmentSetID = newItem.EquipmentSetID;
	tmpItem->AccessoryRequirements = newItem.AccessoryRequirements;
	tmpItem->ManaCostPerLevelLinearFactor = newItem.ManaCostPerLevelLinearFactor;
	tmpItem->IconColorMultPrimary = newItem.IconColorMultPrimary;
	tmpItem->IconColorMultSecondary = newItem.IconColorMultSecondary;
	tmpItem->ManaCostPerLevelExponentialFactor = newItem.ManaCostPerLevelExponentialFactor;
	tmpItem->ManaCostPerLevelMinQualityMultiplier = newItem.ManaCostPerLevelMinQualityMultiplier;
	tmpItem->ManaCostPerLevelMaxQualityMultiplier = newItem.ManaCostPerLevelMaxQualityMultiplier;
	tmpItem->RespawnTimeMultiplier = newItem.RespawnTimeMultiplier;
	tmpItem->TotalRandomizerMultiplier = newItem.TotalRandomizerMultiplier;
	tmpItem->EquipmentAttachmentInfos = newItem.EquipmentAttachmentInfos;
	tmpItem->LevelString = newItem.LevelString;
	tmpItem->ForgedByDescription = newItem.ForgedByDescription;
	tmpItem->PrimaryColorSetIntensity = newItem.PrimaryColorSetIntensity;
	tmpItem->PrimaryColorSetPow = newItem.PrimaryColorSetPow;
	tmpItem->SecondaryColorSetIntensity = newItem.SecondaryColorSetIntensity;
	tmpItem->SecondaryColorSetPow = newItem.SecondaryColorSetPow;
	tmpItem->WeaponDrawScaleGlobalMultiplier = newItem.WeaponDrawScaleGlobalMultiplier;
	tmpItem->IconScaleMultiplier = newItem.IconScaleMultiplier;
	tmpItem->FullEquipmentSetStatMultiplier = newItem.FullEquipmentSetStatMultiplier;
	tmpItem->MythicalFullEquipmentSetStatMultiplier = newItem.MythicalFullEquipmentSetStatMultiplier;
	tmpItem->TranscendentFullEquipmentSetStatMultiplier = newItem.TranscendentFullEquipmentSetStatMultiplier;
	tmpItem->SupremeFullEquipmentSetStatMultiplier = newItem.SupremeFullEquipmentSetStatMultiplier;
	tmpItem->UltimateFullEquipmentSetStatMultiplier = newItem.UltimateFullEquipmentSetStatMultiplier;
	tmpItem->WeaponDamageDisplayValueScale = newItem.WeaponDamageDisplayValueScale;
	tmpItem->RatingPercentForLevelUpCostExponent = newItem.RatingPercentForLevelUpCostExponent;
	tmpItem->WeaponDamageBonusRandomizerMultiplier = newItem.WeaponDamageBonusRandomizerMultiplier;
	tmpItem->AdditionalWeaponDamageBonusRandomizerMultiplier = newItem.AdditionalWeaponDamageBonusRandomizerMultiplier;
	tmpItem->SellWorthMultiplierLevelBase = newItem.SellWorthMultiplierLevelBase;
	tmpItem->SellWorthMultiplierLevelMin = newItem.SellWorthMultiplierLevelMin;
	tmpItem->SellWorthMultiplierLevelMax = newItem.SellWorthMultiplierLevelMax;
	tmpItem->ExtraEquipmentColorMultiplier = newItem.ExtraEquipmentColorMultiplier;
	tmpItem->ExtraEquipmentColorMultiplierMaterialParamName = newItem.ExtraEquipmentColorMultiplierMaterialParamName;
	tmpItem->PreviewMinOffsetScale = newItem.PreviewMinOffsetScale;
	tmpItem->PreviewMinOffsetZ = newItem.PreviewMinOffsetZ;
	tmpItem->PreviewMaxOffsetScale = newItem.PreviewMaxOffsetScale;
	tmpItem->PreviewMaxOffsetZ = newItem.PreviewMaxOffsetZ;
	tmpItem->EquipmentIconMat = newItem.EquipmentIconMat;
	tmpItem->AdditionalDescription = newItem.AdditionalDescription;
	tmpItem->DamageDescription = newItem.DamageDescription;
	tmpItem->EquipmentStatNames = newItem.EquipmentStatNames;
	tmpItem->EquipmentStatDescriptions = newItem.EquipmentStatDescriptions;
	tmpItem->IconColorAddPrimary = newItem.IconColorAddPrimary;
	tmpItem->IconColorAddSecondary = newItem.IconColorAddSecondary;
	tmpItem->BaseForgerName = newItem.BaseForgerName;
	tmpItem->ComparisonSimilarRatingAllowance = newItem.ComparisonSimilarRatingAllowance;
	tmpItem->ComparisonRatingExponent = newItem.ComparisonRatingExponent;
	tmpItem->PlayerSpeedMultiplier = newItem.PlayerSpeedMultiplier;
	tmpItem->PlayerGravityMultiplier = newItem.PlayerGravityMultiplier;
	tmpItem->GivenEquipmentMessageColor = newItem.GivenEquipmentMessageColor;
	tmpItem->GivenEquipmentMessageString = newItem.GivenEquipmentMessageString;
	tmpItem->RequiredLevelString = newItem.RequiredLevelString;
	tmpItem->RequiredClassString = newItem.RequiredClassString;
	tmpItem->PreviewTranslationOffset = newItem.PreviewTranslationOffset;
	tmpItem->BackupUserForgerName = newItem.BackupUserForgerName;
	tmpItem->BackupUserEquipmentName = newItem.BackupUserEquipmentName;
	tmpItem->MyNonUpgradeLevelRating = newItem.MyNonUpgradeLevelRating;
	tmpItem->PlayerShopSellAmount = newItem.PlayerShopSellAmount;
	tmpItem->PlayerShopSellAmountHDI = newItem.PlayerShopSellAmountHDI;
	tmpItem->DebugPreTranscendentEquipmentRating = newItem.DebugPreTranscendentEquipmentRating;
	tmpItem->RandomBaseNames = newItem.RandomBaseNames;
	tmpItem->DamageReductionNames = newItem.DamageReductionNames;
	tmpItem->QualityDescriptorNames = newItem.QualityDescriptorNames;
	tmpItem->QualityDescriptorRealNames = newItem.QualityDescriptorRealNames;
	tmpItem->MinWeaponScale = newItem.MinWeaponScale;
	tmpItem->WeaponDamageMultiplier = newItem.WeaponDamageMultiplier;
	tmpItem->WeaponAltDamageMultiplier = newItem.WeaponAltDamageMultiplier;
	tmpItem->MaxLevelRangeDifficultyArray = newItem.MaxLevelRangeDifficultyArray;
	tmpItem->compareSets = newItem.compareSets;





}

ItemCopy tmpTemplate;


void* d3d9Device[119];
LPDIRECT3DDEVICE9 d3Device;

LRESULT __stdcall WndProc(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam) {

	if (ShowMenu)
		if (ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lparam))
			return TRUE;


	return CallWindowProc(oWndProc, hwnd, uMsg, wParam, lparam);
}

UObject* GetInstanceOf(UClass* Class)
{
	if (!UObject::GObjObjects())
		return 0;

	static UObject* ObjectInstance = NULL;

	for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
	{

		UObject* CheckObject = UObject::GObjObjects()->Data[i];
		if (CheckObject && CheckObject->IsA(Class))
		{
			if (!strstr(CheckObject->GetFullName(), "Default"))
			{
				ObjectInstance = CheckObject;

			}
		}
	}
	return ObjectInstance;
};
bool GetDevicePointer(void** pTable, size_t size) {

	if (!pTable)
		return false;

	IDirect3D9* pD3D = Direct3DCreate9(D3D_SDK_VERSION);

	if (!pD3D)
		return false;

	IDirect3DDevice9* pDummyDevice = NULL;

	// options to create dummy device
	D3DPRESENT_PARAMETERS d3dpp = {};
	d3dpp.Windowed = true;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;


	d3dpp.hDeviceWindow = gameHWND;

	HRESULT dummyDeviceCreated = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

	if (dummyDeviceCreated != S_OK)
	{
		// may fail in windowed fullscreen mode, trying again with windowed mode
		d3dpp.Windowed = !d3dpp.Windowed;

		dummyDeviceCreated = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

		if (dummyDeviceCreated != S_OK)
		{
			pD3D->Release();
			return false;
		}
	}

	memcpy(pTable, *reinterpret_cast<void***>(pDummyDevice), size);

	pDummyDevice->Release();
	pD3D->Release();
	return true;



}
void MaxWeapon(UHeroEquipment* _Weap)
{
	_Weap->NameIndex_QualityDescriptor = 19;


	_Weap->Level = 69420;
	_Weap->MaxEquipmentLevel = 69420;
	_Weap->MyRating = 9000000.0f;
	_Weap->MyRatingPercent = 9000000.0f;


	_Weap->StatModifiers[eHHealth] = 9000;
	_Weap->StatModifiers[eHSpeed] = 9000;
	_Weap->StatModifiers[eHDamage] = 9000;
	_Weap->StatModifiers[eHCast] = 9000;
	_Weap->StatModifiers[Ability1] = 9000;
	_Weap->StatModifiers[Ability2] = 9000;
	_Weap->StatModifiers[eTHealth] = 9000;
	_Weap->StatModifiers[eTSpeed] = 9000;
	_Weap->StatModifiers[eTDamage] = 9000;
	_Weap->StatModifiers[eTRange] = 9000;
	(_Weap->DamageReductions[0].PercentageReduction) = 9000;
	(_Weap->DamageReductions[1].PercentageReduction) = 9000;
	(_Weap->DamageReductions[2].PercentageReduction) = 9000;
	(_Weap->DamageReductions[3].PercentageReduction) = 9000;
	(_Weap->WeaponDamageBonus) = 0x1fffffff;
	(_Weap->WeaponNumberOfProjectilesBonus) = 20;
	(_Weap->WeaponSpeedOfProjectilesBonus) = 9000;
	(_Weap->WeaponAdditionalDamageAmount) = 9000;
	_Weap->WeaponDrawScaleMultiplier = 1.0f;
	//_Weap->WeaponDrawScaleGlobalMultiplier = 1.0f;


	_Weap->MaxRandomElementalDamageMultiplier = 9000;
	_Weap->WeaponSwingSpeedMultiplier = 3;
	(_Weap->WeaponReloadSpeedBonus) = 9000;
	(_Weap->WeaponKnockbackBonus) = 9000;
	(_Weap->WeaponAltDamageBonus) = 9000;
	(_Weap->WeaponBlockingBonus) = 9000;
	(_Weap->WeaponClipAmmoBonus) = 9000;
	(_Weap->AdditionalAllowedUpgradeResistancePoints) = 9000;
	(_Weap->RequirementLevelOverride) = 9000;
	(_Weap->WeaponChargeSpeedBonus) = 9000;
	(_Weap->WeaponShotsPerSecondBonus) = 2;




	_Weap->PrimaryColorOverride.R = (rand() % 180) - 90;
	_Weap->PrimaryColorOverride.G = (rand() % 180) - 90;
	_Weap->PrimaryColorOverride.B = (rand() % 180) - 90;
	_Weap->SecondaryColorOverride.R = (rand() % 180) - 90;
	_Weap->SecondaryColorOverride.G = (rand() % 180) - 90;
	_Weap->SecondaryColorOverride.B = (rand() % 180) - 90;




}
bool CheckVarsForNull()
{
	//controller = gameEngine->GamePlayers.Data[0]->Actor;
	if (!gameEngine)
	{
		return FALSE;
	}
	if (!gameEngine->GamePlayers.Data[0])
	{
		return FALSE;
	}
	if (!gameEngine->GamePlayers.Data[0]->Actor)
	{
		return FALSE;
	}
	controller = gameEngine->GamePlayers.Data[0]->Actor;


	if (!controller)
	{
		return FALSE;
	}
	if (!controller->Pawn)
	{
		GEP = nullptr;
		return FALSE;
	}
	if (!controller->Pawn->WorldInfo)
	{
		GEP = nullptr;
		return FALSE;
	}
	if (!controller->Pawn->WorldInfo->PawnList)
	{
		GEP = nullptr;
		return FALSE;
	}


	if (!heroManager)
	{
		GEP = nullptr;
		return FALSE;
	}


	return TRUE;
}
ADunDefPawn* GetFirstPawnInList()
{
	return (ADunDefPawn*)controller->Pawn->WorldInfo->PawnList;
}
TArray<ULocalPlayer*>* GetPlayerControllers()
{
	if (!CheckVarsForNull())
		return nullptr;
	return &(gameEngine->GamePlayers);
}
void FStringTostring(std::string& _stringChanging, FString _string)
{
	if (!_string.Data)
	{
		return;
	}
	std::wstring tmpWString(_string.Data);
	std::string tmp(tmpWString.begin(), tmpWString.end());
	_stringChanging = tmp.c_str();
}
void DrawTextCentered(UCanvas* canvas, FString _Text, float _x, float _y, FColor _Color)
{
	FVector2D tmpCanvasPos = { canvas->CurX, canvas->CurY };
	FColor tmpCanvasColor = canvas->DrawColor;


	float MaxX = 0;
	float MaxY = 0;
	canvas->TextSize(_Text, &MaxX, &MaxY);
	_x = _x - (MaxX / 2);
	_y = _y - (MaxY / 2);

	canvas->SetPos(_x, _y);
	canvas->DrawColor = _Color;


	canvas->DrawTextA(_Text, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);


	canvas->DrawColor = tmpCanvasColor;
	canvas->SetPos(tmpCanvasPos.X, tmpCanvasPos.Y);

}
void DrawTexta(UCanvas* canvas, FString _Text, float _x, float _y, FColor _Color)
{
	FVector2D tmpCanvasPos = { canvas->CurX, canvas->CurY };
	FColor tmpCanvasColor = canvas->DrawColor;

	canvas->SetPos(_x, _y);
	canvas->DrawColor = _Color;

	canvas->DrawTextA(_Text, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);

	canvas->DrawColor = tmpCanvasColor;
	canvas->SetPos(tmpCanvasPos.X, tmpCanvasPos.Y);

}
bool CheckItemQuality(UHeroEquipment* tempweap, int* ItemFilterStats)
{
	if (!CheckVarsForNull())
		return FALSE;
	if (tempweap)
	{
		if (ItemFilterStats[eHHealth] > 1)
			if (tempweap->StatModifiers[eHHealth] <= ItemFilterStats[eHHealth])
				return FALSE;
		if (ItemFilterStats[eHSpeed] > 1)
			if (tempweap->StatModifiers[eHSpeed] <= ItemFilterStats[eHSpeed])
				return FALSE;
		if (ItemFilterStats[eHDamage] > 1)
			if (tempweap->StatModifiers[eHDamage] <= ItemFilterStats[eHDamage])
				return FALSE;
		if (ItemFilterStats[eHCast] > 1)
			if (tempweap->StatModifiers[eHCast] <= ItemFilterStats[eHCast])
				return FALSE;
		if (ItemFilterStats[Ability1] > 1)
			if (tempweap->StatModifiers[Ability1] <= ItemFilterStats[Ability1])
				return FALSE;
		if (ItemFilterStats[Ability2] > 1)
			if (tempweap->StatModifiers[Ability2] <= ItemFilterStats[Ability2])
				return FALSE;
		if (ItemFilterStats[eTHealth] > 1)
			if (tempweap->StatModifiers[eTHealth] <= ItemFilterStats[eTHealth])
				return FALSE;
		if (ItemFilterStats[eTSpeed] > 1)
			if (tempweap->StatModifiers[eTSpeed] <= ItemFilterStats[eTSpeed])
				return FALSE;
		if (ItemFilterStats[eTDamage] > 1)
			if (tempweap->StatModifiers[eTDamage] <= ItemFilterStats[eTDamage])
				return FALSE;
		if (ItemFilterStats[eTRange] > 1)
			if (tempweap->StatModifiers[eTRange] <= ItemFilterStats[eTRange])
				return FALSE;


	}
	return TRUE;



}
//ent list
//delete this
bool MaxItemBox(TArray< UHeroEquipment* > tmpItemEquipment)
{
	static int LastIValue = 0;
	static int FilterAmmount = 500;
	static bool Done = 0;


	int NewTotal = LastIValue + FilterAmmount;
	if (NewTotal > tmpItemEquipment.Count)
		NewTotal = tmpItemEquipment.Count;

	if (LastIValue >= tmpItemEquipment.Count)
		LastIValue = 0;


	for (int i = LastIValue; i < NewTotal; i++)
	{
		MaxWeapon(tmpItemEquipment.Data[i]);
	}
	LastIValue += FilterAmmount;

	if (LastIValue < tmpItemEquipment.Count)
		return false;
	return true;
}
FVector TargetLocationOnScreen;
wchar_t buffer[255];
void Cheats()
{

	ADunDefPlayerController* tmpPlayerController = ((ADunDefPlayerController*)controller);

	if (!tmpPlayerController)
		return;

	if (bNoCD)
	{
		for (int i = 0; i < tmpPlayerController->PlayerAbilities.Count; i++)
		{
			tmpPlayerController->PlayerAbilities.Data[i]->ActivationInterval = 0;
			tmpPlayerController->PlayerAbilities.Data[i]->MinimumReactivationInterval = 0;
			tmpPlayerController->PlayerAbilities.Data[i]->LobbyActivationInterval = 0;
			tmpPlayerController->PlayerAbilities.Data[i]->bForceAllowInBuildPhase = 1;
		}
	}


	if (bUnlimManaBuild)
	{
		tmpPlayerController->ManaPower = 9000;
	}
	if (bUnlimManaShop)
	{


		FHighDigitInt tmp = { 1, 1, 1, 1 };
		//tmpPlayerController->ClientAddManaToBankHDI(tmp, 1);
		tmpPlayerController->SetBankedMana(tmp, 0, 1);
	}
}
bool FilterItemBoxByStats(TArray< UHeroEquipment* > tmpItemEquipment, bool bLock, bool Below, int* FilterArray)
{
	static int LastIValue = 0;
	static int FilterAmmount = 500;



	int NewTotal = LastIValue + FilterAmmount;
	if (NewTotal > tmpItemEquipment.Count)
		NewTotal = tmpItemEquipment.Count;

	if (LastIValue >= tmpItemEquipment.Count)
		LastIValue = 0;


	if (Below)
		for (int i = LastIValue; i < NewTotal; i++)
		{

			if (!CheckItemQuality(tmpItemEquipment.Data[i], FilterArray))
			{
				tmpItemEquipment.Data[i]->bIsLocked = bLock;
			}


		}
	else
		for (int i = LastIValue; i < NewTotal; i++)
		{

			if (CheckItemQuality(tmpItemEquipment.Data[i], FilterArray))
			{
				tmpItemEquipment.Data[i]->bIsLocked = bLock;
			}


		}




	LastIValue += FilterAmmount;

	if (LastIValue < tmpItemEquipment.Count)
		return false;
	return true;

}
bool FilterItemBox(TArray< UHeroEquipment* > tmpItemEquipment, int itemFilterQuality, int bLock, int Below)
{

	static int LastIValue = 0;
	static int FilterAmmount = 500;
	static bool Done = 0;


	int NewTotal = LastIValue + FilterAmmount;
	if (NewTotal > tmpItemEquipment.Count)
		NewTotal = tmpItemEquipment.Count;

	if (LastIValue >= tmpItemEquipment.Count)
		LastIValue = 0;






	if (Below)
	{
		for (int i = LastIValue; i < NewTotal; i++)
		{
			if (tmpItemEquipment.Data[i]->GetLevelRequirement() <= itemFilterQuality)
			{
				tmpItemEquipment.Data[i]->bIsLocked = bLock;
			}

		}
	}
	else
	{
		for (int i = LastIValue; i < NewTotal; i++)
		{
			if (tmpItemEquipment.Data[i]->GetLevelRequirement() >= itemFilterQuality)
			{
				tmpItemEquipment.Data[i]->bIsLocked = bLock;
			}

		}
	}






	LastIValue += FilterAmmount;

	if (LastIValue < tmpItemEquipment.Count)
		return false;
	return true;
}
void GetPoints(UCanvas* canvas, ADunDefPawn* Target, FVector* arrayin) {


	FBoxSphereBounds PlayerBounds = Target->Mesh->Bounds;
	FVector Top = {
		PlayerBounds.Origin.X,
		PlayerBounds.Origin.Y,
		PlayerBounds.Origin.Z + PlayerBounds.BoxExtent.Z };
	FVector Left = {
		PlayerBounds.Origin.X,
		PlayerBounds.Origin.Y + PlayerBounds.BoxExtent.Y,
		PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
	FVector Right = {
		PlayerBounds.Origin.X,
		PlayerBounds.Origin.Y - PlayerBounds.BoxExtent.Y,
		PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
	FVector Front = {
		PlayerBounds.Origin.X + PlayerBounds.BoxExtent.X,
		PlayerBounds.Origin.Y,
		PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
	FVector Back = {
		PlayerBounds.Origin.X - PlayerBounds.BoxExtent.X,
		PlayerBounds.Origin.Y,
		PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };


	FVector screencordTop = canvas->ProjectNoClip(Top);
	FVector screencordLeft = canvas->ProjectNoClip(Left);
	FVector screencordRight = canvas->ProjectNoClip(Right);
	FVector screencordFront = canvas->ProjectNoClip(Front);
	FVector screencordBack = canvas->ProjectNoClip(Back);



	FVector screenarray[] = {
		screencordTop,
		screencordLeft,
		screencordRight,
		screencordFront,
		screencordBack };


	FVector TopLeft = screencordTop;
	FVector BottomRight = screencordRight;




	for (int i = 0; i < 5; i++)
	{
		if (TopLeft.X > screenarray[i].X)
			TopLeft.X = screenarray[i].X;

		if (BottomRight.X < screenarray[i].X)
			BottomRight.X = screenarray[i].X;

		if (TopLeft.Y > screenarray[i].Y)
			TopLeft.Y = screenarray[i].Y;

		if (BottomRight.Y < screenarray[i].Y)
			BottomRight.Y = screenarray[i].Y;

	}


	BottomRight.X -= TopLeft.X;
	BottomRight.Y -= TopLeft.Y;

	//canvas->SetPos(TopLeft.X, TopLeft.Y);
	//canvas->DrawBox(BottomRight.X, BottomRight.Y);


	FVector ret[] = { TopLeft, BottomRight };

	arrayin[0] = ret[0];
	arrayin[1] = ret[1];

}
void DrawEspBox(UCanvas* canvas, ADunDefPawn* Target, FVector* arrayin, FColor color)
{



	FVector2D	tmpPos = { canvas->CurX, canvas->CurY };
	FColor		tmpColor = canvas->DrawColor;

	canvas->SetPos(arrayin[0].X, arrayin[0].Y);
	canvas->DrawColor = color;


	canvas->DrawBox(arrayin[1].X, arrayin[1].Y);


	canvas->SetPos(tmpPos.X, tmpPos.Y);
	canvas->DrawColor = tmpColor;

}
void ESPTarget(UCanvas* _canvas, ADunDefPawn* _Target)
{


	if (!bEspEnabled)
		return;

	FVector TargetLocationOnScreen = _canvas->ProjectNoClip(_Target->Location);

	if (TargetLocationOnScreen.Z > 1.0f)
		return;



	if (bDrawRoute)
		controller->myHUD->DrawRoute(_Target);



	FVector TargetBoundingBox[2];
	GetPoints(_canvas, _Target, TargetBoundingBox);

	if (bEspLines)
	{
		if (controller->myHUD)
			controller->myHUD->Draw3DLine(controller->Pawn->Location, _Target->Location, fRed);

	}

	if (_Target->bPostRenderIfNotVisible)
		return;



	if (bEspBox)
	{
		DrawEspBox(_canvas, _Target, TargetBoundingBox, fRed);
	}
	if (bEspHealth)
	{

		swprintf_s(buffer, L"%d", _Target->Health);
		DrawTexta(_canvas, FString(buffer), TargetBoundingBox[0].X, TargetBoundingBox[0].Y - 20.0f, fGreen);
	}
}

ImVec2 ButtonProperty = { 100, 25 };
void ShowCombo(TArray< FEG_StatMatchingString > names, FString _CurrentSelected, unsigned char& _changeChar, std::string comboName)
{

	std::string CurrentSelected;
	FStringTostring(CurrentSelected, _CurrentSelected);


	static int CurrentSelectedIndex = 0;
	if (ImGui::BeginCombo(comboName.c_str(), CurrentSelected.c_str()))
	{
		for (int i = 0; i < names.Count; i++)
		{


			if (!(names.Data[i].StringValue.Data))
				continue;
			std::string ComboName;
			FStringTostring(ComboName, names.Data[i].StringValue);



			const bool is_selected = (CurrentSelectedIndex == i);
			if (ImGui::Selectable(ComboName.c_str(), is_selected))
			{
				CurrentSelectedIndex = i;
				_changeChar = i;
			}
			// Set the initial focus when opening the combo (scrolling + keyboard navigation focus)
			if (is_selected)
				ImGui::SetItemDefaultFocus();





		}
		ImGui::EndCombo();
	}

}





void DEBUG_IMGUI_TEST()
{

}



void ImGuiWeapon(UHeroEquipment* _Weap)
{
	//_Weap->ObjectArchetype





	std::string WeapName;

	ImGui::Text("ItemAddr           :  %p", _Weap);
	if (_Weap->EquipmentName.Data)
	{
		FStringTostring(WeapName, _Weap->EquipmentName.Data);
		ImGui::Text("EquipmentName     :  %s", WeapName.c_str());
	}
	if (_Weap->UserEquipmentName.Data)
	{
		FStringTostring(WeapName, _Weap->UserEquipmentName.Data);
		ImGui::Text("UserEquipmentName :  %s", WeapName.c_str());
	}



	if (ImGui::TreeNode("___Main___"))
	{



		ImGui::Text("___Name___");


		ImGui::PushItemWidth(ImGui::GetWindowWidth() * .50f);
		if (_Weap->RandomBaseNames.Data)
			ShowCombo(_Weap->RandomBaseNames,
				_Weap->RandomBaseNames.Data[_Weap->NameIndex_Base].StringValue,
				_Weap->NameIndex_Base,
				"Base");
		else
			ImGui::Text("No RandomBaseNames found");


		if (_Weap->DamageReductionNames.Data)
			ShowCombo(_Weap->DamageReductionNames,
				_Weap->DamageReductionNames.Data[_Weap->NameIndex_DamageReduction].StringValue,
				_Weap->NameIndex_DamageReduction, "DamageReduction");
		else
			ImGui::Text("No DamageReductionNames found");

		if (_Weap->QualityDescriptorRealNames.Data)
			ShowCombo(_Weap->QualityDescriptorRealNames, _Weap->QualityDescriptorRealNames.Data[_Weap->NameIndex_QualityDescriptor].StringValue, _Weap->NameIndex_QualityDescriptor, "Quality");
		else
			ImGui::Text("No QualityDescriptorRealNames found");

		ImGui::InputFloat("WeaponDrawScaleMultiplier", &_Weap->WeaponDrawScaleMultiplier, 1, 100, "%.3f");

		ImGui::PopItemWidth();

		ImGui::Text("___Color___");
		ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
		ImGui::InputFloat("R1", &_Weap->PrimaryColorOverride.R, 1, 100, "%.3f"); ImGui::SameLine();
		ImGui::InputFloat("G1", &_Weap->PrimaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
		ImGui::InputFloat("B1", &_Weap->PrimaryColorOverride.B, 1, 100, "%.3f");

		ImGui::InputFloat("R2", &_Weap->SecondaryColorOverride.R, 1, 100, "%.3f"); ImGui::SameLine();
		ImGui::InputFloat("G2", &_Weap->SecondaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
		ImGui::InputFloat("B2", &_Weap->SecondaryColorOverride.B, 1, 100, "%.3f");
		ImGui::PopItemWidth();

		ImGui::TreePop();
	}


	if (ImGui::TreeNode("___Stats___"))
	{
		ImGui::InputInt("HHealth   ", &_Weap->StatModifiers[eHHealth]);
		ImGui::InputInt("HSpeed    ", &_Weap->StatModifiers[eHSpeed]);
		ImGui::InputInt("HDamage   ", &_Weap->StatModifiers[eHDamage]);
		ImGui::InputInt("HCast     ", &_Weap->StatModifiers[eHCast]);
		ImGui::InputInt("Ability1  ", &_Weap->StatModifiers[Ability1]);
		ImGui::InputInt("Ability2  ", &_Weap->StatModifiers[Ability2]);
		ImGui::InputInt("THealth   ", &_Weap->StatModifiers[eTHealth]);
		ImGui::InputInt("TSpeed    ", &_Weap->StatModifiers[eTSpeed]);
		ImGui::InputInt("TDamage   ", &_Weap->StatModifiers[eTDamage]);
		ImGui::InputInt("TRange    ", &_Weap->StatModifiers[eTRange]);
		ImGui::TreePop();
	}


	if (ImGui::TreeNode("___Other___"))
	{

		ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
		ImGui::InputInt("MaxEquipmentLevel    ", &(_Weap->MaxEquipmentLevel));
		ImGui::InputInt("DamageReductions1    ", &(_Weap->DamageReductions[0].PercentageReduction));
		ImGui::InputInt("DamageReductions2    ", &(_Weap->DamageReductions[1].PercentageReduction));
		ImGui::InputInt("DamageReductions3    ", &(_Weap->DamageReductions[2].PercentageReduction));
		ImGui::InputInt("DamageReductions4    ", &(_Weap->DamageReductions[3].PercentageReduction));

		ImGui::InputInt("DamageBonus    ", &(_Weap->WeaponDamageBonus));
		ImGui::InputInt("NumberOfProjectilesBonus    ", &(_Weap->WeaponNumberOfProjectilesBonus));
		ImGui::InputInt("SpeedOfProjectilesBonus    ", &(_Weap->WeaponSpeedOfProjectilesBonus));
		ImGui::InputInt("WeaponAdditionalDamageAmount    ", &(_Weap->WeaponAdditionalDamageAmount));

		ImGui::InputFloat("MaxRandomElementalDamageMultiplier", &_Weap->MaxRandomElementalDamageMultiplier, 1, 100, "%.3f");
		ImGui::InputFloat("WeaponSwingSpeedMultiplier", &_Weap->WeaponSwingSpeedMultiplier, 1, 100, "%.3f");

		ImGui::InputInt("WeaponReloadSpeedBonus                       ", &(_Weap->WeaponReloadSpeedBonus));
		ImGui::InputInt("WeaponKnockbackBonus                         ", &(_Weap->WeaponKnockbackBonus));
		ImGui::InputInt("WeaponAltDamageBonus                         ", &(_Weap->WeaponAltDamageBonus));
		ImGui::InputInt("WeaponBlockingBonus                          ", &(_Weap->WeaponBlockingBonus));
		ImGui::InputInt("WeaponClipAmmoBonus                          ", &(_Weap->WeaponClipAmmoBonus));
		ImGui::InputInt("AdditionalAllowedUpgradeResistancePoints     ", &(_Weap->AdditionalAllowedUpgradeResistancePoints));
		ImGui::InputInt("RequirementLevelOverride                     ", &(_Weap->RequirementLevelOverride));
		ImGui::InputInt("WeaponChargeSpeedBonus                       ", &(_Weap->WeaponChargeSpeedBonus));
		ImGui::InputInt("WeaponShotsPerSecondBonus                    ", &(_Weap->WeaponShotsPerSecondBonus));

		ImGui::PopItemWidth();
		ImGui::TreePop();
	}




}
std::string VirtualKeyCodeToString(UCHAR virtualKey)
{
	UINT scanCode = MapVirtualKey(virtualKey, MAPVK_VK_TO_VSC);

	CHAR szName[128];
	int result = 0;
	switch (virtualKey)
	{
	case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
	case VK_RCONTROL: case VK_RMENU:
	case VK_LWIN: case VK_RWIN: case VK_APPS:
	case VK_PRIOR: case VK_NEXT:
	case VK_END: case VK_HOME:
	case VK_INSERT: case VK_DELETE:
	case VK_DIVIDE:
	case VK_NUMLOCK:
		scanCode |= KF_EXTENDED;
	default:
		result = GetKeyNameTextA(scanCode << 16, szName, 128);
	}
	if (result == 0)
		throw std::system_error(std::error_code(GetLastError(), std::system_category()),
			"WinAPI Error occured.");
	return szName;
}
void ImguiPlayer(APlayerController* _controller)
{


	std::string tmpName;
	ADunDefPlayer* pPawn = (ADunDefPlayer*)_controller->Pawn;
	if (pPawn->MyPlayerHero && pPawn->MyPlayerHero->HeroName.Data)
	{

		FStringTostring(tmpName, pPawn->MyPlayerHero->HeroName);
	}
	if (!tmpName.length() >= 1)
		tmpName = "NONE";




	ImGui::Text("PlayerName : ", tmpName.c_str());







	ImGui::PushItemWidth(ImGui::GetWindowWidth() * .70f);

	ImGui::InputInt("Health", &pPawn->Health);
	ImGui::InputFloat3("Location", &((pPawn->Location.X)), 2);
	ImGui::InputFloat("Speed", &((pPawn->PlayerGroundSpeed)), 2);




	ImGui::InputFloat3("color1", &((pPawn->MyPlayerHero->color1.R)), 2);
	ImGui::InputFloat3("color2", &((pPawn->MyPlayerHero->color2.R)), 2);
	ImGui::InputFloat3("color3", &((pPawn->MyPlayerHero->color3.R)), 2);

	if (ImGui::Button("Randomize Colors"))
	{


		pPawn->MyPlayerHero->color1.R = (rand() % 180) - 90;
		pPawn->MyPlayerHero->color1.G = (rand() % 180) - 90;
		pPawn->MyPlayerHero->color1.B = (rand() % 180) - 90;

		pPawn->MyPlayerHero->color2.R = (rand() % 180) - 90;
		pPawn->MyPlayerHero->color2.G = (rand() % 180) - 90;
		pPawn->MyPlayerHero->color2.B = (rand() % 180) - 90;

		pPawn->MyPlayerHero->color3.R = (rand() % 180) - 90;
		pPawn->MyPlayerHero->color3.G = (rand() % 180) - 90;
		pPawn->MyPlayerHero->color3.B = (rand() % 180) - 90;


	}


	ImGui::InputInt("XP", &((pPawn->MyPlayerHero->HeroExperience)), 2);
	ImGui::SameLine();

	if (ImGui::Button("Max XP"))
	{
		pPawn->MyPlayerHero->HeroExperience = 1155827506;
	}
	ImGui::PopItemWidth();

}
void GetKeybinds()
{
	std::ifstream SettingsFile("d.txt");
	SettingsFile >> ToggleKey;
	SettingsFile >> EndKey;
	SettingsFile >> TeleportPlayerKey;
	SettingsFile >> NewTeleportKey;
	SettingsFile.close();
}
void SaveKeybinds()
{
	std::ofstream SettingsFile("d.txt");
	SettingsFile << ToggleKey;
	SettingsFile << "\n";
	SettingsFile << EndKey;
	SettingsFile << "\n";
	SettingsFile << TeleportPlayerKey;
	SettingsFile << "\n";
	SettingsFile << NewTeleportKey;
	SettingsFile.close();
}
bool ChangeKeybindRequest(bool& _bKeyChangeRequest, int& _Key)
{

	ImGuiIO& io = ImGui::GetIO();



	static bool localKeyGrabbed = FALSE;
	static int KeyChangeWindow = 0;
	static int KeyPressed = 0;

	if (_bKeyChangeRequest)
	{

		if (!localKeyGrabbed)
		{
			ImGui::Text("Press a key to set a keybind");
			for (int i = 0; i < IM_ARRAYSIZE(io.KeysDown); i++) if (ImGui::IsKeyPressed(i))
			{
				KeyPressed = i;
				localKeyGrabbed = TRUE;

			}
		}
		else if (KeyChangeWindow > 5)
		{
			KeyChangeWindow = 0;
			localKeyGrabbed = FALSE;
			_Key = KeyPressed;
			SaveKeybinds();
			//_bKeyChangeRequest = TRUE;
		}
		else
		{
			KeyChangeWindow++;
			ImGui::Text("%d", KeyChangeWindow);
			return FALSE;
		}

	}
	return TRUE;
}
void ImguiInit()
{



	ImGui::SetWindowSize({ 580.0f,400.0f });

	ImGuiStyle& style = ImGui::GetStyle();
	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_FrameBg] = ImVec4(0.23f, 0.23f, 0.23f, 0.54f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.00f, 0.69f, 0.25f, 0.40f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.49f, 0.16f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.07f, 0.58f, 0.23f, 0.40f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.06f, 0.59f, 0.23f, 0.40f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.00f, 0.72f, 0.73f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);

	style.WindowRounding = 0;
	style.WindowTitleAlign = ImVec2(0.5f, 0.5f);

}
void ImguiMenuItemModding()
{



	//LAST DROPPED ITEM
	if (ImGui::TreeNode("LastDropped Item"))
	{

		if (ConsoleDebug)
		{
			std::cout << "LastDropped Node\n";
		}

		if (LastDroppedWep)
		{
			ImGuiWeapon(LastDroppedWep);

		}
		else
			ImGui::Text("Drop an item to start modding");

		ImGui::TreePop();
	}

	/// ALL ITEMS ON HERO
	if (ImGui::TreeNode("Equipped Item"))
	{

		if (ConsoleDebug)
		{
			std::cout << "Equipped Node\n";
		}


		if (!CheckVarsForNull())
		{
			ImGui::TreePop();
			return;
		}
		auto tmpPlayerHero = ((ADunDefPlayerController*)controller)->MyHero;//->HeroEquipments;
		static int tmpIterator = 0;

		if (tmpPlayerHero->HeroEquipments.Count <= 0)
		{
			ImGui::TreePop();
			return;
		}

		if (tmpIterator > tmpPlayerHero->HeroEquipments.Count - 1)
		{
			tmpIterator = 0;
		}
		ImGui::Text("%d / %d", tmpIterator + 1, tmpPlayerHero->HeroEquipments.Count); ImGui::SameLine();
		if (ImGui::Button("<<"))
		{
			tmpIterator = 0;
		}ImGui::SameLine();
		if (ImGui::Button("<"))
		{
			if (tmpIterator > 0)
				tmpIterator -= 1;
		} ImGui::SameLine();
		if (ImGui::Button(">"))
		{
			if (tmpIterator < tmpPlayerHero->HeroEquipments.Count - 1)
				tmpIterator += 1;
		}ImGui::SameLine();
		if (ImGui::Button(">>"))
		{
			if (tmpIterator < tmpPlayerHero->HeroEquipments.Count - 1)
				tmpIterator = tmpPlayerHero->HeroEquipments.Count - 1;
		}


		ImGui::SameLine();
		if (ImGui::Button("Max"))
		{
			MaxWeapon(tmpPlayerHero->HeroEquipments.Data[tmpIterator]);
		}
		ImGui::SameLine();

		static ItemCopy tmpTemplate;
		if (ImGui::Button("Copy Template"))
		{
			tmpTemplate = copyItem(tmpPlayerHero->HeroEquipments.Data[tmpIterator]);
		}
		ImGui::SameLine();


		if (ImGui::Button("Paste Template"))
		{
			pasteItem(tmpPlayerHero->HeroEquipments.Data[tmpIterator], tmpTemplate);
		}


		ImGuiWeapon(tmpPlayerHero->HeroEquipments.Data[tmpIterator]);



		ImGui::TreePop();
	}

	//ITEM BOX ITEMS
	if (ImGui::TreeNode("Item box"))
	{


		if (ConsoleDebug)
		{
			std::cout << "Item Box Node\n";
		}


		if (!CheckVarsForNull())
		{
			ImGui::TreePop();
			return;
		}

		if (!heroManager)
		{
			ImGui::TreePop();
			return;
		}


		auto tmpItemEquipment = heroManager->ItemBoxEquipments;
		auto tmpPlayerHero = ((ADunDefPlayerController*)controller)->MyHero;//->HeroEquipments;
		static int tmpIterator = 0;
		ImGui::Text("%d items in forge", tmpItemEquipment.Count); //ImGui::SameLine();

		//filter
		if (ImGui::TreeNode("Filter Item box"))
		{

			ImGui::InputInt("Hero Health", &ItemBoxFilterStats[eHHealth]);
			ImGui::InputInt("Hero Speed", &ItemBoxFilterStats[eHSpeed]);
			ImGui::InputInt("Hero Damage", &ItemBoxFilterStats[eHDamage]);
			ImGui::InputInt("Hero Cast", &ItemBoxFilterStats[eHCast]);
			ImGui::InputInt("Ability1", &ItemBoxFilterStats[Ability1]);
			ImGui::InputInt("Ability2", &ItemBoxFilterStats[Ability2]);
			ImGui::InputInt("Tower Health", &ItemBoxFilterStats[eTHealth]);
			ImGui::InputInt("Tower Speed", &ItemBoxFilterStats[eTSpeed]);
			ImGui::InputInt("Tower Damage", &ItemBoxFilterStats[eTDamage]);
			ImGui::InputInt("Tower Range", &ItemBoxFilterStats[eTRange]);



			static bool bFilterByStatLockAbove = TRUE;
			static bool bFilterByStatLockBelow = TRUE;
			static bool bFilterByStatUnlockAbove = TRUE;
			static bool bFilterByStatUnlockBelow = TRUE;

			//if (!bUnlockBelow)
			//	bUnlockBelow = FilterItemBox(tmpItemEquipment, itemFilterQuality, FALSE, TRUE);
			//else if (!bLockBelow)
			//	bLockBelow = FilterItemBox(tmpItemEquipment, itemFilterQuality, TRUE, TRUE);
			//else if (!bUnlockAbove)
			//	bUnlockAbove = FilterItemBox(tmpItemEquipment, itemFilterQuality, FALSE, FALSE);
			//else if (!bLockAbove)
			//	bLockAbove = FilterItemBox(tmpItemEquipment, itemFilterQuality, TRUE, FALSE);

			//
			if (!bFilterByStatUnlockAbove)
				bFilterByStatUnlockAbove = FilterItemBoxByStats(tmpItemEquipment, FALSE, TRUE, ItemBoxFilterStats);
			else if (!bFilterByStatUnlockBelow)
				bFilterByStatUnlockBelow = FilterItemBoxByStats(tmpItemEquipment, FALSE, TRUE, ItemBoxFilterStats);

			else if (!bFilterByStatLockAbove)
				bFilterByStatLockAbove = FilterItemBoxByStats(tmpItemEquipment, TRUE, FALSE, ItemBoxFilterStats);
			else if (!bFilterByStatLockBelow)
				bFilterByStatLockBelow = FilterItemBoxByStats(tmpItemEquipment, TRUE, FALSE, ItemBoxFilterStats);




			/*if (ImGui::Button("Unlock below"))
			{
			bUnlockBelow = FALSE;
			}ImGui::SameLine();

			if (ImGui::Button("Lock below"))
			{
			bLockBelow = FALSE;
			}ImGui::SameLine();


			if (ImGui::Button("Lock Above"))
			{
			bLockAbove = FALSE;
			}ImGui::SameLine();
			if (ImGui::Button("Unlock Above"))
			{
			bUnlockAbove = FALSE;
			}
			*/
			if (ImGui::Button("Lock /\\"))
			{
				bFilterByStatLockAbove = FALSE;
			}ImGui::SameLine();
			if (ImGui::Button("Lock \\/"))
			{
				bFilterByStatLockBelow = FALSE;
			}ImGui::SameLine();

			if (ImGui::Button("Unlock /\\"))
			{
				bFilterByStatUnlockAbove = FALSE;
			}ImGui::SameLine();

			if (ImGui::Button("Unlock \\/"))
			{
				bFilterByStatUnlockBelow = FALSE;
			}












			if (tmpItemEquipment.Count <= 0)
			{
				ImGui::TreePop();
				return;
			}

			if (tmpIterator > tmpItemEquipment.Count - 1)
			{
				tmpIterator = 0;
			}


			ImGui::TreePop();
		}
		if (ImGui::TreeNode("Mod Item box"))
		{
			//item modding
			ImGui::Text("%d / %d", tmpIterator + 1, tmpItemEquipment.Count); ImGui::SameLine();
			if (ImGui::Button("<<"))
			{
				tmpIterator = 0;
			}ImGui::SameLine();
			if (ImGui::Button("<"))
			{
				if (tmpIterator > 0)
					tmpIterator -= 1;
			} ImGui::SameLine();
			if (ImGui::Button(">"))
			{
				if (tmpIterator < tmpItemEquipment.Count - 1)
					tmpIterator += 1;
			}ImGui::SameLine();
			if (ImGui::Button(">>"))
			{
				if (tmpIterator < tmpItemEquipment.Count - 1)
					tmpIterator = tmpItemEquipment.Count - 1;
			}

			ImGui::SameLine();





			if (ImGui::Button("Max"))
			{
				MaxWeapon(tmpItemEquipment.Data[tmpIterator]);
			}ImGui::SameLine();


			static bool bMaxItemBox = TRUE;

			if (!bMaxItemBox)
				bMaxItemBox = MaxItemBox(tmpItemEquipment);
			if (ImGui::Button("Max box"))
			{

				bMaxItemBox = FALSE;
			}


			ImGuiWeapon(tmpItemEquipment.Data[tmpIterator]);


			ImGui::TreePop();
		}

		ImGui::TreePop();
	}


}
void ImguiChangeKeyBinds()
{
	if (bToggleKeyChangeRequest)
		ChangeKeybindRequest(bToggleKeyChangeRequest, ToggleKey);
	if (bEndKeyKeyChangeRequest)
		ChangeKeybindRequest(bEndKeyKeyChangeRequest, EndKey);



	if (NewTeleportKeyKeyChangeRequest)
		ChangeKeybindRequest(NewTeleportKeyKeyChangeRequest, NewTeleportKey);
	if (TeleportPlayerKeyKeyChangeRequest)
		ChangeKeybindRequest(TeleportPlayerKeyKeyChangeRequest, TeleportPlayerKey);





}
void ImguiMenuSettings()
{
	ImVec2 settingsbuttonProperty = ImVec2(275, 20);
	if (ImGui::TreeNode("Menu Settings"))
	{

		if (ImGui::Button("Set Menu Toggle Keybind", settingsbuttonProperty))
		{
			bToggleKeyChangeRequest = TRUE;
		}
		ImGui::SameLine();

		std::string tmpString = "Current : " + VirtualKeyCodeToString(ToggleKey);
		ImGui::Text(tmpString.c_str(), ToggleKey, ToggleKey);

		if (ImGui::Button("Set Menu End Keybind", settingsbuttonProperty))
		{
			bEndKeyKeyChangeRequest = TRUE;
		}
		ImGui::SameLine();
		tmpString = "Current : " + VirtualKeyCodeToString(EndKey);
		ImGui::Text(tmpString.c_str(), EndKey, EndKey);

		if (ImGui::Button("Set Get Teleport Keybind", settingsbuttonProperty))
		{
			NewTeleportKeyKeyChangeRequest = TRUE;
		}
		ImGui::SameLine();
		tmpString = "Current : " + VirtualKeyCodeToString(NewTeleportKey);
		ImGui::Text(tmpString.c_str(), NewTeleportKey, NewTeleportKey);


		if (ImGui::Button("Set Teleport Keybind", settingsbuttonProperty))
		{
			TeleportPlayerKeyKeyChangeRequest = TRUE;
		}
		ImGui::SameLine();
		tmpString = "Current : " + VirtualKeyCodeToString(TeleportPlayerKey);
		ImGui::Text(tmpString.c_str(), TeleportPlayerKey, TeleportPlayerKey);






		ImguiChangeKeyBinds();





		ImGui::TreePop();
	}
	if (ImGui::TreeNode("Cheat Settings"))
	{
		ImGui::InputInt("Multiply By", &MultiplyRewardsBy);
		//ImGui::SliderInt("Reward Multiply", &MultiplyRewardsBy, 0, 10000);
		ImGui::TreePop();
	}



	if (ImGui::TreeNode("AutoLoot Settings"))
	{
		int FilterMax = 500;
		ImGui::InputInt("Hero Health", &ItemPickUpFilterStats[eHHealth]);
		ImGui::InputInt("Hero Speed", &ItemPickUpFilterStats[eHSpeed]);
		ImGui::InputInt("Hero Damage", &ItemPickUpFilterStats[eHDamage]);
		ImGui::InputInt("Hero Cast", &ItemPickUpFilterStats[eHCast]);
		ImGui::InputInt("Ability1", &ItemPickUpFilterStats[Ability1]);
		ImGui::InputInt("Ability2", &ItemPickUpFilterStats[Ability2]);
		ImGui::InputInt("Tower Health", &ItemPickUpFilterStats[eTHealth]);
		ImGui::InputInt("Tower Speed", &ItemPickUpFilterStats[eTSpeed]);
		ImGui::InputInt("Tower Damage", &ItemPickUpFilterStats[eTDamage]);
		ImGui::InputInt("Tower Range", &ItemPickUpFilterStats[eTRange]);








		ImGui::Text("Items Added : %d   |  Items Filtered : %d", ItemsAdded, TotalItemsCkd); ImGui::SameLine();
		if (ImGui::Button("Reset"))
		{
			ItemsAdded = 0;
			TotalItemsCkd = 0;
		}
		ImGui::TreePop();
	}
}
void ImguiMenuLobby()
{
	if (!CheckVarsForNull())
	{

		return;
	}
	if (ImGui::TreeNode("Lobby Settings"))
	{



		ImGui::Checkbox(("Enable Gravity"), &bLobbyGravity);
		ImGui::Checkbox(("Enable Jump Height"), &bLobbyJump);
		ImGui::Checkbox(("Enable Scale"), &bLobbyScale); ImGui::SameLine();
		ImGui::Checkbox(("Enable Enemy Scale"), &bScaleEnemy);


		ImGui::InputFloat("Gravity", &Gravity, .1, 100, "%.3f");
		ImGui::InputFloat("Jump Height", &JumpHeight, 100, 100, "%.3f");
		ImGui::InputFloat("Scale", &DrawScale, .1, 100, "%.3f");
		ImGui::InputFloat("Enemy Scale", &eDrawScale, .1, 100, "%.3f");



		//player

		ImGui::PushItemWidth(ImGui::GetWindowWidth() * .50f);

		ImGui::InputFloat3("Teleport Location", &((NewLocation.X)), 2);

		ImGui::PopItemWidth();



		if (ImGui::Button("Move Player", ImVec2(125, 25)))
		{

			controller->Pawn->Location = NewLocation;

		}ImGui::SameLine();
		if (ImGui::Button("Get Location", ImVec2(125, 25)))
		{

			NewLocation = controller->Pawn->Location;

		}

		ImGui::TreePop();
	}

	TArray<ULocalPlayer*>* Contollers = GetPlayerControllers();

	if (Contollers)
		for (int i = 0; i < Contollers->Count; i++)
		{
			std::string NodeName = "Player : " + std::to_string(i);
			if (ImGui::TreeNode(NodeName.c_str()))
			{
				ImguiPlayer((APlayerController*)Contollers->Data[i]->Actor);
				ImGui::TreePop();
			}
		}
}
void ImguiMenuESP()
{
	ImGui::Checkbox(("Enable ESP"), &bEspEnabled);
	ImGui::Checkbox(("Draw Route "), &bDrawRoute);
	ImGui::Checkbox(("Enable Trace Lines"), &bEspLines);
	ImGui::Checkbox(("Enable Health"), &bEspHealth);
	ImGui::Checkbox(("Enable Box"), &bEspBox);
	ImGui::Checkbox(("Show Vacuum Point"), &bShowVacuumPos);
	ImGui::Checkbox(("Show Teleport Point"), &bShowTeleportPos);



}
bool GEPReady = FALSE;
void ImguiMenuCheats()
{
	ImGui::Columns(2, "mixed");
	ImGui::Separator();
	ImGui::Checkbox(("Enable Godmode    "), &bGodMode);
	ImGui::Checkbox(("1 Kill Per Wave"), &bKillOneToAdvance);
	ImGui::Checkbox(("AutoKill"), &bAutoKill);
	ImGui::Checkbox(("No Abilities Cooldown"), &bNoCD);
	ImGui::Checkbox(("Unlimited mana for towers"), &bUnlimManaBuild);
	ImGui::Checkbox(("Unlimited mana for shops"), &bUnlimManaShop);
	ImGui::Checkbox(("Multiply Wave rewards"), &bMultiplyReward);
	ImGui::Checkbox(("Personal Towers"), &bPersonalTowers);

	ImGui::NextColumn();
	ImGui::Checkbox(("Enable AutoPickup "), &bAutoPickUp);
	ImGui::Checkbox(("Enable LootShower "), &bLootShower);
	ImGui::Checkbox(("Enable Vacuum Hack"), &bVacuumHack);


	if (ImGui::Button("Move Vaccum Point", ImVec2(125, 25)))
	{
		if (CheckVarsForNull())
		{
			VacuumHackPos = controller->Pawn->Location;
		}
	}
	//ImGui::Checkbox(("ChangeRewards"), &ChangeRewards);
	ImGui::Checkbox(("Teleport Players Safe"), &bTeleportPlayersSafe);
	ImGui::Checkbox(("Teleport Players Point"), &bTeleportPlayersPoint);
	//ImGui::Checkbox(("ManaTrail"), &bManaTrail);
	ImGui::Checkbox(("AutoXp"), &bAutoXp);



	ImGui::Columns(1);
	ImGui::Separator();
	ImGui::PushItemWidth(ImGui::GetWindowWidth() * .50f);
	ImGui::InputInt("WaveNum", &WaveSkipToNum); ImGui::SameLine();
	ImGui::Checkbox(("Skip Next Wave"), &bWaveSkip); ImGui::SameLine();
	ImGui::Checkbox(("Lock"), &bLockLevelAt);

	//ImGui::InputInt("Score", &newScore); ImGui::SameLine();
	//if (ImGui::Button("Update Score", ButtonProperty))
	//{
	//	((ADunDefPlayerController*)controller)->Score = newScore;
	//}ImGui::SameLine();
	//ImGui::Checkbox(("LockScore"), &UpdateScore);


	//if (ImGui::Button("Unlock All Achievements", ImVec2(125, 25)))
	//{

	//	heroManager->AchievementEntries;
	//	for (int i = 0; i < heroManager->TheAchievementManager->AchievementEntries.Count; i++)
	//	{
	//		heroManager->TheAchievementManager->DoUnlockAchivement((ADunDefPlayerController*)controller,
	//			heroManager->TheAchievementManager->AchievementEntries.Data[i].AchievementName.Data[0],
	//			2,
	//			0,
	//			1,
	//			0);

	//	}

	//}

	ImGui::PopItemWidth();

	//ImGui::SameLine();
	//if (ImGui::Button("Update name", ButtonProperty))
	//{

	//	((ADunDefPlayerController*)controller)->MyHero->HeroName = (wchar_t*)"\0";
	//}




}
void ImguiMenu()
{

	if (!ShowMenu)
		return;
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	static bool init = FALSE;
	if (!init)
	{
		init = !init;
		ImguiInit();
	}
	if (bShowDEMOWINDOW)
	{
		bool tmp = TRUE;
		ImGui::ShowDemoWindow(&tmp);
	}


	ImGui::Begin(ModMenuName.c_str(), NULL);
	ImGui::BeginGroup();

	ImGui::Columns(5, "mixed");

	if (ImGui::Button("Cheats", ButtonProperty))
	{
		MenuTab = CHEATS;
	}

	ImGui::NextColumn();
	if (ImGui::Button("ESP", ButtonProperty))
	{
		MenuTab = ESP;
	}

	ImGui::NextColumn();
	if (ImGui::Button("LOBBY", ButtonProperty))
	{
		MenuTab = LOBBY;
	}

	ImGui::NextColumn();
	if (ImGui::Button("SETTINGS", ButtonProperty))
	{
		MenuTab = SETTINGS;
	}

	ImGui::NextColumn();
	if (ImGui::Button("ITEM MODDING", ButtonProperty))
	{
		MenuTab = ITEM_MODDING;
	}
	ImGui::Columns(1);
	ImGui::EndGroup();

	auto tmo = ((ADunDefPlayerController*)controller);
	static bool bAntiCheatDetected = FALSE;
	if (CheckVarsForNull() && tmo)
	{

		if (((ADunDefPlayerController*)controller)->bWasSpeedHack)
		{
			bAntiCheatDetected = TRUE;
			tmo->bWasSpeedHack = 0;
		}

		if (((ADunDefPlayerController*)controller)->bCheatFlying)
		{
			bAntiCheatDetected = TRUE;
			tmo->bCheatFlying = 0;
		}
		if (((ADunDefPlayerController*)controller)->bWasSaturated)
		{
			bAntiCheatDetected = TRUE;
			tmo->bWasSaturated = 0;
		}
		if (bAntiCheatDetected)
		{
			ImGui::Text("ANTI CHEAT DETECTED.");
			ImGui::Text("%f", tmo->LastSpeedHackLog);
		}
	}


	static bool LockScore = FALSE;


	DEBUG_IMGUI_TEST();



	if (MenuTab == CHEATS)
	{
		ImguiMenuCheats();
	}
	else if (MenuTab == ESP)
	{
		ImguiMenuESP();
	}
	else if (MenuTab == LOBBY)
	{
		ImguiMenuLobby();
	}
	else if (MenuTab == SETTINGS)
	{
		ImguiMenuSettings();
	}
	else if (MenuTab == ITEM_MODDING)
	{
		ImguiMenuItemModding();
	}

	ImGui::End();

	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
}
//directx9 hook for imgui
HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice) {
	static bool init = false;
	if (!init) {
		d3Device = pDevice;
		init = true;

		IMGUI_CHECKVERSION();
		ImGui::CreateContext();

		ImGuiIO& io = ImGui::GetIO();
		ImGui_ImplWin32_Init(gameHWND);
		io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
		ImGui_ImplDX9_Init(pDevice);
	}


	ImguiMenu();



	return ((tEndScene)(EndSceneHook.HookAddr))(pDevice);
}
DWORD PlayerCheckScoreHack = 0;
DWORD EaxCheck = 0;

bool isController = false;

bool ScoreHookFunc()
{
	TArray<ULocalPlayer*>* controllers = GetPlayerControllers();
	if (controllers)
		if (controllers->Count)
			for (int ScroreHookI = 0; ScroreHookI < controllers->Count; ScroreHookI++)
			{
				if (PlayerCheckScoreHack == (DWORD)(controllers->Data[ScroreHookI]->Actor))
					if (EaxCheck != (DWORD)(controllers->Data[ScroreHookI]->Actor))
					{
						return true;
					}
			}
	return false;
}
__declspec(naked) void ScoreHook()
{
	__asm
	{
		pushf;
		pushad;
		mov[PlayerCheckScoreHack], edi;
		mov[EaxCheck], eax;
	}



	isController = ScoreHookFunc();

	if (isController)
		__asm
	{

		popad;
		mov eax, 0;
		popf;
		jmp ScoreHookObj.HookAddr;
	}


	__asm
	{
		popad;
		popf;
		jmp ScoreHookObj.HookAddr;
	}

}
//cheats
void InternalDebug(UCanvas* canvas)
{
	if (GEP)
		DrawTexta(canvas, ButterString, 10, 25, fGreen);
	else
		DrawTexta(canvas, ButterString, 10, 25, fRed);
}
void PostRender(UCanvas* canvas)
{

	if (bDebug)
		InternalDebug(canvas);



	if (!CheckVarsForNull())
	{
		DrawTexta(canvas, ButterString, 10, 5, fRed);
		return;
	}
	DrawTexta(canvas, ButterString, 10, 5, fGreen);



	if (bAutoXp)
	{
		auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();


		for (int i = 0; i < 10; i++)
		{
			t->AwardWaveCompletion(999);
		}

	}


	if (bGetNewTeleportLocation)
	{
		bGetNewTeleportLocation = FALSE;
		NewLocation = controller->Pawn->Location;
	}
	if (bTeleportPlayer)
	{
		bTeleportPlayer = FALSE;
		controller->Pawn->Location = NewLocation;
	}


	//if (bManaTrail)
	//	((ADunDefPlayerController*)controller)->SpawnManaTokens((ADunDefPlayerController*)controller), (ADunDefPlayerController*)controller), NULL);




	//if (bManaTrail)
	//Target->SpawnManaTokens(Target, Target, NULL);
	Cheats();
	//get first pawn in ent list
	ADunDefPawn* Target = GetFirstPawnInList();

	static bool Init = FALSE;
	static float OGrav = 1.0f;
	static float OJumpZ = 1300.0f;
	static float ODrawScale = 1.0f;
	if (!Init)
	{
		Gravity = Target->GravityZMultiplier;
		JumpHeight = Target->JumpZ;
		DrawScale = Target->DrawScale;
		eDrawScale = Target->DrawScale;
		Init = !Init;
	}

	while (Target != NULL)
	{
		if (Target->IsPlayerPawn())
		{

			if (bGodMode)
				Target->Controller->bGodMode = TRUE;
			else
				Target->Controller->bGodMode = FALSE;


			if (bLobbyGravity)
			{
				Target->GravityZMultiplier = Gravity;
			}
			else
			{
				Target->GravityZMultiplier = OGrav;
			}
			if (bLobbyScale)
			{
				Target->DrawScale = DrawScale;
			}
			else
			{
				Target->DrawScale = ODrawScale;
			}
			if (bLobbyJump)
			{
				Target->JumpZ = JumpHeight;
			}
			else
			{
				Target->JumpZ = OJumpZ;
			}

			if (Target != controller->Pawn)
			{

				if (bTeleportPlayersSafe)
				{


					Target->Location = controller->Pawn->Location;
				}
				if (bTeleportPlayersPoint)
				{

					Target->Location = NewLocation;
				}

				if (Target->Controller)
				{

					((ADunDefPlayerController*)(Target->Controller))->Score = 0;

				}
			}
			if (bManaTrail && UnreleasedCheats)
				Target->SpawnManaTokens(Target, Target, NULL);

			Target = (ADunDefPawn*)Target->NextPawn;
			continue;
		}

		ESPTarget(canvas, Target);

		if (bScaleEnemy)
		{
			Target->DrawScale = eDrawScale;
		}
		else
		{
			Target->DrawScale = 1.0f;
		}


		if (bVacuumHack)
		{

			Target->Location = VacuumHackPos;
		}


		if (bAutoKill)
		{
			FVector tempVec = FVector();
			FTraceHitInfo tempHit = FTraceHitInfo();
			Target->eventTakeDamage(Target->HealthMax, NULL, tempVec, tempVec, NULL, tempHit, NULL);
		}

		ADunDefEnemy* enemy = (ADunDefEnemy*)Target;
		if (bLootShower)
		{

			enemy->SpawnDroppedEquipment();
		}


		//enemy->SetGolded();
		//if (!enemy->eventIsSameTeam(controller->AcknowledgedPawn))
		//	enemy->PlayerChangedTeam();
		Target = (ADunDefPawn*)Target->NextPawn;
	}


	if (bShowVacuumPos)
	{
		if (controller->myHUD)
		{
			controller->myHUD->Draw3DLine(controller->Pawn->Location, VacuumHackPos, fGreen);


			FLinearColor tmp = { 0, 1, 0, 1 };
			FString v = (wchar_t*)"v\0";
			auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();

			if (t)
			{
				t->AddCustomFloatingText(v, VacuumHackPos, 0, 0.1f, 2, TRUE, tmp);




			}
		}
	}

	if (bShowTeleportPos)
	{
		if (controller->myHUD)
		{
			controller->myHUD->Draw3DLine(controller->Pawn->Location, NewLocation, fGreen);


			FLinearColor tmp = { 0, 1, 0, 1 };
			FString tt = (wchar_t*)"t\0";
			auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();

			if (t)
			{
				t->AddCustomFloatingText(tt, NewLocation, 0, 0.1f, 2, TRUE, tmp);




			}
		}
	}
	if (bPersonalTowers)
	{
		auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();
		auto tmpPlayerLocation = controller->Pawn->Location;
		tmpPlayerLocation.Z += 150.0f;
		for (int i = 0; i < t->TowerUpdate.Count; i++)
		{
			t->TowerUpdate.Data[i]->DrawScale = 0.1f;
			t->TowerUpdate.Data[i]->Location = tmpPlayerLocation;
		}

	}


	//SAY TESTING--------------------------------------------
	//pMain->PrintToConsole(ButterString);
	//controller->Say(ButterString);
	//controller->ServerSay(ButterString);
	//controller->ServerTeamSay(ButterString);
	//controller->TeamSay(ButterString);

	//lmao this is great controller->SpeakTTS(ButterString, controller->PlayerReplicationInfo);

	//SAY TESTING--------------------------------------------
}
std::ofstream myfile;
bool CheckGRI()
{

	if (!CheckVarsForNull())
		return false;

	auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();
	if (!t)
		return false;

	if (!t->IsInGameplayLevel())
		return false;
	if (!t->IsInLobbyLevel())
		return false;
	if (!t->IsNonLobbyBuildPhase())
		return false;
	if (!t->IsGameplayFinished())
		return false;
	if (!t->IsTheGameplayFinished())
		return false;

	return true;
}

void Debug(UFunction* pFunction, UObject* pObject)
{
	char* szName = pFunction->GetFullName();
	//std::cout << "OBJECT ADDR : " << (DWORD)pObject << "\n";	
	myfile << std::left << std::setw(50) << pObject->Name.GetName() << " || " << szName << "\n";
	//myfile << std::hex << std::left << "[" << std::setw(8) << (DWORD)pObject << "]" << std::setw(40) << pObject->Name.GetName() << " || " << "[" << std::setw(8) << (DWORD)pFunction << "]" << szName << "\n";
}
void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	char* szName = pFunction->GetFullName();
	char* objectName = pObject->Name.GetName();
	if (LogToFile)
		Debug(pFunction, pObject);


	srand(time(NULL));


	if (UpdateScore)
	{
		if (controller)
			((ADunDefPlayerController*)controller)->Score = newScore;
	}
	if (ShowMenu)
		if (strcmp(objectName, "UIState_Pressed") == 0)
		{
			return;
		}
	if (UnreleasedCheats)
	{
		//nightmare unlock
		if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated") == 0) {
			UDunDef_SeqAct_SetNightmareUnlocked* temp = ((UDunDef_SeqAct_SetNightmareUnlocked*)(pObject));
			if (temp) {
				temp->bSetUnlocked = 1;
				temp->bActuallyDoSet = 1;
			}
		}
		if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_LockContent.Activated") == 0)
		{
			UDunDef_SeqAct_LockContent* temp = ((UDunDef_SeqAct_LockContent*)(pObject));
			temp->bLockLevel = 0;
		}
		if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_AppPurchased.Activated") == 0)
		{
			UDunDef_SeqAct_AppPurchased* temp = ((UDunDef_SeqAct_AppPurchased*)(pObject));
			temp->bIsDLC = 0;
		}
		if (strcmp(szName, "Function UDKGame.DunDefForge.Tick") == 0) {
			ADunDefForge* temp = ((ADunDefForge*)(pObject));
			if (temp) {
				temp->IsActive = TRUE;
				temp->bAllowActivationInCombatPhase = TRUE;
			}
		}
	}
	//hook GRI

	if (strcmp(szName, "Function UDKGame.DunDefGameReplicationInfo.Tick") == 0)
	{
		plevel = (ADunDefGameReplicationInfo*)pObject;
	}

	//reward multiply
	if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_GiveEquipmentToPlayers.Activated") == 0)
	{
		UDunDef_SeqAct_GiveEquipmentToPlayers* rewarditems = ((UDunDef_SeqAct_GiveEquipmentToPlayers*)(pObject));
		GEP = rewarditems;

		if (bMultiplyReward)
		{
			TArray< FGiveEquipmentEntry >   tmpItemEntry;

			if (ChangeRewards && UnreleasedCheats)
				for (int i = 0; i < rewarditems->GiveEquipmentEntries.Count; i++)
				{
					rewarditems->GiveEquipmentEntries.Data[i].ForceHeroArchetypeExactMatch = 1;
					rewarditems->GiveEquipmentEntries.Data[i].EquipmentArchetype = (UHeroEquipment*)(((ADunDefPlayerController*)controller)->MyHero->HeroEquipments.Data[0]->ObjectArchetype);

				}

			static int currentRewardInteration = 0;
			if (currentRewardInteration < MultiplyRewardsBy)
			{
				currentRewardInteration++;
				rewarditems->eventActivated();
			}
			else
			{
				currentRewardInteration = 0;
			}
		}
	}

	//Drawing on screen
	if (strcmp(szName, "Function Engine.Interaction.PostRender") == 0)
	{
		PostRender(((UGameViewportClient_eventPostRender_Parms*)(pParms))->Canvas);
	}
	//set wave number
	if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated") == 0) {
		waveNum = ((UDunDef_SeqAct_SetWaveNumber*)(pObject));
		if (bWaveSkip)
		{
			waveNum->waveNumber = WaveSkipToNum;
			if (!bLockLevelAt)
				bWaveSkip = FALSE;
		}
	}

	//kill 1 to advance wave
	if (strcmp(szName, "Function UDKGame.Main.Tick") == 0)
	{
		pMain = ((AMain*)(pObject));

		if (bKillOneToAdvance && pMain && pMain->CurrentKillCountUI)
		{
			if (pMain->CurrentKillCountUI->KillCountRemaining > 1)
				pMain->CurrentKillCountUI->KillCountRemaining = 1;

		}
		if (pMain && bGodMode)
		{
			pMain->bCrystalCoreInvincible = 1;
		}
		else
		{
			pMain->bCrystalCoreInvincible = 0;
		}
		pMain->MaxPlayersAllowed = 10;
		if (heroManager->bRankedRemoteConnectionActive)
		{
			crashObj->NearMoveTarget();
		}
	}
	//lootshower and item modding
	if (strcmp(szName, "Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats") == 0)
	{
		UHeroEquipment* tempweap = ((ADunDefDroppedEquipment*)(pObject))->MyEquipmentObject;
		if (MenuTab == ITEM_MODDING)
		{
			LastDroppedWep = tempweap;
		}
		else
		{
			LastDroppedWep = nullptr;
		}
		if (bAutoPickUp)
		{
			TotalItemsCkd++;
			bool PutItemIn = CheckItemQuality(tempweap, ItemPickUpFilterStats);

			if (PutItemIn)
			{
				heroManager->AddEquipmentObjectToItemBox(((ADunDefPlayer*)(controller->Pawn))->MyPlayerHero, tempweap, 1);
				ItemsAdded++;
			}
		}
		if (LogWeaponStats && plevel)
		{
			std::ofstream file;
			file.open(".\\EquipData.txt", std::ofstream::app);
			file << plevel->waveNumber << " ";
			for (auto t : tempweap->StatModifiers)
			{
				file << t << " ";
			}
			file << "\n";
			file.close();

		}

	}
	//crash check
	if (strcmp(szName, "Function UDKGame.DunDefGameReplicationInfo.IsAtLobbyLevel") == 0) {
		player = nullptr;
		LastDroppedWep = nullptr;
		//GEP = nullptr;
		//TArray< FGiveEquipmentEntry > empty;
		//LastItemEntry = empty;
	}
	//anti cheat
	if (strcmp(szName, "Function UDKGame.DunDefTower.HackerCheck") == 0) {
		printf("[+]Blocked %s\n", szName);
		return;
	}
	if (strcmp(szName, "Function UDKGame.Main.CheckMap") == 0) {
		printf("[+]Blocked %s\n", szName);
		return;
	}
	if (strcmp(szName, "Function UDKGame.Main.SendPlayerStats") == 0) {
		printf("[+]Blocked %s\n", szName);
		return;
	}
	if (strcmp(szName, "Function Engine.LocalPlayer.GetNickname") == 0) {
		printf("[+]Blocked %s\n", szName);
		return;
	}
	if (strcmp(szName, "Function Engine.LocalPlayer.GetUniqueNetId") == 0) {
		printf("[+]Blocked %s\n", szName);
		return;
	}
	if (strcmp(szName, "Function Engine.GameInfo.EnableStandbyCheatDetection") == 0) {
		printf("[+]Blocked %s\n", szName);
		return;
	}
	if (strcmp(szName, "Function UDKGame.Main.KickEveryoneWithWarning") == 0) {
		printf("[+]Blocked %s\n", szName);
		return;
	}
	((tProcessEvent)(ProcEventHook.HookAddr))(pObject, pFunction, pParms, pResult);
}



BOOL APIENTRY OnAttach(HMODULE hModule)
{
	GetKeybinds();
	if (LogToFile)
		myfile.open("D:\\Logging\\DDCheck.txt");
	FILE* f = nullptr;
	if (ConsoleDebug)
	{
		AllocConsole();
		freopen_s(&f, "CONOUT$", "w", stdout);
		std::cout << "[+] Successfully attached to process.\n";
		std::cout << std::hex << "[+] GObjects : " << GObjects << " GNames : " << GNames << std::endl;
	}
	if (GetDevicePointer(d3d9Device, sizeof(d3d9Device))) {
		oScene = (tEndScene)d3d9Device[42];
	}
	if (oScene)
		if (ConsoleDebug)
			std::cout << "[+] Dx9 Virtual Table Found at " << oScene << std::endl;

	gameEngine = (UGameEngine*)GetInstanceOf(UGameEngine::StaticClass());

	if (gameEngine)
	{
		if (ConsoleDebug)
			std::cout << "[+] GameEngine Found.\n";
	}
	else
	{
		if (ConsoleDebug)
			std::cout << "[-] GameEngine Not Found.\n";
	}
	heroManager = (UDunDefHeroManager*)GetInstanceOf(UDunDefHeroManager::StaticClass());



	if (heroManager)
	{
		if (ConsoleDebug)
			std::cout << "[+] heroManager Found.\n";
	}
	else
	{
		if (ConsoleDebug)
			std::cout << "[-] heroManager Not Found.\n";
	}
	//hooks
	oWndProc = (WNDPROC)SetWindowLongPtr(gameHWND, GWL_WNDPROC, (LONG_PTR)WndProc);
	EndSceneHook.UpdateHookAddr(oScene);
	EndSceneHook.HookFunction();
	ProcEventHook.HookFunction();
	ScoreHookObj.HookFunction();
	while (end) {
		if (GetAsyncKeyState(EndKey) & 1)
		{
			if (bEndKeyKeyChangeRequest)
			{
				bEndKeyKeyChangeRequest = FALSE;
			}
			else
			{
				if (ConsoleDebug)
					std::cout << "[+] Closing Cheat\n";
				end = false;
			}
		}
		if (GetAsyncKeyState(ToggleKey) & 1)
		{

			if (bToggleKeyChangeRequest)
			{
				bToggleKeyChangeRequest = FALSE;
			}
			else
			{
				ShowMenu = !ShowMenu;
			}

		}

		if (GetAsyncKeyState(NewTeleportKey) & 1)
		{
			if (NewTeleportKeyKeyChangeRequest)
				NewTeleportKeyKeyChangeRequest = FALSE;
			else
				bGetNewTeleportLocation = TRUE;

		}
		if (GetAsyncKeyState(TeleportPlayerKey) & 1)
		{
			if (TeleportPlayerKeyKeyChangeRequest)
				TeleportPlayerKeyKeyChangeRequest = FALSE;
			else
				bTeleportPlayer = TRUE;
		}


		Sleep(10);
	}
	//unhook
	if (LogToFile)
		myfile.close();

	auto tmp = (WNDPROC)SetWindowLongPtr(gameHWND, GWL_WNDPROC, (LONG_PTR)oWndProc);
	EndSceneHook.UnHookFunction();
	ProcEventHook.UnHookFunction();
	ScoreHookObj.UnHookFunction();
	if (ConsoleDebug)
	{
		std::cout << "[+] Safe to close this window.\n";
		fclose(f);
		FreeConsole();
	}
	FreeLibraryAndExitThread(hModule, 0);
	return 0;
}


BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, hModule, 0, NULL);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}


