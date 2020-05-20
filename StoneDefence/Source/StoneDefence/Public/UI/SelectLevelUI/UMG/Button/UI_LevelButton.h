// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleofTheWidget.h"
#include "Components/Border.h"
#include "Components/ProgressBar.h"
#include "Components/Button.h"
#include "UI_LevelButton.generated.h"
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_LevelButton : public UUI_RuleofTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
		UBorder*LevelBorder;
	UPROPERTY(meta = (BindWidget))
		UProgressBar*LevelProBar;
	UPROPERTY(meta = (BindWidget))
		UButton*NextLevelButton;
public:
	virtual void NativeConstruct()override;
	UFUNCTION()
	void SelectLevel();
	
};
