// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/UserSaveGame.h"
#include "Misc/DateTime.h"

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

	/*FObjective Temp;
	Temp.WhenStart = FDateTime::Now();
	Temp.Objective = "Buy an item in the store.";
	Temp.MaxProgress = 3;
	Temp.Reward = 50;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Capture a 3 star ghost photo.";
	Temp.MaxProgress = 1;
	Temp.Reward = 50;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Complete Objectives.";
	Temp.MaxProgress = 6;
	Temp.Reward = 50;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Discover the Ghost type.";
	Temp.MaxProgress = 1;
	Temp.Reward = 50;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Find the bone.";
	Temp.MaxProgress = 3;
	Temp.Reward = 50;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Get a $50+ photo reward.";
	Temp.MaxProgress = 1;
	Temp.Reward = 30;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Get a Ouija Board response.";
	Temp.MaxProgress = 1;
	Temp.Reward = 30;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Get a Spirit Box response.";
	Temp.MaxProgress = 1;
	Temp.Reward = 25;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Play Contracts.";
	Temp.MaxProgress = 3;
	Temp.Reward = 35;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Play with another hunter.";
	Temp.MaxProgress = 1;
	Temp.Reward = 15;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Reach 0 sanity.";
	Temp.MaxProgress = 1;
	Temp.Reward = 25;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Survive a Hunting Phase.";
	Temp.MaxProgress = 1;
	Temp.Reward = 25;
	AllDailyObjectives.Add(Temp);
	Temp.Objective = "Survive with only the starter items.";
	Temp.MaxProgress = 1;
	Temp.Reward = 30;
	AllDailyObjectives.Add(Temp);

	Temp.Reward = 100;
	Temp.Objective = "Complete perfect games.";
	Temp.MaxProgress = 5;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Complete perfect games on Nightmare or harder.";
	Temp.MaxProgress = 3;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Earn experience.";
	Temp.MaxProgress = 7500;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Earn money from contracts.";
	Temp.MaxProgress = 5000;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Hear paranormal sounds with a Parabolic Microphone.";
	Temp.MaxProgress = 15;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Detect the ghost with a Motion Sensor.";
	Temp.MaxProgress = 30;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Survive hunts.";
	Temp.MaxProgress = 30;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Take 3-star footstep photos.";
	Temp.MaxProgress = 50;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Take 3-star ghost photos.";
	Temp.MaxProgress = 15;
	AllWeeklyObjectives.Add(Temp);
	Temp.Objective = "Use Cursed Possessions.";
	Temp.MaxProgress = 50;
	AllWeeklyObjectives.Add(Temp);*/
}

void UUserSaveGame::SelectRandomDailyObjectives()
{
	//CurrentDailyChallenges.Empty();
	//TArray<FObjective> Temp = AllDailyObjectives;
	//for (int i = 0; i < 3; i++)
	//{
	//	int Random = FMath::RandRange(0, Temp.Num() - 1);
	//	CurrentDailyChallenges.Add(Temp[Random]);
	//	Temp.RemoveAt(Random);
	//}
}

void UUserSaveGame::SelectRandomWeeklyObjectives()
{
	//CurrentWeeklyChallenges.Empty();
	//TArray<FObjective> Temp = AllWeeklyObjectives;
	//for (int i = 0; i < 3; i++)
	//{
	//	int Random = FMath::RandRange(0, Temp.Num() - 1);
	//	CurrentWeeklyChallenges.Add(Temp[Random]);
	//	Temp.RemoveAt(Random);
	//}
}
