#include "GPTMessageList.h"

void UGPTMessageList::AddMessage(const FString& Role, const FString& Content)
{
	TSharedPtr<FJsonObject> NewMessage = MakeShareable(new FJsonObject);
	NewMessage->SetStringField(TEXT("role"), Role);
	NewMessage->SetStringField(TEXT("content"), Content);
	Messages.Add(MakeShareable(new FJsonValueObject(NewMessage)));
}

TArray<FString> UGPTMessageList::GetMessagesAsText() const
{
	TArray<FString> Out;
	for (const TSharedPtr<FJsonValue>& MsgVal : Messages)
	{
		TSharedPtr<FJsonObject> MsgObj = MsgVal->AsObject();
		if (MsgObj.IsValid())
		{
			FString Role = MsgObj->GetStringField(TEXT("role"));
			FString Content = MsgObj->GetStringField(TEXT("content"));
			Out.Add(FString::Printf(TEXT("[%s] %s"), *Role, *Content));
		}
	}
	return Out;
}