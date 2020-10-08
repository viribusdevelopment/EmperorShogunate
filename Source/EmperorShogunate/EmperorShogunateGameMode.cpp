// Copyright Epic Games, Inc. All Rights Reserved.

#include "EmperorShogunateGameMode.h"
#include "EmperorShogunateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEmperorShogunateGameMode::AEmperorShogunateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
