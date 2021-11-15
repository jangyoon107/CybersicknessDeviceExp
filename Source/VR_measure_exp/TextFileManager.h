// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileManager.generated.h"

/**
 * 
 */
UCLASS()
class VR_MEASURE_EXP_API UTextFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArrayText(FString saveDirectory, FString fileName, TArray<FString> saveText, bool allowOverWriting);
};
