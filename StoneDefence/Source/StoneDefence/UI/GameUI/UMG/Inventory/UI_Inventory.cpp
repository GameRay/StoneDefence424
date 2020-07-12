// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/UI/GameUI/UMG/Inventory/UI_Inventory.h"
#include "Components/UniformGridSlot.h"
void UUI_Inventory::NativeConstruct()
{
	Super::NativeConstruct();
	LoyoutInventorySlot(3, 7);
}

void UUI_Inventory::LoyoutInventorySlot(int32 ColumnNumber, int32 RowNumber)
{
	if (InventorySlotClass)
	{
		for (size_t i = 0; i < RowNumber; i++)
		{
			for (size_t j = 0; j < ColumnNumber; j++)
			{
				UUI_InventorySlot*SlotWidget = CreateWidget<UUI_InventorySlot>(GetWorld(), InventorySlotClass);
				if (SlotWidget)
				{
					UUniformGridSlot*GridSlot = SlotArrayInventory->AddChildToUniformGrid(SlotWidget);
					if (GridSlot)
					{
						GridSlot->SetColumn(j);
						GridSlot->SetRow(i);
						GridSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
						GridSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
					}
					InventorySlotArray.Add(SlotWidget);
				}
			}
		}
	}
}
