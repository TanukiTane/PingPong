// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "GameStruct.generated.h"



USTRUCT(BlueprintType)
struct FScoreData
{
	GENERATED_BODY()

	UPROPERTY()
		float ScoreValue;

	UPROPERTY()
		class AActor* Instigator;

	UPROPERTY()
		class AActor* ScoreMaker;
};