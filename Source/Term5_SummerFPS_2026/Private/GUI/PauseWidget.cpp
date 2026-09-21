// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/PauseWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

void UPauseWidget::NativeConstruct()
{
	Super::NativeConstruct();

	BTN_Reset->OnClicked.AddDynamic(this, &UPauseWidget::OnResetClicked);
	BTN_Resume->OnClicked.AddDynamic(this, &UPauseWidget::OnResumeClicked);
	BTN_Quit->OnClicked.AddDynamic(this, &UPauseWidget::OnQuitClicked);
}

void UPauseWidget::OnResetClicked()
{

}

void UPauseWidget::OnResumeClicked()
{

}

void UPauseWidget::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}