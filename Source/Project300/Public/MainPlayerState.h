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

	// abilities 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Abilities")
		float MaxBlinkDistance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Abilities")
		float PokePower;

	// health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Health")
		bool NeedHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Health")
    	float CurrentHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Health")
    	float MaxHealth;
	
	UFUNCTION(BlueprintCallable)
        void AddHealth(float Amount);
	
	UFUNCTION(BlueprintCallable)
		void TakeDamageToHealth(float Amount);
	
	// mana 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Mana")
		bool NeedMana;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Mana")
		float CurrentMana;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Mana")
		float MaxMana;

	UFUNCTION(BlueprintCallable)
		bool UseMana(float Amount);

	UFUNCTION(BlueprintCallable)
		void AddMana(float Amount);
	
	// keys 
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> Keys;
	
	void AddKey(FName id);
	
	UFUNCTION(BlueprintCallable)
	bool HasKey(FName ID);
	
	// handle collecting items 
	UFUNCTION(BlueprintCallable)
		bool HandelCollectableItem(ACollectable* item);

	
};
