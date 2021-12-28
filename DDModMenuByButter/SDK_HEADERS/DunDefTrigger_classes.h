/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefTrigger_classes.h
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

// Class DunDefTrigger.DunDefTrigger
// 0x0064 (0x0280 - 0x021C)
class ADunDefTrigger : public ATrigger
{
public:
	struct FColor                                      ToolTipDrawColor;                                 		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ToolTipOutOfRangeColor;                           		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ToolTipText;                                      		// 0x0224 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ActivationString;                                 		// 0x0230 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ActivationDistance;                               		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActivationInterval;                               		// 0x0240 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActivationWeighting;                              		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActivationOffset;                                 		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActivationCost;                                   		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ActivationCostDifficultyMultipliers;              		// 0x0250 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      ActivationCostUsageMultipliers;                   		// 0x025C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIncreaseCostPerUse : 1;                          		// 0x0268 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bActivateOnlyInCombat : 1;                        		// 0x0268 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bActivateOnlyForHost : 1;                         		// 0x0268 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FString                                     ActivationBuildPhaseString;                       		// 0x026C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                NumActivations;                                   		// 0x0278 (0x0004) [0x0000000000000000]              
	float                                              LastActivationTime;                               		// 0x027C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 202067 ];

		return pClassPointer;
	};

	float GetActivationOffset ( );
	float GetActivationWeighting ( );
	void Client_Activate ( class ADunDefPlayerController* PC, int activationType );
	void UpdateActivationTime ( );
	void Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType );
	int AllowActivation ( class ADunDefPlayerController* PC, int activationType );
	int GetToolTipPriority ( );
	bool TakesToolTipPriority ( class UDunDefToolTipInterface* otherToolTip );
	void DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer );
	bool ContinueDrawingToolTip ( unsigned long ContinueDrawing );
	void eventPostBeginPlay ( );
};

UClass* ADunDefTrigger::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif