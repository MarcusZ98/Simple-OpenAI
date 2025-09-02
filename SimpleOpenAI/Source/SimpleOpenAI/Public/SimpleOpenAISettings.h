#pragma once
#include "CoreMinimal.h"
#include "SimpleOpenAISettings.generated.h"

UENUM(BlueprintType)
enum class EOpenAIModel : uint8
{
	Gpt35Turbo	UMETA(DisplayName = "gpt-3.5-turbo"),
	Gpt4		UMETA(DisplayName = "gpt-4"),
	Gpt4Turbo	UMETA(DisplayName = "gpt-4-turbo")
};


UCLASS(Config=Game, defaultconfig, meta=(KismetHideOverrides="GetDefaultConfigName"))
class SIMPLEOPENAI_API USimpleOpenAISettings : public UObject
{
GENERATED_BODY()

public:

	/** Your OpenAI API key. You can get one from https://platform.openai.com/account/api-keys */
	UPROPERTY(Config, EditAnywhere, Category="API", meta=(DisplayName="OpenAI API Key"))
	FString ApiKey = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GPT")
	bool bUseCustomModel = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GPT", meta=(EditCondition="!bUseCustomModel"))
	EOpenAIModel DefaultModel = EOpenAIModel::Gpt35Turbo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GPT", meta=(EditCondition="bUseCustomModel"))
	FString CustomModelName;
	
	/** Returns the selected model as a string */
	static FString GetModelString(EOpenAIModel Model);

	void TestApiKey() const;
	
};
