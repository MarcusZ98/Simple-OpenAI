#include "SimpleOpenAISettingsCustomization.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "SimpleOpenAISettings.h"

#define LOCTEXT_NAMESPACE "SimpleOpenAISettings"

TSharedRef<IDetailCustomization> FSimpleOpenAISettingsCustomization::MakeInstance()
{
	return MakeShareable(new FSimpleOpenAISettingsCustomization);
}

void FSimpleOpenAISettingsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory("API");
	
	// Test API Key Button
	Category.AddCustomRow(LOCTEXT("TestApiKey", "Test API Key"))
	.NameContent()
	[
		SNew(STextBlock)
		.Text(LOCTEXT("TestApiKeyLabel", "Test API Key"))
		.Justification(ETextJustify::Center)
		.Font(IDetailLayoutBuilder::GetDetailFont())
	]
	.ValueContent()
	.MaxDesiredWidth(250.0f) // Controls how wide the button row is
	[
		SNew(SButton)
		.Text(LOCTEXT("TestApiKeyButton", "Run Test"))
		.HAlign(HAlign_Center)
		.OnClicked(FOnClicked::CreateSP(this, &FSimpleOpenAISettingsCustomization::OnTestApiClicked))
	];

	// Feedback Button
	Category.AddCustomRow(LOCTEXT("FeedbackRow", "Feedback"))
	.NameContent()
	[
		SNew(STextBlock)
		.Text(LOCTEXT("FeedbackLabel", "Feedback"))
		.Justification(ETextJustify::Center)
		.Font(IDetailLayoutBuilder::GetDetailFont())
	]
	.ValueContent()
	.MaxDesiredWidth(250.0f)
	[
		SNew(SButton)
		.Text(LOCTEXT("FeedbackButton", "Send Feedback / Report Bug"))
		.OnClicked(FOnClicked::CreateSP(this, &FSimpleOpenAISettingsCustomization::OnFeedbackClicked))
	];

}

FReply FSimpleOpenAISettingsCustomization::OnTestApiClicked()
{
	if (USimpleOpenAISettings* Settings = GetMutableDefault<USimpleOpenAISettings>())
	{
		Settings->TestApiKey();
	}
	return FReply::Handled();
}

FReply FSimpleOpenAISettingsCustomization::OnFeedbackClicked()
{
	// Open the feedback URL in the default web browser
	const FString FeedbackURL = TEXT("https://github.com/MarcusZ98/Simple-OpenAI/issues");
	FPlatformProcess::LaunchURL(*FeedbackURL, nullptr, nullptr);
	
	return FReply::Handled();
}


#undef LOCTEXT_NAMESPACE
