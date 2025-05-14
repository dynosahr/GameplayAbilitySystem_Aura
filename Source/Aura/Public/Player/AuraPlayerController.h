// Copyright Dynosahr Designs 2025

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"


// Forward Declare //
class UInputMappingContext;


/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AAuraPlayerController();
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category="Input");
	TObjectPtr<UInputMappingContext> AuraContext;
	
	
	
	
	
};
