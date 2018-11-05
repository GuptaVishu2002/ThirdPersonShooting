// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerCondition.h"
#include "PlayerCondition.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API APlayerCondition : public APlayerCondition
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "PlayerCondition")
	void AddScore(float ScoreDelta);
	
	
};
