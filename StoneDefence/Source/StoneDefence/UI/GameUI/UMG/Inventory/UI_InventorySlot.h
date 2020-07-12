// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/GameUI/UMG/Core/UI_Slot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "UI_InventorySlot.generated.h"



/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_InventorySlot : public UUI_Slot
{
	GENERATED_BODY()
		UPROPERTY(meta = (BindWidget))
		UImage*TowersIcon;
	UPROPERTY(meta = (BindWidget))
		UImage*TowersCD;
	//׼��������������
	UPROPERTY(meta = (BindWidget))
		UTextBlock*TPBNumber;
	//�����е�������
	UPROPERTY(meta = (BindWidget))
		UTextBlock*ToCOCNumber;
	UPROPERTY(meta = (BindWidget))
		UTextBlock*TowerslCDValue;
	//������ slot��ť
	UPROPERTY(meta = (BindWidget))
		UButton*TISButton;
public:
	virtual void NativeConstruct()override;
	UFUNCTION()
		void OnClickedWidget();
};
