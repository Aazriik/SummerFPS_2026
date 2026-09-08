// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerController.h"
#include "GUI/MainMenuWidget.h"
#include "MainMenu_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class TERM5_SUMMERFPS_2026_API AMainMenu_GameMode : public AGameModeBase
{
	GENERATED_BODY()


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> MainMenuWidgetClass;
	UUserWidget* MainMenuWidget;

	UFUNCTION()
	void SpawnMainMenuWidget();

};
