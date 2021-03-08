// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LockedDoor.generated.h"

UCLASS()
class PROJECT300_API ALockedDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALockedDoor();


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
		USceneComponent* SceneComp;



};
