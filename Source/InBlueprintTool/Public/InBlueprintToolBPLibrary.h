// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "InBlueprintToolBPLibrary.generated.h"


UCLASS()
class UInBlueprintToolBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "InBlueprintTool")
	static void OpenExe(FString URL, FString Param);
};
