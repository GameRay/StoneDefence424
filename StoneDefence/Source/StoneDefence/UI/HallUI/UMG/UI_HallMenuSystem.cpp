// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/UI/HallUI/UMG/UI_HallMenuSystem.h"
#include"UMG/Public/Components/Button.h"

void UUI_HallMenuSystem::NativeConstruct()
{
	Super::NativeConstruct();

}

void UUI_HallMenuSystem::BindGameStart(FOnButtonClickedEvent ClickedEvent)
{
	GameStartButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindSecretTerritory(FOnButtonClickedEvent ClickedEvent)
{
	SecretTerritoryButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindHistory(FOnButtonClickedEvent ClickedEvent)
{
	HistoryButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindGameSettings(FOnButtonClickedEvent ClickedEvent)
{
	GameSettingsButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindTutorWebsite(FOnButtonClickedEvent ClickedEvent)
{
	TutorWebsiteButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindBrowser(FOnButtonClickedEvent ClickedEvent)
{
	BrowserButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindSpecialContent(FOnButtonClickedEvent ClickedEvent)
{
	SpecialContentButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindQuitGame(FOnButtonClickedEvent ClickedEvent)
{
	QuitGameButton->OnClicked = ClickedEvent;
}

