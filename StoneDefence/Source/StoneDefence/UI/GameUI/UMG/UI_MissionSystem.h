// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/GameUI/UMG/Drop/UI_NativeOnDrop.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "UI_MissionSystem.generated.h"



/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_MissionSystem : public UUI_NativeOnDrop
{
	GENERATED_BODY()
	UPROPERTY(meta = (BindWidget))
	UTextBlock*ConditionBase;
	UPROPERTY(meta = (BindWidget))
	UTextBlock*ConditionA;
	UPROPERTY(meta = (BindWidget))
	UTextBlock*ConditionB;
	UPROPERTY(meta = (BindWidget))
	UButton*ConditionButton;
public:
	virtual void NativeConstruct()override;
	UFUNCTION()
	void Condition();
};
