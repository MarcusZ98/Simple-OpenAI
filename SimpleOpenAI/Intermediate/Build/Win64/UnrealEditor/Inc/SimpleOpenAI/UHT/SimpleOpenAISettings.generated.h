// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleOpenAISettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEOPENAI_SimpleOpenAISettings_generated_h
#error "SimpleOpenAISettings.generated.h already included, missing '#pragma once' in SimpleOpenAISettings.h"
#endif
#define SIMPLEOPENAI_SimpleOpenAISettings_generated_h

#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleOpenAISettings(); \
	friend struct Z_Construct_UClass_USimpleOpenAISettings_Statics; \
public: \
	DECLARE_CLASS(USimpleOpenAISettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleOpenAI"), NO_API) \
	DECLARE_SERIALIZER(USimpleOpenAISettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleOpenAISettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleOpenAISettings(USimpleOpenAISettings&&); \
	USimpleOpenAISettings(const USimpleOpenAISettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleOpenAISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleOpenAISettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleOpenAISettings) \
	NO_API virtual ~USimpleOpenAISettings();


#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_14_PROLOG
#define FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEOPENAI_API UClass* StaticClass<class USimpleOpenAISettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h


#define FOREACH_ENUM_EOPENAIMODEL(op) \
	op(EOpenAIModel::Gpt35Turbo) \
	op(EOpenAIModel::Gpt4) \
	op(EOpenAIModel::Gpt4Turbo) 

enum class EOpenAIModel : uint8;
template<> struct TIsUEnumClass<EOpenAIModel> { enum { Value = true }; };
template<> SIMPLEOPENAI_API UEnum* StaticEnum<EOpenAIModel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
