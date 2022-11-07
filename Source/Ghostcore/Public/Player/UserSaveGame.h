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

USTRUCT(BlueprintType)
struct FObjective
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
		FString Objective;
	UPROPERTY(BlueprintReadWrite)
		int CurrentProgress = 0;
	UPROPERTY(BlueprintReadWrite)
		int MaxProgress;
	UPROPERTY(BlueprintReadWrite)
		int Reward;
	UPROPERTY(BlueprintReadWrite)
		FDateTime WhenStart;
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
	//UPROPERTY(BlueprintReadWrite)
	//	TArray<FItem> OwnedItems;
	//UPROPERTY(BlueprintReadOnly)
	//	TArray<FObjective> AllDailyObjectives;
	//UPROPERTY(BlueprintReadOnly)
	//	TArray<FObjective> AllWeeklyObjectives;
	//UPROPERTY(BlueprintReadOnly)
	//	TArray<FObjective> CurrentDailyChallenges;
	//UPROPERTY(BlueprintReadOnly)
	//	TArray<FObjective> CurrentWeeklyChallenges;
public:
	UPROPERTY(BlueprintReadWrite)
		FUserOptions UserOptions;

protected:
	UFUNCTION(BlueprintCallable)
		void SelectRandomDailyObjectives();
	UFUNCTION(BlueprintCallable)
		void SelectRandomWeeklyObjectives();
};
