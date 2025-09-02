#pragma once
#include "CoreMinimal.h"
#include "GPTMessageList.generated.h"

UCLASS(BlueprintType)
class SIMPLEOPENAI_API UGPTMessageList : public UObject
{
	GENERATED_BODY()
public:
	void AddMessage(const FString& Role, const FString& Content);
	void ClearMessages(){ Messages.Empty(); }
	TArray<TSharedPtr<FJsonValue>> GetMessages() const { return Messages; }
	TArray<FString> GetMessagesAsText() const;

private:
	TArray<TSharedPtr<FJsonValue>> Messages;
};
