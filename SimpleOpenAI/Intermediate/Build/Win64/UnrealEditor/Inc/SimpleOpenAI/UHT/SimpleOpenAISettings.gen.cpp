// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleOpenAI/Public/SimpleOpenAISettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleOpenAISettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_USimpleOpenAISettings();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_USimpleOpenAISettings_NoRegister();
SIMPLEOPENAI_API UEnum* Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel();
UPackage* Z_Construct_UPackage__Script_SimpleOpenAI();
// End Cross Module References

// Begin Enum EOpenAIModel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenAIModel;
static UEnum* EOpenAIModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOpenAIModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOpenAIModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel, (UObject*)Z_Construct_UPackage__Script_SimpleOpenAI(), TEXT("EOpenAIModel"));
	}
	return Z_Registration_Info_UEnum_EOpenAIModel.OuterSingleton;
}
template<> SIMPLEOPENAI_API UEnum* StaticEnum<EOpenAIModel>()
{
	return EOpenAIModel_StaticEnum();
}
struct Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gpt35Turbo.DisplayName", "gpt-3.5-turbo" },
		{ "Gpt35Turbo.Name", "EOpenAIModel::Gpt35Turbo" },
		{ "Gpt4.DisplayName", "gpt-4" },
		{ "Gpt4.Name", "EOpenAIModel::Gpt4" },
		{ "Gpt4Turbo.DisplayName", "gpt-4-turbo" },
		{ "Gpt4Turbo.Name", "EOpenAIModel::Gpt4Turbo" },
		{ "ModuleRelativePath", "Public/SimpleOpenAISettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOpenAIModel::Gpt35Turbo", (int64)EOpenAIModel::Gpt35Turbo },
		{ "EOpenAIModel::Gpt4", (int64)EOpenAIModel::Gpt4 },
		{ "EOpenAIModel::Gpt4Turbo", (int64)EOpenAIModel::Gpt4Turbo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleOpenAI,
	nullptr,
	"EOpenAIModel",
	"EOpenAIModel",
	Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel()
{
	if (!Z_Registration_Info_UEnum_EOpenAIModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenAIModel.InnerSingleton, Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOpenAIModel.InnerSingleton;
}
// End Enum EOpenAIModel

// Begin Class USimpleOpenAISettings
void USimpleOpenAISettings::StaticRegisterNativesUSimpleOpenAISettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleOpenAISettings);
UClass* Z_Construct_UClass_USimpleOpenAISettings_NoRegister()
{
	return USimpleOpenAISettings::StaticClass();
}
struct Z_Construct_UClass_USimpleOpenAISettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleOpenAISettings.h" },
		{ "KismetHideOverrides", "GetDefaultConfigName" },
		{ "ModuleRelativePath", "Public/SimpleOpenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[] = {
		{ "Category", "API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Your OpenAI API key. You can get one from https://platform.openai.com/account/api-keys */" },
#endif
		{ "DisplayName", "OpenAI API Key" },
		{ "ModuleRelativePath", "Public/SimpleOpenAISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Your OpenAI API key. You can get one from https://platform.openai.com/account/api-keys" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomModel_MetaData[] = {
		{ "Category", "GPT" },
		{ "ModuleRelativePath", "Public/SimpleOpenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultModel_MetaData[] = {
		{ "Category", "GPT" },
		{ "EditCondition", "!bUseCustomModel" },
		{ "ModuleRelativePath", "Public/SimpleOpenAISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomModelName_MetaData[] = {
		{ "Category", "GPT" },
		{ "EditCondition", "bUseCustomModel" },
		{ "ModuleRelativePath", "Public/SimpleOpenAISettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
	static void NewProp_bUseCustomModel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomModelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleOpenAISettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleOpenAISettings, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKey_MetaData), NewProp_ApiKey_MetaData) };
void Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_bUseCustomModel_SetBit(void* Obj)
{
	((USimpleOpenAISettings*)Obj)->bUseCustomModel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_bUseCustomModel = { "bUseCustomModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleOpenAISettings), &Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_bUseCustomModel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomModel_MetaData), NewProp_bUseCustomModel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_DefaultModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_DefaultModel = { "DefaultModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleOpenAISettings, DefaultModel), Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultModel_MetaData), NewProp_DefaultModel_MetaData) }; // 3211058408
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_CustomModelName = { "CustomModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleOpenAISettings, CustomModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomModelName_MetaData), NewProp_CustomModelName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleOpenAISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_ApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_bUseCustomModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_DefaultModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_DefaultModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOpenAISettings_Statics::NewProp_CustomModelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOpenAISettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleOpenAISettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOpenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOpenAISettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleOpenAISettings_Statics::ClassParams = {
	&USimpleOpenAISettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleOpenAISettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOpenAISettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOpenAISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleOpenAISettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleOpenAISettings()
{
	if (!Z_Registration_Info_UClass_USimpleOpenAISettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleOpenAISettings.OuterSingleton, Z_Construct_UClass_USimpleOpenAISettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleOpenAISettings.OuterSingleton;
}
template<> SIMPLEOPENAI_API UClass* StaticClass<USimpleOpenAISettings>()
{
	return USimpleOpenAISettings::StaticClass();
}
USimpleOpenAISettings::USimpleOpenAISettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleOpenAISettings);
USimpleOpenAISettings::~USimpleOpenAISettings() {}
// End Class USimpleOpenAISettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOpenAIModel_StaticEnum, TEXT("EOpenAIModel"), &Z_Registration_Info_UEnum_EOpenAIModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3211058408U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleOpenAISettings, USimpleOpenAISettings::StaticClass, TEXT("USimpleOpenAISettings"), &Z_Registration_Info_UClass_USimpleOpenAISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleOpenAISettings), 1682763416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_1438813911(TEXT("/Script/SimpleOpenAI"),
	Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_SimpleOpenAISettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
