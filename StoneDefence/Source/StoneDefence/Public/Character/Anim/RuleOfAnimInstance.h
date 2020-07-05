// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RuleOfAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API URuleOfAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	URuleOfAnimInstance();
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bDeath;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bAttack;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Speed;
};
