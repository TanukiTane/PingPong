// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreComponent.h"
#include "PingPongGameModeBase.h"

// Sets default values for this component's properties
UScoreComponent::UScoreComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}



void UScoreComponent::TakeScore(const FScoreData& ScoreData)
{	
		float TakedScore = ScoreData.ScoreValue;
		CurrentScore -= TakedScore;	
}

float UScoreComponent::GetScore() const
{
    return CurrentScore;
}

void UScoreComponent::AddScore(float AddiditionalScoreValue)
{
	CurrentScore = FMath::Clamp(CurrentScore + AddiditionalScoreValue, 0.f, MaxScore);
}

void UScoreComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentScore = 0;
}
