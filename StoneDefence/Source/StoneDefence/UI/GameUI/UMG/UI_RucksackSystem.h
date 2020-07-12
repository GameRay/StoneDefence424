// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/GameUI/UMG/Drop/UI_NativeOnDrop.h"
#include "Inventory/UI_Inventory.h"
#include "UI_RucksackSystem.generated.h"


/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_RucksackSystem : public UUI_NativeOnDrop
{
	GENERATED_BODY()
		UPROPERTY(meta = (BindWidget))
		UUI_Inventory*Inventory;
public:
	virtual void NativeConstruct()override;
};
