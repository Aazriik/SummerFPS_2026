// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class TERM5_SUMMERFPS_2026_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TitleText;

	UPROPERTY(meta = (BindWidget))
	UButton* StartGame;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitGame;

	UFUNCTION()
	void OnStartGameClicked();

	UFUNCTION()
	void OnQuitGameClicked();
	
};
