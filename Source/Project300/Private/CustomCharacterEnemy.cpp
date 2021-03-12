// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomCharacterEnemy.h"

// Sets default values
ACustomCharacterEnemy::ACustomCharacterEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Health = MaxHealth;
}

// Called when the game starts or when spawned
void ACustomCharacterEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomCharacterEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACustomCharacterEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool ACustomCharacterEnemy::SubtractHealth(float amount)
{
	Health -= amount;
	if (Health <= 0)
		return true;
	return false;
}

