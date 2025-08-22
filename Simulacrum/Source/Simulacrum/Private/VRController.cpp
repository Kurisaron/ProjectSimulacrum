// Fill out your copyright notice in the Description page of Project Settings.


#include "VRController.h"

AVRController::AVRController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void AVRController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// End if pawn being possessed is invalid
	if (!IsValid(InPawn)) return;

}

void AVRController::OnUnPossess()
{
	Super::OnUnPossess();

}