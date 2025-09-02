// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleOpenAI/Public/GPTRequestAsyncAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPTRequestAsyncAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTMessageList_NoRegister();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTRequestAsyncAction();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTRequestAsyncAction_NoRegister();
SIMPLEOPENAI_API UFunction* Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature();
SIMPLEOPENAI_API UFunction* Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SimpleOpenAI();
// End Cross Module References

// Begin Delegate FGPTResponseReceived
struct Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics
{
	struct _Script_SimpleOpenAI_eventGPTResponseReceived_Parms
	{
		FString ResponseText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GPTRequestAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::NewProp_ResponseText = { "ResponseText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOpenAI_eventGPTResponseReceived_Parms, ResponseText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseText_MetaData), NewProp_ResponseText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::NewProp_ResponseText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleOpenAI, nullptr, "GPTResponseReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::_Script_SimpleOpenAI_eventGPTResponseReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::_Script_SimpleOpenAI_eventGPTResponseReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGPTResponseReceived_DelegateWrapper(const FMulticastScriptDelegate& GPTResponseReceived, const FString& ResponseText)
{
	struct _Script_SimpleOpenAI_eventGPTResponseReceived_Parms
	{
		FString ResponseText;
	};
	_Script_SimpleOpenAI_eventGPTResponseReceived_Parms Parms;
	Parms.ResponseText=ResponseText;
	GPTResponseReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGPTResponseReceived

// Begin Delegate FGPTResponseFailed
struct Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GPTRequestAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleOpenAI, nullptr, "GPTResponseFailed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGPTResponseFailed_DelegateWrapper(const FMulticastScriptDelegate& GPTResponseFailed)
{
	GPTResponseFailed.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FGPTResponseFailed

// Begin Class UGPTRequestAsyncAction Function SendChatMessage
struct Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics
{
	struct GPTRequestAsyncAction_eventSendChatMessage_Parms
	{
		UObject* WorldContextObject;
		FString UserMessage;
		FString BehaviorPrompt;
		UGPTRequestAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleOpenAI" },
		{ "ModuleRelativePath", "Public/GPTRequestAsyncAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BehaviorPrompt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPTRequestAsyncAction_eventSendChatMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_UserMessage = { "UserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPTRequestAsyncAction_eventSendChatMessage_Parms, UserMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_BehaviorPrompt = { "BehaviorPrompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPTRequestAsyncAction_eventSendChatMessage_Parms, BehaviorPrompt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPTRequestAsyncAction_eventSendChatMessage_Parms, ReturnValue), Z_Construct_UClass_UGPTRequestAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_UserMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_BehaviorPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPTRequestAsyncAction, nullptr, "SendChatMessage", nullptr, nullptr, Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::GPTRequestAsyncAction_eventSendChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::GPTRequestAsyncAction_eventSendChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPTRequestAsyncAction::execSendChatMessage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserMessage);
	P_GET_PROPERTY(FStrProperty,Z_Param_BehaviorPrompt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGPTRequestAsyncAction**)Z_Param__Result=UGPTRequestAsyncAction::SendChatMessage(Z_Param_WorldContextObject,Z_Param_UserMessage,Z_Param_BehaviorPrompt);
	P_NATIVE_END;
}
// End Class UGPTRequestAsyncAction Function SendChatMessage

// Begin Class UGPTRequestAsyncAction
void UGPTRequestAsyncAction::StaticRegisterNativesUGPTRequestAsyncAction()
{
	UClass* Class = UGPTRequestAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendChatMessage", &UGPTRequestAsyncAction::execSendChatMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPTRequestAsyncAction);
UClass* Z_Construct_UClass_UGPTRequestAsyncAction_NoRegister()
{
	return UGPTRequestAsyncAction::StaticClass();
}
struct Z_Construct_UClass_UGPTRequestAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPTRequestAsyncAction.h" },
		{ "ModuleRelativePath", "Public/GPTRequestAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPTRequestAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPTRequestAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageList_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPTRequestAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGPTRequestAsyncAction_SendChatMessage, "SendChatMessage" }, // 1308474512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPTRequestAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGPTRequestAsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTRequestAsyncAction, OnSuccess), Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3822781339
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGPTRequestAsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTRequestAsyncAction, OnFailure), Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3796014815
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGPTRequestAsyncAction_Statics::NewProp_MessageList = { "MessageList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTRequestAsyncAction, MessageList), Z_Construct_UClass_UGPTMessageList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageList_MetaData), NewProp_MessageList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGPTRequestAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTRequestAsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTRequestAsyncAction_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTRequestAsyncAction_Statics::NewProp_MessageList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTRequestAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGPTRequestAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOpenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTRequestAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPTRequestAsyncAction_Statics::ClassParams = {
	&UGPTRequestAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGPTRequestAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGPTRequestAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTRequestAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPTRequestAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPTRequestAsyncAction()
{
	if (!Z_Registration_Info_UClass_UGPTRequestAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPTRequestAsyncAction.OuterSingleton, Z_Construct_UClass_UGPTRequestAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPTRequestAsyncAction.OuterSingleton;
}
template<> SIMPLEOPENAI_API UClass* StaticClass<UGPTRequestAsyncAction>()
{
	return UGPTRequestAsyncAction::StaticClass();
}
UGPTRequestAsyncAction::UGPTRequestAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPTRequestAsyncAction);
UGPTRequestAsyncAction::~UGPTRequestAsyncAction() {}
// End Class UGPTRequestAsyncAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPTRequestAsyncAction, UGPTRequestAsyncAction::StaticClass, TEXT("UGPTRequestAsyncAction"), &Z_Registration_Info_UClass_UGPTRequestAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPTRequestAsyncAction), 2621842509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_2503794575(TEXT("/Script/SimpleOpenAI"),
	Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTRequestAsyncAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
