// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerState.h"
#include "Kismet/GameplayStatics.h"

void AMainPlayerState::AddKey(FName id) {

	if (HasKey(id))
		return;
	Keys.Add(id);
}

void AMainPlayerState::AddHealth(float amount)
{
	CurrentHealth += amount;
	if (CurrentHealth >= MaxHealth) {
		CurrentHealth = MaxHealth;
		NeedHealth = false;
	}
}

void AMainPlayerState::TakeDamageToHealth(float amount)
{
	CurrentHealth -= amount;
	if (CurrentHealth < MaxHealth)
		NeedHealth = true;
	if (CurrentHealth <= 0)
		UGameplayStatics::OpenLevel(GetWorld(), "Death");

}

bool AMainPlayerState::HandelCollectableItem(ACollectable* item)
{

	if (item->ID == "Health") {

		if (!NeedHealth)
			return false;

		AddHealth(item->ValueAmount);
	}

	return true;
}


bool AMainPlayerState::HasKey(FName id)
{
	return Keys.Contains(id);
}