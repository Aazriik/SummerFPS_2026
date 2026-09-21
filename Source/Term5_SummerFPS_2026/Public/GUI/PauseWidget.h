// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PauseWidget.generated.h"

/**
 * 
 */
UCLASS()
class TERM5_SUMMERFPS_2026_API UPauseWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TXT_Paused;

	UPROPERTY(meta = (BindWidget))
	UButton* BTN_Reset;

	UPROPERTY(meta = (BindWidget))
	UButton* BTN_Resume;

	UPROPERTY(meta = (BindWidget))
	UButton* BTN_Quit;

	UFUNCTION()
	void OnResetClicked();

	UFUNCTION()
	void OnResumeClicked();

	UFUNCTION()
	void OnQuitClicked();
};
