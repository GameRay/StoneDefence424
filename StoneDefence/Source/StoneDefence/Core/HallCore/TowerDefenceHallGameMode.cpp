// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/Core/HallCore/TowerDefenceHallGameMode.h"
#include"StoneDefence/UI/HallUI/Core/TowerDefenceHallHUD.h"
#include"StoneDefence/Core/HallCore/TowerDefenceHallPawn.h"
#include"StoneDefence/Core/HallCore/TowerDefenceHallPlayerController.h"
ATowerDefenceHallGameMode::ATowerDefenceHallGameMode()
{
	HUDClass = ATowerDefenceHallHUD::StaticClass();
	DefaultPawnClass = ATowerDefenceHallPawn::StaticClass();
	PlayerControllerClass = ATowerDefenceHallPlayerController::StaticClass();
}