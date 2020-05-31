// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"StoneDefence/Public/UI/Core/UI_RuleofTheWidget.h"
#include "UI_GameMenuSystem.h"
#include "UI_GameInfoPrintSystem.h"
#include "UI_MiniMapSystem.h"
#include "UI_PlayerSkillSystem.h"
#include "UI_RucksackSystem.h"
#include "UI_ToolBarSystem.h"
#include "UI_MissionSystem.h"
#include "UI_MainScreen.generated.h"



/**
 * 
 */
UCLASS()
class STONEDEFENCE_API UUI_MainScreen : public UUI_RuleofTheWidget
{
	GENERATED_BODY()
	UPROPERTY(meta = (BindWidget))
	UUI_GameMenuSystem*GameMenuSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_GameInfoPrintSystem*GameInfoPrintSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_MiniMapSystem*MiniMapSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_PlayerSkillSystem*PlayerSkillSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_RucksackSystem*RucksackSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_ToolBarSystem*ToolBarSystem;
	UPROPERTY(meta = (BindWidget))
	UUI_MissionSystem*MissionSystem;
public:
	virtual void NativeConstruct()override;
};
