// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/UI/GameUI/UMG/Inventory/UI_InventorySlot.h"

void UUI_InventorySlot::NativeConstruct()
{
	Super::NativeConstruct();
	TISButton->OnClicked.AddDynamic(this, &UUI_InventorySlot::OnClickedWidget);
}

void UUI_InventorySlot::OnClickedWidget()
{

}
