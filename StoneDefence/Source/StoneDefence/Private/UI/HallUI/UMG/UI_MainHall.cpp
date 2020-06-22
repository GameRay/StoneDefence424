// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HallUI/UMG/UI_MainHall.h"
#include"UI//HallUI/UMG/UI_HallMenuSystem.h"
#include "Kismet/GameplayStatics.h"

template<class T,class UserObject>
UserObject*CreateAssistWidget(T*ThisClass,UClass*AssistClass,USizeBox*WidgetArray)
{
	UserObject*UserObjectElement = nullptr;
	//播放动画
	if (0)
	{
		//淡入
	}
	if (WidgetArray->GetChildAt(0))
	{
		if (WidgetArray->GetChildAt(0)->IsA(AssistClass))
		{
			//关闭Board淡出
			return UserObjectElement;

		}
		else
		{
			WidgetArray->ClearChildren();
		}
	}

	UserObjectElement = CreateWidget<UserObject>(ThisClass->GetWorld(), AssistClass);
	if (UserObjectElement)
	{
		if (WidgetArray->AddChild(UserObjectElement))
		{
		}
		else
		{
			UserObjectElement->RemoveFromParent();
		}
	}
	return UserObjectElement;
}
void UUI_MainHall::NativeConstruct()
{
	Super::NativeConstruct();
	if (HallMenuSystem)
	{
		FOnButtonClickedEvent GameStartDelegate;
		GameStartDelegate.AddDynamic(this,&UUI_MainHall::GameStart);
		HallMenuSystem->BindGameStart(GameStartDelegate);

		FOnButtonClickedEvent SecretTerritoryDelegate;
		SecretTerritoryDelegate.AddDynamic(this, &UUI_MainHall::SecretTerritory);
		HallMenuSystem->BindSecretTerritory(SecretTerritoryDelegate);

		FOnButtonClickedEvent HistoryDelegate;
		HistoryDelegate.AddDynamic(this, &UUI_MainHall::History);
		HallMenuSystem->BindHistory(HistoryDelegate);

		FOnButtonClickedEvent GameSettingsDelegate;
		GameSettingsDelegate.AddDynamic(this, &UUI_MainHall::GameSettings);
		HallMenuSystem->BindGameSettings(GameSettingsDelegate);

		FOnButtonClickedEvent TutorWebsiteDelegate;
		TutorWebsiteDelegate.AddDynamic(this, &UUI_MainHall::TutorWebsite);
		HallMenuSystem->BindTutorWebsite(TutorWebsiteDelegate);

		FOnButtonClickedEvent BrowserDelegate;
		BrowserDelegate.AddDynamic(this, &UUI_MainHall::Browser);
		HallMenuSystem->BindBrowser(BrowserDelegate);

		FOnButtonClickedEvent SpecialContentDelegate;
		SpecialContentDelegate.AddDynamic(this, &UUI_MainHall::SpecialContent);
		HallMenuSystem->BindSpecialContent(SpecialContentDelegate);


		FOnButtonClickedEvent QuitGameDelegate;
		QuitGameDelegate.AddDynamic(this, &UUI_MainHall::QuitGame);
		HallMenuSystem->BindQuitGame(QuitGameDelegate);
	}
}

void UUI_MainHall::GameStart()
{
	UGameplayStatics::OpenLevel(GetWorld(), "SelectLevel");
}

void UUI_MainHall::SecretTerritory()
{

}

void UUI_MainHall::History()
{
	CreateAssistWidget<UUI_MainHall, UUI_ArchivesSystem>(this, ArchivesSystemClass, BoxList);
}

void UUI_MainHall::GameSettings()
{
	CreateAssistWidget<UUI_MainHall, UUI_GameSettingsSystem>(this, GameSettingsSystemClass, BoxList);
}

void UUI_MainHall::TutorWebsite()
{
	CreateAssistWidget<UUI_MainHall, UUI_TutorialSystem>(this, TutorialSystemClass, BoxList);
}

void UUI_MainHall::Browser()
{

}

void UUI_MainHall::SpecialContent()
{

}

void UUI_MainHall::QuitGame()
{

}
