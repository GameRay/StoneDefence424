// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tool/ScreenMove.h"
#include "TowerDefencePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API ATowerDefencePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ATowerDefencePlayerController();
	
	virtual void BeginPlay()override;
	virtual void Tick(float DeltaSeconds)override;
	virtual void SetupInputComponent()override;
	//锁定鼠标
	void SetInputModeGameAndUI();
	//鼠标滚轮上下移动
	void MouseWheelUp();
	void MouseWheelDown();
private:
	FScreenMoveUnits ScreenMoveUnits;
};
