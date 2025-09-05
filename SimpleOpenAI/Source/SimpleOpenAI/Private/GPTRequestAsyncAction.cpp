#include "GPTRequestAsyncAction.h"
#include "GPTMessageList.h"
#include "HttpModule.h"
#include "SimpleOpenAILog.h"
#include "SimpleOpenAISettings.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"

UGPTRequestAsyncAction* UGPTRequestAsyncAction::SendChatMessageWithHistory(UObject* WorldContextObject, UGPTMessageList* Ml, FString Model)
{
	return CreateAction(WorldContextObject, Ml, Model);
}

UGPTRequestAsyncAction* UGPTRequestAsyncAction::SendChatMessage(UObject* WorldContextObject, FString UserMessage, FString BehaviorPrompt = TEXT(""))
{
	// Get model from settings
	const USimpleOpenAISettings* Settings = GetMutableDefault<USimpleOpenAISettings>();
	
	UGPTRequestAsyncAction* Action = CreateAction(WorldContextObject, nullptr, Settings->bUseCustomModel
	? Settings->CustomModelName
	: Settings->GetModelString(Settings->DefaultModel));

	// Set message and behavior prompt
	Action->MessageList = NewObject<UGPTMessageList>(Action);

	Action->MessageList->AddMessage(TEXT("system"), BehaviorPrompt);
	Action->MessageList->AddMessage(TEXT("user"), UserMessage);
	return Action;
}

UGPTRequestAsyncAction* UGPTRequestAsyncAction::CreateAction(UObject* WorldContextObject, UGPTMessageList* Ml, FString Model)
{
	// Get GameInstance from WorldContextObject
	UGameInstance* GameInstance = nullptr;

	if (WorldContextObject)
	{
		if (UWorld* World = WorldContextObject->GetWorld())
		{
			GameInstance = World->GetGameInstance();
		}
	}

	// Create the async action
	UGPTRequestAsyncAction* Action = NewObject<UGPTRequestAsyncAction>(
		GameInstance ? GameInstance : (UObject*)GetTransientPackage());

	Action->MessageList = Ml;
	Action->Model = Model;
	return Action;
}



void UGPTRequestAsyncAction::Activate()
{
	UE_LOG( LogSimpleOpenAI, VeryVerbose, TEXT("[SimpleOpenAI] Activating GPTRequestAsyncAction"));
	
	// Get Project Settings
	const USimpleOpenAISettings* Settings = GetDefault<USimpleOpenAISettings>();
	
	// Check if API key is set in project settings
	const FString& ApiKey = Settings->ApiKey;

	if (ApiKey.IsEmpty())
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[SimpleOpenAI] API key not set in project settings!"));
		OnFailure.Broadcast();
		return;
	}
	
	// Prepare HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(TEXT("https://api.openai.com/v1/chat/completions"));
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/json");
	Request->SetHeader("Authorization", FString::Printf(TEXT("Bearer %s"), *ApiKey));

	
	// Create JSON body for the request
	TSharedPtr<FJsonObject> Json = MakeShareable(new FJsonObject);

	if (Model.IsEmpty())
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[SimpleOpenAI] Model version is empty! Cannot proceed with request. Make sure to set a valid model in the project settings or actor component."));
		OnFailure.Broadcast();
		return;
	}

	Json->SetStringField(TEXT("model"), Model);
	
	// Prepare JSON messages
	
	if (IsValid(MessageList) && !MessageList->GetMessages().IsEmpty())
	{
		Json->SetArrayField(TEXT("messages"), MessageList->GetMessages());
	} else
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[SimpleOpenAI] No messages provided! Cannot proceed with request."));
		OnFailure.Broadcast();
		return;
	}
	
	FString RequestBody;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
	FJsonSerializer::Serialize(Json.ToSharedRef(), Writer);
	
	Request->SetContentAsString(RequestBody);
	Request->OnProcessRequestComplete().BindUObject(this, &UGPTRequestAsyncAction::HandleResponse);
	Request->ProcessRequest();
}

void UGPTRequestAsyncAction::HandleResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[SimpleOpenAI] HTTP request failed or response is invalid."));
		OnFailure.Broadcast();
		return;
	}

	FString JsonStr = Response->GetContentAsString();

	TSharedPtr<FJsonObject> Json;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonStr);
	if (FJsonSerializer::Deserialize(Reader, Json) && Json.IsValid())
	{
		const TArray<TSharedPtr<FJsonValue>>* Choices;
		if (Json->TryGetArrayField(TEXT("choices"), Choices) && Choices->Num() > 0)
		{
			TSharedPtr<FJsonObject> First = (*Choices)[0]->AsObject();
			if (First.IsValid())
			{
				// Read the reply content
				TSharedPtr<FJsonObject> MessageObj = First->GetObjectField(TEXT("message"));
				if (MessageObj.IsValid())
				{
					FString Reply = MessageObj->GetStringField(TEXT("content"));
					OnSuccess.Broadcast(Reply);
					UE_LOG(LogSimpleOpenAI, VeryVerbose, TEXT("[SimpleOpenAI] Received reply: %s"), *Reply);
					return;
				}
			}
		}
	}
	
	UE_LOG(LogSimpleOpenAI, Warning, TEXT("[SimpleOpenAI] Failed to parse response or no valid choices found. Response: %s"), *JsonStr);
	OnFailure.Broadcast();
}


