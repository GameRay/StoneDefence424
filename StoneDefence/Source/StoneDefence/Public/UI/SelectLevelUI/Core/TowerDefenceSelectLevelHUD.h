// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/SelectLevelUI/UMG/UI_SelectLevelMain.h"
#include "TowerDefenceSelectLevelHUD.generated.h"
//class UUI_SelectLevelMain;
/**
 * 
 */
UCLASS()
class STONEDEFENCE_API ATowerDefenceSelectLevelHUD : public AHUD
{
	GENERATED_BODY()
public:
	ATowerDefenceSelectLevelHUD();
	virtual void BeginPlay()override;
private:
	TSubclassOf<UUI_SelectLevelMain> SelectMainClass;
	UUI_SelectLevelMain*SelectLevelMain;
};
