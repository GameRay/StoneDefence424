// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/GameUI/UMG/Drop/UI_NativeOnDrop.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "UI_ToolBarSystem.generated.h"



/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_ToolBarSystem : public UUI_NativeOnDrop
{
	GENERATED_BODY()
	UPROPERTY(meta = (BindWidget))
		UTextBlock*GameGlod;
	UPROPERTY(meta = (BindWidget))
		UTextBlock*TowersDeathNumber;
	UPROPERTY(meta = (BindWidget))
		UTextBlock*GameCount;
	UPROPERTY(meta = (BindWidget))
		UTextBlock*SkillSoldier;
	UPROPERTY(meta = (BindWidget))
		UTextBlock*GameLevelSurplusQuantity;
	UPROPERTY(meta = (BindWidget))
		UProgressBar*GSQProgressBa;
public:
	virtual void NativeConstruct()override;
};
