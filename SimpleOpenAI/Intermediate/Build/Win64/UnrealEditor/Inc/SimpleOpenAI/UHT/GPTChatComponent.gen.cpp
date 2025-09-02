// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleOpenAI/Public/GPTChatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPTChatComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTChatComponent();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTChatComponent_NoRegister();
SIMPLEOPENAI_API UClass* Z_Construct_UClass_UGPTMessageList_NoRegister();
SIMPLEOPENAI_API UEnum* Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel();
SIMPLEOPENAI_API UFunction* Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SimpleOpenAI();
// End Cross Module References

// Begin Class UGPTChatComponent Function ClearChatHistory
struct Z_Construct_UFunction_UGPTChatComponent_ClearChatHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPT" },
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPTChatComponent_ClearChatHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPTChatComponent, nullptr, "ClearChatHistory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_ClearChatHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPTChatComponent_ClearChatHistory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGPTChatComponent_ClearChatHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPTChatComponent_ClearChatHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPTChatComponent::execClearChatHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearChatHistory();
	P_NATIVE_END;
}
// End Class UGPTChatComponent Function ClearChatHistory

// Begin Class UGPTChatComponent Function GetChatHistoryAsText
struct Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics
{
	struct GPTChatComponent_eventGetChatHistoryAsText_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPT" },
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPTChatComponent_eventGetChatHistoryAsText_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPTChatComponent, nullptr, "GetChatHistoryAsText", nullptr, nullptr, Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::GPTChatComponent_eventGetChatHistoryAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::GPTChatComponent_eventGetChatHistoryAsText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPTChatComponent::execGetChatHistoryAsText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetChatHistoryAsText();
	P_NATIVE_END;
}
// End Class UGPTChatComponent Function GetChatHistoryAsText

// Begin Class UGPTChatComponent Function HandleResponse
struct Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics
{
	struct GPTChatComponent_eventHandleResponse_Parms
	{
		FString Reply;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPTChatComponent_eventHandleResponse_Parms, Reply), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reply_MetaData), NewProp_Reply_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::NewProp_Reply,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPTChatComponent, nullptr, "HandleResponse", nullptr, nullptr, Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::GPTChatComponent_eventHandleResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::GPTChatComponent_eventHandleResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPTChatComponent_HandleResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPTChatComponent_HandleResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPTChatComponent::execHandleResponse)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Reply);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResponse(Z_Param_Reply);
	P_NATIVE_END;
}
// End Class UGPTChatComponent Function HandleResponse

// Begin Class UGPTChatComponent Function SendMessage
struct Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics
{
	struct GPTChatComponent_eventSendMessage_Parms
	{
		FString UserMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to send user message */" },
#endif
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to send user message" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::NewProp_UserMessage = { "UserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPTChatComponent_eventSendMessage_Parms, UserMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMessage_MetaData), NewProp_UserMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::NewProp_UserMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPTChatComponent, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::GPTChatComponent_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::GPTChatComponent_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPTChatComponent_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPTChatComponent_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPTChatComponent::execSendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMessage(Z_Param_UserMessage);
	P_NATIVE_END;
}
// End Class UGPTChatComponent Function SendMessage

