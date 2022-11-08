// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/UserSaveGame.h"
#include "Misc/DateTime.h"

USTRUCT(BlueprintType)
struct FObjective
{
	
};

UUserSaveGame::UUserSaveGame()
{
	Level = 1;
	Money = 1999;
	UserOptions.FoliageQuality = "High";
	UserOptions.GraphicQuality = "High";
	UserOptions.ShadowQuality = "High";
	UserOptions.TextureQuality = "High";
	UserOptions.FrameRate = 60.0f;
	UserOptions.FrameRate = 60.0f;
	UserOptions.VSync = "Yes";
	UserOptions.MouseSensivity = 1.0f;
}
