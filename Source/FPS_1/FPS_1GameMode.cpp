// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_1GameMode.h"
#include "FPS_1Character.h"
#include "UObject/ConstructorHelpers.h"

AFPS_1GameMode::AFPS_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