// Begin Class UGPTChatComponent
void UGPTChatComponent::StaticRegisterNativesUGPTChatComponent()
{
	UClass* Class = UGPTChatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearChatHistory", &UGPTChatComponent::execClearChatHistory },
		{ "GetChatHistoryAsText", &UGPTChatComponent::execGetChatHistoryAsText },
		{ "HandleResponse", &UGPTChatComponent::execHandleResponse },
		{ "SendMessage", &UGPTChatComponent::execSendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPTChatComponent);
UClass* Z_Construct_UClass_UGPTChatComponent_NoRegister()
{
	return UGPTChatComponent::StaticClass();
}
struct Z_Construct_UClass_UGPTChatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "GPTChatComponent.h" },
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorPrompt_MetaData[] = {
		{ "Category", "GPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional: Set NPC-specific personality */" },
#endif
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: Set NPC-specific personality" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveDialogueHistory_MetaData[] = {
		{ "Category", "GPT" },
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelEnum_MetaData[] = {
		{ "Category", "GPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Model to use for completions */" },
#endif
		{ "EditCondition", "!bUseCustomModel" },
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Model to use for completions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomModel_MetaData[] = {
		{ "Category", "GPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use custom model or predefined from dropdown */" },
#endif
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use custom model or predefined from dropdown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomModelName_MetaData[] = {
		{ "Category", "GPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Define name of Open AI model to use */" },
#endif
		{ "EditCondition", "bUseCustomModel" },
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define name of Open AI model to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageList_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPTChatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResponseReceived;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BehaviorPrompt;
	static void NewProp_bSaveDialogueHistory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveDialogueHistory;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModelEnum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModelEnum;
	static void NewProp_bUseCustomModel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomModelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGPTChatComponent_ClearChatHistory, "ClearChatHistory" }, // 3429304779
		{ &Z_Construct_UFunction_UGPTChatComponent_GetChatHistoryAsText, "GetChatHistoryAsText" }, // 3591956377
		{ &Z_Construct_UFunction_UGPTChatComponent_HandleResponse, "HandleResponse" }, // 3325258879
		{ &Z_Construct_UFunction_UGPTChatComponent_SendMessage, "SendMessage" }, // 3072471275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPTChatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_ResponseReceived = { "ResponseReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTChatComponent, ResponseReceived), Z_Construct_UDelegateFunction_SimpleOpenAI_GPTResponseReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseReceived_MetaData), NewProp_ResponseReceived_MetaData) }; // 3822781339
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_BehaviorPrompt = { "BehaviorPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTChatComponent, BehaviorPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorPrompt_MetaData), NewProp_BehaviorPrompt_MetaData) };
void Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bSaveDialogueHistory_SetBit(void* Obj)
{
	((UGPTChatComponent*)Obj)->bSaveDialogueHistory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bSaveDialogueHistory = { "bSaveDialogueHistory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGPTChatComponent), &Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bSaveDialogueHistory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveDialogueHistory_MetaData), NewProp_bSaveDialogueHistory_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_ModelEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_ModelEnum = { "ModelEnum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTChatComponent, ModelEnum), Z_Construct_UEnum_SimpleOpenAI_EOpenAIModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelEnum_MetaData), NewProp_ModelEnum_MetaData) }; // 3211058408
void Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bUseCustomModel_SetBit(void* Obj)
{
	((UGPTChatComponent*)Obj)->bUseCustomModel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bUseCustomModel = { "bUseCustomModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGPTChatComponent), &Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bUseCustomModel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomModel_MetaData), NewProp_bUseCustomModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_CustomModelName = { "CustomModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTChatComponent, CustomModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomModelName_MetaData), NewProp_CustomModelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_MessageList = { "MessageList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPTChatComponent, MessageList), Z_Construct_UClass_UGPTMessageList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageList_MetaData), NewProp_MessageList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGPTChatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_ResponseReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_BehaviorPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bSaveDialogueHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_ModelEnum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_ModelEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_bUseCustomModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_CustomModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPTChatComponent_Statics::NewProp_MessageList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTChatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGPTChatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOpenAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTChatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPTChatComponent_Statics::ClassParams = {
	&UGPTChatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGPTChatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGPTChatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTChatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPTChatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPTChatComponent()
{
	if (!Z_Registration_Info_UClass_UGPTChatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPTChatComponent.OuterSingleton, Z_Construct_UClass_UGPTChatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPTChatComponent.OuterSingleton;
}
template<> SIMPLEOPENAI_API UClass* StaticClass<UGPTChatComponent>()
{
	return UGPTChatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPTChatComponent);
UGPTChatComponent::~UGPTChatComponent() {}
// End Class UGPTChatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPTChatComponent, UGPTChatComponent::StaticClass, TEXT("UGPTChatComponent"), &Z_Registration_Info_UClass_UGPTChatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPTChatComponent), 2351885824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_4134846927(TEXT("/Script/SimpleOpenAI"),
	Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Eget_SweepOrWeep_Plugins_SimpleOpenAI_Source_SimpleOpenAI_Public_GPTChatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
