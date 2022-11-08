// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
//#include "Items/ItemBase.h"
#include "Misc/DateTime.h"
#include "UserSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FUserOptions
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
		FString GraphicQuality;
	UPROPERTY(BlueprintReadWrite)
		FString ShadowQuality;
	UPROPERTY(BlueprintReadWrite)
		FString TextureQuality;
	UPROPERTY(BlueprintReadWrite)
		FString FoliageQuality;
	UPROPERTY(BlueprintReadWrite)
		float FrameRate;
	UPROPERTY(BlueprintReadWrite)
		float MouseSensivity;
	UPROPERTY(BlueprintReadWrite)
		FString VSync;
};

UCLASS()
class GHOSTCORE_API UUserSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UUserSaveGame();

protected:
	UPROPERTY(BlueprintReadWrite)
		FString PlayerName;
	UPROPERTY(BlueprintReadWrite)
		int Level;
	UPROPERTY(BlueprintReadWrite)
		FString Rank;
	UPROPERTY(BlueprintReadWrite)
		int Money;
public:
	UPROPERTY(BlueprintReadWrite)
		FUserOptions UserOptions;
};
