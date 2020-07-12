// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/GameUI/UMG/Drop/UI_NativeOnDrop.h"
#include "Components/TextBlock.h"
#include "UI_GameInfoPrintSystem.generated.h"


/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_GameInfoPrintSystem : public UUI_NativeOnDrop
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UTextBlock*TDGameLog;
	virtual void NativeConstruct()override;
};
