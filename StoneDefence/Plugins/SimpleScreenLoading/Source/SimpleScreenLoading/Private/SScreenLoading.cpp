#include "SScreenLoading.h"
#include "SlateCore/Public/Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Notifications/SProgressBar.h"
void SScreenLoading::Construct(const FArguments &InAr, const FString& InMapName)
{
	MapName = InMapName;
	ChildSlot
		[
			SNew(SProgressBar)
			.Percent(this,&SScreenLoading::GetProgress)
		];
}

TOptional<float> SScreenLoading::GetProgress() const
{
	float LoadPercentage = GetAsyncLoadPercentage(*MapName);
	return LoadPercentage*0.01;
}

