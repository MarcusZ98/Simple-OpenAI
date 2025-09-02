#pragma once

#include "CoreMinimal.h"
#include "GPTRequestAsyncAction.h"
#include "SimpleOpenAISettings.h"
#include "Components/ActorComponent.h"
#include "SimpleOpenAILog.h"
#include "GPTChatComponent.generated.h"

class UGPTMessageList;

UCLASS(ClassGroup=(AI), meta=(BlueprintSpawnableComponent))
class SIMPLEOPENAI_API UGPTChatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UGPTChatComponent();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "GPT")
	TArray<FString> GetChatHistoryAsText() const;
	
	/** Called to send user message */
	UFUNCTION(BlueprintCallable, Category = "GPT")
	void SendMessage(const FString& UserMessage);

	UFUNCTION(BlueprintCallable, Category = "GPT")
	void ClearChatHistory();

	UPROPERTY(BlueprintAssignable)
	FGPTResponseReceived ResponseReceived;
	
	/** Optional: Set NPC-specific personality */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GPT", meta = (MultiLine = true))
	FString BehaviorPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GPT")
	bool bSaveDialogueHistory  = false;
	
	/** Model to use for completions */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GPT", meta=(EditCondition="!bUseCustomModel"))
	EOpenAIModel ModelEnum = GetDefault<USimpleOpenAISettings>()->DefaultModel;

	/** Use custom model or predefined from dropdown */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GPT")
	bool bUseCustomModel = false;

	/** Define name of Open AI model to use */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GPT", meta=(EditCondition="bUseCustomModel"))
	FString CustomModelName;


private:

	UPROPERTY()
	UGPTMessageList* MessageList;
	FString ModelName;
	
	UFUNCTION()
	void HandleResponse(const FString& Reply);
	
};
