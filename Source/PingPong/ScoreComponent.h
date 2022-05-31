// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStruct.h"
#include "ScoreComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreChanged, float, ScoreValue);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PINGPONG_API UScoreComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	 //Sets default values for this component's properties
	UScoreComponent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Score values")
		float MaxScore = 100.f;	

	UFUNCTION(BlueprintCallable, Category = "Score Component")
		void TakeScore(const FScoreData& ScoreData);

	UFUNCTION(BlueprintCallable, Category = "Score Component")
		float GetScore() const;	

	UFUNCTION(BlueprintCallable, Category = "Score Component")
		void AddScore(float AddiditionalScoreValue);

protected:
	UPROPERTY()
		float CurrentScore = 0.f;

	virtual void BeginPlay() override;
};