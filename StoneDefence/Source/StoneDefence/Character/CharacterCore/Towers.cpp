// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/Character/CharacterCore/Towers.h"

ATowers::ATowers()
{
	ParticleMesh = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleMesh"));
	StaticMeshBuilding = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RangeBuilding"));
	DestructibleMeshBuilding = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Substitute"));

	ParticleMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	StaticMeshBuilding->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	DestructibleMeshBuilding->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

float ATowers::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent,EventInstigator,DamageCauser);
	return 0.0f;
}
