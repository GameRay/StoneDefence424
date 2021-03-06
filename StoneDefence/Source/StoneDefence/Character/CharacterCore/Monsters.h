// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/Character/Core/RuleOfTheCharacter.h"
#include "Monsters.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API AMonsters : public ARuleOfTheCharacter
{
	GENERATED_BODY()
public:

	virtual void BeginPlay()override;
	virtual void Tick(float DeltaTime)override;
};
