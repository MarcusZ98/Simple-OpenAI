#include "GPTChatComponent.h"
#include "GPTMessageList.h"
#include "GPTRequestAsyncAction.h"

UGPTChatComponent::UGPTChatComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UGPTChatComponent::BeginPlay()
{
	Super::BeginPlay();
	
	MessageList = CreateDefaultSubobject<UGPTMessageList>(TEXT("MessageList"));

	// Log initialization
	if (MessageList != nullptr)
	{
		MessageList->ClearMessages();
	}
	
	// Initialize behavior prompt if set
	if (!BehaviorPrompt.IsEmpty() && bSaveDialogueHistory)
	{
		MessageList->AddMessage(TEXT("system"), BehaviorPrompt);
	}

	// Set model name based on settings
	ModelName = bUseCustomModel ? CustomModelName : GetDefault<USimpleOpenAISettings>()->GetModelString(ModelEnum);
}

void UGPTChatComponent::SendMessage(const FString& UserMessage)
{
	if (UserMessage.IsEmpty())
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[GPTChatComponent] User message is empty! Cannot send an empty message."));
		return;
	}

	UGPTRequestAsyncAction* Request = nullptr;

	if (bSaveDialogueHistory && MessageList)
	{
		MessageList->AddMessage(TEXT("user"), UserMessage);
		Request = UGPTRequestAsyncAction::SendChatMessageWithHistory(this, MessageList, ModelName);
	}
	else
	{
		// Create a one-shot temporary list
		UGPTMessageList* TempMessageList = NewObject<UGPTMessageList>();

		if (!BehaviorPrompt.IsEmpty())
		{
			TempMessageList->AddMessage(TEXT("system"), BehaviorPrompt);
		}
		TempMessageList->AddMessage(TEXT("user"), UserMessage);

		Request = UGPTRequestAsyncAction::SendChatMessageWithHistory(this, TempMessageList, ModelName);
	}

	if (Request)
	{
		Request->Activate();
		Request->OnSuccess.AddUniqueDynamic(this, &UGPTChatComponent::HandleResponse);
	}
}

void UGPTChatComponent::HandleResponse(const FString& Reply)
{
	if (Reply.IsEmpty())
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[GPTChatComponent] Received empty reply from GPT!"));
		return;
	}

	if (MessageList != nullptr && bSaveDialogueHistory)
	{
		// Add the assistant's reply to the message list
		MessageList->AddMessage(TEXT("assistant"), Reply);
	} 
	
	ResponseReceived.Broadcast(Reply);
}

TArray<FString> UGPTChatComponent::GetChatHistoryAsText() const
{
	if (MessageList == nullptr)
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[GPTChatComponent] MessageList is null! Cannot retrieve chat history."));
		return TArray<FString>();
	}
	
	return MessageList->GetMessagesAsText();
}

void UGPTChatComponent::ClearChatHistory()
{
	if (MessageList == nullptr)
	{
		UE_LOG(LogSimpleOpenAI, Warning, TEXT("[GPTChatComponent] MessageList is null! Cannot clear chat history."));
		return;
	}
	
	MessageList->ClearMessages();
	UE_LOG(LogSimpleOpenAI, VeryVerbose, TEXT("[GPTChatComponent] Chat history cleared for: %s"), *GetOwner()->GetName());
}


