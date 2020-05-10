// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/TowerDefencePlayerController.h"
ATowerDefencePlayerController::ATowerDefencePlayerController()
{
	bShowMouseCursor = true;
}
void ATowerDefencePlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputModeGameAndUI();
}

void ATowerDefencePlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	float ScreenMoveSpeed = 5.f;
	ScreenMoveUnits.ListenScreenMove(this,ScreenMoveSpeed);
}

void ATowerDefencePlayerController::SetInputModeGameAndUI()
{
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
}

