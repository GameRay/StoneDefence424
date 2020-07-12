// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/UI/SelectLevelUI/UMG/UI_SelectLevelMain.h"
#include"UMG/Public/Components/Button.h"
#include "UMG/Public/Components/CanvasPanel.h"
#include"StoneDefence/UI/SelectLevelUI/UMG/Button/UI_LevelButton.h"
#include "Kismet/GameplayStatics.h"
void UUI_SelectLevelMain::NativeConstruct()
{
	Super::NativeConstruct();
	InitSelectLevelButton();
	ReturnMenuButton->OnClicked.AddDynamic(this,&UUI_SelectLevelMain::ReturnMenu);
}

void UUI_SelectLevelMain::InitSelectLevelButton()
{
	if (SelectMap)
	{
		TArray<UPanelSlot*> PanelSlotArray = SelectMap->GetSlots();
		for (UPanelSlot* PanelSlotEle: PanelSlotArray)
		{
			if (UUI_LevelButton*LevelButtonArp=Cast<UUI_LevelButton>(PanelSlotEle))
			{
				AllLevelButton.Add(LevelButtonArp);
			}
		}
	}
	
}

void UUI_SelectLevelMain::ReturnMenu()
{
	UGameplayStatics::OpenLevel(GetWorld(), "HallMap");
}
