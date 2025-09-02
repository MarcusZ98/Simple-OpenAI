#include "SimpleOpenAISettings.h"
#include "Interfaces/IHttpResponse.h"
#include "HttpModule.h"
#include "SimpleOpenAILog.h"

FString USimpleOpenAISettings::GetModelString(const EOpenAIModel Model)
{
	UE_LOG(LogSimpleOpenAI, Log, TEXT("[SimpleOpenAI] Getting model string for: %d"), static_cast<int32>(Model));
	
	switch (Model)
	{
	case EOpenAIModel::Gpt35Turbo:
		return TEXT("gpt-3.5-turbo");
	case EOpenAIModel::Gpt4:
		return TEXT("gpt-4");
	case EOpenAIModel::Gpt4Turbo:
		return TEXT("gpt-4-turbo");
	default:
		return TEXT(""); 
	}
}

void USimpleOpenAISettings::TestApiKey() const
{
	UE_LOG(LogSimpleOpenAI, Log, TEXT("[SimpleOpenAI] Testing API key..."));
	
	FHttpModule& Http = FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http.CreateRequest();
	
	Request->SetURL(TEXT("https://api.openai.com/v1/models"));
	Request->SetVerb("GET");
	Request->SetHeader("Authorization", FString::Printf(TEXT("Bearer %s"), *ApiKey));

	Request->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bSuccess)
	{
		if (!bSuccess || !Resp.IsValid())
		{
			UE_LOG(LogSimpleOpenAI, Warning, TEXT("[SimpleOpenAI] Test API request failed."));
			return;
		}

		if (Resp->GetResponseCode() == 200)
		{
			UE_LOG(LogSimpleOpenAI, Display, TEXT("[SimpleOpenAI] API Test Success"));
		}
		else
		{
			UE_LOG(LogSimpleOpenAI, Warning, TEXT("[SimpleOpenAI] API Test failed with code %d: %s"),
				   Resp->GetResponseCode(), *Resp->GetContentAsString());
		}
	});

	Request->ProcessRequest();
}
