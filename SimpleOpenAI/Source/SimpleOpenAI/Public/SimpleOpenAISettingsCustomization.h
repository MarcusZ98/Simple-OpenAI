#pragma once

#include "IDetailCustomization.h"

class FSimpleOpenAISettingsCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	FReply OnTestApiClicked();
	FReply OnFeedbackClicked();
};
