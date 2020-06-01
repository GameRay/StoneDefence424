#include "SScreenLoading.h"
#include "SlateCore/Public/Widgets/Images/SImage.h"
void SScreenLoading::Construct(const FArguments &InAr, const FString MapName)
{
	ChildSlot
		[
			SNew(SImage)
		];
}

