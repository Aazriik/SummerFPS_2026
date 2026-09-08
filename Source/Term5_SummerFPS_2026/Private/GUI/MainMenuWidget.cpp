// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/MainMenuWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StartGame->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartGameClicked);
	QuitGame->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitGameClicked);
}

void UMainMenuWidget::OnStartGameClicked()
{
	UGameplayStatics::OpenLevel(this, FName("Lvl_GameMap"));
}

void UMainMenuWidget::OnQuitGameClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}


