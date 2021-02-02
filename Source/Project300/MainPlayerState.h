// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
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
};
