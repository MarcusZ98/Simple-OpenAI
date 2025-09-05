// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HttpFwd.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GPTRequestAsyncAction.generated.h"

class UGPTMessageList;
enum class EOpenAIModel : uint8;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGPTResponseReceived, const FString&, ResponseText);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGPTResponseFailed);

UCLASS()
class SIMPLEOPENAI_API UGPTRequestAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FGPTResponseReceived OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FGPTResponseFailed OnFailure;      

	UFUNCTION(BlueprintCallable,
		meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"),
		Category = "SimpleOpenAI")
	static UGPTRequestAsyncAction* SendChatMessage(UObject* WorldContextObject, FString UserMessage, FString BehaviorPrompt);

	
	static UGPTRequestAsyncAction* SendChatMessageWithHistory(UObject* WorldContextObject, UGPTMessageList* Ml, FString Model);
	static UGPTRequestAsyncAction* CreateAction(UObject* WorldContextObject, UGPTMessageList* Ml, FString Model);
	virtual void Activate() override;

private:
	UPROPERTY()
	UGPTMessageList* MessageList;
	UPROPERTY()
	FString Model;

	void HandleResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
