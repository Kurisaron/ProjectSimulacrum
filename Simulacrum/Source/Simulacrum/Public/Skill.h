// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Skill.generated.h"

/**
 * 
 */
UCLASS()
class SIMULACRUM_API USkill : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skill", meta = (AllowPrivateAccess = "true"))
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skill", meta = (AllowPrivateAccess = "true"))
	bool bIsCoreSkill;

public:

	USkill(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
