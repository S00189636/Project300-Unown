// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerState.h"
#include "Kismet/GameplayStatics.h"


// keys 
void AMainPlayerState::AddKey(FName id) {

	if (HasKey(id))
		return;
	Keys.Add(id);
}

bool AMainPlayerState::HasKey(FName id)
{
	return Keys.Contains(id);
}

// health 
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

// mana 
void AMainPlayerState::AddMana(float amount)
{
	CurrentMana += amount;
	if (CurrentMana >= MaxMana) {
		CurrentMana = MaxMana;
		NeedMana = false;
	}
}


bool AMainPlayerState::UseMana(float amount)
{
	if (CurrentMana-amount < 0)
		return false;
	CurrentMana -= amount;
	if (CurrentMana < MaxMana)
		NeedMana = true;
	return  true;

}

// Handel collecting items
bool AMainPlayerState::HandelCollectableItem(ACollectable* item)
{
	
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, item->ID.ToString());
	if (item->ID == "Health") {

		if (!NeedHealth)
			return false;

		AddHealth(item->ValueAmount);
	}else if (item->ID == "Mana")
	{
		if (!NeedMana)
			return false;

		AddMana(item->ValueAmount);
	}

	return true;
}


