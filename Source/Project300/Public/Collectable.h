// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collectable.generated.h"


UENUM()
enum ECollectableType
{
	Key       UMETA(DisplayName = "Key"),
	Item      UMETA(DisplayName = "Item")
};

UCLASS()
class PROJECT300_API ACollectable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectable();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
		USceneComponent* SceneComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TEnumAsByte<ECollectableType> Type;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float ValueAmount;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void PlaySoundEffect();
};


