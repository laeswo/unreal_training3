// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_train3GameMode.h"
#include "Unreal_train3Character.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_train3GameMode::AUnreal_train3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
