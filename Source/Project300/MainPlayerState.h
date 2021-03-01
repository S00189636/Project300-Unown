// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Collectable.h"
#include "MainPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT300_API AMainPlayerState : public APlayerState
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MaxBlinkDistance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float PokePower;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool NeedHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float CurrentHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MaxHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FName> Keys;

	UFUNCTION(BlueprintCallable)
	bool HasKey(FName ID);

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float Amount);

	UFUNCTION(BlueprintCallable)
	void AddHealth(float Amount);

	void AddKey(FName id);
};
