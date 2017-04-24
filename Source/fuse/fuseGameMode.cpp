// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "fuse.h"
#include "fuseGameMode.h"
#include "fuseHUD.h"
#include "fuseCharacter.h"

AfuseGameMode::AfuseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AfuseHUD::StaticClass();
}
