// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneDefence/UI/GameUI/UMG/Skill/UI_SkillSlot.h"

void UUI_SkillSlot::NativeConstruct()
{
	Super::NativeConstruct();
	ClickButton->OnClicked.AddDynamic(this,&UUI_SkillSlot::OnClickedWidget);
}

void UUI_SkillSlot::OnClickedWidget()
{

}
