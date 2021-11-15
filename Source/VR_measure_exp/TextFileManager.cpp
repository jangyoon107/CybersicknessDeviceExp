// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UTextFileManager::SaveArrayText(FString saveDirectory, FString FileName, TArray<FString> saveText, bool allowOverWriting = false)
{
	// Set complete file path.
	saveDirectory += "\\";
	saveDirectory += FileName;

	if (allowOverWriting)
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*saveDirectory))
		{
			return false;
		}
	}

	FString finalString = ""; 
	for (FString& i : saveText)
	{
		finalString += i;
		finalString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(finalString, *saveDirectory);
}