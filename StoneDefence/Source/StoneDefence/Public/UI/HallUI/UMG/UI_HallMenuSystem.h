// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_HallMenuSystem.generated.h"

class UButton;
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
		UButton*HistoryButton;
	UPROPERTY(meta = (BindWidget))
		UButton*GameSettingsButton;
	UPROPERTY(meta = (BindWidget))
		UButton*TutorWebsiteButton;
	UPROPERTY(meta = (BindWidget))
		UButton*BrowserButton;
	UPROPERTY(meta = (BindWidget))
		UButton*QuitGameButton;
public:
	virtual void NativeConstruct()override;
	UFUNCTION()
	void GameStart();
	UFUNCTION()
	void History();
	UFUNCTION()
	void GameSettings();
	UFUNCTION()
	void TutorWebsite();
	UFUNCTION()
	void Browser();
	UFUNCTION()
	void QuitGame();
};
