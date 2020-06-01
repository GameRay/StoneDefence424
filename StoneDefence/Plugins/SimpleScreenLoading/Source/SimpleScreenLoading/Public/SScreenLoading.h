#pragma once
#include "SlateCore/Public/Widgets/SCompoundWidget.h"
#include "SlateCore/Public/Widgets/DeclarativeSyntaxSupport.h"

class SScreenLoading:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SScreenLoading)
	{}
	SLATE_END_ARGS();
	
	void Construct(const FArguments &InAr,const FString MapName);

};

