// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Target.generated.h"

UCLASS()
class FUSE_API ATarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/** This is the static mesh for the component */
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* TargetMesh;
	
	/** Called when target's health falls below 0 */
	void DestroyTarget();
	
	/** A value from 0 to 100 representing the health of the target */
	float Health;

	/** Damages target amount 'Damage'
	/* @param Damage This is the amount to damage the target by
	**/
	void DamageTarget(float Damage);

};
