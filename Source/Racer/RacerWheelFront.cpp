// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Racer.h"
#include "RacerWheelFront.h"

URacerWheelFront::URacerWheelFront(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 50.f;
}
