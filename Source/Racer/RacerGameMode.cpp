// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Racer.h"
#include "RacerGameMode.h"
#include "RacerPawn.h"
#include "RacerHud.h"

ARacerGameMode::ARacerGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = ARacerPawn::StaticClass();
	HUDClass = ARacerHud::StaticClass();
}
