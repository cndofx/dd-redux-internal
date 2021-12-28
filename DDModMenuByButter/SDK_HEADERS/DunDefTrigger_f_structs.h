/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefTrigger_f_structs.h
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

// Function DunDefTrigger.DunDefTrigger.GetActivationOffset
// [0x00020102] 
struct ADunDefTrigger_execGetActivationOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefTrigger.DunDefTrigger.GetActivationWeighting
// [0x00020102] 
struct ADunDefTrigger_execGetActivationWeighting_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefTrigger.DunDefTrigger.Client_Activate
// [0x00024100] 
struct ADunDefTrigger_execClient_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefTrigger.DunDefTrigger.UpdateActivationTime
// [0x00020102] 
struct ADunDefTrigger_execUpdateActivationTime_Parms
{
};

// Function DunDefTrigger.DunDefTrigger.Server_Activate
// [0x00024002] 
struct ADunDefTrigger_execServer_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      forceActivation : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                activationType;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefTrigger.DunDefTrigger.AllowActivation
// [0x00024102] 
struct ADunDefTrigger_execAllowActivation_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefTrigger.DunDefTrigger.GetToolTipPriority
// [0x00020102] 
struct ADunDefTrigger_execGetToolTipPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefTrigger.DunDefTrigger.TakesToolTipPriority
// [0x00020102] 
struct ADunDefTrigger_execTakesToolTipPriority_Parms
{
	class UDunDefToolTipInterface*                     otherToolTip;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefTrigger.DunDefTrigger.DrawToolTip
// [0x00824102] 
struct ADunDefTrigger_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  DrawCoords;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           canvasScale;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ActivationResult;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FString                                  StringToDisplay;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefTrigger.DunDefTrigger.ContinueDrawingToolTip
// [0x00020102] 
struct ADunDefTrigger_execContinueDrawingToolTip_Parms
{
	unsigned long                                      ContinueDrawing : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefTrigger.DunDefTrigger.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTrigger_eventPostBeginPlay_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif