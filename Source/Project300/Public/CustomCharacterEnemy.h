// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CustomCharacterEnemy.generated.h"

UCLASS()
class PROJECT300_API ACustomCharacterEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACustomCharacterEnemy();
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Health;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
