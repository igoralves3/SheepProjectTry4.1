// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeuProjeto4GameMode.h"
#include "MeuProjeto4Character.h"
#include "UObject/ConstructorHelpers.h"

AMeuProjeto4GameMode::AMeuProjeto4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
