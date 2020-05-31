// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleofTheWidget.h"
#include "Components/UniformGridPanel.h"
#include "UI_InventorySlot.h"
#include "UI_Inventory.generated.h"



/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_Inventory : public UUI_RuleofTheWidget
{
	GENERATED_BODY()
	UPROPERTY(meta = (BindWidget))
	UUniformGridPanel*SlotArrayInventory;

public:
	virtual void NativeConstruct()override;
	void LoyoutInventorySlot(int32 ColumnNumber,int32 RowNumber);
	UPROPERTY(EditDefaultsOnly, Category = UI)
		TSubclassOf<UUI_InventorySlot>InventorySlotClass;
private:
	TArray<UUI_InventorySlot*>InventorySlotArray;
};
