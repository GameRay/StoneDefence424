// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Core/RuleOfTheCharacter.h"
#include "DestructibleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Towers.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API ATowers : public ARuleOfTheCharacter
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute", meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent*ParticleMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent*StaticMeshBuilding;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute", meta = (AllowPrivateAccess = "true"))
	UDestructibleComponent*DestructibleMeshBuilding;
public:
	ATowers();

protected:
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute")
	FRotator TowersRotator;
};
