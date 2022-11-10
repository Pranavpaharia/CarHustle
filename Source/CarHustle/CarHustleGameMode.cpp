// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarHustleGameMode.h"
#include "CarHustlePawn.h"
#include "CarHustleHud.h"
#include "CarGameSession.h"
#include "CarPlayerState.h"

ACarHustleGameMode::ACarHustleGameMode()
{
	DefaultPawnClass = ACarHustlePawn::StaticClass();
	HUDClass = ACarHustleHud::StaticClass();
	GameSessionClass = ACarGameSession::StaticClass();
	PlayerStateClass = ACarPlayerState::StaticClass();
}
