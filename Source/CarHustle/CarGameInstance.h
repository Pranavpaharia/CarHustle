// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CarGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CARHUSTLE_API UCarGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnStartDedicatedServer();
	
};
