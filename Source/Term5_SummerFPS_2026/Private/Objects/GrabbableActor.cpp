// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/GrabbableActor.h"

// Sets default values
AGrabbableActor::AGrabbableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GrabbableMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabbableMeshComponent"));

}

void AGrabbableActor::HitNetActor(ANetActor* NetActor)
{
	NetActor->OnEnter();
}

// Called when the game starts or when spawned
void AGrabbableActor::BeginPlay()
{
	Super::BeginPlay();
	GrabbableMeshComponent->SetSimulatePhysics(true);
	
}

// Called every frame
void AGrabbableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

