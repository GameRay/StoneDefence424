// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"StoneDefence/Public/UI/Core/UI_RuleofTheWidget.h"
#include "Components/Border.h"
#include "Components/SizeBox.h"
#include "UI_ArchivesSystem.h"
#include "UI_GameSettingsSystem.h"
#include "UI_TutorialSystem.h"
#include "UI_MainHall.generated.h"


/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_MainHall : public UUI_RuleofTheWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
	UBorder *MainBoard;

	UPROPERTY(meta = (BindWidget))
	USizeBox *BoxList;

	UPROPERTY(meta = (BindWidget))
	class UUI_HallMenuSystem *HallMenuSystem;

	UPROPERTY(EditAnywhere,Category="UI")
	TSubclassOf<UUI_ArchivesSystem> ArchivesSystemClass;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUI_GameSettingsSystem> GameSettingsSystemClass;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUI_TutorialSystem> TutorialSystemClass;
public:
	virtual void NativeConstruct()override;

	UFUNCTION()
		void GameStart();
	UFUNCTION()
		void SecretTerritory();
	UFUNCTION()
		void History();
	UFUNCTION()
		void GameSettings();
	UFUNCTION()
		void TutorWebsite();
	UFUNCTION()
		void Browser();
	UFUNCTION()
		void SpecialContent();
	UFUNCTION()
		void QuitGame();
};
