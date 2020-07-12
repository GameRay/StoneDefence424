// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/Core/GameCore/TowerDefencePlayerController.h"
#include"StoneDefence/Core/GameCore/TowerDefenceGameCamera.h"
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

void ATowerDefencePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("MouseWheelUp",EInputEvent::IE_Pressed,this,&ATowerDefencePlayerController::MouseWheelUp);
	InputComponent->BindAction("MouseWheelDown", EInputEvent::IE_Pressed, this, &ATowerDefencePlayerController::MouseWheelDown);
}

void ATowerDefencePlayerController::SetInputModeGameAndUI()
{
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
}

static float WheelValue = 400.f;
void ATowerDefencePlayerController::MouseWheelUp()
{
	ATowerDefenceGameCamera*camera = Cast<ATowerDefenceGameCamera>(GetPawn());
	if (camera)
	{
		camera->Zoom(true, WheelValue);
	}
}

void ATowerDefencePlayerController::MouseWheelDown()
{
	ATowerDefenceGameCamera*camera = Cast<ATowerDefenceGameCamera>(GetPawn());
	if (camera)
	{
		camera->Zoom(false, WheelValue);
	}
}

