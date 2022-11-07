// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarHustleGameMode.h"
#include "CarHustlePawn.h"
#include "CarHustleHud.h"

ACarHustleGameMode::ACarHustleGameMode()
{
	DefaultPawnClass = ACarHustlePawn::StaticClass();
	HUDClass = ACarHustleHud::StaticClass();
}
