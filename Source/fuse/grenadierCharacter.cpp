// Fill out your copyright notice in the Description page of Project Settings.

#include "fuse.h"
#include "grenadierCharacter.h"


// Sets default values
AgrenadierCharacter::AgrenadierCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AgrenadierCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AgrenadierCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AgrenadierCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

