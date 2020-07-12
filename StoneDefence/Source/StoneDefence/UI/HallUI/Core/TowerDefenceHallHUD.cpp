// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/UI/HallUI/Core/TowerDefenceHallHUD.h"
#include"StoneDefence/UI/HallUI/UMG/UI_MainHall.h"
#include"UObject/ConstructorHelpers.h"
ATowerDefenceHallHUD::ATowerDefenceHallHUD()
{
	static ConstructorHelpers::FClassFinder<UUI_MainHall> HallMain_BPClass(TEXT("/Game/UI/Hall/HallMain_BP"));
	MainHallClass = HallMain_BPClass.Class;
}

void ATowerDefenceHallHUD::BeginPlay()
{
	Super::BeginPlay();
	MainHall = CreateWidget<UUI_MainHall>(GetWorld(), MainHallClass);
	MainHall->AddToViewport();
}
