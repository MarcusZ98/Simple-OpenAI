// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPTRequestAsyncAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGPTRequestAsyncAction;
class UObject;
#ifdef SIMPLEOPENAI_GPTRequestAsyncAction_generated_h
#error "GPTRequestAsyncAction.generated.h already included, missing '#pragma once' in GPTRequestAsyncAction.h"
#endif
#define SIMPLEOPENAI_GPTRequestAsyncAction_generated_h

#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_12_DELEGATE \
SIMPLEOPENAI_API void FGPTResponseReceived_DelegateWrapper(const FMulticastScriptDelegate& GPTResponseReceived, const FString& ResponseText);


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_13_DELEGATE \
SIMPLEOPENAI_API void FGPTResponseFailed_DelegateWrapper(const FMulticastScriptDelegate& GPTResponseFailed);


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendChatMessage);


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGPTRequestAsyncAction(); \
	friend struct Z_Construct_UClass_UGPTRequestAsyncAction_Statics; \
public: \
	DECLARE_CLASS(UGPTRequestAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleOpenAI"), NO_API) \
	DECLARE_SERIALIZER(UGPTRequestAsyncAction)


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGPTRequestAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGPTRequestAsyncAction(UGPTRequestAsyncAction&&); \
	UGPTRequestAsyncAction(const UGPTRequestAsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGPTRequestAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGPTRequestAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGPTRequestAsyncAction) \
	NO_API virtual ~UGPTRequestAsyncAction();


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_15_PROLOG
#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEOPENAI_API UClass* StaticClass<class UGPTRequestAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
