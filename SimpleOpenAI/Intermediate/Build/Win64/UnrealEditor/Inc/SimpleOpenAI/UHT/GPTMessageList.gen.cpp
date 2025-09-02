// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleOpenAI/Public/GPTMessageList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPTMessageList() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTMessageList();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTMessageList_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleOpenAI();
// End Cross Module References

// Begin Class UGPTMessageList
void UGPTMessageList::StaticRegisterNativesUGPTMessageList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPTMessageList);
UClass* Z_Construct_UClass_UGPTMessageList_NoRegister()
{
	return UGPTMessageList::StaticClass();
}
struct Z_Construct_UClass_UGPTMessageList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GPTMessageList.h" },
		{ "ModuleRelativePath", "Public/GPTMessageList.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPTMessageList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPTMessageList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOpenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTMessageList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPTMessageList_Statics::ClassParams = {
	&UGPTMessageList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTMessageList_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPTMessageList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPTMessageList()
{
	if (!Z_Registration_Info_UClass_UGPTMessageList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPTMessageList.OuterSingleton, Z_Construct_UClass_UGPTMessageList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPTMessageList.OuterSingleton;
}
template<> SIMPLEOPENAI_API UClass* StaticClass<UGPTMessageList>()
{
	return UGPTMessageList::StaticClass();
}
UGPTMessageList::UGPTMessageList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPTMessageList);
UGPTMessageList::~UGPTMessageList() {}
// End Class UGPTMessageList

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTMessageList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPTMessageList, UGPTMessageList::StaticClass, TEXT("UGPTMessageList"), &Z_Registration_Info_UClass_UGPTMessageList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPTMessageList), 3708459675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTMessageList_h_252448834(TEXT("/Script/SimpleOpenAI"),
	Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTMessageList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTMessageList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
