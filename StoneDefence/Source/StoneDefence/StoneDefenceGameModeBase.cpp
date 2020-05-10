// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefenceGameModeBase.h"
#include"Core//GameCore/TowerDefencePlayerController.h"
#include"Core/GameCore/TowerDefenceGameState.h"
#include"Core/GameCore/TowerDefenceGameCamera.h"
#include"Core/GameCore/TowerDefencePlayerState.h"
#include"UI/GameUI/Core/RuleofTheHUD.h"
AStoneDefenceGameModeBase::AStoneDefenceGameModeBase()
{
	GameStateClass = ATowerDefenceGameState::StaticClass();
	PlayerControllerClass = ATowerDefencePlayerController::StaticClass();
	DefaultPawnClass = ATowerDefenceGameCamera::StaticClass();
	PlayerStateClass = ATowerDefencePlayerState::StaticClass();
	HUDClass = ARuleofTheHUD::StaticClass();
}
