// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThisGameNeedsATitleGameMode.h"
#include "ThisGameNeedsATitleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThisGameNeedsATitleGameMode::AThisGameNeedsATitleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
