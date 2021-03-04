// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerCharacter.h"
#include "Collectable.h"
#include "MainPlayerState.h"

// Sets default values
AMyPlayerCharacter::AMyPlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPlayerCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{

	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Hit Something"));

	if (OtherActor->IsA(ACollectable::StaticClass())) {

		ACollectable* currentCollectable = Cast<ACollectable>(OtherActor);
		AMainPlayerState* pState = Cast<AMainPlayerState>(GetPlayerState());
		switch (currentCollectable->Type)
		{
		case ECollectableType::Key :
			// handle keys 
			pState->AddKey(currentCollectable->ID);
			OtherActor->Destroy();
			break;
		case ECollectableType::Item:
				if(pState->HandelCollectableItem(currentCollectable))
					OtherActor->Destroy();
				break;
		}
	}
}

