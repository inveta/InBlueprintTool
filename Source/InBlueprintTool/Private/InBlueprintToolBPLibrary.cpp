// Copyright Epic Games, Inc. All Rights Reserved.

#include "InBlueprintToolBPLibrary.h"
#include "InBlueprintTool.h"

UInBlueprintToolBPLibrary::UInBlueprintToolBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UInBlueprintToolBPLibrary::OpenExe(FString URL, FString Param)
{
	if (false == FPlatformProcess::CanLaunchURL(*URL))
	{
		UE_LOG(LogTemp, Error, TEXT("OpenExe CanLaunchURL false=%s"),*URL);
		return ;
	}
	FProcHandle currHandle = FPlatformProcess::CreateProc(*URL, *Param, true, false, false, nullptr, 0, nullptr, nullptr);
}

