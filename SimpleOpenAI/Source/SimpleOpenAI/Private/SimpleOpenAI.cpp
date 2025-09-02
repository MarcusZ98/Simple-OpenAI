// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleOpenAI.h"
#include "ISettingsModule.h"
#include "SimpleOpenAISettings.h"
#include "SimpleOpenAISettingsCustomization.h"
#include "SimpleOpenAILog.h"

#define LOCTEXT_NAMESPACE "FSimpleOpenAIModule"

DEFINE_LOG_CATEGORY(LogSimpleOpenAI);

void FSimpleOpenAIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings(
			"Project", "Plugins", "Simple OpenAI",
			NSLOCTEXT("SimpleOpenAI", "SettingsName", "Simple OpenAI"),
			NSLOCTEXT("SimpleOpenAI", "SettingsDesc", "Configure your OpenAI API key."),
			GetMutableDefault<USimpleOpenAISettings>()
		);
	}

	// Register details customization for project settings
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout(
		"SimpleOpenAISettings",
		FOnGetDetailCustomizationInstance::CreateStatic(&FSimpleOpenAISettingsCustomization::MakeInstance)
	);
}

void FSimpleOpenAIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "Simple OpenAI");
	}

	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.UnregisterCustomClassLayout("SimpleOpenAISettings");

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleOpenAIModule, SimpleOpenAI)