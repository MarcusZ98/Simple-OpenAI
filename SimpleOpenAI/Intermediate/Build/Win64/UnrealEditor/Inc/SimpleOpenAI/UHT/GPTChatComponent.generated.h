// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPTChatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEOPENAI_GPTChatComponent_generated_h
#error "GPTChatComponent.generated.h already included, missing '#pragma once' in GPTChatComponent.h"
#endif
#define SIMPLEOPENAI_GPTChatComponent_generated_h

#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleResponse); \
	DECLARE_FUNCTION(execClearChatHistory); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execGetChatHistoryAsText);


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGPTChatComponent(); \
	friend struct Z_Construct_UClass_UGPTChatComponent_Statics; \
public: \
	DECLARE_CLASS(UGPTChatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleOpenAI"), NO_API) \
	DECLARE_SERIALIZER(UGPTChatComponent)


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGPTChatComponent(UGPTChatComponent&&); \
	UGPTChatComponent(const UGPTChatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGPTChatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGPTChatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGPTChatComponent) \
	NO_API virtual ~UGPTChatComponent();


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_12_PROLOG
#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEOPENAI_API UClass* StaticClass<class UGPTChatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
