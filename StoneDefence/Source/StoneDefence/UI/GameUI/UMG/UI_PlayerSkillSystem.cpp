// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/UI/GameUI/UMG/UI_PlayerSkillSystem.h"
#include "GameFramework/InputSettings.h"

void UUI_PlayerSkillSystem::NativeConstruct()
{
	Super::NativeConstruct();
	auto KeyMaping = GetDefault<UInputSettings>()->GetActionMappings().FindByPredicate([&](FInputActionKeyMapping &EntryUI) {return (EntryUI.ActionName == "FreezeSkill"); });

}
