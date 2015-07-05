// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "RacerHud.generated.h"


UCLASS(config = Game)
class ARacerHud : public AHUD
{
	GENERATED_BODY()

public:
	ARacerHud(const FObjectInitializer& ObjectInitializer);

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
