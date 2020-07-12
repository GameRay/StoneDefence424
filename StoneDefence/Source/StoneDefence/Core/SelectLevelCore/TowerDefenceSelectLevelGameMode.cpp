// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefenceSelectLevelGameMode.h"
#include "StoneDefence/UI/SelectLevelUI/Core/TowerDefenceSelectLevelHUD.h"
ATowerDefenceSelectLevelGameMode::ATowerDefenceSelectLevelGameMode()
{
	HUDClass = ATowerDefenceSelectLevelHUD::StaticClass();
}

void ATowerDefenceSelectLevelGameMode::BeginPlay()
{
	Super::BeginPlay();
}
