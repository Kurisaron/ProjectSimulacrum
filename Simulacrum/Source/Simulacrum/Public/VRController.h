// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "VRController.generated.h"

/**
 * Player controller used by VR players
 */
UCLASS(Blueprintable, BlueprintType, Category = "Simulacrum|VR")
class SIMULACRUM_API AVRController : public APlayerController
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR Controller", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> VR_RigClass;
	AActor* VR_Rig;

public:

	AVRController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	virtual void OnPossess(APawn* InPawn) override;

};
