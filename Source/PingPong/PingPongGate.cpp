// Fill out your copyright notice in the Description page of Project Settings.


#include "PingPongGate.h"

// Sets default values
APingPongGate::APingPongGate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BodyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Platfrom Gate Collider"));
	SetRootComponent(BodyCollision);
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform Gate Mesh"));
	BodyMesh->SetupAttachment(RootComponent);
	BodyMesh->SetIsReplicated(true);
	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void APingPongGate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APingPongGate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 APingPongGate::GetScores() const
{
	return CollisionScores;
}