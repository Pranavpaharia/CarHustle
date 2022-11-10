// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Online.h"
#include "GameFramework/GameSession.h"
#include "CarGameSession.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCSOnStartSessionComplete, bool, Successful);

UCLASS()
class CARHUSTLE_API ACarGameSession : public AGameSession
{
	GENERATED_BODY()


	ACarGameSession();

	virtual void RegisterServer() override;
	
	bool bGameSessionCreated;


	FCSOnStartSessionComplete OnStartSessionCompleteEvent;
	
	FDelegateHandle OnStartSessionCompleteDelegateHandle;
	FDelegateHandle OnCreateSessionCompleteDelegateHandle;
	
	FOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate;
	FOnStartSessionCompleteDelegate OnStartSessionCompleteDelegate;

	virtual void OnCreateSessionComplete(FName SsName, bool bWasSuccessful);
	void OnStartOnlineGameComplete(FName SsName, bool bWasSuccessful);

	void StartSession();

};
