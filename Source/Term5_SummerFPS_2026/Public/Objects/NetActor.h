// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "Objects/Door.h"
#include "GameFramework/Actor.h"
#include "NetActor.generated.h"

UCLASS()
class TERM5_SUMMERFPS_2026_API ANetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANetActor();

	UPROPERTY(VisibleDefaultsOnly, Category = "Net_BoxCollision")
	UBoxComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, Category = "Door")
	ADoor* DoorActor;

	UFUNCTION()
	void OnEnter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
