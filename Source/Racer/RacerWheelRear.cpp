// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Racer.h"
#include "RacerWheelRear.h"

URacerWheelRear::URacerWheelRear(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
}
