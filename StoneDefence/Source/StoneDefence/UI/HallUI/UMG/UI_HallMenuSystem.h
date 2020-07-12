// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/Core/UI_RuleOfTheWidget.h"
#include "Components/Button.h"
#include "UI_HallMenuSystem.generated.h"


/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_HallMenuSystem : public UUI_RuleofTheWidget
{
	GENERATED_BODY()
	UPROPERTY(meta = (BindWidget))
		UButton*GameStartButton;
	UPROPERTY(meta = (BindWidget))
		UButton*SecretTerritoryButton;
	UPROPERTY(meta = (BindWidget))
		UButton*HistoryButton;
	UPROPERTY(meta = (BindWidget))
		UButton*GameSettingsButton;
	UPROPERTY(meta = (BindWidget))
		UButton*TutorWebsiteButton;
	UPROPERTY(meta = (BindWidget))
		UButton*BrowserButton;
	UPROPERTY(meta = (BindWidget))
		UButton*SpecialContentButton;
	UPROPERTY(meta = (BindWidget))
		UButton*QuitGameButton;
public:
	virtual void NativeConstruct()override;
	UFUNCTION()
	void BindGameStart(FOnButtonClickedEvent ClickedEvent);
	UFUNCTION()
	void BindSecretTerritory(FOnButtonClickedEvent ClickedEvent);
	UFUNCTION()
	void BindHistory(FOnButtonClickedEvent ClickedEvent);
	UFUNCTION()
	void BindGameSettings(FOnButtonClickedEvent ClickedEvent);
	UFUNCTION()
	void BindTutorWebsite(FOnButtonClickedEvent ClickedEvent);
	UFUNCTION()
	void BindBrowser(FOnButtonClickedEvent ClickedEvent);
	UFUNCTION()
	void BindSpecialContent(FOnButtonClickedEvent ClickedEvent);
	UFUNCTION()
	void BindQuitGame(FOnButtonClickedEvent ClickedEvent);
};
