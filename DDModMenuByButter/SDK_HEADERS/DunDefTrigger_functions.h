/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefTrigger_functions.h
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

// Function DunDefTrigger.DunDefTrigger.GetActivationOffset
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTrigger::GetActivationOffset ( )
{
	static UFunction* pFnGetActivationOffset = NULL;

	if ( ! pFnGetActivationOffset )
		pFnGetActivationOffset = (UFunction*) UObject::GObjObjects()->Data[ 202015 ];

	ADunDefTrigger_execGetActivationOffset_Parms GetActivationOffset_Parms;

	this->ProcessEvent ( pFnGetActivationOffset, &GetActivationOffset_Parms, NULL );

	return GetActivationOffset_Parms.ReturnValue;
};

// Function DunDefTrigger.DunDefTrigger.GetActivationWeighting
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTrigger::GetActivationWeighting ( )
{
	static UFunction* pFnGetActivationWeighting = NULL;

	if ( ! pFnGetActivationWeighting )
		pFnGetActivationWeighting = (UFunction*) UObject::GObjObjects()->Data[ 202017 ];

	ADunDefTrigger_execGetActivationWeighting_Parms GetActivationWeighting_Parms;

	this->ProcessEvent ( pFnGetActivationWeighting, &GetActivationWeighting_Parms, NULL );

	return GetActivationWeighting_Parms.ReturnValue;
};

// Function DunDefTrigger.DunDefTrigger.Client_Activate
// [0x00024100] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefTrigger::Client_Activate ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnClient_Activate = NULL;

	if ( ! pFnClient_Activate )
		pFnClient_Activate = (UFunction*) UObject::GObjObjects()->Data[ 202020 ];

	ADunDefTrigger_execClient_Activate_Parms Client_Activate_Parms;
	Client_Activate_Parms.PC = PC;
	Client_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnClient_Activate, &Client_Activate_Parms, NULL );
};

// Function DunDefTrigger.DunDefTrigger.UpdateActivationTime
// [0x00020102] 
// Parameters infos:

void ADunDefTrigger::UpdateActivationTime ( )
{
	static UFunction* pFnUpdateActivationTime = NULL;

	if ( ! pFnUpdateActivationTime )
		pFnUpdateActivationTime = (UFunction*) UObject::GObjObjects()->Data[ 202021 ];

	ADunDefTrigger_execUpdateActivationTime_Parms UpdateActivationTime_Parms;

	this->ProcessEvent ( pFnUpdateActivationTime, &UpdateActivationTime_Parms, NULL );
};

// Function DunDefTrigger.DunDefTrigger.Server_Activate
// [0x00024002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// unsigned long                  forceActivation                ( CPF_OptionalParm | CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefTrigger::Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType )
{
	static UFunction* pFnServer_Activate = NULL;

	if ( ! pFnServer_Activate )
		pFnServer_Activate = (UFunction*) UObject::GObjObjects()->Data[ 202025 ];

	ADunDefTrigger_execServer_Activate_Parms Server_Activate_Parms;
	Server_Activate_Parms.PC = PC;
	Server_Activate_Parms.forceActivation = forceActivation;
	Server_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnServer_Activate, &Server_Activate_Parms, NULL );
};

// Function DunDefTrigger.DunDefTrigger.AllowActivation
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

int ADunDefTrigger::AllowActivation ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnAllowActivation = NULL;

	if ( ! pFnAllowActivation )
		pFnAllowActivation = (UFunction*) UObject::GObjObjects()->Data[ 202029 ];

	ADunDefTrigger_execAllowActivation_Parms AllowActivation_Parms;
	AllowActivation_Parms.PC = PC;
	AllowActivation_Parms.activationType = activationType;

	this->ProcessEvent ( pFnAllowActivation, &AllowActivation_Parms, NULL );

	return AllowActivation_Parms.ReturnValue;
};

// Function DunDefTrigger.DunDefTrigger.GetToolTipPriority
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefTrigger::GetToolTipPriority ( )
{
	static UFunction* pFnGetToolTipPriority = NULL;

	if ( ! pFnGetToolTipPriority )
		pFnGetToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 202031 ];

	ADunDefTrigger_execGetToolTipPriority_Parms GetToolTipPriority_Parms;

	this->ProcessEvent ( pFnGetToolTipPriority, &GetToolTipPriority_Parms, NULL );

	return GetToolTipPriority_Parms.ReturnValue;
};

// Function DunDefTrigger.DunDefTrigger.TakesToolTipPriority
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefToolTipInterface* otherToolTip                   ( CPF_Parm )

bool ADunDefTrigger::TakesToolTipPriority ( class UDunDefToolTipInterface* otherToolTip )
{
	static UFunction* pFnTakesToolTipPriority = NULL;

	if ( ! pFnTakesToolTipPriority )
		pFnTakesToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 202034 ];

	ADunDefTrigger_execTakesToolTipPriority_Parms TakesToolTipPriority_Parms;
	TakesToolTipPriority_Parms.otherToolTip = otherToolTip;

	this->ProcessEvent ( pFnTakesToolTipPriority, &TakesToolTipPriority_Parms, NULL );

	return TakesToolTipPriority_Parms.ReturnValue;
};

// Function DunDefTrigger.DunDefTrigger.DrawToolTip
// [0x00824102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefTrigger::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 202043 ];

	ADunDefTrigger_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefTrigger.DunDefTrigger.ContinueDrawingToolTip
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  ContinueDrawing                ( CPF_Parm )

bool ADunDefTrigger::ContinueDrawingToolTip ( unsigned long ContinueDrawing )
{
	static UFunction* pFnContinueDrawingToolTip = NULL;

	if ( ! pFnContinueDrawingToolTip )
		pFnContinueDrawingToolTip = (UFunction*) UObject::GObjObjects()->Data[ 202046 ];

	ADunDefTrigger_execContinueDrawingToolTip_Parms ContinueDrawingToolTip_Parms;
	ContinueDrawingToolTip_Parms.ContinueDrawing = ContinueDrawing;

	this->ProcessEvent ( pFnContinueDrawingToolTip, &ContinueDrawingToolTip_Parms, NULL );

	return ContinueDrawingToolTip_Parms.ReturnValue;
};

// Function DunDefTrigger.DunDefTrigger.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTrigger::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 202047 ];

	ADunDefTrigger_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif