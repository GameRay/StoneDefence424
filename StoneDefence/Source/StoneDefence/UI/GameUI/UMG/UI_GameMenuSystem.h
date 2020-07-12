// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/GameUI/UMG/Drop/UI_NativeOnDrop.h"
#include "Components/Button.h"
#include "UI_GameMenuSystem.generated.h"


/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_GameMenuSystem : public UUI_NativeOnDrop
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
	UButton*ReturnGameButton;
	UPROPERTY(meta = (BindWidget))
	UButton*SaveGameButton;
	UPROPERTY(meta = (BindWidget))
	UButton*GameSettingButton;
	UPROPERTY(meta = (BindWidget))
	UButton*GameQuitButton;
	virtual void NativeConstruct()override;
private:
	UFUNCTION()
	void ReturnGame();
	UFUNCTION()
	void SaveGame();
	UFUNCTION()
	void GameSetting();
	UFUNCTION()
	void GameQuit();
};
