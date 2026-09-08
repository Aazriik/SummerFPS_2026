// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu_GameMode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"


void AMainMenu_GameMode::BeginPlay()
{
	Super::BeginPlay();
	SpawnMainMenuWidget();

}

void AMainMenu_GameMode::SpawnMainMenuWidget()
{
	if (MainMenuWidgetClass)
	{
		if (MainMenuWidget)
		{
			MainMenuWidget->RemoveFromParent();
			MainMenuWidget = nullptr;
		}

		MainMenuWidget = CreateWidget<UUserWidget>(GetWorld(), MainMenuWidgetClass);
		if (MainMenuWidget)
		{
			MainMenuWidget->AddToViewport();
		}

		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		PlayerController->bShowMouseCursor = true;
		PlayerController->SetInputMode(FInputModeUIOnly());
	}
	return;
}


