// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleOpenAI_init() {}
	SIMPLEOPENAI_API UFunction* Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature();
	SIMPLEOPENAI_API UFunction* Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleOpenAI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleOpenAI()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleOpenAI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleOpenAI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x217357E1,
				0xBA65BF79,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleOpenAI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleOpenAI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleOpenAI(Z_Construct_UPackage__Script_SimpleOpenAI, TEXT("/Script/SimpleOpenAI"), Z_Registration_Info_UPackage__Script_SimpleOpenAI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x217357E1, 0xBA65BF79));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
