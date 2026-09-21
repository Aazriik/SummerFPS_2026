// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/NetActor.h"

// Sets default values
ANetActor::ANetActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	RootComponent = CollisionComponent;
	CollisionComponent->SetBoxExtent(FVector(60.0f, 60.0f, 50.0f));
	CollisionComponent->SetLineThickness(1.0f);

	DoorStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorStaticMeshComponent"));
	DoorStaticMeshComponent->SetupAttachment(RootComponent);
	DoorStaticMeshComponent->SetRelativeScale3D(FVector(2.0f, 1.0f, 20.0f));

}


void ANetActor::OnEnter()
{	
	DoorActor->OpenDoor();
	Destroy();
}

// Called when the game starts or when spawned
void ANetActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



