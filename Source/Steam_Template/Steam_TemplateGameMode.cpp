// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Steam_TemplateGameMode.h"
#include "Steam_TemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteam_TemplateGameMode::ASteam_TemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
