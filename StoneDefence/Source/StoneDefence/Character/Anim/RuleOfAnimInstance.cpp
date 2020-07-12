// Fill out your copyright notice in the Description page of Project Settings.


#include "RuleOfAnimInstance.h"
#include "StoneDefence/Character/Core/RuleOfTheCharacter.h"

URuleOfAnimInstance::URuleOfAnimInstance():bDeath(false),bAttack(false),Speed(0)
{

}

void URuleOfAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void URuleOfAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ARuleOfTheCharacter*RuleOfTheCharacter = Cast<ARuleOfTheCharacter>(TryGetPawnOwner());
	if (RuleOfTheCharacter)
	{
		bAttack = RuleOfTheCharacter->bAttack;
		Speed = RuleOfTheCharacter->GetVelocity().Size();
		bDeath = RuleOfTheCharacter->IsActive();
	}
}
