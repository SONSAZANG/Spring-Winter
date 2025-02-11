// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game/SpringGameMode.h"
#include "Character/SpringCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpringGameMode::ASpringGameMode()
{
	DefaultPawnClass = ASpringCharacter::StaticClass();
}
