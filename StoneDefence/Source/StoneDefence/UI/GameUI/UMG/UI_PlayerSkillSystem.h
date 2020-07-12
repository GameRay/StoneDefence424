// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoneDefence/UI/GameUI/UMG/Drop/UI_NativeOnDrop.h"
#include "Skill/UI_SkillSlot.h"
#include "UI_PlayerSkillSystem.generated.h"

/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_PlayerSkillSystem : public UUI_NativeOnDrop
{
	GENERATED_BODY()
		UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot*FreezeSkill;
	UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot*ExplosionSkill;
	UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot*RecoverySkill;
	UPROPERTY(meta = (BindWidget))
		UUI_SkillSlot*RecoveryMainTowersSkill;
public:
	virtual void NativeConstruct()override;
private:
	FKey FreezeSkillKey;
	FKey ExplosionSkillKey;
	FKey RecoverySkillKey;
	FKey RecoveryMainTowersSkillKey;
	
};
