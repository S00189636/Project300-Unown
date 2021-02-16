// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerState.h"

void AMainPlayerState::AddKey(FName id) {

	if (HasKey(id))
		return;
	Keys.Add(id);
}
bool AMainPlayerState::HasKey(FName id) 
{
	return Keys.Contains(id);
}