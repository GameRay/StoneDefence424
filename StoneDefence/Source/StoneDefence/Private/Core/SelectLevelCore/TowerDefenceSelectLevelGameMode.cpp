// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SelectLevelCore/TowerDefenceSelectLevelGameMode.h"
#include "UI/SelectLevelUI/Core/TowerDefenceSelectLevelHUD.h"

ATowerDefenceSelectLevelGameMode::ATowerDefenceSelectLevelGameMode()
{
	HUDClass = ATowerDefenceSelectLevelHUD::StaticClass();
}

void ATowerDefenceSelectLevelGameMode::BeginPlay()
{
	Super::BeginPlay();
}
