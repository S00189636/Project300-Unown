// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyCppGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT300_API UMyCppGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void Die();

		UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
			void SetHealthHUDValueFromAmount(float amount, float maxAmount);

		UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
			void SetManaHUDValueFromAmount(float amount, float maxAmount);
};
