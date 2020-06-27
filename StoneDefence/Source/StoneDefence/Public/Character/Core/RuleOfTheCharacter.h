// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/Character/IRuleCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/ArrowComponent.h"
#include "Core/GameCore/TowerDefencePlayerController.h"
#include "Core/GameCore/TowerDefenceGameState.h"
#include "RuleOfTheCharacter.generated.h"



UCLASS()
class STONEDEFENCE_API ARuleOfTheCharacter : public ACharacter,public IRuleCharacter
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute", meta = (AllowPrivateAccess = "true"))
	USceneComponent*HomingPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent*Widget;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute", meta = (AllowPrivateAccess = "true"))
	UArrowComponent*OpenFirePoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BaseAttribute", meta = (AllowPrivateAccess = "true"))
	UBoxComponent*TraceShowCharacterInformation;
public:
	// Sets default values for this character's properties
	ARuleOfTheCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)override;
protected:
	virtual bool IsDeath();
	virtual float GetHealth();
	virtual float GetMaxHealth();
	virtual bool IsTeam();
public:
	FORCEINLINE ATowerDefencePlayerController *GetGameController() { return GetWorld() ? GetWorld()->GetFirstPlayerController<ATowerDefencePlayerController>() : NULL; };
	FORCEINLINE ATowerDefenceGameState *GetGameState() { return GetWorld() ? GetWorld()->GetGameState<ATowerDefenceGameState>() : NULL; };

	FORCEINLINE USceneComponent*GetHomingPoint() { return HomingPoint; };
	FORCEINLINE UArrowComponent*GetFirePoint() { return OpenFirePoint; };
};
